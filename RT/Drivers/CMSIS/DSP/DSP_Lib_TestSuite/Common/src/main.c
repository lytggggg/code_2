�?# i n c l u d e   " j t e s t . h "  
 # i n c l u d e   " a l l _ t e s t s . h "  
 # i n c l u d e   " a r m _ m a t h . h "  
  
  
 # i f   d e f i n e d ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 )  
 a s m ( "   . g l o b a l   _ _ A R M _ u s e _ n o _ a r g v \ n " ) ;  
 # e n d i f  
  
  
 v o i d   d e b u g _ i n i t ( v o i d )  
 {  
         u i n t 3 2 _ t   *   S H C S R _ p t r   =   ( u i n t 3 2 _ t   * )   0 x E 0 0 0 E D 2 4 ;   / *   S y s t e m   H a n d l e r   C o n t r o l   a n d   S t a t e   R e g i s t e r   * /  
         * S H C S R _ p t r   | =   0 x 7 0 0 0 0 ;                           / *   E n a b l e     U s a g e F a u l t ,   B u s F a u l t ,   a n d   M e m M a n a g e   f a u l t * /  
 }  
  
 i n t   m a i n ( v o i d )  
 {  
         d e b u g _ i n i t ( ) ;  
  
         J T E S T _ I N I T ( ) ;                               / *   I n i t i a l i z e   t e s t   f r a m e w o r k .   * /  
  
         J T E S T _ G R O U P _ C A L L ( a l l _ t e s t s ) ;   / *   R u n   a l l   t e s t s .   * /  
  
         J T E S T _ A C T _ E X I T _ F W ( ) ;                 / *   E x i t   t e s t   f r a m e w o r k .     * /  
         w h i l e   ( 1 ) ;                                       / *   N e v e r   r e t u r n .   * /  
 }  