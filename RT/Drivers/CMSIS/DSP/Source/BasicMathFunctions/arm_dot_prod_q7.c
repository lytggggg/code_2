??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   D S P   L i b r a r y  
   *   T i t l e :                 a r m _ d o t _ p r o d _ q 7 . c  
   *   D e s c r i p t i o n :     Q 7   d o t   p r o d u c t  
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
   *   @ i n g r o u p   g r o u p M a t h  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   d o t _ p r o d  
   *   @ {  
   * /  
  
 / * *  
   *   @ b r i e f   D o t   p r o d u c t   o f   Q 7   v e c t o r s .  
   *   @ p a r a m [ i n ]               * p S r c A   p o i n t s   t o   t h e   f i r s t   i n p u t   v e c t o r  
   *   @ p a r a m [ i n ]               * p S r c B   p o i n t s   t o   t h e   s e c o n d   i n p u t   v e c t o r  
   *   @ p a r a m [ i n ]               b l o c k S i z e   n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
   *   @ p a r a m [ o u t ]             * r e s u l t   o u t p u t   r e s u l t   r e t u r n e d   h e r e  
   *   @ r e t u r n   n o n e .  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h e   i n t e r m e d i a t e   m u l t i p l i c a t i o n s   a r e   i n   1 . 7   x   1 . 7   =   2 . 1 4   f o r m a t   a n d   t h e s e  
   *   r e s u l t s   a r e   a d d e d   t o   a n   a c c u m u l a t o r   i n   1 8 . 1 4   f o r m a t .  
   *   N o n s a t u r a t i n g   a d d i t i o n s   a r e   u s e d   a n d   t h e r e   i s   n o   d a n g e r   o f   w r a p   a r o u n d   a s   l o n g   a s  
   *   t h e   v e c t o r s   a r e   l e s s   t h a n   2 ^ 1 8   e l e m e n t s   l o n g .  
   *   T h e   r e t u r n   r e s u l t   i s   i n   1 8 . 1 4   f o r m a t .  
   * /  
  
 v o i d   a r m _ d o t _ p r o d _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     u i n t 3 2 _ t   b l o c k S i z e ,  
     q 3 1 _ t   *   r e s u l t )  
 {  
     u i n t 3 2 _ t   b l k C n t ;                                                               / *   l o o p   c o u n t e r   * /  
  
     q 3 1 _ t   s u m   =   0 ;                                                                   / *   T e m p o r a r y   v a r i a b l e s   t o   s t o r e   o u t p u t   * /  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
 / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 3   * /  
  
     q 3 1 _ t   i n p u t 1 ,   i n p u t 2 ;                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   s t o r e   i n p u t   * /  
     q 3 1 _ t   i n A 1 ,   i n A 2 ,   i n B 1 ,   i n B 2 ;                                     / *   T e m p o r a r y   v a r i a b l e s   t o   s t o r e   i n p u t   * /  
  
  
  
     / * l o o p   U n r o l l i n g   * /  
     b l k C n t   =   b l o c k S i z e   > >   2 U ;  
  
     / *   F i r s t   p a r t   o f   t h e   p r o c e s s i n g   w i t h   l o o p   u n r o l l i n g .     C o m p u t e   4   o u t p u t s   a t   a   t i m e .  
       * *   a   s e c o n d   l o o p   b e l o w   c o m p u t e s   t h e   r e m a i n i n g   1   t o   3   s a m p l e s .   * /  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   r e a d   4   s a m p l e s   a t   a   t i m e   f r o m   s o u r c e A   * /  
         i n p u t 1   =   * _ _ S I M D 3 2 ( p S r c A ) + + ;  
         / *   r e a d   4   s a m p l e s   a t   a   t i m e   f r o m   s o u r c e B   * /  
         i n p u t 2   =   * _ _ S I M D 3 2 ( p S r c B ) + + ;  
  
         / *   e x t r a c t   t w o   q 7 _ t   s a m p l e s   t o   q 1 5 _ t   s a m p l e s   * /  
         i n A 1   =   _ _ S X T B 1 6 ( _ _ R O R ( i n p u t 1 ,   8 ) ) ;  
         / *   e x t r a c t   r e m i n a i n g   t w o   s a m p l e s   * /  
         i n A 2   =   _ _ S X T B 1 6 ( i n p u t 1 ) ;  
         / *   e x t r a c t   t w o   q 7 _ t   s a m p l e s   t o   q 1 5 _ t   s a m p l e s   * /  
         i n B 1   =   _ _ S X T B 1 6 ( _ _ R O R ( i n p u t 2 ,   8 ) ) ;  
         / *   e x t r a c t   r e m i n a i n g   t w o   s a m p l e s   * /  
         i n B 2   =   _ _ S X T B 1 6 ( i n p u t 2 ) ;  
  
         / *   m u l t i p l y   a n d   a c c u m u l a t e   t w o   s a m p l e s   a t   a   t i m e   * /  
         s u m   =   _ _ S M L A D ( i n A 1 ,   i n B 1 ,   s u m ) ;  
         s u m   =   _ _ S M L A D ( i n A 2 ,   i n B 2 ,   s u m ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   I f   t h e   b l o c k S i z e   i s   n o t   a   m u l t i p l e   o f   4 ,   c o m p u t e   a n y   r e m a i n i n g   o u t p u t   s a m p l e s   h e r e .  
       * *   N o   l o o p   u n r o l l i n g   i s   u s e d .   * /  
     b l k C n t   =   b l o c k S i z e   %   0 x 4 U ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   A [ 0 ] *   B [ 0 ]   +   A [ 1 ] *   B [ 1 ]   +   A [ 2 ] *   B [ 2 ]   +   . . . . . +   A [ b l o c k S i z e - 1 ] *   B [ b l o c k S i z e - 1 ]   * /  
         / *   D o t   p r o d u c t   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   a   t e m p o r a r y   b u f f e r .   * /  
         s u m   =   _ _ S M L A D ( * p S r c A + + ,   * p S r c B + + ,   s u m ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
 # e l s e  
  
     / *   R u n   t h e   b e l o w   c o d e   f o r   C o r t e x - M 0   * /  
  
  
  
     / *   I n i t i a l i z e   b l k C n t   w i t h   n u m b e r   o f   s a m p l e s   * /  
     b l k C n t   =   b l o c k S i z e ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C   =   A [ 0 ] *   B [ 0 ]   +   A [ 1 ] *   B [ 1 ]   +   A [ 2 ] *   B [ 2 ]   +   . . . . . +   A [ b l o c k S i z e - 1 ] *   B [ b l o c k S i z e - 1 ]   * /  
         / *   D o t   p r o d u c t   a n d   t h e n   s t o r e   t h e   r e s u l t s   i n   a   t e m p o r a r y   b u f f e r .   * /  
         s u m   + =   ( q 3 1 _ t )   ( ( q 1 5 _ t )   *   p S r c A + +   *   * p S r c B + + ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
 # e n d i f   / *   # i f   d e f i n e d   ( A R M _ M A T H _ D S P )   * /  
  
  
     / *   S t o r e   t h e   r e s u l t   i n   t h e   d e s t i n a t i o n   b u f f e r   i n   1 8 . 1 4   f o r m a t   * /  
     * r e s u l t   =   s u m ;  
 }  
  
 / * *  
   *   @ }   e n d   o f   d o t _ p r o d   g r o u p  
   * /  