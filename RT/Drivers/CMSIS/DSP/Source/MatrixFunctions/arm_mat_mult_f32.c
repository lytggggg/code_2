??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m a t _ m u l t _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   m a t r i x   m u l t i p l i c a t i o n  
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
   *   @ d e f g r o u p   M a t r i x M u l t   M a t r i x   M u l t i p l i c a t i o n  
   *  
   *   M u l t i p l i e s   t w o   m a t r i c e s .  
   *  
   *   \ i m a g e   h t m l   M a t r i x M u l t i p l i c a t i o n . g i f   " M u l t i p l i c a t i o n   o f   t w o   3   x   3   m a t r i c e s "  
  
   *   M a t r i x   m u l t i p l i c a t i o n   i s   o n l y   d e f i n e d   i f   t h e   n u m b e r   o f   c o l u m n s   o f   t h e  
   *   f i r s t   m a t r i x   e q u a l s   t h e   n u m b e r   o f   r o w s   o f   t h e   s e c o n d   m a t r i x .  
   *   M u l t i p l y i n g   a n   < c o d e > M   x   N < / c o d e >   m a t r i x   w i t h   a n   < c o d e > N   x   P < / c o d e >   m a t r i x   r e s u l t s  
   *   i n   a n   < c o d e > M   x   P < / c o d e >   m a t r i x .  
   *   W h e n   m a t r i x   s i z e   c h e c k i n g   i s   e n a b l e d ,   t h e   f u n c t i o n s   c h e c k :   ( 1 )   t h a t   t h e   i n n e r   d i m e n s i o n s   o f  
   *   < c o d e > p S r c A < / c o d e >   a n d   < c o d e > p S r c B < / c o d e >   a r e   e q u a l ;   a n d   ( 2 )   t h a t   t h e   s i z e   o f   t h e   o u t p u t  
   *   m a t r i x   e q u a l s   t h e   o u t e r   d i m e n s i o n s   o f   < c o d e > p S r c A < / c o d e >   a n d   < c o d e > p S r c B < / c o d e > .  
   * /  
  
  
 / * *  
   *   @ a d d t o g r o u p   M a t r i x M u l t  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   m u l t i p l i c a t i o n .  
   *   @ p a r a m [ i n ]               * p S r c A   p o i n t s   t o   t h e   f i r s t   i n p u t   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ i n ]               * p S r c B   p o i n t s   t o   t h e   s e c o n d   i n p u t   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
   *   @ r e t u r n           	 	 T h e   f u n c t i o n   r e t u r n s   e i t h e r  
   *   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
   * /  
  
 a r m _ s t a t u s   a r m _ m a t _ m u l t _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c A ,  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c B ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t )  
 {  
     f l o a t 3 2 _ t   * p I n 1   =   p S r c A - > p D a t a ;                                 / *   i n p u t   d a t a   m a t r i x   p o i n t e r   A   * /  
     f l o a t 3 2 _ t   * p I n 2   =   p S r c B - > p D a t a ;                                 / *   i n p u t   d a t a   m a t r i x   p o i n t e r   B   * /  
     f l o a t 3 2 _ t   * p I n A   =   p S r c A - > p D a t a ;                                 / *   i n p u t   d a t a   m a t r i x   p o i n t e r   A     * /  
     f l o a t 3 2 _ t   * p O u t   =   p D s t - > p D a t a ;                                   / *   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p x ;                                                                   / *   T e m p o r a r y   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 3 2 _ t   s u m ;                                                                   / *   A c c u m u l a t o r   * /  
     u i n t 1 6 _ t   n u m R o w s A   =   p S r c A - > n u m R o w s ;                         / *   n u m b e r   o f   r o w s   o f   i n p u t   m a t r i x   A   * /  
     u i n t 1 6 _ t   n u m C o l s B   =   p S r c B - > n u m C o l s ;                         / *   n u m b e r   o f   c o l u m n s   o f   i n p u t   m a t r i x   B   * /  
     u i n t 1 6 _ t   n u m C o l s A   =   p S r c A - > n u m C o l s ;                         / *   n u m b e r   o f   c o l u m n s   o f   i n p u t   m a t r i x   A   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     f l o a t 3 2 _ t   i n 1 ,   i n 2 ,   i n 3 ,   i n 4 ;  
     u i n t 1 6 _ t   c o l ,   i   =   0 U ,   j ,   r o w   =   n u m R o w s A ,   c o l C n t ;             / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   m u l t i p l i c a t i o n   * /  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
  
  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c A - > n u m C o l s   ! =   p S r c B - > n u m R o w s )   | |  
           ( p S r c A - > n u m R o w s   ! =   p D s t - > n u m R o w s )   | |   ( p S r c B - > n u m C o l s   ! =   p D s t - > n u m C o l s ) )  
     {  
  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / *             # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K         * /  
  
     {  
         / *   T h e   f o l l o w i n g   l o o p   p e r f o r m s   t h e   d o t - p r o d u c t   o f   e a c h   r o w   i n   p S r c A   w i t h   e a c h   c o l u m n   i n   p S r c B   * /  
         / *   r o w   l o o p   * /  
         d o  
         {  
             / *   O u t p u t   p o i n t e r   i s   s e t   t o   s t a r t i n g   a d d r e s s   o f   t h e   r o w   b e i n g   p r o c e s s e d   * /  
             p x   =   p O u t   +   i ;  
  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   c o l u m n   l o o p   c o u n t e r   i s   t o   b e   i n i t i a t e d   * /  
             c o l   =   n u m C o l s B ;  
  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   p I n 2   p o i n t e r   i s   s e t  
               * *   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   p S r c B   d a t a   * /  
             p I n 2   =   p S r c B - > p D a t a ;  
  
             j   =   0 U ;  
  
             / *   c o l u m n   l o o p   * /  
             d o  
             {  
                 / *   S e t   t h e   v a r i a b l e   s u m ,   t h a t   a c t s   a s   a c c u m u l a t o r ,   t o   z e r o   * /  
                 s u m   =   0 . 0 f ;  
  
                 / *   I n i t i a t e   t h e   p o i n t e r   p I n 1   t o   p o i n t   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   c o l u m n   b e i n g   p r o c e s s e d   * /  
                 p I n 1   =   p I n A ;  
  
                 / *   A p p l y   l o o p   u n r o l l i n g   a n d   c o m p u t e   4   M A C s   s i m u l t a n e o u s l y .   * /  
                 c o l C n t   =   n u m C o l s A   > >   2 U ;  
  
                 / *   m a t r i x   m u l t i p l i c a t i o n                 * /  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     / *   c ( m , n )   =   a ( 1 , 1 ) * b ( 1 , 1 )   +   a ( 1 , 2 )   *   b ( 2 , 1 )   +   . . . .   +   a ( m , p ) * b ( p , n )   * /  
                     i n 3   =   * p I n 2 ;  
                     p I n 2   + =   n u m C o l s B ;  
                     i n 1   =   p I n 1 [ 0 ] ;  
                     i n 2   =   p I n 1 [ 1 ] ;  
                     s u m   + =   i n 1   *   i n 3 ;  
                     i n 4   =   * p I n 2 ;  
                     p I n 2   + =   n u m C o l s B ;  
                     s u m   + =   i n 2   *   i n 4 ;  
  
                     i n 3   =   * p I n 2 ;  
                     p I n 2   + =   n u m C o l s B ;  
                     i n 1   =   p I n 1 [ 2 ] ;  
                     i n 2   =   p I n 1 [ 3 ] ;  
                     s u m   + =   i n 1   *   i n 3 ;  
                     i n 4   =   * p I n 2 ;  
                     p I n 2   + =   n u m C o l s B ;  
                     s u m   + =   i n 2   *   i n 4 ;  
                     p I n 1   + =   4 U ;  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t   * /  
                     c o l C n t - - ;  
                 }  
  
                 / *   I f   t h e   c o l u m n s   o f   p S r c A   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   M A C s   h e r e .  
                   * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
                 c o l C n t   =   n u m C o l s A   %   0 x 4 U ;  
  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     / *   c ( m , n )   =   a ( 1 , 1 ) * b ( 1 , 1 )   +   a ( 1 , 2 )   *   b ( 2 , 1 )   +   . . . .   +   a ( m , p ) * b ( p , n )   * /  
                     s u m   + =   * p I n 1 + +   *   ( * p I n 2 ) ;  
                     p I n 2   + =   n u m C o l s B ;  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                     c o l C n t - - ;  
                 }  
  
                 / *   S t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
                 * p x + +   =   s u m ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p I n 2   t o   p o i n t   t o   t h e     s t a r t i n g   a d d r e s s   o f   t h e   n e x t   c o l u m n   * /  
                 j + + ;  
                 p I n 2   =   p S r c B - > p D a t a   +   j ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
  
             }   w h i l e   ( c o l   >   0 U ) ;  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     f l o a t 3 2 _ t   * p I n B   =   p S r c B - > p D a t a ;                                 / *   i n p u t   d a t a   m a t r i x   p o i n t e r   B   * /  
     u i n t 1 6 _ t   c o l ,   i   =   0 U ,   r o w   =   n u m R o w s A ,   c o l C n t ;     / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   m u l t i p l i c a t i o n   * /  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c A - > n u m C o l s   ! =   p S r c B - > n u m R o w s )   | |  
           ( p S r c A - > n u m R o w s   ! =   p D s t - > n u m R o w s )   | |   ( p S r c B - > n u m C o l s   ! =   p D s t - > n u m C o l s ) )  
     {  
  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / *             # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K         * /  
  
     {  
         / *   T h e   f o l l o w i n g   l o o p   p e r f o r m s   t h e   d o t - p r o d u c t   o f   e a c h   r o w   i n   p I n A   w i t h   e a c h   c o l u m n   i n   p I n B   * /  
         / *   r o w   l o o p   * /  
         d o  
         {  
             / *   O u t p u t   p o i n t e r   i s   s e t   t o   s t a r t i n g   a d d r e s s   o f   t h e   r o w   b e i n g   p r o c e s s e d   * /  
             p x   =   p O u t   +   i ;  
  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   c o l u m n   l o o p   c o u n t e r   i s   t o   b e   i n i t i a t e d   * /  
             c o l   =   n u m C o l s B ;  
  
             / *   F o r   e v e r y   r o w   w i s e   p r o c e s s ,   t h e   p I n 2   p o i n t e r   i s   s e t  
               * *   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   p S r c B   d a t a   * /  
             p I n 2   =   p S r c B - > p D a t a ;  
  
             / *   c o l u m n   l o o p   * /  
             d o  
             {  
                 / *   S e t   t h e   v a r i a b l e   s u m ,   t h a t   a c t s   a s   a c c u m u l a t o r ,   t o   z e r o   * /  
                 s u m   =   0 . 0 f ;  
  
                 / *   I n i t i a l i z e   t h e   p o i n t e r   p I n 1   t o   p o i n t   t o   t h e   s t a r t i n g   a d d r e s s   o f   t h e   r o w   b e i n g   p r o c e s s e d   * /  
                 p I n 1   =   p I n A ;  
  
                 / *   M a t r i x   A   c o l u m n s   n u m b e r   o f   M A C   o p e r a t i o n s   a r e   t o   b e   p e r f o r m e d   * /  
                 c o l C n t   =   n u m C o l s A ;  
  
                 w h i l e   ( c o l C n t   >   0 U )  
                 {  
                     / *   c ( m , n )   =   a ( 1 , 1 ) * b ( 1 , 1 )   +   a ( 1 , 2 )   *   b ( 2 , 1 )   +   . . . .   +   a ( m , p ) * b ( p , n )   * /  
                     s u m   + =   * p I n 1 + +   *   ( * p I n 2 ) ;  
                     p I n 2   + =   n u m C o l s B ;  
  
                     / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
                     c o l C n t - - ;  
                 }  
  
                 / *   S t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r   * /  
                 * p x + +   =   s u m ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p I n 2   t o   p o i n t   t o   t h e     s t a r t i n g   a d d r e s s   o f   t h e   n e x t   c o l u m n   * /  
                 p I n 2   =   p I n B   +   ( n u m C o l s B   -   c o l ) ;  
  
             }   w h i l e   ( c o l   >   0 U ) ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
             / *   U p d a t e   t h e   p o i n t e r   p I n A   t o   p o i n t   t o   t h e     s t a r t i n g   a d d r e s s   o f   t h e   n e x t   r o w   * /  
             i   =   i   +   n u m C o l s B ;  
             p I n A   =   p I n A   +   n u m C o l s A ;  
  
             / *   D e c r e m e n t   t h e   r o w   l o o p   c o u n t e r   * /  
             r o w - - ;  
  
         }   w h i l e   ( r o w   >   0 U ) ;  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S U C C E S S   * /  
         s t a t u s   =   A R M _ M A T H _ S U C C E S S ;  
     }  
  
     / *   R e t u r n   t o   a p p l i c a t i o n   * /  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   M a t r i x M u l t   g r o u p  
   * /  