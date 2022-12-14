??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ m a t _ s c a l e _ f 3 2 . c  
   *   D e s c r i p t i o n :     M u l t i p l i e s   a   f l o a t i n g - p o i n t   m a t r i x   b y   a   s c a l a r  
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
   *   @ d e f g r o u p   M a t r i x S c a l e   M a t r i x   S c a l e  
   *  
   *   M u l t i p l i e s   a   m a t r i x   b y   a   s c a l a r .     T h i s   i s   a c c o m p l i s h e d   b y   m u l t i p l y i n g   e a c h   e l e m e n t   i n   t h e  
   *   m a t r i x   b y   t h e   s c a l a r .     F o r   e x a m p l e :  
   *   \ i m a g e   h t m l   M a t r i x S c a l e . g i f   " M a t r i x   S c a l i n g   o f   a   3   x   3   m a t r i x "  
   *  
   *   T h e   f u n c t i o n   c h e c k s   t o   m a k e   s u r e   t h a t   t h e   i n p u t   a n d   o u t p u t   m a t r i c e s   a r e   o f   t h e   s a m e   s i z e .  
   *  
   *   I n   t h e   f i x e d - p o i n t   Q 1 5   a n d   Q 3 1   f u n c t i o n s ,   < c o d e > s c a l e < / c o d e >   i s   r e p r e s e n t e d   b y  
   *   a   f r a c t i o n a l   m u l t i p l i c a t i o n   < c o d e > s c a l e F r a c t < / c o d e >   a n d   a n   a r i t h m e t i c   s h i f t   < c o d e > s h i f t < / c o d e > .  
   *   T h e   s h i f t   a l l o w s   t h e   g a i n   o f   t h e   s c a l i n g   o p e r a t i o n   t o   e x c e e d   1 . 0 .  
   *   T h e   o v e r a l l   s c a l e   f a c t o r   a p p l i e d   t o   t h e   f i x e d - p o i n t   d a t a   i s  
   *   < p r e >  
   *           s c a l e   =   s c a l e F r a c t   *   2 ^ s h i f t .  
   *   < / p r e >  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   M a t r i x S c a l e  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   F l o a t i n g - p o i n t   m a t r i x   s c a l i n g .  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   i n p u t   m a t r i x   s t r u c t u r e  
   *   @ p a r a m [ i n ]               s c a l e   s c a l e   f a c t o r   t o   b e   a p p l i e d  
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   o u t p u t   m a t r i x   s t r u c t u r e  
   *   @ r e t u r n           	 	 T h e   f u n c t i o n   r e t u r n s   e i t h e r   < c o d e > A R M _ M A T H _ S I Z E _ M I S M A T C H < / c o d e >  
   *   o r   < c o d e > A R M _ M A T H _ S U C C E S S < / c o d e >   b a s e d   o n   t h e   o u t c o m e   o f   s i z e   c h e c k i n g .  
   *  
   * /  
  
 a r m _ s t a t u s   a r m _ m a t _ s c a l e _ f 3 2 (  
     c o n s t   a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p S r c ,  
     f l o a t 3 2 _ t   s c a l e ,  
     a r m _ m a t r i x _ i n s t a n c e _ f 3 2   *   p D s t )  
 {  
     f l o a t 3 2 _ t   * p I n   =   p S r c - > p D a t a ;                                     / *   i n p u t   d a t a   m a t r i x   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p O u t   =   p D s t - > p D a t a ;                                   / *   o u t p u t   d a t a   m a t r i x   p o i n t e r   * /  
     u i n t 3 2 _ t   n u m S a m p l e s ;                                                       / *   t o t a l   n u m b e r   o f   e l e m e n t s   i n   t h e   m a t r i x   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r s   * /  
     a r m _ s t a t u s   s t a t u s ;                                                           / *   s t a t u s   o f   m a t r i x   s c a l i n g           * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     f l o a t 3 2 _ t   i n 1 ,   i n 2 ,   i n 3 ,   i n 4 ;                                     / *   t e m p o r a r y   v a r i a b l e s   * /  
     f l o a t 3 2 _ t   o u t 1 ,   o u t 2 ,   o u t 3 ,   o u t 4 ;                             / *   t e m p o r a r y   v a r i a b l e s   * /  
  
 # e n d i f   / /             # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
 # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K  
     / *   C h e c k   f o r   m a t r i x   m i s m a t c h   c o n d i t i o n   * /  
     i f   ( ( p S r c - > n u m R o w s   ! =   p D s t - > n u m R o w s )   | |   ( p S r c - > n u m C o l s   ! =   p D s t - > n u m C o l s ) )  
     {  
         / *   S e t   s t a t u s   a s   A R M _ M A T H _ S I Z E _ M I S M A T C H   * /  
         s t a t u s   =   A R M _ M A T H _ S I Z E _ M I S M A T C H ;  
     }  
     e l s e  
 # e n d i f   / *         # i f d e f   A R M _ M A T H _ M A T R I X _ C H E C K         * /  
     {  
         / *   T o t a l   n u m b e r   o f   s a m p l e s   i n   t h e   i n p u t   m a t r i x   * /  
         n u m S a m p l e s   =   ( u i n t 3 2 _ t )   p S r c - > n u m R o w s   *   p S r c - > n u m C o l s ;  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
         / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
         / *   L o o p   U n r o l l i n g   * /  
         b l k C n t   =   n u m S a m p l e s   > >   2 ;  
  
         / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
           * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
         w h i l e   ( b l k C n t   >   0 U )  
         {  
             / *   C ( m , n )   =   A ( m , n )   *   s c a l e   * /  
             / *   S c a l i n g   a n d   r e s u l t s   a r e   s t o r e d   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             i n 1   =   p I n [ 0 ] ;  
             i n 2   =   p I n [ 1 ] ;  
             i n 3   =   p I n [ 2 ] ;  
             i n 4   =   p I n [ 3 ] ;  
  
             o u t 1   =   i n 1   *   s c a l e ;  
             o u t 2   =   i n 2   *   s c a l e ;  
             o u t 3   =   i n 3   *   s c a l e ;  
             o u t 4   =   i n 4   *   s c a l e ;  
  
  
             p O u t [ 0 ]   =   o u t 1 ;  
             p O u t [ 1 ]   =   o u t 2 ;  
             p O u t [ 2 ]   =   o u t 3 ;  
             p O u t [ 3 ]   =   o u t 4 ;  
  
             / *   u p d a t e   p o i n t e r s   t o   p r o c e s s   n e x t   s a m p e l s   * /  
             p I n   + =   4 U ;  
             p O u t   + =   4 U ;  
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
             / *   C ( m , n )   =   A ( m , n )   *   s c a l e   * /  
             / *   T h e   r e s u l t s   a r e   s t o r e d   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
             * p O u t + +   =   ( * p I n + + )   *   s c a l e ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
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