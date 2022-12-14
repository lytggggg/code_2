??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *   @ f i l e           t z _ c o n t e x t . h 
   *   @ b r i e f         C o n t e x t   M a n a g e m e n t   f o r   A r m v 8 - M   T r u s t Z o n e 
   *   @ v e r s i o n     V 1 . 0 . 1 
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * 
   *   C o p y r i g h t   ( c )   2 0 1 7 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d . 
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
 # i f n d e f   T Z _ C O N T E X T _ H 
 # d e f i n e   T Z _ C O N T E X T _ H 
   
 # i n c l u d e   < s t d i n t . h > 
   
 # i f n d e f   T Z _ M O D U L E I D _ T 
 # d e f i n e   T Z _ M O D U L E I D _ T 
 / / /   \ d e t a i l s   D a t a   t y p e   t h a t   i d e n t i f i e s   s e c u r e   s o f t w a r e   m o d u l e s   c a l l e d   b y   a   p r o c e s s . 
 t y p e d e f   u i n t 3 2 _ t   T Z _ M o d u l e I d _ t ; 
 # e n d i f 
   
 / / /   \ d e t a i l s   T Z   M e m o r y   I D   i d e n t i f i e s   a n   a l l o c a t e d   m e m o r y   s l o t . 
 t y p e d e f   u i n t 3 2 _ t   T Z _ M e m o r y I d _ t ; 
     
 / / /   I n i t i a l i z e   s e c u r e   c o n t e x t   m e m o r y   s y s t e m 
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r ) 
 u i n t 3 2 _ t   T Z _ I n i t C o n t e x t S y s t e m _ S   ( v o i d ) ; 
   
 / / /   A l l o c a t e   c o n t e x t   m e m o r y   f o r   c a l l i n g   s e c u r e   s o f t w a r e   m o d u l e s   i n   T r u s t Z o n e 
 / / /   \ p a r a m [ i n ]     m o d u l e       i d e n t i f i e s   s o f t w a r e   m o d u l e s   c a l l e d   f r o m   n o n - s e c u r e   m o d e 
 / / /   \ r e t u r n   v a l u e   ! =   0   i d   T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r 
 / / /   \ r e t u r n   v a l u e   0         n o   m e m o r y   a v a i l a b l e   o r   i n t e r n a l   e r r o r 
 T Z _ M e m o r y I d _ t   T Z _ A l l o c M o d u l e C o n t e x t _ S   ( T Z _ M o d u l e I d _ t   m o d u l e ) ; 
   
 / / /   F r e e   c o n t e x t   m e m o r y   t h a t   w a s   p r e v i o u s l y   a l l o c a t e d   w i t h   \ r e f   T Z _ A l l o c M o d u l e C o n t e x t _ S 
 / / /   \ p a r a m [ i n ]     i d     T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r 
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r ) 
 u i n t 3 2 _ t   T Z _ F r e e M o d u l e C o n t e x t _ S   ( T Z _ M e m o r y I d _ t   i d ) ; 
   
 / / /   L o a d   s e c u r e   c o n t e x t   ( c a l l e d   o n   R T O S   t h r e a d   c o n t e x t   s w i t c h ) 
 / / /   \ p a r a m [ i n ]     i d     T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r 
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r ) 
 u i n t 3 2 _ t   T Z _ L o a d C o n t e x t _ S   ( T Z _ M e m o r y I d _ t   i d ) ; 
   
 / / /   S t o r e   s e c u r e   c o n t e x t   ( c a l l e d   o n   R T O S   t h r e a d   c o n t e x t   s w i t c h ) 
 / / /   \ p a r a m [ i n ]     i d     T r u s t Z o n e   m e m o r y   s l o t   i d e n t i f i e r 
 / / /   \ r e t u r n   e x e c u t i o n   s t a t u s   ( 1 :   s u c c e s s ,   0 :   e r r o r ) 
 u i n t 3 2 _ t   T Z _ S t o r e C o n t e x t _ S   ( T Z _ M e m o r y I d _ t   i d ) ; 
   
 # e n d i f     / /   T Z _ C O N T E X T _ H 