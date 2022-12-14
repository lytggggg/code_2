??/ *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   N N   L i b r a r y  
   *   T i t l e :                 a r m _ n n _ t a b l e s . h  
   *   D e s c r i p t i o n :     E x t e r n   d e c l a r a t i o n   f o r   N N   t a b l e s  
   *  
   *   $ D a t e :                 1 7 .   J a n u a r y   2 0 1 8  
   *   $ R e v i s i o n :         V . 1 . 0 . 0  
   *  
   *   T a r g e t   P r o c e s s o r :     C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 / *  
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
 # i f n d e f   _ A R M _ N N _ T A B L E S _ H  
 # d e f i n e   _ A R M _ N N _ T A B L E S _ H  
  
 # i n c l u d e   " a r m _ m a t h . h "  
  
 / * *  
 *   @ b r i e f   t a b l e s   f o r   v a r i o u s   a c t i v a t i o n   f u n c t i o n s  
 *  
 * /  
  
 e x t e r n   c o n s t   q 1 5 _ t   s i g m o i d T a b l e _ q 1 5 [ 2 5 6 ] ;  
 e x t e r n   c o n s t   q 7 _ t   s i g m o i d T a b l e _ q 7 [ 2 5 6 ] ;  
  
 e x t e r n   c o n s t   q 7 _ t   t a n h T a b l e _ q 7 [ 2 5 6 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   t a n h T a b l e _ q 1 5 [ 2 5 6 ] ;  
  
     / * *  
       *   @ b r i e f   2 - w a y   t a b l e s   f o r   v a r i o u s   a c t i v a t i o n   f u n c t i o n s  
       *  
       *   2 - w a y   t a b l e ,   H   t a b l e   f o r   v a l u e   l a r g e r   t h a n   1 / 4  
       *   L   t a b l e   f o r   v a l u e   s m a l l e r   t h a n   1 / 4 ,   H   t a b l e   f o r   r e m a i n i n g  
       *   W e   h a v e   t h i s   o n l y   f o r   t h e   q 1 5 _ t   v e r s i o n .   I t   d o e s   n o t   m a k e  
       *   s e n s e   t o   h a v e   i t   f o r   q 7 _ t   t y p e  
       * /  
 e x t e r n   c o n s t   q 1 5 _ t   s i g m o i d H T a b l e _ q 1 5 [ 1 9 2 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   s i g m o i d L T a b l e _ q 1 5 [ 1 2 8 ] ;  
  
 e x t e r n   c o n s t   q 1 5 _ t   s i g m o i d L T a b l e _ q 1 5 [ 1 2 8 ] ;  
 e x t e r n   c o n s t   q 1 5 _ t   s i g m o i d H T a b l e _ q 1 5 [ 1 9 2 ] ;  
  
 # e n d i f                                                     / *     A R M _ N N _ T A B L E S _ H   * /  