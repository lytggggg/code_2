?? 
 # i f   d e f i n e d   ( _ _ C C _ A R M )  
     # i f       ( d e f i n e d   ( A R M _ M A T H _ C M 0 ) )  
         # i n c l u d e   " A R M C C \ s t a r t u p _ a r m v 6 - m . s "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 0 P ) )  
         # i n c l u d e   " A R M C C \ s t a r t u p _ a r m v 6 - m . s "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 3 ) )  
         # i n c l u d e   " A R M C C \ s t a r t u p _ a r m v 7 - m . s "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 4 ) )  
         # i n c l u d e   " A R M C C \ s t a r t u p _ a r m v 7 - m . s "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 7 ) )  
         # i n c l u d e   " A R M C C \ s t a r t u p _ a r m v 7 - m . s "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ A R M V 8 M B L ) )  
         # i n c l u d e   " A R M C C \ s t a r t u p _ a r m v 6 - m . s "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ A R M V 8 M M L ) )  
         # i n c l u d e   " A R M C C \ s t a r t u p _ a r m v 7 - m . s "  
     # e l s e  
         # e r r o r   " N o   a p p r o p r i a t e   s t a r t u p   f i l e   f o u n d ! "  
     # e n d i f  
  
 # e l i f   d e f i n e d   ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 )  
     # i f       ( d e f i n e d   ( A R M _ M A T H _ C M 0 ) )  
         # i n c l u d e   " A R M C L A N G \ s t a r t u p _ a r m v 6 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 0 P ) )  
         # i n c l u d e   " A R M C L A N G \ s t a r t u p _ a r m v 6 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 3 ) )  
         # i n c l u d e   " A R M C L A N G \ s t a r t u p _ a r m v 7 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 4 ) )  
         # i n c l u d e   " A R M C L A N G \ s t a r t u p _ a r m v 7 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 7 ) )  
         # i n c l u d e   " A R M C L A N G \ s t a r t u p _ a r m v 7 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ A R M V 8 M B L ) )  
         # i n c l u d e   " A R M C L A N G \ s t a r t u p _ a r m v 6 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ A R M V 8 M M L ) )  
         # i n c l u d e   " A R M C L A N G \ s t a r t u p _ a r m v 7 - m . S "  
     # e l s e  
         # e r r o r   " N o   a p p r o p r i a t e   s t a r t u p   f i l e   f o u n d ! "  
     # e n d i f  
  
 # e l i f   d e f i n e d   ( _ _ G N U C _ _ )  
     # i f       ( d e f i n e d   ( A R M _ M A T H _ C M 0 ) )  
         # i n c l u d e   " G C C \ s t a r t u p _ a r m v 6 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 0 P ) )  
         # i n c l u d e   " G C C \ s t a r t u p _ a r m v 6 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 3 ) )  
         # i n c l u d e   " G C C \ s t a r t u p _ a r m v 7 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 4 ) )  
         # i n c l u d e   " G C C \ s t a r t u p _ a r m v 7 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ C M 7 ) )  
         # i n c l u d e   " G C C \ s t a r t u p _ a r m v 7 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ A R M V 8 M B L ) )  
         # i n c l u d e   " G C C \ s t a r t u p _ a r m v 6 - m . S "  
     # e l i f   ( d e f i n e d   ( A R M _ M A T H _ A R M V 8 M M L ) )  
         # i n c l u d e   " G C C \ s t a r t u p _ a r m v 7 - m . S "  
     # e l s e  
         # e r r o r   " N o   a p p r o p r i a t e   s t a r t u p   f i l e   f o u n d ! "  
     # e n d i f  
  
 # e l s e  
     # e r r o r   " C o m p i l e r   n o t   s u p p o r t e d ! "  
 # e n d i f  
  