??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c m p l x _ m a g _ s q u a r e d _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   c o m p l e x   m a g n i t u d e   s q u a r e d  
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
   *   @ i n g r o u p   g r o u p C m p l x M a t h  
   * /  
  
 / * *  
   *   @ d e f g r o u p   c m p l x _ m a g _ s q u a r e d   C o m p l e x   M a g n i t u d e   S q u a r e d  
   *  
   *   C o m p u t e s   t h e   m a g n i t u d e   s q u a r e d   o f   t h e   e l e m e n t s   o f   a   c o m p l e x   d a t a   v e c t o r .  
   *  
   *   T h e   < c o d e > p S r c < / c o d e >   p o i n t s   t o   t h e   s o u r c e   d a t a   a n d  
   *   < c o d e > p D s t < / c o d e >   p o i n t s   t o   t h e   w h e r e   t h e   r e s u l t   s h o u l d   b e   w r i t t e n .  
   *   < c o d e > n u m S a m p l e s < / c o d e >   s p e c i f i e s   t h e   n u m b e r   o f   c o m p l e x   s a m p l e s  
   *   i n   t h e   i n p u t   a r r a y   a n d   t h e   d a t a   i s   s t o r e d   i n   a n   i n t e r l e a v e d   f a s h i o n  
   *   ( r e a l ,   i m a g ,   r e a l ,   i m a g ,   . . . ) .  
   *   T h e   i n p u t   a r r a y   h a s   a   t o t a l   o f   < c o d e > 2 * n u m S a m p l e s < / c o d e >   v a l u e s ;  
   *   t h e   o u t p u t   a r r a y   h a s   a   t o t a l   o f   < c o d e > n u m S a m p l e s < / c o d e >   v a l u e s .  
   *  
   *   T h e   u n d e r l y i n g   a l g o r i t h m   i s   u s e d :  
   *  
   *   < p r e >  
   *   f o r ( n = 0 ;   n < n u m S a m p l e s ;   n + + )   {  
   *           p D s t [ n ]   =   p S r c [ ( 2 * n ) + 0 ] ^ 2   +   p S r c [ ( 2 * n ) + 1 ] ^ 2 ;  
   *   }  
   *   < / p r e >  
   *  
   *   T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r   f l o a t i n g - p o i n t ,   Q 1 5 ,   a n d   Q 3 1   d a t a   t y p e s .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   c m p l x _ m a g _ s q u a r e d  
   *   @ {  
   * /  
  
  
 / * *  
   *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x   m a g n i t u d e   s q u a r e d  
   *   @ p a r a m [ i n ]     * p S r c   p o i n t s   t o   t h e   c o m p l e x   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]     * p D s t   p o i n t s   t o   t h e   r e a l   o u t p u t   v e c t o r  
   *   @ p a r a m [ i n ]     n u m S a m p l e s   n u m b e r   o f   c o m p l e x   s a m p l e s   i n   t h e   i n p u t   v e c t o r  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ c m p l x _ m a g _ s q u a r e d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   n u m S a m p l e s )  
 {  
     f l o a t 3 2 _ t   r e a l ,   i m a g ;                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   s t o r e   r e a l   a n d   i m a g i n a r y   v a l u e s   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
     f l o a t 3 2 _ t   r e a l 1 ,   r e a l 2 ,   r e a l 3 ,   r e a l 4 ;                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   r e a l   v a l u e s   * /  
     f l o a t 3 2 _ t   i m a g 1 ,   i m a g 2 ,   i m a g 3 ,   i m a g 4 ;                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   i m a g i n a r y   v a l u e s   * /  
     f l o a t 3 2 _ t   m u l 1 ,   m u l 2 ,   m u l 3 ,   m u l 4 ;                             / *   T e m p o r a r y   v a r i a b l e s   * /  
     f l o a t 3 2 _ t   m u l 5 ,   m u l 6 ,   m u l 7 ,   m u l 8 ;                             / *   T e m p o r a r y   v a r i a b l e s   * /  
     f l o a t 3 2 _ t   o u t 1 ,   o u t 2 ,   o u t 3 ,   o u t 4 ;                             / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   o u t p u t   v a l u e s   * /  
  
     / * l o o p   U n r o l l i n g   * /  
     b l k C n t   =   n u m S a m p l e s   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C [ 0 ]   =   ( A [ 0 ]   *   A [ 0 ]   +   A [ 1 ]   *   A [ 1 ] )   * /  
         / *   r e a d   r e a l   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         r e a l 1   =   p S r c [ 0 ] ;  
         / *   r e a d   i m a g i n a r y   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         i m a g 1   =   p S r c [ 1 ] ;  
  
         / *   c a l c u l a t e   p o w e r   o f   r e a l   v a l u e   * /  
         m u l 1   =   r e a l 1   *   r e a l 1 ;  
  
         / *   r e a d   r e a l   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         r e a l 2   =   p S r c [ 2 ] ;  
  
         / *   c a l c u l a t e   p o w e r   o f   i m a g i n a r y   v a l u e   * /  
         m u l 2   =   i m a g 1   *   i m a g 1 ;  
  
         / *   r e a d   i m a g i n a r y   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         i m a g 2   =   p S r c [ 3 ] ;  
  
         / *   c a l c u l a t e   p o w e r   o f   r e a l   v a l u e   * /  
         m u l 3   =   r e a l 2   *   r e a l 2 ;  
  
         / *   r e a d   r e a l   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         r e a l 3   =   p S r c [ 4 ] ;  
  
         / *   c a l c u l a t e   p o w e r   o f   i m a g i n a r y   v a l u e   * /  
         m u l 4   =   i m a g 2   *   i m a g 2 ;  
  
         / *   r e a d   i m a g i n a r y   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         i m a g 3   =   p S r c [ 5 ] ;  
  
         / *   c a l c u l a t e   p o w e r   o f   r e a l   v a l u e   * /  
         m u l 5   =   r e a l 3   *   r e a l 3 ;  
         / *   c a l c u l a t e   p o w e r   o f   i m a g i n a r y   v a l u e   * /  
         m u l 6   =   i m a g 3   *   i m a g 3 ;  
  
         / *   r e a d   r e a l   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         r e a l 4   =   p S r c [ 6 ] ;  
  
         / *   a c c u m u l a t e   r e a l   a n d   i m a g i n a r y   p o w e r s   * /  
         o u t 1   =   m u l 1   +   m u l 2 ;  
  
         / *   r e a d   i m a g i n a r y   i n p u t   s a m p l e   f r o m   s o u r c e   b u f f e r   * /  
         i m a g 4   =   p S r c [ 7 ] ;  
  
         / *   a c c u m u l a t e   r e a l   a n d   i m a g i n a r y   p o w e r s   * /  
         o u t 2   =   m u l 3   +   m u l 4 ;  
  
         / *   c a l c u l a t e   p o w e r   o f   r e a l   v a l u e   * /  
         m u l 7   =   r e a l 4   *   r e a l 4 ;  
         / *   c a l c u l a t e   p o w e r   o f   i m a g i n a r y   v a l u e   * /  
         m u l 8   =   i m a g 4   *   i m a g 4 ;  
  
         / *   s t o r e   o u t p u t   t o   d e s t i n a t i o n   * /  
         p D s t [ 0 ]   =   o u t 1 ;  
  
         / *   a c c u m u l a t e   r e a l   a n d   i m a g i n a r y   p o w e r s   * /  
         o u t 3   =   m u l 5   +   m u l 6 ;  
  
         / *   s t o r e   o u t p u t   t o   d e s t i n a t i o n   * /  
         p D s t [ 1 ]   =   o u t 2 ;  
  
         / *   a c c u m u l a t e   r e a l   a n d   i m a g i n a r y   p o w e r s   * /  
         o u t 4   =   m u l 7   +   m u l 8 ;  
  
         / *   s t o r e   o u t p u t   t o   d e s t i n a t i o n   * /  
         p D s t [ 2 ]   =   o u t 3 ;  
  
         / *   i n c r e m e n t   d e s t i n a t i o n   p o i n t e r   b y   8   t o   p r o c e s s   n e x t   s a m p l e s   * /  
         p S r c   + =   8 U ;  
  
         / *   s t o r e   o u t p u t   t o   d e s t i n a t i o n   * /  
         p D s t [ 3 ]   =   o u t 4 ;  
  
         / *   i n c r e m e n t   d e s t i n a t i o n   p o i n t e r   b y   4   t o   p r o c e s s   n e x t   s a m p l e s   * /  
         p D s t   + =   4 U ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   n u m S a m p l e s   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   n u m S a m p l e s   %   0 x 4 U ;  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     b l k C n t   =   n u m S a m p l e s ;  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C [ 0 ]   =   ( A [ 0 ]   *   A [ 0 ]   +   A [ 1 ]   *   A [ 1 ] )   * /  
         r e a l   =   * p S r c + + ;  
         i m a g   =   * p S r c + + ;  
  
         / *   o u t   =   ( r e a l   *   r e a l )   +   ( i m a g   *   i m a g )   * /  
         / *   s t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   ( r e a l   *   r e a l )   +   ( i m a g   *   i m a g ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
 }  
  
 / * *  
   *   @ }   e n d   o f   c m p l x _ m a g _ s q u a r e d   g r o u p  
   * /  