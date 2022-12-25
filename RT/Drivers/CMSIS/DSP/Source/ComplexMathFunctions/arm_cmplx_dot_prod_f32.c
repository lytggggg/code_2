�?/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ c m p l x _ d o t _ p r o d _ f 3 2 . c  
   *   D e s c r i p t i o n :     F l o a t i n g - p o i n t   c o m p l e x   d o t   p r o d u c t  
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
   *   @ d e f g r o u p   c m p l x _ d o t _ p r o d   C o m p l e x   D o t   P r o d u c t  
   *  
   *   C o m p u t e s   t h e   d o t   p r o d u c t   o f   t w o   c o m p l e x   v e c t o r s .  
   *   T h e   v e c t o r s   a r e   m u l t i p l i e d   e l e m e n t - b y - e l e m e n t   a n d   t h e n   s u m m e d .  
   *  
   *   T h e   < c o d e > p S r c A < / c o d e >   p o i n t s   t o   t h e   f i r s t   c o m p l e x   i n p u t   v e c t o r   a n d  
   *   < c o d e > p S r c B < / c o d e >   p o i n t s   t o   t h e   s e c o n d   c o m p l e x   i n p u t   v e c t o r .  
   *   < c o d e > n u m S a m p l e s < / c o d e >   s p e c i f i e s   t h e   n u m b e r   o f   c o m p l e x   s a m p l e s  
   *   a n d   t h e   d a t a   i n   e a c h   a r r a y   i s   s t o r e d   i n   a n   i n t e r l e a v e d   f a s h i o n  
   *   ( r e a l ,   i m a g ,   r e a l ,   i m a g ,   . . . ) .  
   *   E a c h   a r r a y   h a s   a   t o t a l   o f   < c o d e > 2 * n u m S a m p l e s < / c o d e >   v a l u e s .  
   *  
   *   T h e   u n d e r l y i n g   a l g o r i t h m   i s   u s e d :  
   *   < p r e >  
   *   r e a l R e s u l t = 0 ;  
   *   i m a g R e s u l t = 0 ;  
   *   f o r ( n = 0 ;   n < n u m S a m p l e s ;   n + + )   {  
   *           r e a l R e s u l t   + =   p S r c A [ ( 2 * n ) + 0 ] * p S r c B [ ( 2 * n ) + 0 ]   -   p S r c A [ ( 2 * n ) + 1 ] * p S r c B [ ( 2 * n ) + 1 ] ;  
   *           i m a g R e s u l t   + =   p S r c A [ ( 2 * n ) + 0 ] * p S r c B [ ( 2 * n ) + 1 ]   +   p S r c A [ ( 2 * n ) + 1 ] * p S r c B [ ( 2 * n ) + 0 ] ;  
   *   }  
   *   < / p r e >  
   *  
   *   T h e r e   a r e   s e p a r a t e   f u n c t i o n s   f o r   f l o a t i n g - p o i n t ,   Q 1 5 ,   a n d   Q 3 1   d a t a   t y p e s .  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   c m p l x _ d o t _ p r o d  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f     F l o a t i n g - p o i n t   c o m p l e x   d o t   p r o d u c t  
   *   @ p a r a m     * p S r c A   p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
   *   @ p a r a m     * p S r c B   p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
   *   @ p a r a m     n u m S a m p l e s   n u m b e r   o f   c o m p l e x   s a m p l e s   i n   e a c h   v e c t o r  
   *   @ p a r a m     * r e a l R e s u l t   r e a l   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
   *   @ p a r a m     * i m a g R e s u l t   i m a g i n a r y   p a r t   o f   t h e   r e s u l t   r e t u r n e d   h e r e  
   *   @ r e t u r n   n o n e .  
   * /  
  
 v o i d   a r m _ c m p l x _ d o t _ p r o d _ f 3 2 (  
     f l o a t 3 2 _ t   *   p S r c A ,  
     f l o a t 3 2 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   n u m S a m p l e s ,  
     f l o a t 3 2 _ t   *   r e a l R e s u l t ,  
     f l o a t 3 2 _ t   *   i m a g R e s u l t )  
 {  
     f l o a t 3 2 _ t   r e a l _ s u m   =   0 . 0 f ,   i m a g _ s u m   =   0 . 0 f ;         / *   T e m p o r a r y   r e s u l t   s t o r a g e   * /  
     f l o a t 3 2 _ t   a 0 , b 0 , c 0 , d 0 ;  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r   * /  
  
     / * l o o p   U n r o l l i n g   * /  
     b l k C n t   =   n u m S a m p l e s   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
             a 0   =   * p S r c A + + ;  
             b 0   =   * p S r c A + + ;  
             c 0   =   * p S r c B + + ;  
             d 0   =   * p S r c B + + ;  
  
             r e a l _ s u m   + =   a 0   *   c 0 ;  
             i m a g _ s u m   + =   a 0   *   d 0 ;  
             r e a l _ s u m   - =   b 0   *   d 0 ;  
             i m a g _ s u m   + =   b 0   *   c 0 ;  
  
             a 0   =   * p S r c A + + ;  
             b 0   =   * p S r c A + + ;  
             c 0   =   * p S r c B + + ;  
             d 0   =   * p S r c B + + ;  
  
             r e a l _ s u m   + =   a 0   *   c 0 ;  
             i m a g _ s u m   + =   a 0   *   d 0 ;  
             r e a l _ s u m   - =   b 0   *   d 0 ;  
             i m a g _ s u m   + =   b 0   *   c 0 ;  
  
             a 0   =   * p S r c A + + ;  
             b 0   =   * p S r c A + + ;  
             c 0   =   * p S r c B + + ;  
             d 0   =   * p S r c B + + ;  
  
             r e a l _ s u m   + =   a 0   *   c 0 ;  
             i m a g _ s u m   + =   a 0   *   d 0 ;  
             r e a l _ s u m   - =   b 0   *   d 0 ;  
             i m a g _ s u m   + =   b 0   *   c 0 ;  
  
             a 0   =   * p S r c A + + ;  
             b 0   =   * p S r c A + + ;  
             c 0   =   * p S r c B + + ;  
             d 0   =   * p S r c B + + ;  
  
             r e a l _ s u m   + =   a 0   *   c 0 ;  
             i m a g _ s u m   + =   a 0   *   d 0 ;  
             r e a l _ s u m   - =   b 0   *   d 0 ;  
             i m a g _ s u m   + =   b 0   *   c 0 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
     }  
  
     / *   I f   t h e   n u m S a m p l e s   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   n u m S a m p l e s   &   0 x 3 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
             a 0   =   * p S r c A + + ;  
             b 0   =   * p S r c A + + ;  
             c 0   =   * p S r c B + + ;  
             d 0   =   * p S r c B + + ;  
  
             r e a l _ s u m   + =   a 0   *   c 0 ;  
             i m a g _ s u m   + =   a 0   *   d 0 ;  
             r e a l _ s u m   - =   b 0   *   d 0 ;  
             i m a g _ s u m   + =   b 0   *   c 0 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             b l k C n t - - ;  
     }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
     w h i l e   ( n u m S a m p l e s   >   0 U )  
     {  
             a 0   =   * p S r c A + + ;  
             b 0   =   * p S r c A + + ;  
             c 0   =   * p S r c B + + ;  
             d 0   =   * p S r c B + + ;  
  
             r e a l _ s u m   + =   a 0   *   c 0 ;  
             i m a g _ s u m   + =   a 0   *   d 0 ;  
             r e a l _ s u m   - =   b 0   *   d 0 ;  
             i m a g _ s u m   + =   b 0   *   c 0 ;  
  
             / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
             n u m S a m p l e s - - ;  
     }  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
     / *   S t o r e   t h e   r e a l   a n d   i m a g i n a r y   r e s u l t s   i n   t h e   d e s t i n a t i o n   b u f f e r s   * /  
     * r e a l R e s u l t   =   r e a l _ s u m ;  
     * i m a g R e s u l t   =   i m a g _ s u m ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   c m p l x _ d o t _ p r o d   g r o u p  
   * /  