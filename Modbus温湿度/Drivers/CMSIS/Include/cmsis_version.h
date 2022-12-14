??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * * 
   *   @ f i l e           c m s i s _ v e r s i o n . h 
   *   @ b r i e f         C M S I S   C o r e ( M )   V e r s i o n   d e f i n i t i o n s 
   *   @ v e r s i o n     V 5 . 0 . 2 
   *   @ d a t e           1 9 .   A p r i l   2 0 1 7 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * 
   *   C o p y r i g h t   ( c )   2 0 0 9 - 2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d . 
   * 
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0 
   * 
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y 
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e . 
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t 
   * 
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0 
   * 
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e 
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T 
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d . 
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d 
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e . 
   * / 
 
 # i f       d e f i n e d   (   _ _ I C C A R M _ _   ) 
     # p r a g m a   s y s t e m _ i n c l u d e                   / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   f o r   M I S R A   c h e c k   * / 
 # e l i f   d e f i n e d   ( _ _ c l a n g _ _ ) 
     # p r a g m a   c l a n g   s y s t e m _ h e a d e r       / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   * / 
 # e n d i f 
 
 # i f n d e f   _ _ C M S I S _ V E R S I O N _ H 
 # d e f i n e   _ _ C M S I S _ V E R S I O N _ H 
 
 / *     C M S I S   V e r s i o n   d e f i n i t i o n s   * / 
 # d e f i n e   _ _ C M _ C M S I S _ V E R S I O N _ M A I N     (   5 U )                                                                             / * ! <   [ 3 1 : 1 6 ]   C M S I S   C o r e ( M )   m a i n   v e r s i o n   * / 
 # d e f i n e   _ _ C M _ C M S I S _ V E R S I O N _ S U B       (   1 U )                                                                             / * ! <   [ 1 5 : 0 ]     C M S I S   C o r e ( M )   s u b   v e r s i o n   * / 
 # d e f i n e   _ _ C M _ C M S I S _ V E R S I O N               ( ( _ _ C M _ C M S I S _ V E R S I O N _ M A I N   < <   1 6 U )   |   \ 
                                                                       _ _ C M _ C M S I S _ V E R S I O N _ S U B                       )               / * ! <   C M S I S   C o r e ( M )   v e r s i o n   n u m b e r   * / 
 # e n d i f 