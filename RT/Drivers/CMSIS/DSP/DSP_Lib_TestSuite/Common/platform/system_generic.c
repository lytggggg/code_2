�? 
 # i f       ( d e f i n e d   ( A R M C M 0 ) )  
     # i n c l u d e   " s y s t e m _ A R M C M 0 . c "  
  
 # e l i f   ( d e f i n e d   ( A R M C M 0 P ) )  
     # i n c l u d e   " s y s t e m _ A R M C M 0 p l u s . c "  
  
 # e l i f   ( d e f i n e d   ( A R M C M 3 ) )  
     # i n c l u d e   " s y s t e m _ A R M C M 3 . c "  
  
 # e l i f   ( d e f i n e d   ( A R M C M 4 )   | |   d e f i n e d   ( A R M C M 4 _ F P ) )  
     # i n c l u d e   " s y s t e m _ A R M C M 4 . c "  
  
 # e l i f   ( d e f i n e d   ( A R M C M 7 )   | |   d e f i n e d   ( A R M C M 7 _ S P )   | |   d e f i n e d   ( A R M C M 7 _ D P ) )  
     # i n c l u d e   " s y s t e m _ A R M C M 7 . c "  
  
 # e l i f   d e f i n e d   ( A R M v 8 M B L )  
     # i n c l u d e   " s y s t e m _ A R M v 8 M B L . c "  
  
 # e l i f   ( d e f i n e d   ( A R M v 8 M M L )         | |   d e f i n e d   ( A R M v 8 M M L _ D S P )         | |   \  
               d e f i n e d   ( A R M v 8 M M L _ S P )   | |   d e f i n e d   ( A R M v 8 M M L _ D S P _ S P )   | |   \  
               d e f i n e d   ( A R M v 8 M M L _ D P )   | |   d e f i n e d   ( A R M v 8 M M L _ D S P _ D P )       )  
     # i n c l u d e   " s y s t e m _ A R M v 8 M M L . c "  
  
 # e l s e  
     # e r r o r   " N o   a p p r o p r i a t e   s y s t e m   f i l e   f o u n d ! "  
 # e n d i f  