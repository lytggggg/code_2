??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ r c c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       R C C   L L   m o d u l e   d r i v e r .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ r c c . h "  
 # i f d e f     U S E _ F U L L _ A S S E R T  
 # i n c l u d e   " s t m 3 2 _ a s s e r t . h "  
 # e l s e  
 # d e f i n e   a s s e r t _ p a r a m ( e x p r )   ( ( v o i d ) 0 U )  
 # e n d i f   / *   U S E _ F U L L _ A S S E R T   * /  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( R C C )  
  
 / * *   @ d e f g r o u p   R C C _ L L   R C C  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   R C C _ L L _ P r i v a t e _ M a c r o s  
     *   @ {  
     * /  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 # d e f i n e   I S _ L L _ R C C _ I 2 S _ C L K S O U R C E ( _ _ V A L U E _ _ )           ( ( ( _ _ V A L U E _ _ )   = =   L L _ R C C _ I 2 S 2 _ C L K S O U R C E )   \  
                                                                                           | |   ( ( _ _ V A L U E _ _ )   = =   L L _ R C C _ I 2 S 3 _ C L K S O U R C E ) )  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( U S B )   | |   d e f i n e d ( U S B _ O T G _ F S )  
 # d e f i n e   I S _ L L _ R C C _ U S B _ C L K S O U R C E ( _ _ V A L U E _ _ )         ( ( ( _ _ V A L U E _ _ )   = =   L L _ R C C _ U S B _ C L K S O U R C E ) )  
 # e n d i f   / *   U S B   * /  
  
 # d e f i n e   I S _ L L _ R C C _ A D C _ C L K S O U R C E ( _ _ V A L U E _ _ )         ( ( ( _ _ V A L U E _ _ )   = =   L L _ R C C _ A D C _ C L K S O U R C E ) )  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R C C _ L L _ P r i v a t e _ F u n c t i o n s   R C C   P r i v a t e   f u n c t i o n s  
     *   @ {  
     * /  
 u i n t 3 2 _ t   R C C _ G e t S y s t e m C l o c k F r e q ( v o i d ) ;  
 u i n t 3 2 _ t   R C C _ G e t H C L K C l o c k F r e q ( u i n t 3 2 _ t   S Y S C L K _ F r e q u e n c y ) ;  
 u i n t 3 2 _ t   R C C _ G e t P C L K 1 C l o c k F r e q ( u i n t 3 2 _ t   H C L K _ F r e q u e n c y ) ;  
 u i n t 3 2 _ t   R C C _ G e t P C L K 2 C l o c k F r e q ( u i n t 3 2 _ t   H C L K _ F r e q u e n c y ) ;  
 u i n t 3 2 _ t   R C C _ P L L _ G e t F r e q D o m a i n _ S Y S ( v o i d ) ;  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 u i n t 3 2 _ t   R C C _ P L L I 2 S _ G e t F r e q D o m a i n _ I 2 S ( v o i d ) ;  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 u i n t 3 2 _ t   R C C _ P L L 2 _ G e t F r e q C l o c k F r e q ( v o i d ) ;  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   R C C _ L L _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   R C C _ L L _ E F _ I n i t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   R C C   c l o c k   c o n f i g u r a t i o n   t o   t h e   d e f a u l t   r e s e t   s t a t e .  
     *   @ n o t e       T h e   d e f a u l t   r e s e t   s t a t e   o f   t h e   c l o c k   c o n f i g u r a t i o n   i s   g i v e n   b e l o w :  
     *                   -   H S I   O N   a n d   u s e d   a s   s y s t e m   c l o c k   s o u r c e  
     *                   -   H S E   P L L ,   P L L 2   &   P L L 3   a r e   O F F  
     *                   -   A H B ,   A P B 1   a n d   A P B 2   p r e s c a l e r   s e t   t o   1 .  
     *                   -   C S S ,   M C O   O F F  
     *                   -   A l l   i n t e r r u p t s   d i s a b l e d  
     *   @ n o t e       T h i s   f u n c t i o n   d o e s n ' t   m o d i f y   t h e   c o n f i g u r a t i o n   o f   t h e  
     *                   -   P e r i p h e r a l   c l o c k s  
     *                   -   L S I ,   L S E   a n d   R T C   c l o c k s  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                   -   S U C C E S S :   R C C   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                   -   E R R O R :   n o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ R C C _ D e I n i t ( v o i d )  
 {  
     / *   S e t   H S I O N   b i t   * /  
     L L _ R C C _ H S I _ E n a b l e ( ) ;  
  
     / *   W a i t   f o r   H S I   R E A D Y   b i t   * /  
     w h i l e   ( L L _ R C C _ H S I _ I s R e a d y ( )   ! =   1 U )  
     { }  
  
     / *   C o n f i g u r e   H S I   a s   s y s t e m   c l o c k   s o u r c e   * /  
     L L _ R C C _ S e t S y s C l k S o u r c e ( L L _ R C C _ S Y S _ C L K S O U R C E _ H S I ) ;  
  
     / *   W a i t   t i l l   c l o c k   s w i t c h   i s   r e a d y   * /  
     w h i l e   ( L L _ R C C _ G e t S y s C l k S o u r c e ( )   ! =   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ H S I )  
     { }  
  
     / *   R e s e t   P L L O N   b i t   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L O N ) ;  
  
     / *   W a i t   f o r   P L L   R E A D Y   b i t   t o   b e   r e s e t   * /  
     w h i l e   ( L L _ R C C _ P L L _ I s R e a d y ( )   ! =   0 U )  
     { }  
  
     / *   R e s e t   C F G R   r e g i s t e r   * /  
     L L _ R C C _ W r i t e R e g ( C F G R ,   0 x 0 0 0 0 0 0 0 0 U ) ;  
  
     / *   R e s e t   H S E O N ,   H S E B Y P   &   C S S O N   b i t s   * /  
     C L E A R _ B I T ( R C C - > C R ,   ( R C C _ C R _ C S S O N   |   R C C _ C R _ H S E O N   |   R C C _ C R _ H S E B Y P ) ) ;  
  
 # i f   d e f i n e d ( R C C _ C R _ P L L 2 O N )  
     / *   R e s e t   P L L 2 O N   b i t   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 2 O N ) ;  
 # e n d i f   / *   R C C _ C R _ P L L 2 O N   * /  
  
 # i f   d e f i n e d ( R C C _ C R _ P L L 3 O N )  
     / *   R e s e t   P L L 3 O N   b i t   * /  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N ) ;  
 # e n d i f   / *   R C C _ C R _ P L L 3 O N   * /  
  
     / *   S e t   H S I T R I M   b i t s   t o   t h e   r e s e t   v a l u e   * /  
     L L _ R C C _ H S I _ S e t C a l i b T r i m m i n g ( 0 x 1 0 U ) ;  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
     / *   R e s e t   C F G R 2   r e g i s t e r   * /  
     L L _ R C C _ W r i t e R e g ( C F G R 2 ,   0 x 0 0 0 0 0 0 0 0 U ) ;  
 # e n d i f   / *   R C C _ C F G R 2 _ P R E D I V 1   * /  
  
     / *   D i s a b l e   a l l   i n t e r r u p t s   * /  
     L L _ R C C _ W r i t e R e g ( C I R ,   0 x 0 0 0 0 0 0 0 0 U ) ;  
  
     / *   C l e a r   r e s e t   f l a g s   * /  
     L L _ R C C _ C l e a r R e s e t F l a g s ( ) ;  
  
     r e t u r n   S U C C E S S ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   R C C _ L L _ E F _ G e t _ F r e q  
     *   @ b r i e f     R e t u r n   t h e   f r e q u e n c i e s   o f   d i f f e r e n t   o n   c h i p   c l o c k s ;     S y s t e m ,   A H B ,   A P B 1   a n d   A P B 2   b u s e s   c l o c k s  
     *                   a n d   d i f f e r e n t   p e r i p h e r a l   c l o c k s   a v a i l a b l e   o n   t h e   d e v i c e .  
     *   @ n o t e       I f   S Y S C L K   s o u r c e   i s   H S I ,   f u n c t i o n   r e t u r n s   v a l u e s   b a s e d   o n   H S I _ V A L U E ( * * )  
     *   @ n o t e       I f   S Y S C L K   s o u r c e   i s   H S E ,   f u n c t i o n   r e t u r n s   v a l u e s   b a s e d   o n   H S E _ V A L U E ( * * * )  
     *   @ n o t e       I f   S Y S C L K   s o u r c e   i s   P L L ,   f u n c t i o n   r e t u r n s   v a l u e s   b a s e d   o n  
     *                   H S I _ V A L U E ( * * )   o r   H S E _ V A L U E ( * * * )   m u l t i p l i e d / d i v i d e d   b y   t h e   P L L   f a c t o r s .  
     *   @ n o t e       ( * * )   H S I _ V A L U E   i s   a   d e f i n e d   c o n s t a n t   b u t   t h e   r e a l   v a l u e   m a y   v a r y  
     *                             d e p e n d i n g   o n   t h e   v a r i a t i o n s   i n   v o l t a g e   a n d   t e m p e r a t u r e .  
     *   @ n o t e       ( * * * )   H S E _ V A L U E   i s   a   d e f i n e d   c o n s t a n t ,   u s e r   h a s   t o   e n s u r e   t h a t  
     *                               H S E _ V A L U E   i s   s a m e   a s   t h e   r e a l   f r e q u e n c y   o f   t h e   c r y s t a l   u s e d .  
     *                               O t h e r w i s e ,   t h i s   f u n c t i o n   m a y   h a v e   w r o n g   r e s u l t .  
     *   @ n o t e       T h e   r e s u l t   o f   t h i s   f u n c t i o n   c o u l d   b e   i n c o r r e c t   w h e n   u s i n g   f r a c t i o n a l  
     *                   v a l u e   f o r   H S E   c r y s t a l .  
     *   @ n o t e       T h i s   f u n c t i o n   c a n   b e   u s e d   b y   t h e   u s e r   a p p l i c a t i o n   t o   c o m p u t e   t h e  
     *                   b a u d - r a t e   f o r   t h e   c o m m u n i c a t i o n   p e r i p h e r a l s   o r   c o n f i g u r e   o t h e r   p a r a m e t e r s .  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   f r e q u e n c i e s   o f   d i f f e r e n t   o n   c h i p   c l o c k s ;     S y s t e m ,   A H B ,   A P B 1   a n d   A P B 2   b u s e s   c l o c k s  
     *   @ n o t e       E a c h   t i m e   S Y S C L K ,   H C L K ,   P C L K 1   a n d / o r   P C L K 2   c l o c k   c h a n g e s ,   t h i s   f u n c t i o n  
     *                   m u s t   b e   c a l l e d   t o   u p d a t e   s t r u c t u r e   f i e l d s .   O t h e r w i s e ,   a n y  
     *                   c o n f i g u r a t i o n   b a s e d   o n   t h i s   f u n c t i o n   w i l l   b e   i n c o r r e c t .  
     *   @ p a r a m     R C C _ C l o c k s   p o i n t e r   t o   a   @ r e f   L L _ R C C _ C l o c k s T y p e D e f   s t r u c t u r e   w h i c h   w i l l   h o l d   t h e   c l o c k s   f r e q u e n c i e s  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ R C C _ G e t S y s t e m C l o c k s F r e q ( L L _ R C C _ C l o c k s T y p e D e f   * R C C _ C l o c k s )  
 {  
     / *   G e t   S Y S C L K   f r e q u e n c y   * /  
     R C C _ C l o c k s - > S Y S C L K _ F r e q u e n c y   =   R C C _ G e t S y s t e m C l o c k F r e q ( ) ;  
  
     / *   H C L K   c l o c k   f r e q u e n c y   * /  
     R C C _ C l o c k s - > H C L K _ F r e q u e n c y       =   R C C _ G e t H C L K C l o c k F r e q ( R C C _ C l o c k s - > S Y S C L K _ F r e q u e n c y ) ;  
  
     / *   P C L K 1   c l o c k   f r e q u e n c y   * /  
     R C C _ C l o c k s - > P C L K 1 _ F r e q u e n c y     =   R C C _ G e t P C L K 1 C l o c k F r e q ( R C C _ C l o c k s - > H C L K _ F r e q u e n c y ) ;  
  
     / *   P C L K 2   c l o c k   f r e q u e n c y   * /  
     R C C _ C l o c k s - > P C L K 2 _ F r e q u e n c y     =   R C C _ G e t P C L K 2 C l o c k F r e q ( R C C _ C l o c k s - > H C L K _ F r e q u e n c y ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ I 2 S 2 S R C )  
 / * *  
     *   @ b r i e f     R e t u r n   I 2 S x   c l o c k   f r e q u e n c y  
     *   @ p a r a m     I 2 S x S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 2 _ C L K S O U R C E  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 3 _ C L K S O U R C E  
     *   @ r e t v a l   I 2 S   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   L L _ R C C _ G e t I 2 S C l o c k F r e q ( u i n t 3 2 _ t   I 2 S x S o u r c e )  
 {  
     u i n t 3 2 _ t   i 2 s _ f r e q u e n c y   =   L L _ R C C _ P E R I P H _ F R E Q U E N C Y _ N O ;  
  
     / *   C h e c k   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ L L _ R C C _ I 2 S _ C L K S O U R C E ( I 2 S x S o u r c e ) ) ;  
  
     / *   I 2 S 1 C L K   c l o c k   f r e q u e n c y   * /  
     s w i t c h   ( L L _ R C C _ G e t I 2 S C l o c k S o u r c e ( I 2 S x S o u r c e ) )  
     {  
         c a s e   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ S Y S C L K :                 / * ! <   S y s t e m   c l o c k   s e l e c t e d   a s   I 2 S   c l o c k   s o u r c e   * /  
         c a s e   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ S Y S C L K :  
             i 2 s _ f r e q u e n c y   =   R C C _ G e t S y s t e m C l o c k F r e q ( ) ;  
             b r e a k ;  
  
         c a s e   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ P L L I 2 S _ V C O :         / * ! <   P L L I 2 S   o s c i l l a t o r   c l o c k   s e l e c t e d   a s   I 2 S   c l o c k   s o u r c e   * /  
         c a s e   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ P L L I 2 S _ V C O :  
         d e f a u l t :  
             i 2 s _ f r e q u e n c y   =   R C C _ P L L I 2 S _ G e t F r e q D o m a i n _ I 2 S ( )   *   2 U ;  
             b r e a k ;  
     }  
  
     r e t u r n   i 2 s _ f r e q u e n c y ;  
 }  
 # e n d i f   / *   R C C _ C F G R 2 _ I 2 S 2 S R C   * /  
  
 # i f   d e f i n e d ( U S B )   | |   d e f i n e d ( U S B _ O T G _ F S )  
 / * *  
     *   @ b r i e f     R e t u r n   U S B x   c l o c k   f r e q u e n c y  
     *   @ p a r a m     U S B x S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E  
     *   @ r e t v a l   U S B   c l o c k   f r e q u e n c y   ( i n   H z )  
     *                   @ a r g   @ r e f   L L _ R C C _ P E R I P H _ F R E Q U E N C Y _ N O   i n d i c a t e s   t h a t   o s c i l l a t o r   ( H S I ) ,   H S E   o r   P L L   i s   n o t   r e a d y  
     * /  
 u i n t 3 2 _ t   L L _ R C C _ G e t U S B C l o c k F r e q ( u i n t 3 2 _ t   U S B x S o u r c e )  
 {  
     u i n t 3 2 _ t   u s b _ f r e q u e n c y   =   L L _ R C C _ P E R I P H _ F R E Q U E N C Y _ N O ;  
  
     / *   C h e c k   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ L L _ R C C _ U S B _ C L K S O U R C E ( U S B x S o u r c e ) ) ;  
  
     / *   U S B C L K   c l o c k   f r e q u e n c y   * /  
     s w i t c h   ( L L _ R C C _ G e t U S B C l o c k S o u r c e ( U S B x S o u r c e ) )  
     {  
 # i f   d e f i n e d ( R C C _ C F G R _ U S B P R E )  
         c a s e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L :                 / *   P L L   c l o c k   u s e d   a s   U S B   c l o c k   s o u r c e   * /  
             i f   ( L L _ R C C _ P L L _ I s R e a d y ( ) )  
             {  
                 u s b _ f r e q u e n c y   =   R C C _ P L L _ G e t F r e q D o m a i n _ S Y S ( ) ;  
             }  
             b r e a k ;  
  
         c a s e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 1 _ 5 :                 / *   P L L   c l o c k   d i v i d e d   b y   1 . 5   u s e d   a s   U S B   c l o c k   s o u r c e   * /  
         d e f a u l t :  
             i f   ( L L _ R C C _ P L L _ I s R e a d y ( ) )  
             {  
                 u s b _ f r e q u e n c y   =   ( R C C _ P L L _ G e t F r e q D o m a i n _ S Y S ( )   *   3 U )   /   2 U ;  
             }  
             b r e a k ;  
 # e n d i f   / *   R C C _ C F G R _ U S B P R E   * /  
 # i f   d e f i n e d ( R C C _ C F G R _ O T G F S P R E )  
         / *   U S B C L K   =   P L L V C O / 2  
                             =   ( 2   x   P L L C L K )   /   2  
                             =   P L L C L K   * /  
         c a s e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 2 :                 / *   P L L   c l o c k   u s e d   a s   U S B   c l o c k   s o u r c e   * /  
             i f   ( L L _ R C C _ P L L _ I s R e a d y ( ) )  
             {  
                 u s b _ f r e q u e n c y   =   R C C _ P L L _ G e t F r e q D o m a i n _ S Y S ( ) ;  
             }  
             b r e a k ;  
  
         / *   U S B C L K   =   P L L V C O / 3  
                             =   ( 2   x   P L L C L K )   /   3   * /  
         c a s e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 3 :                 / *   P L L   c l o c k   d i v i d e d   b y   3   u s e d   a s   U S B   c l o c k   s o u r c e   * /  
         d e f a u l t :  
             i f   ( L L _ R C C _ P L L _ I s R e a d y ( ) )  
             {  
                 u s b _ f r e q u e n c y   =   ( R C C _ P L L _ G e t F r e q D o m a i n _ S Y S ( )   *   2 U )   /   3 U ;  
             }  
             b r e a k ;  
 # e n d i f   / *   R C C _ C F G R _ O T G F S P R E   * /  
     }  
  
     r e t u r n   u s b _ f r e q u e n c y ;  
 }  
 # e n d i f   / *   U S B   * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   A D C x   c l o c k   f r e q u e n c y  
     *   @ p a r a m     A D C x S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S O U R C E  
     *   @ r e t v a l   A D C   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   L L _ R C C _ G e t A D C C l o c k F r e q ( u i n t 3 2 _ t   A D C x S o u r c e )  
 {  
     u i n t 3 2 _ t   a d c _ p r e s c a l e r   =   0 U ;  
     u i n t 3 2 _ t   a d c _ f r e q u e n c y   =   0 U ;  
  
     / *   C h e c k   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ L L _ R C C _ A D C _ C L K S O U R C E ( A D C x S o u r c e ) ) ;  
  
     / *   G e t   A D C   p r e s c a l e r   * /  
     a d c _ p r e s c a l e r   =   L L _ R C C _ G e t A D C C l o c k S o u r c e ( A D C x S o u r c e ) ;  
  
     / *   A D C   f r e q u e n c y   =   P C L K 2   f r e q u e n c y   /   A D C   p r e s c a l e r   ( 2 ,   4 ,   6   o r   8 )   * /  
     a d c _ f r e q u e n c y   =   R C C _ G e t P C L K 2 C l o c k F r e q ( R C C _ G e t H C L K C l o c k F r e q ( R C C _ G e t S y s t e m C l o c k F r e q ( ) ) )  
                                     /   ( ( ( a d c _ p r e s c a l e r   > >   P O S I T I O N _ V A L ( A D C x S o u r c e ) )   +   1 U )   *   2 U ) ;  
  
     r e t u r n   a d c _ f r e q u e n c y ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   R C C _ L L _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   S Y S T E M   c l o c k   f r e q u e n c y  
     *   @ r e t v a l   S Y S T E M   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   R C C _ G e t S y s t e m C l o c k F r e q ( v o i d )  
 {  
     u i n t 3 2 _ t   f r e q u e n c y   =   0 U ;  
  
     / *   G e t   S Y S C L K   s o u r c e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     s w i t c h   ( L L _ R C C _ G e t S y s C l k S o u r c e ( ) )  
     {  
         c a s e   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ H S I :     / *   H S I   u s e d   a s   s y s t e m   c l o c k     s o u r c e   * /  
             f r e q u e n c y   =   H S I _ V A L U E ;  
             b r e a k ;  
  
         c a s e   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ H S E :     / *   H S E   u s e d   a s   s y s t e m   c l o c k     s o u r c e   * /  
             f r e q u e n c y   =   H S E _ V A L U E ;  
             b r e a k ;  
  
         c a s e   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ P L L :     / *   P L L   u s e d   a s   s y s t e m   c l o c k     s o u r c e   * /  
             f r e q u e n c y   =   R C C _ P L L _ G e t F r e q D o m a i n _ S Y S ( ) ;  
             b r e a k ;  
  
         d e f a u l t :  
             f r e q u e n c y   =   H S I _ V A L U E ;  
             b r e a k ;  
     }  
  
     r e t u r n   f r e q u e n c y ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   H C L K   c l o c k   f r e q u e n c y  
     *   @ p a r a m     S Y S C L K _ F r e q u e n c y   S Y S C L K   c l o c k   f r e q u e n c y  
     *   @ r e t v a l   H C L K   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   R C C _ G e t H C L K C l o c k F r e q ( u i n t 3 2 _ t   S Y S C L K _ F r e q u e n c y )  
 {  
     / *   H C L K   c l o c k   f r e q u e n c y   * /  
     r e t u r n   _ _ L L _ R C C _ C A L C _ H C L K _ F R E Q ( S Y S C L K _ F r e q u e n c y ,   L L _ R C C _ G e t A H B P r e s c a l e r ( ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   P C L K 1   c l o c k   f r e q u e n c y  
     *   @ p a r a m     H C L K _ F r e q u e n c y   H C L K   c l o c k   f r e q u e n c y  
     *   @ r e t v a l   P C L K 1   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   R C C _ G e t P C L K 1 C l o c k F r e q ( u i n t 3 2 _ t   H C L K _ F r e q u e n c y )  
 {  
     / *   P C L K 1   c l o c k   f r e q u e n c y   * /  
     r e t u r n   _ _ L L _ R C C _ C A L C _ P C L K 1 _ F R E Q ( H C L K _ F r e q u e n c y ,   L L _ R C C _ G e t A P B 1 P r e s c a l e r ( ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   P C L K 2   c l o c k   f r e q u e n c y  
     *   @ p a r a m     H C L K _ F r e q u e n c y   H C L K   c l o c k   f r e q u e n c y  
     *   @ r e t v a l   P C L K 2   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   R C C _ G e t P C L K 2 C l o c k F r e q ( u i n t 3 2 _ t   H C L K _ F r e q u e n c y )  
 {  
     / *   P C L K 2   c l o c k   f r e q u e n c y   * /  
     r e t u r n   _ _ L L _ R C C _ C A L C _ P C L K 2 _ F R E Q ( H C L K _ F r e q u e n c y ,   L L _ R C C _ G e t A P B 2 P r e s c a l e r ( ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   P L L   c l o c k   f r e q u e n c y   u s e d   f o r   s y s t e m   d o m a i n  
     *   @ r e t v a l   P L L   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   R C C _ P L L _ G e t F r e q D o m a i n _ S Y S ( v o i d )  
 {  
     u i n t 3 2 _ t   p l l i n p u t f r e q   =   0 U ,   p l l s o u r c e   =   0 U ;  
  
     / *   P L L _ V C O   =   ( H S E _ V A L U E ,   H S I _ V A L U E   o r   P L L 2   /   P L L   P r e d i v i d e r )   *   P L L   M u l t i p l i c a t o r   * /  
  
     / *   G e t   P L L   s o u r c e   * /  
     p l l s o u r c e   =   L L _ R C C _ P L L _ G e t M a i n S o u r c e ( ) ;  
  
     s w i t c h   ( p l l s o u r c e )  
     {  
         c a s e   L L _ R C C _ P L L S O U R C E _ H S I _ D I V _ 2 :   / *   H S I   u s e d   a s   P L L   c l o c k   s o u r c e   * /  
             p l l i n p u t f r e q   =   H S I _ V A L U E   /   2 U ;  
             b r e a k ;  
  
         c a s e   L L _ R C C _ P L L S O U R C E _ H S E :               / *   H S E   u s e d   a s   P L L   c l o c k   s o u r c e   * /  
             p l l i n p u t f r e q   =   H S E _ V A L U E   /   ( L L _ R C C _ P L L _ G e t P r e d i v ( )   +   1 U ) ;  
             b r e a k ;  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
         c a s e   L L _ R C C _ P L L S O U R C E _ P L L 2 :               / *   P L L 2   u s e d   a s   P L L   c l o c k   s o u r c e   * /  
             p l l i n p u t f r e q   =   R C C _ P L L 2 _ G e t F r e q C l o c k F r e q ( )   /   ( L L _ R C C _ P L L _ G e t P r e d i v ( )   +   1 U ) ;  
             b r e a k ;  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
         d e f a u l t :  
             p l l i n p u t f r e q   =   H S I _ V A L U E   /   2 U ;  
             b r e a k ;  
     }  
     r e t u r n   _ _ L L _ R C C _ C A L C _ P L L C L K _ F R E Q ( p l l i n p u t f r e q ,   L L _ R C C _ P L L _ G e t M u l t i p l i c a t o r ( ) ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *  
     *   @ b r i e f     R e t u r n   P L L   c l o c k   f r e q u e n c y   u s e d   f o r   s y s t e m   d o m a i n  
     *   @ r e t v a l   P L L   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   R C C _ P L L 2 _ G e t F r e q C l o c k F r e q ( v o i d )  
 {  
     r e t u r n   _ _ L L _ R C C _ C A L C _ P L L 2 C L K _ F R E Q ( H S E _ V A L U E ,   L L _ R C C _ P L L 2 _ G e t M u l t i p l i c a t o r ( ) ,   L L _ R C C _ H S E _ G e t P r e d i v 2 ( ) ) ;  
 }  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *  
     *   @ b r i e f     R e t u r n   P L L   c l o c k   f r e q u e n c y   u s e d   f o r   s y s t e m   d o m a i n  
     *   @ r e t v a l   P L L   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 u i n t 3 2 _ t   R C C _ P L L I 2 S _ G e t F r e q D o m a i n _ I 2 S ( v o i d )  
 {  
     r e t u r n   _ _ L L _ R C C _ C A L C _ P L L I 2 S C L K _ F R E Q ( H S E _ V A L U E ,   L L _ R C C _ P L L I 2 S _ G e t M u l t i p l i c a t o r ( ) ,   L L _ R C C _ H S E _ G e t P r e d i v 2 ( ) ) ;  
 }  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   d e f i n e d ( R C C )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  