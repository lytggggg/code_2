??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m a t _ t r a n s _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   m a t r i x   t r a n s p o s e  
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
 / * *  
   *   @ d e f g r o u p   M a t r i x T r a n s   M a t r i x   T r a n s p o s e  
   *  
   *   T r a n p o s e s   a   m a t r i x .  
   *   T r a n s p o s i n g   a n   < c o d e > M   x   N < / c o d e >   m a t r i x   f l i p s   i t   a r o u n d   t h e   c e n t e r   d i a g o n a l   a n d   r e s u l t s   i n   a n   < c o d e > N   x   M < / c o d e >   m a t r i x .  
   *   \ i m a g e   h t m l   M a t r i x T r a n s p o s e . g i f   " T r a n s p o s e   o f   a   3   x   3   m a t r i x "  
   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * *  
   *   @ i n g r o u p   g r o u p M a t r i x  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   M a t r i x T r a n s  
   *   @ {  
   * /  
  
 / * *  
     *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   t r a n s p o s e .  
     *   @ p a r a m [ i n ]     * p S r c   p o i n t s   t o   t h e   i n p u t   m a t r i x  
     *   @ p a r a m [ o u t ]   * p D s t   p o i n t s   t o   t h e   o u t p u t   m a t r i x  
     *   @ r e t u r n   	 T h e   f u n c t i o n   r e t u r n s   e i t h e r     < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >  
     *   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
     * /  
  
  
 a r m _ s t a t u s   a r m _ m a t _ t r a n s _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t )  
 {  
     f l o a t 3 2 _ t   * p I n   =   p S r c - > p D a t a ;                                     / *   i n p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p O u t   =   p D s t - > p D a t a ;                                   / *   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p x ;                                                                   / *   T e m p o r a r y   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     u i n t 1 6 _ t   n R o w s   =   p S r c - > n u m R o w s ;                                 / *   n u m b e r   o f   r o w s   * /  
     u i n t 1 6 _ t   n C o l u m n s   =   p S r c - > n u m C o l s ;                           / *   n u m b e r   o f   c o l u m n s   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     u i n t 1 6 _ t   b l k C n t ,   i   =   0 U ,   r o w   =   n R o w s ;                     / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   t r a n s p o s e     * /  
  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
  
  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c - > n u m R o w s   ! =   p D s t - > n u m C o l s )   | |   ( p S r c - > n u m C o l s   ! =   p D s t - > n u m R o w s ) )  
     {  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / *         # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K         * /  
  
     {  
         / *   M a t r i x   t r a n s p o s e   b y   e x c h a n g i n g   t h e   r o w s   w i t h   c o l u m n s   * /  
         / *   r o w   l o o p           * /  
         d o  
         {  
             / *   L o o p   U n r o l l i n g   * /  
             b l k C n t   =   n C o l u m n s   > >   2 ;  
  
             / *   T h e   p o i n t e r   p x   i s   s e t   t o   s t a r t i n g   a d d r e s s   o f   t h e   c o l u m n   b e i n g   p r o c e s s e d   * /  
             p x   =   p O u t   +   i ;  
  
             / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
               * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
             w h i l e   ( b l k C n t   >   0 U )                 / *   c o l u m n   l o o p   * /  
             {  
                 / *   R e a d   a n d   s t o r e   t h e   i n p u t   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   * p I n + + ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n R o w s ;  
  
                 / *   R e a d   a n d   s t o r e   t h e   i n p u t   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   * p I n + + ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n R o w s ;  
  
                 / *   R e a d   a n d   s t o r e   t h e   i n p u t   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   * p I n + + ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n R o w s ;  
  
                 / *   R e a d   a n d   s t o r e   t h e   i n p u t   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   * p I n + + ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n R o w s ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 b l k C n t - - ;  
             }  
  
             / *   P e r f o r m   m a t r i x   t r a n s p o s e   f o r   l a s t   3   s a m p l e s   h e r e .   * /  
             b l k C n t   =   n C o l u m n s   %   0 x 4 U ;  
  
             w h i l e   ( b l k C n t   >   0 U )  
             {  
                 / *   R e a d   a n d   s t o r e   t h e   i n p u t   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   * p I n + + ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n R o w s ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 b l k C n t - - ;  
             }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     u i n t 1 6 _ t   c o l ,   i   =   0 U ,   r o w   =   n R o w s ;                           / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   t r a n s p o s e     * /  
  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c - > n u m R o w s   ! =   p D s t - > n u m C o l s )   | |   ( p S r c - > n u m C o l s   ! =   p D s t - > n u m R o w s ) )  
     {  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / *             # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K         * /  
  
     {  
         / *   M a t r i x   t r a n s p o s e   b y   e x c h a n g i n g   t h e   r o w s   w i t h   c o l u m n s   * /  
         / *   r o w   l o o p           * /  
         d o  
         {  
             / *   T h e   p o i n t e r   p x   i s   s e t   t o   s t a r t i n g   a d d r e s s   o f   t h e   c o l u m n   b e i n g   p r o c e s s e d   * /  
             p x   =   p O u t   +   i ;  
  
             / *   I n i t i a l i z e   c o l u m n   l o o p   c o u n t e r   * /  
             c o l   =   n C o l u m n s ;  
  
             w h i l e   ( c o l   >   0 U )  
             {  
                 / *   R e a d   a n d   s t o r e   t h e   i n p u t   e l e m e n t   i n   t h e   d e s t i n a t i o n   * /  
                 * p x   =   * p I n + + ;  
  
                 / *   U p d a t e   t h e   p o i n t e r   p x   t o   p o i n t   t o   t h e   n e x t   r o w   o f   t h e   t r a n s p o s e d   m a t r i x   * /  
                 p x   + =   n R o w s ;  
  
                 / *   D e c r e m e n t   t h e   c o l u m n   l o o p   c o u n t e r   * /  
                 c o l - - ;  
             }  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
             i + + ;  
  
             / *   D e c r e m e n t   t h e   r o w   l o o p   c o u n t e r   * /  
             r o w - - ;  
  
         }   w h i l e   ( r o w   >   0 U ) ;                     / *   r o w   l o o p   e n d     * /  
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
   *   @ }   e n d   o f   M a t r i x T r a n s   g r o u p  
   * /  