�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ i i r _ l a t t i c e _ q 3 1 . c  
   *   D e s c r i p t i o n :     Q 3 1   I I R   l a t t i c e   f i l t e r   p r o c e s s i n g   f u n c t i o n  
   *  
   *   $ D a t e :                 2 7 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V . 1 . 5 . 1  
   *  
   *   T a r g e t   P r o c e s s o r :   C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 7   A R M   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * *  
   *   @ i n g r o u p   g r o u p F i l t e r s  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   I I R _ L a t t i c e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   I I R   l a t t i c e   f i l t e r .  
   *   @ p a r a m [ i n ]   * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   I I R   l a t t i c e   s t r u c t u r e .  
   *   @ p a r a m [ i n ]   * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
   *   @ p a r a m [ i n ]   b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
   *   @ r e t u r n   n o n e .  
   *  
   *   @ d e t a i l s  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   6 4 - b i t   a c c u m u l a t o r .  
   *   T h e   a c c u m u l a t o r   h a s   a   2 . 6 2   f o r m a t   a n d   m a i n t a i n s   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n   r e s u l t s   b u t   p r o v i d e s   o n l y   a   s i n g l e   g u a r d   b i t .  
   *   T h u s ,   i f   t h e   a c c u m u l a t o r   r e s u l t   o v e r f l o w s   i t   w r a p s   a r o u n d   r a t h e r   t h a n   c l i p .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y   2 * l o g 2 ( n u m S t a g e s )   b i t s .  
   *   A f t e r   a l l   m u l t i p l y - a c c u m u l a t e s   a r e   p e r f o r m e d ,   t h e   2 . 6 2   a c c u m u l a t o r   i s   s a t u r a t e d   t o   1 . 3 2   f o r m a t   a n d   t h e n   t r u n c a t e d   t o   1 . 3 1   f o r m a t .  
   * /  
  
 v o i d   a r m _ i i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ i i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   f c u r r ,   f n e x t   =   0 ,   g c u r r   =   0 ,   g n e x t ;             / *   T e m p o r a r y   v a r i a b l e s   f o r   l a t t i c e   s t a g e s   * /  
     q 6 3 _ t   a c c ;                                                                           / *   A c c u m l a t o r   * /  
     u i n t 3 2 _ t   b l k C n t ,   t a p C n t ;                                               / *   T e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
     q 3 1 _ t   * p x 1 ,   * p x 2 ,   * p k ,   * p v ;                                         / *   T e m p o r a r y   p o i n t e r s   f o r   s t a t e   a n d   c o e f   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   n u m b e r   o f   s t a g e s   * /  
     q 3 1 _ t   * p S t a t e ;                                                                   / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   S t a t e   c u r r e n t   p o i n t e r   * /  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     / *   S a m p l e   p r o c e s s i n g   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   R e a d   S a m p l e   f r o m   i n p u t   b u f f e r   * /  
         / *   f N ( n )   =   x ( n )   * /  
         f c u r r   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   s t a t e   r e a d   p o i n t e r   * /  
         p x 1   =   p S t a t e ;  
         / *   I n i t i a l i z e   s t a t e   w r i t e   p o i n t e r   * /  
         p x 2   =   p S t a t e ;  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 ;  
         / *   I n i t i a l i z e   L a d d e r   c o e f f   p o i n t e r   * /  
         p v   =   & S - > p v C o e f f s [ 0 ] ;  
         / *   I n i t i a l i z e   R e f l e c t i o n   c o e f f   p o i n t e r   * /  
         p k   =   & S - > p k C o e f f s [ 0 ] ;  
  
  
         / *   P r o c e s s   s a m p l e   f o r   f i r s t   t a p   * /  
         g c u r r   =   * p x 1 + + ;  
         / *   f N - 1 ( n )   =   f N ( n )   -   k N   *   g N - 1 ( n - 1 )   * /  
         f n e x t   =   _ _ Q S U B ( f c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 ) ) ;  
         / *   g N ( n )   =   k N   *   f N - 1 ( n )   +   g N - 1 ( n - 1 )   * /  
         g n e x t   =   _ _ Q A D D ( g c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f n e x t   *   ( * p k + + ) )   > >   3 1 ) ) ;  
         / *   w r i t e   g N - 1 ( n - 1 )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
         * p x 2 + +   =   g n e x t ;  
         / *   y ( n )   + =   g N ( n )   *   v N     * /  
         a c c   + =   ( ( q 6 3 _ t )   g n e x t   *   * p v + + ) ;  
  
         / *   U p d a t e   f   v a l u e s   f o r   n e x t   c o e f f i c i e n t   p r o c e s s i n g   * /  
         f c u r r   =   f n e x t ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   ( n u m S t a g e s   -   1 U )   > >   2 ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
  
             / *   P r o c e s s   s a m p l e   f o r   2 n d ,   6 t h   . .   t a p s   * /  
             / *   R e a d   g N - 2 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x 1 + + ;  
             / *   f N - 2 ( n )   =   f N - 1 ( n )   -   k N - 1   *   g N - 2 ( n - 1 )   * /  
             f n e x t   =   _ _ Q S U B ( f c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 ) ) ;  
             / *   g N - 1 ( n )   =   k N - 1   *   f N - 2 ( n )   +   g N - 2 ( n - 1 )   * /  
             g n e x t   =   _ _ Q A D D ( g c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f n e x t   *   ( * p k + + ) )   > >   3 1 ) ) ;  
             / *   y ( n )   + =   g N - 1 ( n )   *   v N - 1     * /  
             / *   p r o c e s s   f o r   g N - 5 ( n )   *   v N - 5 ,   g N - 9 ( n )   *   v N - 9   . . .   * /  
             a c c   + =   ( ( q 6 3 _ t )   g n e x t   *   * p v + + ) ;  
             / *   w r i t e   g N - 1 ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
             / *   P r o c e s s   s a m p l e   f o r   3 n d ,   7 t h   . . . t a p s   * /  
             / *   R e a d   g N - 3 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x 1 + + ;  
             / *   P r o c e s s   s a m p l e   f o r   3 r d ,   7 t h   . .   t a p s   * /  
             / *   f N - 3 ( n )   =   f N - 2 ( n )   -   k N - 2   *   g N - 3 ( n - 1 )   * /  
             f c u r r   =   _ _ Q S U B ( f n e x t ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 ) ) ;  
             / *   g N - 2 ( n )   =   k N - 2   *   f N - 3 ( n )   +   g N - 3 ( n - 1 )   * /  
             g n e x t   =   _ _ Q A D D ( g c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r   *   ( * p k + + ) )   > >   3 1 ) ) ;  
             / *   y ( n )   + =   g N - 2 ( n )   *   v N - 2     * /  
             / *   p r o c e s s   f o r   g N - 6 ( n )   *   v N - 6 ,   g N - 1 0 ( n )   *   v N - 1 0   . . .   * /  
             a c c   + =   ( ( q 6 3 _ t )   g n e x t   *   * p v + + ) ;  
             / *   w r i t e   g N - 2 ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
  
             / *   P r o c e s s   s a m p l e   f o r   4 t h ,   8 t h   . . . t a p s   * /  
             / *   R e a d   g N - 4 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x 1 + + ;  
             / *   P r o c e s s   s a m p l e   f o r   4 t h ,   8 t h   . .   t a p s   * /  
             / *   f N - 4 ( n )   =   f N - 3 ( n )   -   k N - 3   *   g N - 4 ( n - 1 )   * /  
             f n e x t   =   _ _ Q S U B ( f c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 ) ) ;  
             / *   g N - 3 ( n )   =   k N - 3   *   f N - 4 ( n )   +   g N - 4 ( n - 1 )   * /  
             g n e x t   =   _ _ Q A D D ( g c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f n e x t   *   ( * p k + + ) )   > >   3 1 ) ) ;  
             / *   y ( n )   + =   g N - 3 ( n )   *   v N - 3     * /  
             / *   p r o c e s s   f o r   g N - 7 ( n )   *   v N - 7 ,   g N - 1 1 ( n )   *   v N - 1 1   . . .   * /  
             a c c   + =   ( ( q 6 3 _ t )   g n e x t   *   * p v + + ) ;  
             / *   w r i t e   g N - 3 ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
  
             / *   P r o c e s s   s a m p l e   f o r   5 t h ,   9 t h   . . . t a p s   * /  
             / *   R e a d   g N - 5 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x 1 + + ;  
             / *   P r o c e s s   s a m p l e   f o r   5 t h ,   9 t h   . .   t a p s   * /  
             / *   f N - 5 ( n )   =   f N - 4 ( n )   -   k N - 4   *   g N - 1 ( n - 1 )   * /  
             f c u r r   =   _ _ Q S U B ( f n e x t ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 ) ) ;  
             / *   g N - 4 ( n )   =   k N - 4   *   f N - 5 ( n )   +   g N - 5 ( n - 1 )   * /  
             g n e x t   =   _ _ Q A D D ( g c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r   *   ( * p k + + ) )   > >   3 1 ) ) ;  
             / *   y ( n )   + =   g N - 4 ( n )   *   v N - 4     * /  
             / *   p r o c e s s   f o r   g N - 8 ( n )   *   v N - 8 ,   g N - 1 2 ( n )   *   v N - 1 2   . . .   * /  
             a c c   + =   ( ( q 6 3 _ t )   g n e x t   *   * p v + + ) ;  
             / *   w r i t e   g N - 4 ( n )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
  
             t a p C n t - - ;  
  
         }  
  
         f n e x t   =   f c u r r ;  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   ( n u m S t a g e s   -   1 U )   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             g c u r r   =   * p x 1 + + ;  
             / *   P r o c e s s   s a m p l e   f o r   l a s t   t a p s   * /  
             f n e x t   =   _ _ Q S U B ( f c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 ) ) ;  
             g n e x t   =   _ _ Q A D D ( g c u r r ,   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f n e x t   *   ( * p k + + ) )   > >   3 1 ) ) ;  
             / *   O u t p u t   s a m p l e s   f o r   l a s t   t a p s   * /  
             a c c   + =   ( ( q 6 3 _ t )   g n e x t   *   * p v + + ) ;  
             * p x 2 + +   =   g n e x t ;  
             f c u r r   =   f n e x t ;  
  
             t a p C n t - - ;  
  
         }  
  
         / *   y ( n )   + =   g 0 ( n )   *   v 0   * /  
         a c c   + =   ( q 6 3 _ t )   f n e x t   * (  
     * p v + + ) ;  
  
         * p x 2 + +   =   f n e x t ;  
  
         / *   w r i t e   o u t   i n t o   p D s t   * /  
         * p D s t + +   =   ( q 3 1 _ t )   ( a c c   > >   3 1 U ) ;  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   4   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   4   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 U ;  
         b l k C n t - - ;  
  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   l a s t   S - > n u m S t a g e s   s a m p l e s   t o   s t a r t   o f   t h e   b u f f e r  
           f o r   t h e   p r e p e r a t i o n   o f   n e x t   f r a m e   p r o c e s s   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   & S - > p S t a t e [ 0 ] ;  
     p S t a t e   =   & S - > p S t a t e [ b l o c k S i z e ] ;  
  
     t a p C n t   =   n u m S t a g e s   > >   2 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
  
     }  
  
     / *   C a l c u l a t e   r e m a i n i n g   n u m b e r   o f   c o p i e s   * /  
     t a p C n t   =   ( n u m S t a g e s )   %   0 x 4 U ;  
  
     / *   C o p y   t h e   r e m a i n i n g   q 3 1 _ t   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     } ;  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
     / *   S a m p l e   p r o c e s s i n g   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   R e a d   S a m p l e   f r o m   i n p u t   b u f f e r   * /  
         / *   f N ( n )   =   x ( n )   * /  
         f c u r r   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   s t a t e   r e a d   p o i n t e r   * /  
         p x 1   =   p S t a t e ;  
         / *   I n i t i a l i z e   s t a t e   w r i t e   p o i n t e r   * /  
         p x 2   =   p S t a t e ;  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 ;  
         / *   I n i t i a l i z e   L a d d e r   c o e f f   p o i n t e r   * /  
         p v   =   & S - > p v C o e f f s [ 0 ] ;  
         / *   I n i t i a l i z e   R e f l e c t i o n   c o e f f   p o i n t e r   * /  
         p k   =   & S - > p k C o e f f s [ 0 ] ;  
  
         t a p C n t   =   n u m S t a g e s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             g c u r r   =   * p x 1 + + ;  
             / *   P r o c e s s   s a m p l e   * /  
             / *   f N - 1 ( n )   =   f N ( n )   -   k N   *   g N - 1 ( n - 1 )   * /  
             f n e x t   =  
                 c l i p _ q 6 3 _ t o _ q 3 1 ( ( ( q 6 3 _ t )   f c u r r   -  
                                                   ( ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 ) ) ) ) ;  
             / *   g N ( n )   =   k N   *   f N - 1 ( n )   +   g N - 1 ( n - 1 )   * /  
             g n e x t   =  
                 c l i p _ q 6 3 _ t o _ q 3 1 ( ( ( q 6 3 _ t )   g c u r r   +  
                                                   ( ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f n e x t   *   ( * p k + + ) )   > >   3 1 ) ) ) ) ;  
             / *   O u t p u t   s a m p l e s   * /  
             / *   y ( n )   + =   g N ( n )   *   v N     * /  
             a c c   + =   ( ( q 6 3 _ t )   g n e x t   *   * p v + + ) ;  
             / *   w r i t e   g N - 1 ( n - 1 )   i n t o   s t a t e   f o r   n e x t   s a m p l e   p r o c e s s i n g   * /  
             * p x 2 + +   =   g n e x t ;  
             / *   U p d a t e   f   v a l u e s   f o r   n e x t   c o e f f i c i e n t   p r o c e s s i n g   * /  
             f c u r r   =   f n e x t ;  
  
             t a p C n t - - ;  
         }  
  
         / *   y ( n )   + =   g 0 ( n )   *   v 0   * /  
         a c c   + =   ( q 6 3 _ t )   f n e x t   * (  
     * p v + + ) ;  
  
         * p x 2 + +   =   f n e x t ;  
  
         / *   w r i t e   o u t   i n t o   p D s t   * /  
         * p D s t + +   =   ( q 3 1 _ t )   ( a c c   > >   3 1 U ) ;  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   1   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   1 U ;  
         b l k C n t - - ;  
  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   l a s t   S - > n u m S t a g e s   s a m p l e s   t o   s t a r t   o f   t h e   b u f f e r  
           f o r   t h e   p r e p e r a t i o n   o f   n e x t   f r a m e   p r o c e s s   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   & S - > p S t a t e [ 0 ] ;  
     p S t a t e   =   & S - > p S t a t e [ b l o c k S i z e ] ;  
  
     t a p C n t   =   n u m S t a g e s ;  
  
     / *   C o p y   t h e   r e m a i n i n g   q 3 1 _ t   d a t a   * /  
     w h i l e   ( t a p C n t   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         t a p C n t - - ;  
     }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
 }  
  
  
  
  
 / * *  
   *   @ }   e n d   o f   I I R _ L a t t i c e   g r o u p  
   * /  