�?/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ g p i o . h 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       H e a d e r   f i l e   o f   G P I O   H A L   m o d u l e . 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ a t t e n t i o n 
     * 
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s . 
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 > 
     * 
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e , 
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e 
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t : 
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e 
     * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     * / 
 
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ G P I O _ H 
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ G P I O _ H 
 
 # i f d e f   _ _ c p l u s p l u s 
 e x t e r n   " C "   { 
 # e n d i f 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h " 
 
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   G P I O 
     *   @ { 
     * / 
 
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   G P I O _ E x p o r t e d _ T y p e s   G P I O   E x p o r t e d   T y p e s 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f   G P I O   I n i t   s t r u c t u r e   d e f i n i t i o n 
     * / 
 t y p e d e f   s t r u c t 
 { 
     u i n t 3 2 _ t   P i n ;               / * ! <   S p e c i f i e s   t h e   G P I O   p i n s   t o   b e   c o n f i g u r e d . 
                                                       T h i s   p a r a m e t e r   c a n   b e   a n y   v a l u e   o f   @ r e f   G P I O _ p i n s _ d e f i n e   * / 
 
     u i n t 3 2 _ t   M o d e ;             / * ! <   S p e c i f i e s   t h e   o p e r a t i n g   m o d e   f o r   t h e   s e l e c t e d   p i n s . 
                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   G P I O _ m o d e _ d e f i n e   * / 
 
     u i n t 3 2 _ t   P u l l ;             / * ! <   S p e c i f i e s   t h e   P u l l - u p   o r   P u l l - D o w n   a c t i v a t i o n   f o r   t h e   s e l e c t e d   p i n s . 
                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   G P I O _ p u l l _ d e f i n e   * / 
 
     u i n t 3 2 _ t   S p e e d ;           / * ! <   S p e c i f i e s   t h e   s p e e d   f o r   t h e   s e l e c t e d   p i n s . 
                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   G P I O _ s p e e d _ d e f i n e   * / 
 }   G P I O _ I n i t T y p e D e f ; 
 
 / * * 
     *   @ b r i e f     G P I O   B i t   S E T   a n d   B i t   R E S E T   e n u m e r a t i o n 
     * / 
 t y p e d e f   e n u m 
 { 
     G P I O _ P I N _ R E S E T   =   0 u , 
     G P I O _ P I N _ S E T 
 }   G P I O _ P i n S t a t e ; 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   G P I O _ E x p o r t e d _ C o n s t a n t s   G P I O   E x p o r t e d   C o n s t a n t s 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   G P I O _ p i n s _ d e f i n e   G P I O   p i n s   d e f i n e 
     *   @ { 
     * / 
 # d e f i n e   G P I O _ P I N _ 0                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 0 1 )     / *   P i n   0   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 1                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 0 2 )     / *   P i n   1   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 2                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 0 4 )     / *   P i n   2   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 3                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 0 8 )     / *   P i n   3   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 4                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 1 0 )     / *   P i n   4   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 5                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 2 0 )     / *   P i n   5   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 6                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 4 0 )     / *   P i n   6   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 7                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 8 0 )     / *   P i n   7   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 8                                   ( ( u i n t 1 6 _ t ) 0 x 0 1 0 0 )     / *   P i n   8   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 9                                   ( ( u i n t 1 6 _ t ) 0 x 0 2 0 0 )     / *   P i n   9   s e l e c t e d         * / 
 # d e f i n e   G P I O _ P I N _ 1 0                                 ( ( u i n t 1 6 _ t ) 0 x 0 4 0 0 )     / *   P i n   1 0   s e l e c t e d       * / 
 # d e f i n e   G P I O _ P I N _ 1 1                                 ( ( u i n t 1 6 _ t ) 0 x 0 8 0 0 )     / *   P i n   1 1   s e l e c t e d       * / 
 # d e f i n e   G P I O _ P I N _ 1 2                                 ( ( u i n t 1 6 _ t ) 0 x 1 0 0 0 )     / *   P i n   1 2   s e l e c t e d       * / 
 # d e f i n e   G P I O _ P I N _ 1 3                                 ( ( u i n t 1 6 _ t ) 0 x 2 0 0 0 )     / *   P i n   1 3   s e l e c t e d       * / 
 # d e f i n e   G P I O _ P I N _ 1 4                                 ( ( u i n t 1 6 _ t ) 0 x 4 0 0 0 )     / *   P i n   1 4   s e l e c t e d       * / 
 # d e f i n e   G P I O _ P I N _ 1 5                                 ( ( u i n t 1 6 _ t ) 0 x 8 0 0 0 )     / *   P i n   1 5   s e l e c t e d       * / 
 # d e f i n e   G P I O _ P I N _ A l l                               ( ( u i n t 1 6 _ t ) 0 x F F F F )     / *   A l l   p i n s   s e l e c t e d   * / 
 
 # d e f i n e   G P I O _ P I N _ M A S K                             0 x 0 0 0 0 F F F F u   / *   P I N   m a s k   f o r   a s s e r t   t e s t   * / 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   G P I O _ m o d e _ d e f i n e   G P I O   m o d e   d e f i n e 
     *   @ b r i e f   G P I O   C o n f i g u r a t i o n   M o d e 
     *                 E l e m e n t s   v a l u e s   c o n v e n t i o n :   0 x X 0 y z 0 0 Y Z 
     *                       -   X     :   G P I O   m o d e   o r   E X T I   M o d e 
     *                       -   y     :   E x t e r n a l   I T   o r   E v e n t   t r i g g e r   d e t e c t i o n 
     *                       -   z     :   I O   c o n f i g u r a t i o n   o n   E x t e r n a l   I T   o r   E v e n t 
     *                       -   Y     :   O u t p u t   t y p e   ( P u s h   P u l l   o r   O p e n   D r a i n ) 
     *                       -   Z     :   I O   D i r e c t i o n   m o d e   ( I n p u t ,   O u t p u t ,   A l t e r n a t e   o r   A n a l o g ) 
     *   @ { 
     * / 
 # d e f i n e     G P I O _ M O D E _ I N P U T                                                 0 x 0 0 0 0 0 0 0 0 u       / * ! <   I n p u t   F l o a t i n g   M o d e                                       * / 
 # d e f i n e     G P I O _ M O D E _ O U T P U T _ P P                                         0 x 0 0 0 0 0 0 0 1 u       / * ! <   O u t p u t   P u s h   P u l l   M o d e                                   * / 
 # d e f i n e     G P I O _ M O D E _ O U T P U T _ O D                                         0 x 0 0 0 0 0 0 1 1 u       / * ! <   O u t p u t   O p e n   D r a i n   M o d e                                 * / 
 # d e f i n e     G P I O _ M O D E _ A F _ P P                                                 0 x 0 0 0 0 0 0 0 2 u       / * ! <   A l t e r n a t e   F u n c t i o n   P u s h   P u l l   M o d e           * / 
 # d e f i n e     G P I O _ M O D E _ A F _ O D                                                 0 x 0 0 0 0 0 0 1 2 u       / * ! <   A l t e r n a t e   F u n c t i o n   O p e n   D r a i n   M o d e         * / 
 # d e f i n e     G P I O _ M O D E _ A F _ I N P U T                                           G P I O _ M O D E _ I N P U T                     / * ! <   A l t e r n a t e   F u n c t i o n   I n p u t   M o d e                   * / 
 
 # d e f i n e     G P I O _ M O D E _ A N A L O G                                               0 x 0 0 0 0 0 0 0 3 u       / * ! <   A n a l o g   M o d e     * / 
 
 # d e f i n e     G P I O _ M O D E _ I T _ R I S I N G                                         0 x 1 0 1 1 0 0 0 0 u       / * ! <   E x t e r n a l   I n t e r r u p t   M o d e   w i t h   R i s i n g   e d g e   t r i g g e r   d e t e c t i o n                     * / 
 # d e f i n e     G P I O _ M O D E _ I T _ F A L L I N G                                       0 x 1 0 2 1 0 0 0 0 u       / * ! <   E x t e r n a l   I n t e r r u p t   M o d e   w i t h   F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n                   * / 
 # d e f i n e     G P I O _ M O D E _ I T _ R I S I N G _ F A L L I N G                         0 x 1 0 3 1 0 0 0 0 u       / * ! <   E x t e r n a l   I n t e r r u p t   M o d e   w i t h   R i s i n g / F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n     * / 
 
 # d e f i n e     G P I O _ M O D E _ E V T _ R I S I N G                                       0 x 1 0 1 2 0 0 0 0 u       / * ! <   E x t e r n a l   E v e n t   M o d e   w i t h   R i s i n g   e d g e   t r i g g e r   d e t e c t i o n                               * / 
 # d e f i n e     G P I O _ M O D E _ E V T _ F A L L I N G                                     0 x 1 0 2 2 0 0 0 0 u       / * ! <   E x t e r n a l   E v e n t   M o d e   w i t h   F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n                             * / 
 # d e f i n e     G P I O _ M O D E _ E V T _ R I S I N G _ F A L L I N G                       0 x 1 0 3 2 0 0 0 0 u       / * ! <   E x t e r n a l   E v e n t   M o d e   w i t h   R i s i n g / F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n               * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   G P I O _ s p e e d _ d e f i n e     G P I O   s p e e d   d e f i n e 
     *   @ b r i e f   G P I O   O u t p u t   M a x i m u m   f r e q u e n c y 
     *   @ { 
     * / 
 # d e f i n e     G P I O _ S P E E D _ F R E Q _ L O W                             ( G P I O _ C R L _ M O D E 0 _ 1 )   / * ! <   L o w   s p e e d   * / 
 # d e f i n e     G P I O _ S P E E D _ F R E Q _ M E D I U M                       ( G P I O _ C R L _ M O D E 0 _ 0 )   / * ! <   M e d i u m   s p e e d   * / 
 # d e f i n e     G P I O _ S P E E D _ F R E Q _ H I G H                           ( G P I O _ C R L _ M O D E 0 )       / * ! <   H i g h   s p e e d   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   G P I O _ p u l l _ d e f i n e   G P I O   p u l l   d e f i n e 
     *   @ b r i e f   G P I O   P u l l - U p   o r   P u l l - D o w n   A c t i v a t i o n 
     *   @ { 
     * / 
 # d e f i n e     G P I O _ N O P U L L                 0 x 0 0 0 0 0 0 0 0 u       / * ! <   N o   P u l l - u p   o r   P u l l - d o w n   a c t i v a t i o n     * / 
 # d e f i n e     G P I O _ P U L L U P                 0 x 0 0 0 0 0 0 0 1 u       / * ! <   P u l l - u p   a c t i v a t i o n                                     * / 
 # d e f i n e     G P I O _ P U L L D O W N             0 x 0 0 0 0 0 0 0 2 u       / * ! <   P u l l - d o w n   a c t i v a t i o n                                 * / 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   G P I O _ E x p o r t e d _ M a c r o s   G P I O   E x p o r t e d   M a c r o s 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     C h e c k s   w h e t h e r   t h e   s p e c i f i e d   E X T I   l i n e   f l a g   i s   s e t   o r   n o t . 
     *   @ p a r a m     _ _ E X T I _ L I N E _ _ :   s p e c i f i e s   t h e   E X T I   l i n e   f l a g   t o   c h e c k . 
     *                   T h i s   p a r a m e t e r   c a n   b e   G P I O _ P I N _ x   w h e r e   x   c a n   b e ( 0 . . 1 5 ) 
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ E X T I _ L I N E _ _   ( S E T   o r   R E S E T ) . 
     * / 
 # d e f i n e   _ _ H A L _ G P I O _ E X T I _ G E T _ F L A G ( _ _ E X T I _ L I N E _ _ )   ( E X T I - > P R   &   ( _ _ E X T I _ L I N E _ _ ) ) 
 
 / * * 
     *   @ b r i e f     C l e a r s   t h e   E X T I ' s   l i n e   p e n d i n g   f l a g s . 
     *   @ p a r a m     _ _ E X T I _ L I N E _ _ :   s p e c i f i e s   t h e   E X T I   l i n e s   f l a g s   t o   c l e a r . 
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   G P I O _ P I N _ x   w h e r e   x   c a n   b e   ( 0 . . 1 5 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ G P I O _ E X T I _ C L E A R _ F L A G ( _ _ E X T I _ L I N E _ _ )   ( E X T I - > P R   =   ( _ _ E X T I _ L I N E _ _ ) ) 
 
 / * * 
     *   @ b r i e f     C h e c k s   w h e t h e r   t h e   s p e c i f i e d   E X T I   l i n e   i s   a s s e r t e d   o r   n o t . 
     *   @ p a r a m     _ _ E X T I _ L I N E _ _ :   s p e c i f i e s   t h e   E X T I   l i n e   t o   c h e c k . 
     *                     T h i s   p a r a m e t e r   c a n   b e   G P I O _ P I N _ x   w h e r e   x   c a n   b e ( 0 . . 1 5 ) 
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ E X T I _ L I N E _ _   ( S E T   o r   R E S E T ) . 
     * / 
 # d e f i n e   _ _ H A L _ G P I O _ E X T I _ G E T _ I T ( _ _ E X T I _ L I N E _ _ )   ( E X T I - > P R   &   ( _ _ E X T I _ L I N E _ _ ) ) 
 
 / * * 
     *   @ b r i e f     C l e a r s   t h e   E X T I ' s   l i n e   p e n d i n g   b i t s . 
     *   @ p a r a m     _ _ E X T I _ L I N E _ _ :   s p e c i f i e s   t h e   E X T I   l i n e s   t o   c l e a r . 
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   G P I O _ P I N _ x   w h e r e   x   c a n   b e   ( 0 . . 1 5 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ G P I O _ E X T I _ C L E A R _ I T ( _ _ E X T I _ L I N E _ _ )   ( E X T I - > P R   =   ( _ _ E X T I _ L I N E _ _ ) ) 
 
 / * * 
     *   @ b r i e f     G e n e r a t e s   a   S o f t w a r e   i n t e r r u p t   o n   s e l e c t e d   E X T I   l i n e . 
     *   @ p a r a m     _ _ E X T I _ L I N E _ _ :   s p e c i f i e s   t h e   E X T I   l i n e   t o   c h e c k . 
     *                     T h i s   p a r a m e t e r   c a n   b e   G P I O _ P I N _ x   w h e r e   x   c a n   b e ( 0 . . 1 5 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ G P I O _ E X T I _ G E N E R A T E _ S W I T ( _ _ E X T I _ L I N E _ _ )   ( E X T I - > S W I E R   | =   ( _ _ E X T I _ L I N E _ _ ) ) 
 / * * 
     *   @ } 
     * / 
 
 / *   I n c l u d e   G P I O   H A L   E x t e n s i o n   m o d u l e   * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ g p i o _ e x . h " 
 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ a d d t o g r o u p   G P I O _ E x p o r t e d _ F u n c t i o n s 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   G P I O _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1 
     *   @ { 
     * / 
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 v o i d     H A L _ G P I O _ I n i t ( G P I O _ T y p e D e f     * G P I O x ,   G P I O _ I n i t T y p e D e f   * G P I O _ I n i t ) ; 
 v o i d     H A L _ G P I O _ D e I n i t ( G P I O _ T y p e D e f     * G P I O x ,   u i n t 3 2 _ t   G P I O _ P i n ) ; 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   G P I O _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2 
     *   @ { 
     * / 
 / *   I O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 G P I O _ P i n S t a t e   H A L _ G P I O _ R e a d P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ) ; 
 v o i d   H A L _ G P I O _ W r i t e P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ,   G P I O _ P i n S t a t e   P i n S t a t e ) ; 
 v o i d   H A L _ G P I O _ T o g g l e P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ G P I O _ L o c k P i n ( G P I O _ T y p e D e f   * G P I O x ,   u i n t 1 6 _ t   G P I O _ P i n ) ; 
 v o i d   H A L _ G P I O _ E X T I _ I R Q H a n d l e r ( u i n t 1 6 _ t   G P I O _ P i n ) ; 
 v o i d   H A L _ G P I O _ E X T I _ C a l l b a c k ( u i n t 1 6 _ t   G P I O _ P i n ) ; 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   G P I O _ P r i v a t e _ C o n s t a n t s   G P I O   P r i v a t e   C o n s t a n t s 
     *   @ { 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   G P I O _ P r i v a t e _ M a c r o s   G P I O   P r i v a t e   M a c r o s 
     *   @ { 
     * / 
 # d e f i n e   I S _ G P I O _ P I N _ A C T I O N ( A C T I O N )   ( ( ( A C T I O N )   = =   G P I O _ P I N _ R E S E T )   | |   ( ( A C T I O N )   = =   G P I O _ P I N _ S E T ) ) 
 # d e f i n e   I S _ G P I O _ P I N ( P I N )                       ( ( ( ( ( u i n t 3 2 _ t ) P I N )   &   G P I O _ P I N _ M A S K   )   ! =   0 x 0 0 u )   & &   ( ( ( ( u i n t 3 2 _ t ) P I N )   &   ~ G P I O _ P I N _ M A S K )   = =   0 x 0 0 u ) ) 
 # d e f i n e   I S _ G P I O _ M O D E ( M O D E )   ( ( ( M O D E )   = =   G P I O _ M O D E _ I N P U T )                             | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ O U T P U T _ P P )                     | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ O U T P U T _ O D )                     | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ A F _ P P )                             | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ A F _ O D )                             | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ I T _ R I S I N G )                     | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ I T _ F A L L I N G )                   | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ I T _ R I S I N G _ F A L L I N G )     | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ E V T _ R I S I N G )                   | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ E V T _ F A L L I N G )                 | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ E V T _ R I S I N G _ F A L L I N G )   | | \ 
                                                         ( ( M O D E )   = =   G P I O _ M O D E _ A N A L O G ) ) 
 # d e f i n e   I S _ G P I O _ S P E E D ( S P E E D )   ( ( ( S P E E D )   = =   G P I O _ S P E E D _ F R E Q _ L O W )   | |   \ 
                                                             ( ( S P E E D )   = =   G P I O _ S P E E D _ F R E Q _ M E D I U M )   | |   ( ( S P E E D )   = =   G P I O _ S P E E D _ F R E Q _ H I G H ) ) 
 # d e f i n e   I S _ G P I O _ P U L L ( P U L L )   ( ( ( P U L L )   = =   G P I O _ N O P U L L )   | |   ( ( P U L L )   = =   G P I O _ P U L L U P )   | |   \ 
                                                         ( ( P U L L )   = =   G P I O _ P U L L D O W N ) ) 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   G P I O _ P r i v a t e _ F u n c t i o n s   G P I O   P r i v a t e   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ G P I O _ H   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 