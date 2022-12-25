�?/ *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
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
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   N N   L i b r a r y  
   *   T i t l e :                 a r m _ r e l u _ q 1 5 . c  
   *   D e s c r i p t i o n :     Q 1 5   v e r s i o n   o f   R e L U  
   *  
   *   $ D a t e :                 1 7 .   J a n u a r y   2 0 1 8  
   *   $ R e v i s i o n :         V . 1 . 0 . 0  
   *  
   *   T a r g e t   P r o c e s s o r :     C o r t e x - M   c o r e s  
   *  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ n n f u n c t i o n s . h "  
  
 / * *  
   *     @ i n g r o u p   g r o u p N N  
   * /  
  
 / * *  
   *   @ a d d t o g r o u p   A c t i  
   *   @ {  
   * /  
  
     / * *  
       *   @ b r i e f   Q 1 5   R E L U   f u n c t i o n  
       *   @ p a r a m [ i n , o u t ]       d a t a                 p o i n t e r   t o   i n p u t  
       *   @ p a r a m [ i n ]               s i z e                 n u m b e r   o f   e l e m e n t s  
       *   @ r e t u r n   n o n e .  
       *    
       *   @ d e t a i l s  
       *  
       *   O p t i m i z e d   r e l u   w i t h   Q S U B   i n s t r u c t i o n s .  
       *  
       * /  
  
 v o i d   a r m _ r e l u _ q 1 5 ( q 1 5 _ t   *   d a t a ,   u i n t 1 6 _ t   s i z e )  
 {  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
         / *   R u n   t h e   f o l l o w i n g   c o d e   f o r   C o r t e x - M 4   a n d   C o r t e x - M 7   * /  
  
         u i n t 1 6 _ t     i   =   s i z e   > >   1 ;  
         q 1 5 _ t         * p I n   =   d a t a ;  
         q 1 5 _ t         * p O u t   =   d a t a ;  
         q 3 1 _ t           i n ;  
         q 3 1 _ t           b u f ;  
         q 3 1 _ t           m a s k ;  
  
         w h i l e   ( i )  
         {  
                 i n   =   * _ _ S I M D 3 2 ( p I n ) + + ;  
  
                 / *   e x t r a c t   t h e   f i r s t   b i t   * /  
                 b u f   =   _ _ R O R ( i n   &   0 x 8 0 0 0 8 0 0 0 ,   1 5 ) ;  
  
                 / *   i f   M S B = 1 ,   m a s k   w i l l   b e   0 x F F ,   0 x 0   o t h e r w i s e   * /  
                 m a s k   =   _ _ Q S U B 1 6 ( 0 x 0 0 0 0 0 0 0 0 ,   b u f ) ;  
  
                 * _ _ S I M D 3 2 ( p O u t ) + +   =   i n   &   ( ~ m a s k ) ;  
                 i - - ;  
         }  
  
         i f   ( s i z e   &   0 x 1 )  
         {  
                 i f   ( * p I n   <   0 )  
                 {  
                         * p I n   =   0 ;  
                 }  
                 p I n + + ;  
         }  
 # e l s e  
         / *   R u n   t h e   f o l l o w i n g   c o d e   a s   r e f e r e n c e   i m p l e m e n t a t i o n   f o r   C o r t e x - M 0   a n d   C o r t e x - M 3   * /  
         u i n t 1 6 _ t     i ;  
  
         f o r   ( i   =   0 ;   i   <   s i z e ;   i + + )  
         {  
                 i f   ( d a t a [ i ]   <   0 )  
                         d a t a [ i ]   =   0 ;  
         }  
  
 # e n d i f                                                     / *   A R M _ M A T H _ D S P   * /  
  
 }  
  
 / * *  
   *   @ }   e n d   o f   A c t i   g r o u p  
   * /  