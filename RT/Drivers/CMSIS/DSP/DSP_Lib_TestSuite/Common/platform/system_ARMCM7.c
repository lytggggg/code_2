�?/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * *  
   *   @ f i l e           s y s t e m _ A R M C M 7 . c  
   *   @ b r i e f         C M S I S   D e v i c e   S y s t e m   S o u r c e   F i l e   f o r  
   *                       A R M C M 7   D e v i c e   S e r i e s  
   *   @ v e r s i o n     V 5 . 0 0  
   *   @ d a t e           0 7 .   S e p t e m b e r   2 0 1 6  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 0 9 - 2 0 1 6   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   h t t p : / / w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 # i f   d e f i n e d   ( A R M C M 7 )  
     # i n c l u d e   " A R M C M 7 . h "  
 # e l i f   d e f i n e d   ( A R M C M 7 _ S P )  
     # i n c l u d e   " A R M C M 7 _ S P . h "  
 # e l i f   d e f i n e d   ( A R M C M 7 _ D P )  
     # i n c l u d e   " A R M C M 7 _ D P . h "  
 # e l s e  
     # e r r o r   d e v i c e   n o t   s p e c i f i e d !  
 # e n d i f  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     D e f i n e   c l o c k s  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # d e f i n e     X T A L                         (   5 0 0 0 0 0 0 U L )             / *   O s c i l l a t o r   f r e q u e n c y   * /  
  
 # d e f i n e     S Y S T E M _ C L O C K         ( 5 U   *   X T A L )  
  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     E x t e r n a l s  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d   ( _ _ V T O R _ P R E S E N T )   & &   ( _ _ V T O R _ P R E S E N T   = =   1 U )  
     e x t e r n   u i n t 3 2 _ t   _ _ V e c t o r s ;  
 # e n d i f  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     S y s t e m   C o r e   C l o c k   V a r i a b l e  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 u i n t 3 2 _ t   S y s t e m C o r e C l o c k   =   S Y S T E M _ C L O C K ;  
  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     S y s t e m   C o r e   C l o c k   u p d a t e   f u n c t i o n  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 v o i d   S y s t e m C o r e C l o c k U p d a t e   ( v o i d )  
 {  
     S y s t e m C o r e C l o c k   =   S Y S T E M _ C L O C K ;  
 }  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
     S y s t e m   i n i t i a l i z a t i o n   f u n c t i o n  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 v o i d   S y s t e m I n i t   ( v o i d )  
 {  
  
 # i f   d e f i n e d   ( _ _ V T O R _ P R E S E N T )   & &   ( _ _ V T O R _ P R E S E N T   = =   1 U )  
     S C B - > V T O R   =   ( u i n t 3 2 _ t )   & _ _ V e c t o r s ;  
 # e n d i f  
  
 # i f   d e f i n e d   ( _ _ F P U _ U S E D )   & &   ( _ _ F P U _ U S E D   = =   1 U )  
     S C B - > C P A C R   | =   ( ( 3 U   < <   1 0 U * 2 U )   |                       / *   s e t   C P 1 0   F u l l   A c c e s s   * /  
                                   ( 3 U   < <   1 1 U * 2 U )     ) ;                   / *   s e t   C P 1 1   F u l l   A c c e s s   * /  
 # e n d i f  
  
 # i f d e f   U N A L I G N E D _ S U P P O R T _ D I S A B L E  
     S C B - > C C R   | =   S C B _ C C R _ U N A L I G N _ T R P _ M s k ;  
 # e n d i f  
  
     S y s t e m C o r e C l o c k   =   S Y S T E M _ C L O C K ;  
 }  