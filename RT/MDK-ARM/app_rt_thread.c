??# i n c l u d e   " r t t h r e a d . h "  
 # i n c l u d e   " m a i n . h "  
 # i n c l u d e   " s t d i o . h "  
    
 s t r u c t   r t _ t h r e a d   l e d 1 _ t h r e a d ;  
 r t _ u i n t 8 _ t   r t _ l e d 1 _ t h r e a d _ s t a c k [ 1 2 8 ] ;  
 v o i d   l e d 1 _ t a s k _ e n t r y ( v o i d   * p a r a m e t e r ) ;  
    
 / / R?YS?~z?Qpe 
 v o i d   M X _ R T _ T h r e a d _ I n i t ( v o i d )  
 {  
 	 / / R?YSL E D 1 ?~z 
 	 r t _ t h r e a d _ i n i t ( & l e d 1 _ t h r e a d , " l e d 1 " , l e d 1 _ t a s k _ e n t r y , R T _ N U L L , & r t _ l e d 1 _ t h r e a d _ s t a c k [ 0 ] , s i z e o f ( r t _ l e d 1 _ t h r e a d _ s t a c k ) , 3 , 2 0 ) ;  
 	 / /  _/T?~z??^ 
 	 r t _ t h r e a d _ s t a r t u p ( & l e d 1 _ t h r e a d ) ;  
 }  
    
 / / ;N?N?R 
 v o i d   M X _ R T _ T h r e a d _ P r o c e s s ( v o i d )  
 {  
 	 p r i n t f ( " H e l l o   R T _ T h r e a d ! ! ! " ) ;  
 	 r t _ t h r e a d _ d e l a y ( 2 0 0 0 ) ;  
 }  
    
 / / L E D 1 ?N?R 
 v o i d   l e d 1 _ t a s k _ e n t r y ( v o i d   * p a r a m e t e r )  
 {  
 	 w h i l e ( 1 )  
 	 {  
 	 	 H A L _ G P I O _ W r i t e P i n ( G P I O A , G P I O _ P I N _ 3 ,   G P I O _ P I N _ R E S E T ) ;  
 	 	 r t _ t h r e a d _ d e l a y ( 5 0 0 ) ;  
 	 	 H A L _ G P I O _ W r i t e P i n ( G P I O A , G P I O _ P I N _ 3 ,   G P I O _ P I N _ S E T ) ;  
 	 	 r t _ t h r e a d _ d e l a y ( 5 0 0 ) ;  
 	 }  
 }  
  
  
 