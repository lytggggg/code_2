�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m a t _ s c a l e _ q 3 1 . c  
   *   D e s c r i p t i o n :     M u l t i p l i e s   a   Q 3 1   m a t r i x   b y   a   s c a l a r  
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
   *   @ i n g r o u p   g r o u p M a t r i x  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   M a t r i x S c a l e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   Q 3 1   m a t r i x   s c a l i n g .  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   i n p u t   m a t r i x  
   *   @ p a r a m [ i n ]               s c a l e F r a c t   f r a c t i o n a l   p o r t i o n   o f   t h e   s c a l e   f a c t o r  
   *   @ p a r a m [ i n ]               s h i f t   n u m b e r   o f   b i t s   t o   s h i f t   t h e   r e s u l t   b y  
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
   *   @ r e t u r n           	 	 T h e   f u n c t i o n   r e t u r n s   e i t h e r  
   *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
   *  
   *   @ d e t a i l s  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h e   i n p u t   d a t a   < c o d e > * p S r c < / c o d e >   a n d   < c o d e > s c a l e F r a c t < / c o d e >   a r e   i n   1 . 3 1   f o r m a t .  
   *   T h e s e   a r e   m u l t i p l i e d   t o   y i e l d   a   2 . 6 2   i n t e r m e d i a t e   r e s u l t   a n d   t h i s   i s   s h i f t e d   w i t h   s a t u r a t i o n   t o   1 . 3 1   f o r m a t .  
   * /  
  
 a r m _ s t a t u s   a r m _ m a t _ s c a l e _ q 3 1 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p S r c ,  
     q 3 1 _ t   s c a l e F r a c t ,  
     i n t 3 2 _ t   s h i f t ,  
     a r m _ m a t r i x _ i n s t a n c e _ q 3 1   *   p D s t )  
 {  
     q 3 1 _ t   * p I n   =   p S r c - > p D a t a ;                                             / *   i n p u t   d a t a   m a t r i x   p o i n t e r   * /  
     q 3 1 _ t   * p O u t   =   p D s t - > p D a t a ;                                           / *   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     u i n t 3 2 _ t   n u m S a m p l e s ;                                                       / *   t o t a l   n u m b e r   o f   e l e m e n t s   i n   t h e   m a t r i x   * /  
     i n t 3 2 _ t   t o t S h i f t   =   s h i f t   +   1 ;                                     / *   s h i f t   t o   a p p l y   a f t e r   s c a l i n g   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r s     * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   s c a l i n g             * /  
     q 3 1 _ t   i n 1 ,   i n 2 ,   o u t 1 ;                                                     / *   t e m p o r a r y   v a r i a b e l s   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     q 3 1 _ t   i n 3 ,   i n 4 ,   o u t 2 ,   o u t 3 ,   o u t 4 ;                             / *   t e m p o r a r y   v a r i a b l e s   * /  
  
 # e n d i f   / /             # i f n d e f   A R M _ M A T _ C M 0  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h     * /  
     i f   ( ( p S r c - > n u m R o w s   ! =   p D s t - > n u m R o w s )   | |   ( p S r c - > n u m C o l s   ! =   p D s t - > n u m C o l s ) )  
     {  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / /         # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
     {  
         / *   T o t a l   n u m b e r   o f   s a m p l e s   i n   t h e   i n p u t   m a t r i x   * /  
         n u m S a m p l e s   =   ( u i n t 3 2 _ t )   p S r c - > n u m R o w s   *   p S r c - > n u m C o l s ;  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
         / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
         / *   L o o p   U n r o l l i n g   * /  
         b l k C n t   =   n u m S a m p l e s   > >   2 U ;  
  
         / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
           * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   C ( m , n )   =   A ( m , n )   *   k   * /  
             / *   R e a d   v a l u e s   f r o m   i n p u t   * /  
             i n 1   =   * p I n ;  
             i n 2   =   * ( p I n   +   1 ) ;  
             i n 3   =   * ( p I n   +   2 ) ;  
             i n 4   =   * ( p I n   +   3 ) ;  
  
             / *   m u l t i p l y   i n p u t   w i t h   s c a l e r   v a l u e   * /  
             i n 1   =   ( ( q 6 3 _ t )   i n 1   *   s c a l e F r a c t )   > >   3 2 ;  
             i n 2   =   ( ( q 6 3 _ t )   i n 2   *   s c a l e F r a c t )   > >   3 2 ;  
             i n 3   =   ( ( q 6 3 _ t )   i n 3   *   s c a l e F r a c t )   > >   3 2 ;  
             i n 4   =   ( ( q 6 3 _ t )   i n 4   *   s c a l e F r a c t )   > >   3 2 ;  
  
             / *   a p p l y   s h i f t i n g   * /  
             o u t 1   =   i n 1   < <   t o t S h i f t ;  
             o u t 2   =   i n 2   < <   t o t S h i f t ;  
  
             / *   s a t u r a t e   t h e   r e s u l t s .   * /  
             i f   ( i n 1   ! =   ( o u t 1   > >   t o t S h i f t ) )  
                 o u t 1   =   0 x 7 F F F F F F F   ^   ( i n 1   > >   3 1 ) ;  
  
             i f   ( i n 2   ! =   ( o u t 2   > >   t o t S h i f t ) )  
                 o u t 2   =   0 x 7 F F F F F F F   ^   ( i n 2   > >   3 1 ) ;  
  
             o u t 3   =   i n 3   < <   t o t S h i f t ;  
             o u t 4   =   i n 4   < <   t o t S h i f t ;  
  
             * p O u t   =   o u t 1 ;  
             * ( p O u t   +   1 )   =   o u t 2 ;  
  
             i f   ( i n 3   ! =   ( o u t 3   > >   t o t S h i f t ) )  
                 o u t 3   =   0 x 7 F F F F F F F   ^   ( i n 3   > >   3 1 ) ;  
  
             i f   ( i n 4   ! =   ( o u t 4   > >   t o t S h i f t ) )  
                 o u t 4   =   0 x 7 F F F F F F F   ^   ( i n 4   > >   3 1 ) ;  
  
  
             * ( p O u t   +   2 )   =   o u t 3 ;  
             * ( p O u t   +   3 )   =   o u t 4 ;  
  
             / *   u p d a t e   p o i n t e r s   t o   p r o c e s s   n e x t   s a m p e l s   * /  
             p I n   + =   4 U ;  
             p O u t   + =   4 U ;  
  
  
             / *   D e c r e m e n t   t h e   n u m S a m p l e s   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   I f   t h e   n u m S a m p l e s   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
           * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
         b l k C n t   =   n u m S a m p l e s   %   0 x 4 U ;  
  
 # e l s e  
  
         / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
         / *   I n i t i a l i z e   b l k C n t   w i t h   n u m b e r   o f   s a m p l e s   * /  
         b l k C n t   =   n u m S a m p l e s ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   C ( m , n )   =   A ( m , n )   *   k   * /  
             / *   S c a l e ,   s a t u r a t e   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             i n 1   =   * p I n + + ;  
  
             i n 2   =   ( ( q 6 3 _ t )   i n 1   *   s c a l e F r a c t )   > >   3 2 ;  
  
             o u t 1   =   i n 2   < <   t o t S h i f t ;  
  
             i f   ( i n 2   ! =   ( o u t 1   > >   t o t S h i f t ) )  
                 o u t 1   =   0 x 7 F F F F F F F   ^   ( i n 2   > >   3 1 ) ;  
  
             * p O u t + +   =   o u t 1 ;  
  
             / *   D e c r e m e n t   t h e   n u m S a m p l e s   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
         }  
  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S U C C E S S   * /  
         s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
     }  
  
     / *   R e t u r n   t o   a p p l i c a t i o n   * /  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   M a t r i x S c a l e   g r o u p  
   * /  