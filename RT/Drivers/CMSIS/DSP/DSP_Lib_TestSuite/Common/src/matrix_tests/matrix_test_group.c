�?# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " m a t r i x _ t e s t s . h "  
  
 J T E S T _ D E F I N E _ G R O U P ( m a t r i x _ t e s t s )  
 {  
         / *  
             T o   s k i p   a   t e s t ,   c o m m e n t   i t   o u t .  
         * /  
         J T E S T _ G R O U P _ C A L L ( m a t _ a d d _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ c m p l x _ m u l t _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ i n i t _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ i n v e r s e _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ m u l t _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ m u l t _ f a s t _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ s u b _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ t r a n s _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t _ s c a l e _ t e s t s ) ;  
         r e t u r n ;  
 }  