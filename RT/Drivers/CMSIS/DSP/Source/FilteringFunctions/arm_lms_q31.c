??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ l m s _ q 3 1 . c  
   *   D e s c r i p t i o n :     P r o c e s s i n g   f u n c t i o n   f o r   t h e   Q 3 1   L M S   f i l t e r  
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
 / * *  
   *   @ i n g r o u p   g r o u p F i l t e r s  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   L M S  
   *   @ {  
   * /  
  
   / * *  
   *   @ b r i e f   P r o c e s s i n g   f u n c t i o n   f o r   Q 3 1   L M S   f i l t e r .  
   *   @ p a r a m [ i n ]     * S   p o i n t s   t o   a n   i n s t a n c e   o f   t h e   Q 1 5   L M S   f i l t e r   s t r u c t u r e .  
   *   @ p a r a m [ i n ]     * p S r c   p o i n t s   t o   t h e   b l o c k   o f   i n p u t   d a t a .  
   *   @ p a r a m [ i n ]     * p R e f   p o i n t s   t o   t h e   b l o c k   o f   r e f e r e n c e   d a t a .  
   *   @ p a r a m [ o u t ]   * p O u t   p o i n t s   t o   t h e   b l o c k   o f   o u t p u t   d a t a .  
   *   @ p a r a m [ o u t ]   * p E r r   p o i n t s   t o   t h e   b l o c k   o f   e r r o r   d a t a .  
   *   @ p a r a m [ i n ]     b l o c k S i z e   n u m b e r   o f   s a m p l e s   t o   p r o c e s s .  
   *   @ r e t u r n           n o n e .  
   *  
   *   \ p a r   S c a l i n g   a n d   O v e r f l o w   B e h a v i o r :  
   *   T h e   f u n c t i o n   i s   i m p l e m e n t e d   u s i n g   a n   i n t e r n a l   6 4 - b i t   a c c u m u l a t o r .  
   *   T h e   a c c u m u l a t o r   h a s   a   2 . 6 2   f o r m a t   a n d   m a i n t a i n s   f u l l   p r e c i s i o n   o f   t h e   i n t e r m e d i a t e  
   *   m u l t i p l i c a t i o n   r e s u l t s   b u t   p r o v i d e s   o n l y   a   s i n g l e   g u a r d   b i t .  
   *   T h u s ,   i f   t h e   a c c u m u l a t o r   r e s u l t   o v e r f l o w s   i t   w r a p s   a r o u n d   r a t h e r   t h a n   c l i p s .  
   *   I n   o r d e r   t o   a v o i d   o v e r f l o w s   c o m p l e t e l y   t h e   i n p u t   s i g n a l   m u s t   b e   s c a l e d   d o w n   b y  
   *   l o g 2 ( n u m T a p s )   b i t s .  
   *   T h e   r e f e r e n c e   s i g n a l   s h o u l d   n o t   b e   s c a l e d   d o w n .  
   *   A f t e r   a l l   m u l t i p l y - a c c u m u l a t e s   a r e   p e r f o r m e d ,   t h e   2 . 6 2   a c c u m u l a t o r   i s   s h i f t e d  
   *   a n d   s a t u r a t e d   t o   1 . 3 1   f o r m a t   t o   y i e l d   t h e   f i n a l   r e s u l t .  
   *   T h e   o u t p u t   s i g n a l   a n d   e r r o r   s i g n a l   a r e   i n   1 . 3 1   f o r m a t .  
   *  
   *   \ p a r  
   *   	 I n   t h i s   f i l t e r ,   f i l t e r   c o e f f i c i e n t s   a r e   u p d a t e d   f o r   e a c h   s a m p l e   a n d   t h e   u p d a t i o n   o f   f i l t e r   c o f f i c i e n t s   a r e   s a t u r t e d .  
   * /  
  
 v o i d   a r m _ l m s _ q 3 1 (  
     c o n s t   a r m _ l m s _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p R e f ,  
     q 3 1 _ t   *   p O u t ,  
     q 3 1 _ t   *   p E r r ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   m u   =   S - > m u ;                                                             / *   A d a p t i v e   f a c t o r   * /  
     q 3 1 _ t   * p x ;                                                                           / *   T e m p o r a r y   p o i n t e r   f o r   s t a t e   * /  
     q 3 1 _ t   * p b ;                                                                           / *   T e m p o r a r y   p o i n t e r   f o r   c o e f f i c i e n t   b u f f e r   * /  
     u i n t 3 2 _ t   t a p C n t ,   b l k C n t ;                                               / *   L o o p   c o u n t e r s   * /  
     q 6 3 _ t   a c c ;                                                                           / *   A c c u m u l a t o r   * /  
     q 3 1 _ t   e   =   0 ;                                                                       / *   e r r o r   o f   d a t a   s a m p l e   * /  
     q 3 1 _ t   a l p h a ;                                                                       / *   I n t e r m e d i a t e   c o n s t a n t   f o r   t a p s   u p d a t e   * /  
     q 3 1 _ t   c o e f ;                                                                         / *   T e m p o r a r y   v a r i a b l e   f o r   c o e f   * /  
     q 3 1 _ t   a c c _ l ,   a c c _ h ;                                                         / *     t e m p o r a r y   i n p u t   * /  
     u i n t 3 2 _ t   u S h i f t   =   ( ( u i n t 3 2 _ t )   S - > p o s t S h i f t   +   1 U ) ;  
     u i n t 3 2 _ t   l S h i f t   =   3 2 U   -   u S h i f t ;                                 / *     S h i f t   t o   b e   a p p l i e d   t o   t h e   o u t p u t   * /  
  
     / *   S - > p S t a t e   p o i n t s   t o   b u f f e r   w h i c h   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   & ( S - > p S t a t e [ ( n u m T a p s   -   1 U ) ] ) ;  
  
     / *   I n i t i a l i z i n g   b l k C n t   w i t h   b l o c k S i z e   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   t h e   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             / *   a c c   + =     b [ N ]   *   x [ n - N ]   * /  
             a c c   + =   ( ( q 6 3 _ t )   ( * p x + + ) )   *   ( * p b + + ) ;  
  
             / *   a c c   + =     b [ N - 1 ]   *   x [ n - N - 1 ]   * /  
             a c c   + =   ( ( q 6 3 _ t )   ( * p x + + ) )   *   ( * p b + + ) ;  
  
             / *   a c c   + =     b [ N - 2 ]   *   x [ n - N - 2 ]   * /  
             a c c   + =   ( ( q 6 3 _ t )   ( * p x + + ) )   *   ( * p b + + ) ;  
  
             / *   a c c   + =     b [ N - 3 ]   *   x [ n - N - 3 ]   * /  
             a c c   + =   ( ( q 6 3 _ t )   ( * p x + + ) )   *   ( * p b + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c   + =   ( ( q 6 3 _ t )   ( * p x + + ) )   *   ( * p b + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   C o n v e r t i n g   t h e   r e s u l t   t o   1 . 3 1   f o r m a t   * /  
         / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
         a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
         / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
         a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
         a c c   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
         / *   S t o r e   t h e   r e s u l t   f r o m   a c c u m u l a t o r   i n t o   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p O u t + +   =   ( q 3 1 _ t )   a c c ;  
  
         / *   C o m p u t e   a n d   s t o r e   e r r o r   * /  
         e   =   * p R e f + +   -   ( q 3 1 _ t )   a c c ;  
  
         * p E r r + +   =   ( q 3 1 _ t )   e ;  
  
         / *   C o m p u t e   a l p h a   i . e .   i n t e r m e d i a t e   c o n s t a n t   f o r   t a p s   u p d a t e   * /  
         a l p h a   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   e   *   m u )   > >   3 1 ) ;  
  
         / *   I n i t i a l i z e   s t a t e   p o i n t e r   * /  
         / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
         p x   =   p S t a t e + + ;  
  
         / *   I n i t i a l i z e   c o e f f i c i e n t   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   L o o p   u n r o l l i n g .     P r o c e s s   4   t a p s   a t   a   t i m e .   * /  
         t a p C n t   =   n u m T a p s   > >   2 ;  
  
         / *   U p d a t e   f i l t e r   c o e f f i c i e n t s   * /  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   c o e f   i s   i n   2 . 3 0   f o r m a t   * /  
             c o e f   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   a l p h a   *   ( * p x + + ) )   > >   ( 3 2 ) ) ;  
             / *   g e t   c o e f   i n   1 . 3 1   f o r m a t   b y   l e f t   s h i f t i n g   * /  
             * p b   =   c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t )   *   p b   +   ( c o e f   < <   1 U ) ) ;  
             / *   u p d a t e   c o e f f i c i e n t   b u f f e r   t o   n e x t   c o e f f i c i e n t   * /  
             p b + + ;  
  
             c o e f   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   a l p h a   *   ( * p x + + ) )   > >   ( 3 2 ) ) ;  
             * p b   =   c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t )   *   p b   +   ( c o e f   < <   1 U ) ) ;  
             p b + + ;  
  
             c o e f   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   a l p h a   *   ( * p x + + ) )   > >   ( 3 2 ) ) ;  
             * p b   =   c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t )   *   p b   +   ( c o e f   < <   1 U ) ) ;  
             p b + + ;  
  
             c o e f   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   a l p h a   *   ( * p x + + ) )   > >   ( 3 2 ) ) ;  
             * p b   =   c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t )   *   p b   +   ( c o e f   < <   1 U ) ) ;  
             p b + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   I f   t h e   f i l t e r   l e n g t h   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   t h e   r e m a i n i n g   f i l t e r   t a p s   * /  
         t a p C n t   =   n u m T a p s   %   0 x 4 U ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             c o e f   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   a l p h a   *   ( * p x + + ) )   > >   ( 3 2 ) ) ;  
             * p b   =   c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t )   *   p b   +   ( c o e f   < <   1 U ) ) ;  
             p b + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e  
           s a t r t   o f   t h e   s t a t e   b u f f e r .   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e  
           n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   p S t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *   L o o p   u n r o l l i n g   f o r   ( n u m T a p s   -   1 U )   s a m p l e s   c o p y   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U )   > >   2 U ;  
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
     }  
  
     / *   C a l c u l a t e   r e m a i n i n g   n u m b e r   o f   c o p i e s   * /  
     t a p C n t   =   ( n u m T a p s   -   1 U )   %   0 x 4 U ;  
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
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   t h e   n e w   i n p u t   s a m p l e   i n t o   t h e   s t a t e   b u f f e r   * /  
         * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         p x   =   p S t a t e ;  
  
         / *   I n i t i a l i z e   p C o e f f s   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   S e t   t h e   a c c u m u l a t o r   t o   z e r o   * /  
         a c c   =   0 ;  
  
         / *   L o o p   o v e r   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
         t a p C n t   =   n u m T a p s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             a c c   + =   ( ( q 6 3 _ t )   ( * p x + + ) )   *   ( * p b + + ) ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   C o n v e r t i n g   t h e   r e s u l t   t o   1 . 3 1   f o r m a t   * /  
         / *   S t o r e   t h e   r e s u l t   f r o m   a c c u m u l a t o r   i n t o   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         / *   C a l c   l o w e r   p a r t   o f   a c c   * /  
         a c c _ l   =   a c c   &   0 x f f f f f f f f ;  
  
         / *   C a l c   u p p e r   p a r t   o f   a c c   * /  
         a c c _ h   =   ( a c c   > >   3 2 )   &   0 x f f f f f f f f ;  
  
         a c c   =   ( u i n t 3 2 _ t )   a c c _ l   > >   l S h i f t   |   a c c _ h   < <   u S h i f t ;  
  
         * p O u t + +   =   ( q 3 1 _ t )   a c c ;  
  
         / *   C o m p u t e   a n d   s t o r e   e r r o r   * /  
         e   =   * p R e f + +   -   ( q 3 1 _ t )   a c c ;  
  
         * p E r r + +   =   ( q 3 1 _ t )   e ;  
  
         / *   W e i g h t i n g   f a c t o r   f o r   t h e   L M S   v e r s i o n   * /  
         a l p h a   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   e   *   m u )   > >   3 1 ) ;  
  
         / *   I n i t i a l i z e   p S t a t e   p o i n t e r   * /  
         / *   A d v a n c e   s t a t e   p o i n t e r   b y   1   f o r   t h e   n e x t   s a m p l e   * /  
         p x   =   p S t a t e + + ;  
  
         / *   I n i t i a l i z e   p C o e f f s   p o i n t e r   * /  
         p b   =   p C o e f f s ;  
  
         / *   L o o p   o v e r   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
         t a p C n t   =   n u m T a p s ;  
  
         w h i l e   ( t a p C n t   >   0 U )  
         {  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             c o e f   =   ( q 3 1 _ t )   ( ( ( q 6 3 _ t )   a l p h a   *   ( * p x + + ) )   > >   ( 3 2 ) ) ;  
             * p b   =   c l i p _ q 6 3 _ t o _ q 3 1 ( ( q 6 3 _ t )   *   p b   +   ( c o e f   < <   1 U ) ) ;  
             p b + + ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             t a p C n t - - ;  
         }  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e  
           s t a r t   o f   t h e   s t a t e   b u f f e r .   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e  
           n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   p S t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *     C o p y   ( n u m T a p s   -   1 U )   s a m p l e s     * /  
     t a p C n t   =   ( n u m T a p s   -   1 U ) ;  
  
     / *   C o p y   t h e   d a t a   * /  
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
 / * *  
       *   @ }   e n d   o f   L M S   g r o u p  
       * /  