�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ f i r _ l a t t i c e _ q 3 1 . c  
   *   D e s c r i p t i o n :     Q 3 1   F I R   l a t t i c e   f i l t e r   p r o c e s s i n g   f u n c t i o n  
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
   *   @ a d d t o g r o u p   F I R _ L a t t i c e  
   *   @ {  
   * /  
  
  
 / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   F I R   l a t t i c e   f i l t e r .  
   *   @ p a r a m [ i n ]     * S                 p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 3 1   F I R   l a t t i c e   s t r u c t u r e .  
   *   @ p a r a m [ i n ]     * p S r c           p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p D s t           p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a  
   *   @ p a r a m [ i n ]     b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
   *   @ r e t u r n   n o n e .  
   *  
   *   @ d e t a i l s  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y   2 * l o g 2 ( n u m S t a g e s )   b i t s .  
   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
 v o i d   a r m _ f i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e ;                                                                   / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p x ;                                                                           / *   t e m p o r a r y   s t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p k ;                                                                           / *   t e m p o r a r y   c o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   f c u r r 1 ,   f n e x t 1 ,   g c u r r 1   =   0 ,   g n e x t 1 ;             / *   t e m p o r a r y   v a r i a b l e s   f o r   f i r s t   s a m p l e   i n   l o o p   u n r o l l i n g   * /  
     q 3 1 _ t   f c u r r 2 ,   f n e x t 2 ,   g n e x t 2 ;                                     / *   t e m p o r a r y   v a r i a b l e s   f o r   s e c o n d   s a m p l e   i n   l o o p   u n r o l l i n g   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   L e n g t h   o f   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   b l k C n t ,   s t a g e C n t ;                                           / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
     q 3 1 _ t   k ;  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     b l k C n t   =   b l o c k S i z e   > >   1 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   2   o u t p u t s   a t   a   t i m e .  
           a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   s a m p l e .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r 1   =   * p S r c + + ;  
  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r 2   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   ( p C o e f f s ) ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 0 ( n   -   1 )   f r o m   s t a t e   b u f f e r   * /  
         g c u r r 1   =   * p x ;  
  
         / *   R e a d   t h e   r e f l e c t i o n   c o e f f i c i e n t   * /  
         k   =   * p k + + ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r 1   *   k )   > >   3 2 ) ;  
  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r 1   *   ( k ) )   > >   3 2 ) ;  
         f n e x t 1   =   f c u r r 1   +   ( f n e x t 1   < <   1 U ) ;  
         g n e x t 1   =   g c u r r 1   +   ( g n e x t 1   < <   1 U ) ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r 1   *   k )   > >   3 2 ) ;  
  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r 2   *   ( k ) )   > >   3 2 ) ;  
         f n e x t 2   =   f c u r r 2   +   ( f n e x t 2   < <   1 U ) ;  
         g n e x t 2   =   f c u r r 1   +   ( g n e x t 2   < <   1 U ) ;  
  
         / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   f c u r r 2 ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r r 1   =   f n e x t 1 ;  
         f c u r r 2   =   f n e x t 2 ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
  
             / *   R e a d   t h e   r e f l e c t i o n   c o e f f i c i e n t   * /  
             k   =   * p k + + ;  
  
             / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 2 ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r 1   *   k )   > >   3 2 ) ;  
             f n e x t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g n e x t 1   *   k )   > >   3 2 ) ;  
  
             f n e x t 1   =   f c u r r 1   +   ( f n e x t 1   < <   1 U ) ;  
             f n e x t 2   =   f c u r r 2   +   ( f n e x t 2   < <   1 U ) ;  
  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t 2   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r 2   *   ( k ) )   > >   3 2 ) ;  
             g n e x t 2   =   g n e x t 1   +   ( g n e x t 2   < <   1 U ) ;  
  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r 1   *   ( k ) )   > >   3 2 ) ;  
             g n e x t 1   =   g c u r r 1   +   ( g n e x t 1   < <   1 U ) ;  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r r 1   =   f n e x t 1 ;  
             f c u r r 2   =   f n e x t 2 ;  
  
             s t a g e C n t - - ;  
  
         }  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r 1 ;  
         * p D s t + +   =   f c u r r 2 ;  
  
         b l k C n t - - ;  
  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 2 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r 1   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   ( p C o e f f s ) ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 0 ( n   -   1 )   f r o m   s t a t e   b u f f e r   * /  
         g c u r r 1   =   * p x ;  
  
         / *   R e a d   t h e   r e f l e c t i o n   c o e f f i c i e n t   * /  
         k   =   * p k + + ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r 1   *   k )   > >   3 2 ) ;  
         f n e x t 1   =   f c u r r 1   +   ( f n e x t 1   < <   1 U ) ;  
  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r 1   *   ( k ) )   > >   3 2 ) ;  
         g n e x t 1   =   g c u r r 1   +   ( g n e x t 1   < <   1 U ) ;  
  
         / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   f c u r r 1 ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r r 1   =   f n e x t 1 ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   R e a d   t h e   r e f l e c t i o n   c o e f f i c i e n t   * /  
             k   =   * p k + + ;  
  
             / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r 1   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t 1 ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r 1   *   k )   > >   3 2 ) ;  
             f n e x t 1   =   f c u r r 1   +   ( f n e x t 1   < <   1 U ) ;  
  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t 1   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r 1   *   ( k ) )   > >   3 2 ) ;  
             g n e x t 1   =   g c u r r 1   +   ( g n e x t 1   < <   1 U ) ;  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r r 1   =   f n e x t 1 ;  
  
             s t a g e C n t - - ;  
  
         }  
  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r 1 ;  
  
         b l k C n t - - ;  
  
     }  
  
  
 }  
  
  
 # e l s e  
  
 / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
 v o i d   a r m _ f i r _ l a t t i c e _ q 3 1 (  
     c o n s t   a r m _ f i r _ l a t t i c e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e ;                                                                   / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p x ;                                                                           / *   t e m p o r a r y   s t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p k ;                                                                           / *   t e m p o r a r y   c o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   f c u r r ,   f n e x t ,   g c u r r ,   g n e x t ;                             / *   t e m p o r a r y   v a r i a b l e s   * /  
     u i n t 3 2 _ t   n u m S t a g e s   =   S - > n u m S t a g e s ;                           / *   L e n g t h   o f   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   b l k C n t ,   s t a g e C n t ;                                           / *   t e m p o r a r y   v a r i a b l e s   f o r   c o u n t s   * /  
  
     p S t a t e   =   & S - > p S t a t e [ 0 ] ;  
  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   f 0 ( n )   =   x ( n )   * /  
         f c u r r   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   c o e f f   p o i n t e r   * /  
         p k   =   ( p C o e f f s ) ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   r e a d   g 0 ( n - 1 )   f r o m   s t a t e   b u f f e r   * /  
         g c u r r   =   * p x ;  
  
         / *   f o r   s a m p l e   1   p r o c e s s i n g   * /  
         / *   f 1 ( n )   =   f 0 ( n )   +     K 1   *   g 0 ( n - 1 )   * /  
         f n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 )   +   f c u r r ;  
         / *   g 1 ( n )   =   f 0 ( n )   *   K 1     +     g 0 ( n - 1 )   * /  
         g n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r   *   ( * p k + + ) )   > >   3 1 )   +   g c u r r ;  
         / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
         * p x + +   =   f c u r r ;  
  
         / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
               f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
         f c u r r   =   f n e x t ;  
  
         s t a g e C n t   =   ( n u m S t a g e s   -   1 U ) ;  
  
         / *   s t a g e   l o o p   * /  
         w h i l e   ( s t a g e C n t   >   0 U )  
         {  
             / *   r e a d   g 2 ( n )   f r o m   s t a t e   b u f f e r   * /  
             g c u r r   =   * p x ;  
  
             / *   s a v e   g 1 ( n )   i n   s t a t e   b u f f e r   * /  
             * p x + +   =   g n e x t ;  
  
             / *   S a m p l e   p r o c e s s i n g   f o r   K 2 ,   K 3 . . . .   * /  
             / *   f 2 ( n )   =   f 1 ( n )   +     K 2   *   g 1 ( n - 1 )   * /  
             f n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   g c u r r   *   ( * p k ) )   > >   3 1 )   +   f c u r r ;  
             / *   g 2 ( n )   =   f 1 ( n )   *   K 2     +     g 1 ( n - 1 )   * /  
             g n e x t   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   f c u r r   *   ( * p k + + ) )   > >   3 1 )   +   g c u r r ;  
  
             / *   f 1 ( n )   i s   s a v e d   i n   f c u r r 1  
                   f o r   n e x t   s t a g e   p r o c e s s i n g   * /  
             f c u r r   =   f n e x t ;  
  
             s t a g e C n t - - ;  
  
         }  
  
         / *   y ( n )   =   f N ( n )   * /  
         * p D s t + +   =   f c u r r ;  
  
         b l k C n t - - ;  
  
     }  
  
 }  
  
 # e n d i f   / *       # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
  
 / * *  
   *   @ }   e n d   o f   F I R _ L a t t i c e   g r o u p  
   * /  