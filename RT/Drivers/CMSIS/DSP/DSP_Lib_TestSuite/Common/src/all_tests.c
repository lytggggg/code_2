�?# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " b a s i c _ m a t h _ t e s t _ g r o u p . h "  
 # i n c l u d e   " c o m p l e x _ m a t h _ t e s t _ g r o u p . h "  
 # i n c l u d e   " c o n t r o l l e r _ t e s t _ g r o u p . h "  
 # i n c l u d e   " f a s t _ m a t h _ t e s t _ g r o u p . h "  
 # i n c l u d e   " f i l t e r i n g _ t e s t _ g r o u p . h "  
 # i n c l u d e   " m a t r i x _ t e s t _ g r o u p . h "  
 # i n c l u d e   " s t a t i s t i c s _ t e s t _ g r o u p . h "  
 # i n c l u d e   " s u p p o r t _ t e s t _ g r o u p . h "  
 # i n c l u d e   " t r a n s f o r m _ t e s t _ g r o u p . h "  
 # i n c l u d e   " i n t r i n s i c s _ t e s t _ g r o u p . h "  
  
 J T E S T _ D E F I N E _ G R O U P ( a l l _ t e s t s )  
 {  
         / *  
             T o   s k i p   a   t e s t ,   c o m m e n t   i t   o u t  
         * /  
         J T E S T _ G R O U P _ C A L L ( b a s i c _ m a t h _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( c o m p l e x _ m a t h _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( c o n t r o l l e r _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( f a s t _ m a t h _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( f i l t e r i n g _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( m a t r i x _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( s t a t i s t i c s _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( s u p p o r t _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( t r a n s f o r m _ t e s t s ) ;  
         J T E S T _ G R O U P _ C A L L ( i n t r i n s i c s _ t e s t s ) ;  
  
         r e t u r n ;  
 }  