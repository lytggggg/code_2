??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 1 3 - 0 3 - 3 0           B e r n a r d             t h e   f i r s t   v e r i o n   f o r   F i n S H  
   * /  
  
 # i f n d e f   _ _ M _ S H E L L _ _  
 # d e f i n e   _ _ M _ S H E L L _ _  
  
 # i n c l u d e   < r t t h r e a d . h >  
  
 r t _ b o o l _ t   m s h _ i s _ u s e d ( v o i d ) ;  
 i n t   m s h _ e x e c ( c h a r   * c m d ,   r t _ s i z e _ t   l e n g t h ) ;  
 v o i d   m s h _ a u t o _ c o m p l e t e ( c h a r   * p r e f i x ) ;  
  
 i n t   m s h _ e x e c _ m o d u l e ( c o n s t   c h a r   * c m d _ l i n e ,   i n t   s i z e ) ;  
 i n t   m s h _ e x e c _ s c r i p t ( c o n s t   c h a r   * c m d _ l i n e ,   i n t   s i z e ) ;  
  
 # e n d i f  