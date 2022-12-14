??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ r c c . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   R C C   L L   m o d u l e .  
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
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ R C C _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ R C C _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x . h "  
  
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
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   R C C _ L L _ P r i v a t e _ M a c r o s   R C C   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / * U S E _ F U L L _ L L _ D R I V E R * /  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   R C C _ L L _ E x p o r t e d _ T y p e s   R C C   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   L L _ E S _ C L O C K _ F R E Q   C l o c k s   F r e q u e n c y   S t r u c t u r e  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R C C   C l o c k s   F r e q u e n c y   S t r u c t u r e  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   S Y S C L K _ F r e q u e n c y ;                 / * ! <   S Y S C L K   c l o c k   f r e q u e n c y   * /  
     u i n t 3 2 _ t   H C L K _ F r e q u e n c y ;                     / * ! <   H C L K   c l o c k   f r e q u e n c y   * /  
     u i n t 3 2 _ t   P C L K 1 _ F r e q u e n c y ;                   / * ! <   P C L K 1   c l o c k   f r e q u e n c y   * /  
     u i n t 3 2 _ t   P C L K 2 _ F r e q u e n c y ;                   / * ! <   P C L K 2   c l o c k   f r e q u e n c y   * /  
 }   L L _ R C C _ C l o c k s T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R C C _ L L _ E x p o r t e d _ C o n s t a n t s   R C C   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ O S C _ V A L U E S   O s c i l l a t o r   V a l u e s   a d a p t a t i o n  
     *   @ b r i e f         D e f i n e s   u s e d   t o   a d a p t   v a l u e s   o f   d i f f e r e n t   o s c i l l a t o r s  
     *   @ n o t e           T h e s e   v a l u e s   c o u l d   b e   m o d i f i e d   i n   t h e   u s e r   e n v i r o n m e n t   a c c o r d i n g   t o  
     *                       H W   s e t - u p .  
     *   @ {  
     * /  
 # i f   ! d e f i n e d     ( H S E _ V A L U E )  
 # d e f i n e   H S E _ V A L U E         8 0 0 0 0 0 0 U     / * ! <   V a l u e   o f   t h e   H S E   o s c i l l a t o r   i n   H z   * /  
 # e n d i f   / *   H S E _ V A L U E   * /  
  
 # i f   ! d e f i n e d     ( H S I _ V A L U E )  
 # d e f i n e   H S I _ V A L U E         8 0 0 0 0 0 0 U     / * ! <   V a l u e   o f   t h e   H S I   o s c i l l a t o r   i n   H z   * /  
 # e n d i f   / *   H S I _ V A L U E   * /  
  
 # i f   ! d e f i n e d     ( L S E _ V A L U E )  
 # d e f i n e   L S E _ V A L U E         3 2 7 6 8 U         / * ! <   V a l u e   o f   t h e   L S E   o s c i l l a t o r   i n   H z   * /  
 # e n d i f   / *   L S E _ V A L U E   * /  
  
 # i f   ! d e f i n e d     ( L S I _ V A L U E )  
 # d e f i n e   L S I _ V A L U E         4 0 0 0 0 U         / * ! <   V a l u e   o f   t h e   L S I   o s c i l l a t o r   i n   H z   * /  
 # e n d i f   / *   L S I _ V A L U E   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ C L E A R _ F L A G   C l e a r   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ R C C _ W r i t e R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ C I R _ L S I R D Y C                                 R C C _ C I R _ L S I R D Y C           / * ! <   L S I   R e a d y   I n t e r r u p t   C l e a r   * /  
 # d e f i n e   L L _ R C C _ C I R _ L S E R D Y C                                 R C C _ C I R _ L S E R D Y C           / * ! <   L S E   R e a d y   I n t e r r u p t   C l e a r   * /  
 # d e f i n e   L L _ R C C _ C I R _ H S I R D Y C                                 R C C _ C I R _ H S I R D Y C           / * ! <   H S I   R e a d y   I n t e r r u p t   C l e a r   * /  
 # d e f i n e   L L _ R C C _ C I R _ H S E R D Y C                                 R C C _ C I R _ H S E R D Y C           / * ! <   H S E   R e a d y   I n t e r r u p t   C l e a r   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L R D Y C                                 R C C _ C I R _ P L L R D Y C           / * ! <   P L L   R e a d y   I n t e r r u p t   C l e a r   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L 3 R D Y C                               R C C _ C I R _ P L L 3 R D Y C         / * ! <   P L L 3 ( P L L I 2 S )   R e a d y   I n t e r r u p t   C l e a r   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L 2 R D Y C                               R C C _ C I R _ P L L 2 R D Y C         / * ! <   P L L 2   R e a d y   I n t e r r u p t   C l e a r   * /  
 # d e f i n e   L L _ R C C _ C I R _ C S S C                                       R C C _ C I R _ C S S C                 / * ! <   C l o c k   S e c u r i t y   S y s t e m   I n t e r r u p t   C l e a r   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ G E T _ F L A G   G e t   F l a g s   D e f i n e s  
     *   @ b r i e f         F l a g s   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ R C C _ R e a d R e g   f u n c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ C I R _ L S I R D Y F                                 R C C _ C I R _ L S I R D Y F           / * ! <   L S I   R e a d y   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C I R _ L S E R D Y F                                 R C C _ C I R _ L S E R D Y F           / * ! <   L S E   R e a d y   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C I R _ H S I R D Y F                                 R C C _ C I R _ H S I R D Y F           / * ! <   H S I   R e a d y   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C I R _ H S E R D Y F                                 R C C _ C I R _ H S E R D Y F           / * ! <   H S E   R e a d y   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L R D Y F                                 R C C _ C I R _ P L L R D Y F           / * ! <   P L L   R e a d y   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L 3 R D Y F                               R C C _ C I R _ P L L 3 R D Y F         / * ! <   P L L 3 ( P L L I 2 S )   R e a d y   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L 2 R D Y F                               R C C _ C I R _ P L L 2 R D Y F         / * ! <   P L L 2   R e a d y   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C I R _ C S S F                                       R C C _ C I R _ C S S F                 / * ! <   C l o c k   S e c u r i t y   S y s t e m   I n t e r r u p t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C S R _ P I N R S T F                                 R C C _ C S R _ P I N R S T F           / * ! <   P I N   r e s e t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C S R _ P O R R S T F                                 R C C _ C S R _ P O R R S T F           / * ! <   P O R / P D R   r e s e t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C S R _ S F T R S T F                                 R C C _ C S R _ S F T R S T F           / * ! <   S o f t w a r e   R e s e t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C S R _ I W D G R S T F                               R C C _ C S R _ I W D G R S T F         / * ! <   I n d e p e n d e n t   W a t c h d o g   r e s e t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C S R _ W W D G R S T F                               R C C _ C S R _ W W D G R S T F         / * ! <   W i n d o w   w a t c h d o g   r e s e t   f l a g   * /  
 # d e f i n e   L L _ R C C _ C S R _ L P W R R S T F                               R C C _ C S R _ L P W R R S T F         / * ! <   L o w - P o w e r   r e s e t   f l a g   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ I T   I T   D e f i n e s  
     *   @ b r i e f         I T   d e f i n e s   w h i c h   c a n   b e   u s e d   w i t h   L L _ R C C _ R e a d R e g   a n d     L L _ R C C _ W r i t e R e g   f u n c t i o n s  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ C I R _ L S I R D Y I E                               R C C _ C I R _ L S I R D Y I E             / * ! <   L S I   R e a d y   I n t e r r u p t   E n a b l e   * /  
 # d e f i n e   L L _ R C C _ C I R _ L S E R D Y I E                               R C C _ C I R _ L S E R D Y I E             / * ! <   L S E   R e a d y   I n t e r r u p t   E n a b l e   * /  
 # d e f i n e   L L _ R C C _ C I R _ H S I R D Y I E                               R C C _ C I R _ H S I R D Y I E             / * ! <   H S I   R e a d y   I n t e r r u p t   E n a b l e   * /  
 # d e f i n e   L L _ R C C _ C I R _ H S E R D Y I E                               R C C _ C I R _ H S E R D Y I E             / * ! <   H S E   R e a d y   I n t e r r u p t   E n a b l e   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L R D Y I E                               R C C _ C I R _ P L L R D Y I E             / * ! <   P L L   R e a d y   I n t e r r u p t   E n a b l e   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L 3 R D Y I E                             R C C _ C I R _ P L L 3 R D Y I E           / * ! <   P L L 3 ( P L L I 2 S )   R e a d y   I n t e r r u p t   E n a b l e   * /  
 # d e f i n e   L L _ R C C _ C I R _ P L L 2 R D Y I E                             R C C _ C I R _ P L L 2 R D Y I E           / * ! <   P L L 2   R e a d y   I n t e r r u p t   E n a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 2 )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ H S E _ P R E D I V 2 _ D I V   H S E   P R E D I V 2   D i v i s i o n   f a c t o r  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1       / * ! <   P R E D I V 2   i n p u t   c l o c k   n o t   d i v i d e d   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 2                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 2       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   2   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 3                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 3       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   3   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 4                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 4       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   4   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 5                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 5       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   5   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 6                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 6       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   6   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 7                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 7       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   7   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 8                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 8       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   8   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 9                       R C C _ C F G R 2 _ P R E D I V 2 _ D I V 9       / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   9   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 0                     R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1 0     / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   1 0   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 1                     R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1 1     / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   1 1   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 2                     R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1 2     / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   1 2   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 3                     R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1 3     / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   1 3   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 4                     R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1 4     / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   1 4   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 5                     R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1 5     / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   1 5   * /  
 # d e f i n e   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 6                     R C C _ C F G R 2 _ P R E D I V 2 _ D I V 1 6     / * ! <   P R E D I V 2   i n p u t   c l o c k   d i v i d e d   b y   1 6   * /  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   R C C _ C F G R 2 _ P R E D I V 2   * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ S Y S _ C L K S O U R C E     S y s t e m   c l o c k   s w i t c h  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ S Y S _ C L K S O U R C E _ H S I                       R C C _ C F G R _ S W _ H S I         / * ! <   H S I   s e l e c t i o n   a s   s y s t e m   c l o c k   * /  
 # d e f i n e   L L _ R C C _ S Y S _ C L K S O U R C E _ H S E                       R C C _ C F G R _ S W _ H S E         / * ! <   H S E   s e l e c t i o n   a s   s y s t e m   c l o c k   * /  
 # d e f i n e   L L _ R C C _ S Y S _ C L K S O U R C E _ P L L                       R C C _ C F G R _ S W _ P L L         / * ! <   P L L   s e l e c t i o n   a s   s y s t e m   c l o c k   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ S Y S _ C L K S O U R C E _ S T A T U S     S y s t e m   c l o c k   s w i t c h   s t a t u s  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ H S I         R C C _ C F G R _ S W S _ H S I       / * ! <   H S I   u s e d   a s   s y s t e m   c l o c k   * /  
 # d e f i n e   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ H S E         R C C _ C F G R _ S W S _ H S E       / * ! <   H S E   u s e d   a s   s y s t e m   c l o c k   * /  
 # d e f i n e   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ P L L         R C C _ C F G R _ S W S _ P L L       / * ! <   P L L   u s e d   a s   s y s t e m   c l o c k   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ S Y S C L K _ D I V     A H B   p r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 1                                 R C C _ C F G R _ H P R E _ D I V 1       / * ! <   S Y S C L K   n o t   d i v i d e d   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 2                                 R C C _ C F G R _ H P R E _ D I V 2       / * ! <   S Y S C L K   d i v i d e d   b y   2   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 4                                 R C C _ C F G R _ H P R E _ D I V 4       / * ! <   S Y S C L K   d i v i d e d   b y   4   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 8                                 R C C _ C F G R _ H P R E _ D I V 8       / * ! <   S Y S C L K   d i v i d e d   b y   8   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 1 6                               R C C _ C F G R _ H P R E _ D I V 1 6     / * ! <   S Y S C L K   d i v i d e d   b y   1 6   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 6 4                               R C C _ C F G R _ H P R E _ D I V 6 4     / * ! <   S Y S C L K   d i v i d e d   b y   6 4   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 1 2 8                             R C C _ C F G R _ H P R E _ D I V 1 2 8   / * ! <   S Y S C L K   d i v i d e d   b y   1 2 8   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 2 5 6                             R C C _ C F G R _ H P R E _ D I V 2 5 6   / * ! <   S Y S C L K   d i v i d e d   b y   2 5 6   * /  
 # d e f i n e   L L _ R C C _ S Y S C L K _ D I V _ 5 1 2                             R C C _ C F G R _ H P R E _ D I V 5 1 2   / * ! <   S Y S C L K   d i v i d e d   b y   5 1 2   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ A P B 1 _ D I V     A P B   l o w - s p e e d   p r e s c a l e r   ( A P B 1 )  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ A P B 1 _ D I V _ 1                                     R C C _ C F G R _ P P R E 1 _ D I V 1     / * ! <   H C L K   n o t   d i v i d e d   * /  
 # d e f i n e   L L _ R C C _ A P B 1 _ D I V _ 2                                     R C C _ C F G R _ P P R E 1 _ D I V 2     / * ! <   H C L K   d i v i d e d   b y   2   * /  
 # d e f i n e   L L _ R C C _ A P B 1 _ D I V _ 4                                     R C C _ C F G R _ P P R E 1 _ D I V 4     / * ! <   H C L K   d i v i d e d   b y   4   * /  
 # d e f i n e   L L _ R C C _ A P B 1 _ D I V _ 8                                     R C C _ C F G R _ P P R E 1 _ D I V 8     / * ! <   H C L K   d i v i d e d   b y   8   * /  
 # d e f i n e   L L _ R C C _ A P B 1 _ D I V _ 1 6                                   R C C _ C F G R _ P P R E 1 _ D I V 1 6   / * ! <   H C L K   d i v i d e d   b y   1 6   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ A P B 2 _ D I V     A P B   h i g h - s p e e d   p r e s c a l e r   ( A P B 2 )  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ A P B 2 _ D I V _ 1                                     R C C _ C F G R _ P P R E 2 _ D I V 1     / * ! <   H C L K   n o t   d i v i d e d   * /  
 # d e f i n e   L L _ R C C _ A P B 2 _ D I V _ 2                                     R C C _ C F G R _ P P R E 2 _ D I V 2     / * ! <   H C L K   d i v i d e d   b y   2   * /  
 # d e f i n e   L L _ R C C _ A P B 2 _ D I V _ 4                                     R C C _ C F G R _ P P R E 2 _ D I V 4     / * ! <   H C L K   d i v i d e d   b y   4   * /  
 # d e f i n e   L L _ R C C _ A P B 2 _ D I V _ 8                                     R C C _ C F G R _ P P R E 2 _ D I V 8     / * ! <   H C L K   d i v i d e d   b y   8   * /  
 # d e f i n e   L L _ R C C _ A P B 2 _ D I V _ 1 6                                   R C C _ C F G R _ P P R E 2 _ D I V 1 6   / * ! <   H C L K   d i v i d e d   b y   1 6   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ M C O 1 S O U R C E     M C O 1   S O U R C E   s e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ N O C L O C K                     R C C _ C F G R _ M C O _ N O C L O C K             / * ! <   M C O   o u t p u t   d i s a b l e d ,   n o   c l o c k   o n   M C O   * /  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ S Y S C L K                       R C C _ C F G R _ M C O _ S Y S C L K               / * ! <   S Y S C L K   s e l e c t i o n   a s   M C O   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ H S I                             R C C _ C F G R _ M C O _ H S I                     / * ! <   H S I   s e l e c t i o n   a s   M C O   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ H S E                             R C C _ C F G R _ M C O _ H S E                     / * ! <   H S E   s e l e c t i o n   a s   M C O   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ P L L C L K _ D I V _ 2           R C C _ C F G R _ M C O _ P L L C L K _ D I V 2     / * ! <   P L L   c l o c k   d i v i d e d   b y   2 * /  
 # i f   d e f i n e d ( R C C _ C F G R _ M C O _ P L L 2 C L K )  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ P L L 2 C L K                     R C C _ C F G R _ M C O _ P L L 2 C L K             / * ! <   P L L 2   c l o c k   s e l e c t e d   a s   M C O   s o u r c e * /  
 # e n d i f   / *   R C C _ C F G R _ M C O _ P L L 2 C L K   * /  
 # i f   d e f i n e d ( R C C _ C F G R _ M C O _ P L L 3 C L K _ D I V 2 )  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ P L L I 2 S C L K _ D I V 2       R C C _ C F G R _ M C O _ P L L 3 C L K _ D I V 2   / * ! <   P L L I 2 S   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   M C O   s o u r c e * /  
 # e n d i f   / *   R C C _ C F G R _ M C O _ P L L 3 C L K _ D I V 2   * /  
 # i f   d e f i n e d ( R C C _ C F G R _ M C O _ E X T _ H S E )  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ E X T _ H S E                     R C C _ C F G R _ M C O _ E X T _ H S E             / * ! <   X T 1   e x t e r n a l   3 - 2 5   M H z   o s c i l l a t o r   c l o c k   s e l e c t e d   a s   M C O   s o u r c e   * /  
 # e n d i f   / *   R C C _ C F G R _ M C O _ E X T _ H S E   * /  
 # i f   d e f i n e d ( R C C _ C F G R _ M C O _ P L L 3 C L K )  
 # d e f i n e   L L _ R C C _ M C O 1 S O U R C E _ P L L I 2 S C L K                 R C C _ C F G R _ M C O _ P L L 3 C L K             / * ! <   P L L I 2 S   c l o c k   s e l e c t e d   a s   M C O   s o u r c e   * /  
 # e n d i f   / *   R C C _ C F G R _ M C O _ P L L 3 C L K   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ P E R I P H _ F R E Q U E N C Y   P e r i p h e r a l   c l o c k   f r e q u e n c y  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ P E R I P H _ F R E Q U E N C Y _ N O                   0 x 0 0 0 0 0 0 0 0 U             / * ! <   N o   c l o c k   e n a b l e d   f o r   t h e   p e r i p h e r a l                         * /  
 # d e f i n e   L L _ R C C _ P E R I P H _ F R E Q U E N C Y _ N A                   0 x F F F F F F F F U             / * ! <   F r e q u e n c y   c a n n o t   b e   p r o v i d e d   a s   e x t e r n a l   c l o c k   * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ I 2 S 2 S R C )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ I 2 S 2 C L K S O U R C E   P e r i p h e r a l   I 2 S   c l o c k   s o u r c e   s e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ S Y S C L K                 R C C _ C F G R 2 _ I 2 S 2 S R C                                                                                     / * ! <   S y s t e m   c l o c k   ( S Y S C L K )   s e l e c t e d   a s   I 2 S 2   c l o c k   e n t r y   * /  
 # d e f i n e   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ P L L I 2 S _ V C O         ( u i n t 3 2 _ t ) ( R C C _ C F G R 2 _ I 2 S 2 S R C   |   ( R C C _ C F G R 2 _ I 2 S 2 S R C   > >   1 6 U ) )   / * ! <   P L L I 2 S   V C O   c l o c k   s e l e c t e d   a s   I 2 S 2   c l o c k   e n t r y   * /  
 # d e f i n e   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ S Y S C L K                 R C C _ C F G R 2 _ I 2 S 3 S R C                                                                                     / * ! <   S y s t e m   c l o c k   ( S Y S C L K )   s e l e c t e d   a s   I 2 S 3   c l o c k   e n t r y   * /  
 # d e f i n e   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ P L L I 2 S _ V C O         ( u i n t 3 2 _ t ) ( R C C _ C F G R 2 _ I 2 S 3 S R C   |   ( R C C _ C F G R 2 _ I 2 S 3 S R C   > >   1 6 U ) )   / * ! <   P L L I 2 S   V C O   c l o c k   s e l e c t e d   a s   I 2 S 3   c l o c k   e n t r y   * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   R C C _ C F G R 2 _ I 2 S 2 S R C   * /  
  
 # i f   d e f i n e d ( U S B _ O T G _ F S )   | |   d e f i n e d ( U S B )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ U S B _ C L K S O U R C E   P e r i p h e r a l   U S B   c l o c k   s o u r c e   s e l e c t i o n  
     *   @ {  
     * /  
 # i f   d e f i n e d ( R C C _ C F G R _ U S B P R E )  
 # d e f i n e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L                           R C C _ C F G R _ U S B P R E                 / * ! <   P L L   c l o c k   i s   n o t   d i v i d e d   * /  
 # d e f i n e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 1 _ 5           0 x 0 0 0 0 0 0 0 0 U                         / * ! <   P L L   c l o c k   i s   d i v i d e d   b y   1 . 5   * /  
 # e n d i f   / * R C C _ C F G R _ U S B P R E * /  
 # i f   d e f i n e d ( R C C _ C F G R _ O T G F S P R E )  
 # d e f i n e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 2               R C C _ C F G R _ O T G F S P R E             / * ! <   P L L   c l o c k   i s   d i v i d e d   b y   2   * /  
 # d e f i n e   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 3               0 x 0 0 0 0 0 0 0 0 U                         / * ! <   P L L   c l o c k   i s   d i v i d e d   b y   3   * /  
 # e n d i f   / * R C C _ C F G R _ O T G F S P R E * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S B _ O T G _ F S   | |   U S B   * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ A D C _ C L K S O U R C E _ P C L K 2   P e r i p h e r a l   A D C   c l o c k   s o u r c e   s e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 2         R C C _ C F G R _ A D C P R E _ D I V 2   / * A D C   p r e s c a l e r   P C L K 2   d i v i d e d   b y   2 * /  
 # d e f i n e   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 4         R C C _ C F G R _ A D C P R E _ D I V 4   / * A D C   p r e s c a l e r   P C L K 2   d i v i d e d   b y   4 * /  
 # d e f i n e   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 6         R C C _ C F G R _ A D C P R E _ D I V 6   / * A D C   p r e s c a l e r   P C L K 2   d i v i d e d   b y   6 * /  
 # d e f i n e   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 8         R C C _ C F G R _ A D C P R E _ D I V 8   / * A D C   p r e s c a l e r   P C L K 2   d i v i d e d   b y   8 * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ I 2 S 2 S R C )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ I 2 S 2   P e r i p h e r a l   I 2 S   g e t   c l o c k   s o u r c e  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ I 2 S 2 _ C L K S O U R C E                             R C C _ C F G R 2 _ I 2 S 2 S R C               / * ! <   I 2 S 2   C l o c k   s o u r c e   s e l e c t i o n   * /  
 # d e f i n e   L L _ R C C _ I 2 S 3 _ C L K S O U R C E                             R C C _ C F G R 2 _ I 2 S 3 S R C               / * ! <   I 2 S 3   C l o c k   s o u r c e   s e l e c t i o n   * /  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   R C C _ C F G R 2 _ I 2 S 2 S R C   * /  
  
 # i f   d e f i n e d ( U S B _ O T G _ F S )   | |   d e f i n e d ( U S B )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ U S B   P e r i p h e r a l   U S B   g e t   c l o c k   s o u r c e  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ U S B _ C L K S O U R C E                               0 x 0 0 4 0 0 0 0 0 U           / * ! <   U S B   C l o c k   s o u r c e   s e l e c t i o n   * /  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   U S B _ O T G _ F S   | |   U S B   * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ A D C   P e r i p h e r a l   A D C   g e t   c l o c k   s o u r c e  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ A D C _ C L K S O U R C E                               R C C _ C F G R _ A D C P R E   / * ! <   A D C   C l o c k   s o u r c e   s e l e c t i o n   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ R T C _ C L K S O U R C E     R T C   c l o c k   s o u r c e   s e l e c t i o n  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ R T C _ C L K S O U R C E _ N O N E                     0 x 0 0 0 0 0 0 0 0 U                           / * ! <   N o   c l o c k   u s e d   a s   R T C   c l o c k   * /  
 # d e f i n e   L L _ R C C _ R T C _ C L K S O U R C E _ L S E                       R C C _ B D C R _ R T C S E L _ 0               / * ! <   L S E   o s c i l l a t o r   c l o c k   u s e d   a s   R T C   c l o c k   * /  
 # d e f i n e   L L _ R C C _ R T C _ C L K S O U R C E _ L S I                       R C C _ B D C R _ R T C S E L _ 1               / * ! <   L S I   o s c i l l a t o r   c l o c k   u s e d   a s   R T C   c l o c k   * /  
 # d e f i n e   L L _ R C C _ R T C _ C L K S O U R C E _ H S E _ D I V 1 2 8         R C C _ B D C R _ R T C S E L                   / * ! <   H S E   o s c i l l a t o r   c l o c k   d i v i d e d   b y   1 2 8   u s e d   a s   R T C   c l o c k   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ P L L _ M U L   P L L   M u l t i p l i c a t o r   f a c t o r  
     *   @ {  
     * /  
 # i f   d e f i n e d ( R C C _ C F G R _ P L L M U L L 2 )  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 2                                       R C C _ C F G R _ P L L M U L L 2     / * ! <   P L L   i n p u t   c l o c k * 2   * /  
 # e n d i f   / * R C C _ C F G R _ P L L M U L L 2 * /  
 # i f   d e f i n e d ( R C C _ C F G R _ P L L M U L L 3 )  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 3                                       R C C _ C F G R _ P L L M U L L 3     / * ! <   P L L   i n p u t   c l o c k * 3   * /  
 # e n d i f   / * R C C _ C F G R _ P L L M U L L 3 * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 4                                       R C C _ C F G R _ P L L M U L L 4     / * ! <   P L L   i n p u t   c l o c k * 4   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 5                                       R C C _ C F G R _ P L L M U L L 5     / * ! <   P L L   i n p u t   c l o c k * 5   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 6                                       R C C _ C F G R _ P L L M U L L 6     / * ! <   P L L   i n p u t   c l o c k * 6   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 7                                       R C C _ C F G R _ P L L M U L L 7     / * ! <   P L L   i n p u t   c l o c k * 7   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 8                                       R C C _ C F G R _ P L L M U L L 8     / * ! <   P L L   i n p u t   c l o c k * 8   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 9                                       R C C _ C F G R _ P L L M U L L 9     / * ! <   P L L   i n p u t   c l o c k * 9   * /  
 # i f   d e f i n e d ( R C C _ C F G R _ P L L M U L L 6 _ 5 )  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 6 _ 5                                   R C C _ C F G R _ P L L M U L L 6 _ 5   / * ! <   P L L   i n p u t   c l o c k * 6   * /  
 # e l s e  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 1 0                                     R C C _ C F G R _ P L L M U L L 1 0     / * ! <   P L L   i n p u t   c l o c k * 1 0   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 1 1                                     R C C _ C F G R _ P L L M U L L 1 1     / * ! <   P L L   i n p u t   c l o c k * 1 1   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 1 2                                     R C C _ C F G R _ P L L M U L L 1 2     / * ! <   P L L   i n p u t   c l o c k * 1 2   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 1 3                                     R C C _ C F G R _ P L L M U L L 1 3     / * ! <   P L L   i n p u t   c l o c k * 1 3   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 1 4                                     R C C _ C F G R _ P L L M U L L 1 4     / * ! <   P L L   i n p u t   c l o c k * 1 4   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 1 5                                     R C C _ C F G R _ P L L M U L L 1 5     / * ! <   P L L   i n p u t   c l o c k * 1 5   * /  
 # d e f i n e   L L _ R C C _ P L L _ M U L _ 1 6                                     R C C _ C F G R _ P L L M U L L 1 6     / * ! <   P L L   i n p u t   c l o c k * 1 6   * /  
 # e n d i f   / * R C C _ C F G R _ P L L M U L L 6 _ 5 * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ P L L S O U R C E   P L L   S O U R C E  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S I _ D I V _ 2                   0 x 0 0 0 0 0 0 0 0 U                                                                         / * ! <   H S I   c l o c k   d i v i d e d   b y   2   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E                               R C C _ C F G R _ P L L S R C                                                                 / * ! <   H S E / P R E D I V 1   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2                             ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )   / * ! <   P L L 2 / P R E D I V 1   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 S R C * /  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 )         / * ! <   H S E / 1   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 2                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 2 )         / * ! <   H S E / 2   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 3                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 3 )         / * ! <   H S E / 3   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 4                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 4 )         / * ! <   H S E / 4   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 5                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 5 )         / * ! <   H S E / 5   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 6                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 6 )         / * ! <   H S E / 6   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 7                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 7 )         / * ! <   H S E / 7   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 8                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 8 )         / * ! <   H S E / 8   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 9                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 9 )         / * ! <   H S E / 9   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 0                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 0 )       / * ! <   H S E / 1 0   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 1                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 1 )       / * ! <   H S E / 1 1   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 2                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 2 )       / * ! <   H S E / 1 2   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 3                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 3 )       / * ! <   H S E / 1 3   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 4                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 4 )       / * ! <   H S E / 1 4   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 5                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 5 )       / * ! <   H S E / 1 5   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 6                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 6 )       / * ! <   H S E / 1 6   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 1   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 2                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 2   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 2   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 3                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 3   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 3   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 4                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 4   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 4   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 5                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 5   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 5   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 6                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 6   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 6   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 7                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 7   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 7   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 8                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 8   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 8   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 9                 ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 9   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )         / * ! <   P L L 2 / 9   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 0               ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 0   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )       / * ! <   P L L 2 / 1 0   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 1               ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 1   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )       / * ! <   P L L 2 / 1 1   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 2               ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 2   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )       / * ! <   P L L 2 / 1 2   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 3               ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 3   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )       / * ! <   P L L 2 / 1 3   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 4               ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 4   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )       / * ! <   P L L 2 / 1 4   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 5               ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 5   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )       / * ! <   P L L 2 / 1 5   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 6               ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 6   |   R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U )       / * ! <   P L L 2 / 1 6   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 S R C * /  
 # e l s e  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1                   ( R C C _ C F G R _ P L L S R C   |   0 x 0 0 0 0 0 0 0 0 U )                               / * ! <   H S E / 1   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # d e f i n e   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 2                   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R _ P L L X T P R E )                   / * ! <   H S E / 2   c l o c k   s e l e c t e d   a s   P L L   e n t r y   c l o c k   s o u r c e   * /  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ P R E D I V _ D I V   P R E D I V   D i v i s i o n   f a c t o r  
     *   @ {  
     * /  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1       / * ! <   P R E D I V 1   i n p u t   c l o c k   n o t   d i v i d e d   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 2                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 2       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   2   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 3                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 3       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   3   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 4                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 4       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   4   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 5                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 5       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   5   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 6                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 6       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   6   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 7                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 7       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   7   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 8                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 8       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   8   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 9                                 R C C _ C F G R 2 _ P R E D I V 1 _ D I V 9       / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   9   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1 0                               R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 0     / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   1 0   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1 1                               R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 1     / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   1 1   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1 2                               R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 2     / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   1 2   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1 3                               R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 3     / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   1 3   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1 4                               R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 4     / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   1 4   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1 5                               R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 5     / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   1 5   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1 6                               R C C _ C F G R 2 _ P R E D I V 1 _ D I V 1 6     / * ! <   P R E D I V 1   i n p u t   c l o c k   d i v i d e d   b y   1 6   * /  
 # e l s e  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 1                                 0 x 0 0 0 0 0 0 0 0 U                             / * ! <   H S E   d i v i d e r   c l o c k   c l o c k   n o t   d i v i d e d   * /  
 # d e f i n e   L L _ R C C _ P R E D I V _ D I V _ 2                                 R C C _ C F G R _ P L L X T P R E                 / * ! <   H S E   d i v i d e r   c l o c k   d i v i d e d   b y   2   f o r   P L L   e n t r y   * /  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ P L L I 2 S _ M U L   P L L I 2 S   M U L  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 8                                 R C C _ C F G R 2 _ P L L 3 M U L 8       / * ! <   P L L I 2 S   i n p u t   c l o c k   *   8   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 9                                 R C C _ C F G R 2 _ P L L 3 M U L 9       / * ! <   P L L I 2 S   i n p u t   c l o c k   *   9   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 1 0                               R C C _ C F G R 2 _ P L L 3 M U L 1 0     / * ! <   P L L I 2 S   i n p u t   c l o c k   *   1 0   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 1 1                               R C C _ C F G R 2 _ P L L 3 M U L 1 1     / * ! <   P L L I 2 S   i n p u t   c l o c k   *   1 1   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 1 2                               R C C _ C F G R 2 _ P L L 3 M U L 1 2     / * ! <   P L L I 2 S   i n p u t   c l o c k   *   1 2   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 1 3                               R C C _ C F G R 2 _ P L L 3 M U L 1 3     / * ! <   P L L I 2 S   i n p u t   c l o c k   *   1 3   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 1 4                               R C C _ C F G R 2 _ P L L 3 M U L 1 4     / * ! <   P L L I 2 S   i n p u t   c l o c k   *   1 4   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 1 6                               R C C _ C F G R 2 _ P L L 3 M U L 1 6     / * ! <   P L L I 2 S   i n p u t   c l o c k   *   1 6   * /  
 # d e f i n e   L L _ R C C _ P L L I 2 S _ M U L _ 2 0                               R C C _ C F G R 2 _ P L L 3 M U L 2 0     / * ! <   P L L I 2 S   i n p u t   c l o c k   *   2 0   * /  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *   @ d e f g r o u p   R C C _ L L _ E C _ P L L 2 _ M U L   P L L 2   M U L  
     *   @ {  
     * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 8                                     R C C _ C F G R 2 _ P L L 2 M U L 8       / * ! <   P L L 2   i n p u t   c l o c k   *   8   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 9                                     R C C _ C F G R 2 _ P L L 2 M U L 9       / * ! <   P L L 2   i n p u t   c l o c k   *   9   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 1 0                                   R C C _ C F G R 2 _ P L L 2 M U L 1 0     / * ! <   P L L 2   i n p u t   c l o c k   *   1 0   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 1 1                                   R C C _ C F G R 2 _ P L L 2 M U L 1 1     / * ! <   P L L 2   i n p u t   c l o c k   *   1 1   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 1 2                                   R C C _ C F G R 2 _ P L L 2 M U L 1 2     / * ! <   P L L 2   i n p u t   c l o c k   *   1 2   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 1 3                                   R C C _ C F G R 2 _ P L L 2 M U L 1 3     / * ! <   P L L 2   i n p u t   c l o c k   *   1 3   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 1 4                                   R C C _ C F G R 2 _ P L L 2 M U L 1 4     / * ! <   P L L 2   i n p u t   c l o c k   *   1 4   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 1 6                                   R C C _ C F G R 2 _ P L L 2 M U L 1 6     / * ! <   P L L 2   i n p u t   c l o c k   *   1 6   * /  
 # d e f i n e   L L _ R C C _ P L L 2 _ M U L _ 2 0                                   R C C _ C F G R 2 _ P L L 2 M U L 2 0     / * ! <   P L L 2   i n p u t   c l o c k   *   2 0   * /  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R C C _ L L _ E x p o r t e d _ M a c r o s   R C C   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E M _ W R I T E _ R E A D   C o m m o n   W r i t e   a n d   r e a d   r e g i s t e r s   M a c r o s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e   a   v a l u e   i n   R C C   r e g i s t e r  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   w r i t t e n  
     *   @ p a r a m     _ _ V A L U E _ _   V a l u e   t o   b e   w r i t t e n   i n   t h e   r e g i s t e r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   L L _ R C C _ W r i t e R e g ( _ _ R E G _ _ ,   _ _ V A L U E _ _ )   W R I T E _ R E G ( R C C - > _ _ R E G _ _ ,   ( _ _ V A L U E _ _ ) )  
  
 / * *  
     *   @ b r i e f     R e a d   a   v a l u e   i n   R C C   r e g i s t e r  
     *   @ p a r a m     _ _ R E G _ _   R e g i s t e r   t o   b e   r e a d  
     *   @ r e t v a l   R e g i s t e r   v a l u e  
     * /  
 # d e f i n e   L L _ R C C _ R e a d R e g ( _ _ R E G _ _ )   R E A D _ R E G ( R C C - > _ _ R E G _ _ )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E M _ C A L C _ F R E Q   C a l c u l a t e   f r e q u e n c i e s  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( R C C _ C F G R _ P L L M U L L 6 _ 5 )  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   P L L C L K   f r e q u e n c y  
     *   @ n o t e   e x :   @ r e f   _ _ L L _ R C C _ C A L C _ P L L C L K _ F R E Q   ( H S E _ V A L U E   /   ( @ r e f   L L _ R C C _ P L L _ G e t P r e d i v   ( )   +   1 ) ,   @ r e f   L L _ R C C _ P L L _ G e t M u l t i p l i c a t o r ( ) ) ;  
     *   @ p a r a m     _ _ I N P U T F R E Q _ _   P L L   I n p u t   f r e q u e n c y   ( b a s e d   o n   H S E   d i v   P r e d i v 1   /   H S I   d i v   2   /   P L L 2   d i v   P r e d i v 1 )  
     *   @ p a r a m     _ _ P L L M U L _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 6 _ 5  
     *   @ r e t v a l   P L L   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 # d e f i n e   _ _ L L _ R C C _ C A L C _ P L L C L K _ F R E Q ( _ _ I N P U T F R E Q _ _ ,   _ _ P L L M U L _ _ )   \  
                     ( ( ( _ _ P L L M U L _ _ )   ! =   R C C _ C F G R _ P L L M U L L 6 _ 5 )   ?   \  
                             ( ( _ _ I N P U T F R E Q _ _ )   *   ( ( ( ( _ _ P L L M U L _ _ )   &   R C C _ C F G R _ P L L M U L L )   > >   R C C _ C F G R _ P L L M U L L _ P o s )   +   2 U ) )   : \  
                             ( ( ( _ _ I N P U T F R E Q _ _ )   *   1 3 U )   /   2 U ) )  
  
 # e l s e  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   P L L C L K   f r e q u e n c y  
     *   @ n o t e   e x :   @ r e f   _ _ L L _ R C C _ C A L C _ P L L C L K _ F R E Q   ( H S E _ V A L U E   /   ( @ r e f   L L _ R C C _ P L L _ G e t P r e d i v   ( )   +   1 ) ,   @ r e f   L L _ R C C _ P L L _ G e t M u l t i p l i c a t o r   ( ) ) ;  
     *   @ p a r a m     _ _ I N P U T F R E Q _ _   P L L   I n p u t   f r e q u e n c y   ( b a s e d   o n   H S E   d i v   P r e d i v 1   o r   d i v   2   /   H S I   d i v   2 )  
     *   @ p a r a m     _ _ P L L M U L _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 5  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 6  
     *   @ r e t v a l   P L L   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 # d e f i n e   _ _ L L _ R C C _ C A L C _ P L L C L K _ F R E Q ( _ _ I N P U T F R E Q _ _ ,   _ _ P L L M U L _ _ )   ( ( _ _ I N P U T F R E Q _ _ )   *   ( ( ( _ _ P L L M U L _ _ )   > >   R C C _ C F G R _ P L L M U L L _ P o s )   +   2 U ) )  
 # e n d i f   / *   R C C _ C F G R _ P L L M U L L 6 _ 5   * /  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   P L L I 2 S   f r e q u e n c y  
     *   @ n o t e   e x :   @ r e f   _ _ L L _ R C C _ C A L C _ P L L I 2 S C L K _ F R E Q   ( H S E _ V A L U E ,   @ r e f   L L _ R C C _ P L L I 2 S _ G e t M u l t i p l i c a t o r   ( ) ,   @ r e f   L L _ R C C _ H S E _ G e t P r e d i v 2   ( ) ) ;  
     *   @ p a r a m     _ _ I N P U T F R E Q _ _   P L L I 2 S   I n p u t   f r e q u e n c y   ( b a s e d   o n   H S E   v a l u e )  
     *   @ p a r a m     _ _ P L L I 2 S M U L _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 2 0  
     *   @ p a r a m     _ _ P L L I 2 S D I V _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 6  
     *   @ r e t v a l   P L L I 2 S   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 # d e f i n e   _ _ L L _ R C C _ C A L C _ P L L I 2 S C L K _ F R E Q ( _ _ I N P U T F R E Q _ _ ,   _ _ P L L I 2 S M U L _ _ ,   _ _ P L L I 2 S D I V _ _ )   ( ( ( _ _ I N P U T F R E Q _ _ )   *   ( ( ( _ _ P L L I 2 S M U L _ _ )   > >   R C C _ C F G R 2 _ P L L 3 M U L _ P o s )   +   2 U ) )   /   ( ( ( _ _ P L L I 2 S D I V _ _ )   > >   R C C _ C F G R 2 _ P R E D I V 2 _ P o s )   +   1 U ) )  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   P L L 2   f r e q u e n c y  
     *   @ n o t e   e x :   @ r e f   _ _ L L _ R C C _ C A L C _ P L L 2 C L K _ F R E Q   ( H S E _ V A L U E ,   @ r e f   L L _ R C C _ P L L 2 _ G e t M u l t i p l i c a t o r   ( ) ,   @ r e f   L L _ R C C _ H S E _ G e t P r e d i v 2   ( ) ) ;  
     *   @ p a r a m     _ _ I N P U T F R E Q _ _   P L L 2   I n p u t   f r e q u e n c y   ( b a s e d   o n   H S E   v a l u e )  
     *   @ p a r a m     _ _ P L L 2 M U L _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 2 0  
     *   @ p a r a m     _ _ P L L 2 D I V _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 6  
     *   @ r e t v a l   P L L 2   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 # d e f i n e   _ _ L L _ R C C _ C A L C _ P L L 2 C L K _ F R E Q ( _ _ I N P U T F R E Q _ _ ,   _ _ P L L 2 M U L _ _ ,   _ _ P L L 2 D I V _ _ )   ( ( ( _ _ I N P U T F R E Q _ _ )   *   ( ( ( _ _ P L L 2 M U L _ _ )   > >   R C C _ C F G R 2 _ P L L 2 M U L _ P o s )   +   2 U ) )   /   ( ( ( _ _ P L L 2 D I V _ _ )   > >   R C C _ C F G R 2 _ P R E D I V 2 _ P o s )   +   1 U ) )  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   H C L K   f r e q u e n c y  
     *   @ n o t e :   _ _ A H B P R E S C A L E R _ _   b e   r e t r i e v e d   b y   @ r e f   L L _ R C C _ G e t A H B P r e s c a l e r  
     *                 e x :   _ _ L L _ R C C _ C A L C _ H C L K _ F R E Q ( L L _ R C C _ G e t A H B P r e s c a l e r ( ) )  
     *   @ p a r a m     _ _ S Y S C L K F R E Q _ _   S Y S C L K   f r e q u e n c y   ( b a s e d   o n   H S E / H S I / P L L C L K )  
     *   @ p a r a m     _ _ A H B P R E S C A L E R _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 6 4  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1 2 8  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 2 5 6  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 5 1 2  
     *   @ r e t v a l   H C L K   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 # d e f i n e   _ _ L L _ R C C _ C A L C _ H C L K _ F R E Q ( _ _ S Y S C L K F R E Q _ _ ,   _ _ A H B P R E S C A L E R _ _ )   ( ( _ _ S Y S C L K F R E Q _ _ )   > >   A H B P r e s c T a b l e [ ( ( _ _ A H B P R E S C A L E R _ _ )   &   R C C _ C F G R _ H P R E )   > >     R C C _ C F G R _ H P R E _ P o s ] )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   P C L K 1   f r e q u e n c y   ( A B P 1 )  
     *   @ n o t e :   _ _ A P B 1 P R E S C A L E R _ _   b e   r e t r i e v e d   b y   @ r e f   L L _ R C C _ G e t A P B 1 P r e s c a l e r  
     *                 e x :   _ _ L L _ R C C _ C A L C _ P C L K 1 _ F R E Q ( L L _ R C C _ G e t A P B 1 P r e s c a l e r ( ) )  
     *   @ p a r a m     _ _ H C L K F R E Q _ _   H C L K   f r e q u e n c y  
     *   @ p a r a m     _ _ A P B 1 P R E S C A L E R _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 1 6  
     *   @ r e t v a l   P C L K 1   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 # d e f i n e   _ _ L L _ R C C _ C A L C _ P C L K 1 _ F R E Q ( _ _ H C L K F R E Q _ _ ,   _ _ A P B 1 P R E S C A L E R _ _ )   ( ( _ _ H C L K F R E Q _ _ )   > >   A P B P r e s c T a b l e [ ( _ _ A P B 1 P R E S C A L E R _ _ )   > >     R C C _ C F G R _ P P R E 1 _ P o s ] )  
  
 / * *  
     *   @ b r i e f     H e l p e r   m a c r o   t o   c a l c u l a t e   t h e   P C L K 2   f r e q u e n c y   ( A B P 2 )  
     *   @ n o t e :   _ _ A P B 2 P R E S C A L E R _ _   b e   r e t r i e v e d   b y   @ r e f   L L _ R C C _ G e t A P B 2 P r e s c a l e r  
     *                 e x :   _ _ L L _ R C C _ C A L C _ P C L K 2 _ F R E Q ( L L _ R C C _ G e t A P B 2 P r e s c a l e r ( ) )  
     *   @ p a r a m     _ _ H C L K F R E Q _ _   H C L K   f r e q u e n c y  
     *   @ p a r a m     _ _ A P B 2 P R E S C A L E R _ _ :   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 1 6  
     *   @ r e t v a l   P C L K 2   c l o c k   f r e q u e n c y   ( i n   H z )  
     * /  
 # d e f i n e   _ _ L L _ R C C _ C A L C _ P C L K 2 _ F R E Q ( _ _ H C L K F R E Q _ _ ,   _ _ A P B 2 P R E S C A L E R _ _ )   ( ( _ _ H C L K F R E Q _ _ )   > >   A P B P r e s c T a b l e [ ( _ _ A P B 2 P R E S C A L E R _ _ )   > >     R C C _ C F G R _ P P R E 2 _ P o s ] )  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R C C _ L L _ E x p o r t e d _ F u n c t i o n s   R C C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ H S E   H S E  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   C l o c k   S e c u r i t y   S y s t e m .  
     *   @ r m t o l l   C R                       C S S O N                   L L _ R C C _ H S E _ E n a b l e C S S  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S E _ E n a b l e C S S ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ C S S O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   H S E   e x t e r n a l   o s c i l l a t o r   ( H S E   B y p a s s )  
     *   @ r m t o l l   C R                       H S E B Y P                 L L _ R C C _ H S E _ E n a b l e B y p a s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S E _ E n a b l e B y p a s s ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ H S E B Y P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   H S E   e x t e r n a l   o s c i l l a t o r   ( H S E   B y p a s s )  
     *   @ r m t o l l   C R                       H S E B Y P                 L L _ R C C _ H S E _ D i s a b l e B y p a s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S E _ D i s a b l e B y p a s s ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ H S E B Y P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   H S E   c r y s t a l   o s c i l l a t o r   ( H S E   O N )  
     *   @ r m t o l l   C R                       H S E O N                   L L _ R C C _ H S E _ E n a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S E _ E n a b l e ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ H S E O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   H S E   c r y s t a l   o s c i l l a t o r   ( H S E   O N )  
     *   @ r m t o l l   C R                       H S E O N                   L L _ R C C _ H S E _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S E _ D i s a b l e ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ H S E O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   H S E   o s c i l l a t o r   R e a d y  
     *   @ r m t o l l   C R                       H S E R D Y                 L L _ R C C _ H S E _ I s R e a d y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ H S E _ I s R e a d y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ H S E R D Y )   = =   ( R C C _ C R _ H S E R D Y ) ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 2 )  
 / * *  
     *   @ b r i e f     G e t   P R E D I V 2   d i v i s i o n   f a c t o r  
     *   @ r m t o l l   C F G R 2                 P R E D I V 2               L L _ R C C _ H S E _ G e t P r e d i v 2  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 6  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ H S E _ G e t P r e d i v 2 ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 2 ) ) ;  
 }  
 # e n d i f   / *   R C C _ C F G R 2 _ P R E D I V 2   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ H S I   H S I  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   H S I   o s c i l l a t o r  
     *   @ r m t o l l   C R                       H S I O N                   L L _ R C C _ H S I _ E n a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S I _ E n a b l e ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ H S I O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   H S I   o s c i l l a t o r  
     *   @ r m t o l l   C R                       H S I O N                   L L _ R C C _ H S I _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S I _ D i s a b l e ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ H S I O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   H S I   c l o c k   i s   r e a d y  
     *   @ r m t o l l   C R                       H S I R D Y                 L L _ R C C _ H S I _ I s R e a d y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ H S I _ I s R e a d y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ H S I R D Y )   = =   ( R C C _ C R _ H S I R D Y ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   H S I   C a l i b r a t i o n   v a l u e  
     *   @ n o t e   W h e n   H S I T R I M   i s   w r i t t e n ,   H S I C A L   i s   u p d a t e d   w i t h   t h e   s u m   o f  
     *               H S I T R I M   a n d   t h e   f a c t o r y   t r i m   v a l u e  
     *   @ r m t o l l   C R                 H S I C A L                 L L _ R C C _ H S I _ G e t C a l i b r a t i o n  
     *   @ r e t v a l   B e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ H S I _ G e t C a l i b r a t i o n ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ H S I C A L )   > >   R C C _ C R _ H S I C A L _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   H S I   C a l i b r a t i o n   t r i m m i n g  
     *   @ n o t e   u s e r - p r o g r a m m a b l e   t r i m m i n g   v a l u e   t h a t   i s   a d d e d   t o   t h e   H S I C A L  
     *   @ n o t e   D e f a u l t   v a l u e   i s   1 6 ,   w h i c h ,   w h e n   a d d e d   t o   t h e   H S I C A L   v a l u e ,  
     *               s h o u l d   t r i m   t h e   H S I   t o   1 6   M H z   + / -   1   %  
     *   @ r m t o l l   C R                 H S I T R I M               L L _ R C C _ H S I _ S e t C a l i b T r i m m i n g  
     *   @ p a r a m     V a l u e   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x 1 F  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ H S I _ S e t C a l i b T r i m m i n g ( u i n t 3 2 _ t   V a l u e )  
 {  
     M O D I F Y _ R E G ( R C C - > C R ,   R C C _ C R _ H S I T R I M ,   V a l u e   < <   R C C _ C R _ H S I T R I M _ P o s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   H S I   C a l i b r a t i o n   t r i m m i n g  
     *   @ r m t o l l   C R                 H S I T R I M               L L _ R C C _ H S I _ G e t C a l i b T r i m m i n g  
     *   @ r e t v a l   B e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x 1 F  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ H S I _ G e t C a l i b T r i m m i n g ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ H S I T R I M )   > >   R C C _ C R _ H S I T R I M _ P o s ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ L S E   L S E  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e     L o w   S p e e d   E x t e r n a l   ( L S E )   c r y s t a l .  
     *   @ r m t o l l   B D C R                   L S E O N                   L L _ R C C _ L S E _ E n a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ L S E _ E n a b l e ( v o i d )  
 {  
     S E T _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ L S E O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e     L o w   S p e e d   E x t e r n a l   ( L S E )   c r y s t a l .  
     *   @ r m t o l l   B D C R                   L S E O N                   L L _ R C C _ L S E _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ L S E _ D i s a b l e ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ L S E O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   e x t e r n a l   c l o c k   s o u r c e   ( L S E   b y p a s s ) .  
     *   @ r m t o l l   B D C R                   L S E B Y P                 L L _ R C C _ L S E _ E n a b l e B y p a s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ L S E _ E n a b l e B y p a s s ( v o i d )  
 {  
     S E T _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ L S E B Y P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   e x t e r n a l   c l o c k   s o u r c e   ( L S E   b y p a s s ) .  
     *   @ r m t o l l   B D C R                   L S E B Y P                 L L _ R C C _ L S E _ D i s a b l e B y p a s s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ L S E _ D i s a b l e B y p a s s ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ L S E B Y P ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   L S E   o s c i l l a t o r   R e a d y  
     *   @ r m t o l l   B D C R                   L S E R D Y                 L L _ R C C _ L S E _ I s R e a d y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ L S E _ I s R e a d y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ L S E R D Y )   = =   ( R C C _ B D C R _ L S E R D Y ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ L S I   L S I  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   L S I   O s c i l l a t o r  
     *   @ r m t o l l   C S R                     L S I O N                   L L _ R C C _ L S I _ E n a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ L S I _ E n a b l e ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C S R ,   R C C _ C S R _ L S I O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   L S I   O s c i l l a t o r  
     *   @ r m t o l l   C S R                     L S I O N                   L L _ R C C _ L S I _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ L S I _ D i s a b l e ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C S R ,   R C C _ C S R _ L S I O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   L S I   i s   R e a d y  
     *   @ r m t o l l   C S R                     L S I R D Y                 L L _ R C C _ L S I _ I s R e a d y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ L S I _ I s R e a d y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C S R ,   R C C _ C S R _ L S I R D Y )   = =   ( R C C _ C S R _ L S I R D Y ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ S y s t e m   S y s t e m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   t h e   s y s t e m   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R                   S W                         L L _ R C C _ S e t S y s C l k S o u r c e  
     *   @ p a r a m     S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S _ C L K S O U R C E _ H S I  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S _ C L K S O U R C E _ H S E  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S _ C L K S O U R C E _ P L L  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t S y s C l k S o u r c e ( u i n t 3 2 _ t   S o u r c e )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ S W ,   S o u r c e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s y s t e m   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R                   S W S                       L L _ R C C _ G e t S y s C l k S o u r c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ H S I  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ H S E  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S _ C L K S O U R C E _ S T A T U S _ P L L  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t S y s C l k S o u r c e ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ S W S ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A H B   p r e s c a l e r  
     *   @ r m t o l l   C F G R                   H P R E                     L L _ R C C _ S e t A H B P r e s c a l e r  
     *   @ p a r a m     P r e s c a l e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 6 4  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1 2 8  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 2 5 6  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 5 1 2  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t A H B P r e s c a l e r ( u i n t 3 2 _ t   P r e s c a l e r )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ H P R E ,   P r e s c a l e r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A P B 1   p r e s c a l e r  
     *   @ r m t o l l   C F G R                   P P R E 1                   L L _ R C C _ S e t A P B 1 P r e s c a l e r  
     *   @ p a r a m     P r e s c a l e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 1 6  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t A P B 1 P r e s c a l e r ( u i n t 3 2 _ t   P r e s c a l e r )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 1 ,   P r e s c a l e r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A P B 2   p r e s c a l e r  
     *   @ r m t o l l   C F G R                   P P R E 2                   L L _ R C C _ S e t A P B 2 P r e s c a l e r  
     *   @ p a r a m     P r e s c a l e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 1 6  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t A P B 2 P r e s c a l e r ( u i n t 3 2 _ t   P r e s c a l e r )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 2 ,   P r e s c a l e r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A H B   p r e s c a l e r  
     *   @ r m t o l l   C F G R                   H P R E                     L L _ R C C _ G e t A H B P r e s c a l e r  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 6 4  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 1 2 8  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 2 5 6  
     *                   @ a r g   @ r e f   L L _ R C C _ S Y S C L K _ D I V _ 5 1 2  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t A H B P r e s c a l e r ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ H P R E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A P B 1   p r e s c a l e r  
     *   @ r m t o l l   C F G R                   P P R E 1                   L L _ R C C _ G e t A P B 1 P r e s c a l e r  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 1 _ D I V _ 1 6  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t A P B 1 P r e s c a l e r ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 1 ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   A P B 2   p r e s c a l e r  
     *   @ r m t o l l   C F G R                   P P R E 2                   L L _ R C C _ G e t A P B 2 P r e s c a l e r  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ A P B 2 _ D I V _ 1 6  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t A P B 2 P r e s c a l e r ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ P P R E 2 ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ M C O   M C O  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   M C O x  
     *   @ r m t o l l   C F G R                   M C O                       L L _ R C C _ C o n f i g M C O  
     *   @ p a r a m     M C O x S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ N O C L O C K  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ S Y S C L K  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ H S I  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ H S E  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ P L L C L K _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ P L L 2 C L K   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ P L L I 2 S C L K _ D I V 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ E X T _ H S E   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ M C O 1 S O U R C E _ P L L I 2 S C L K   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C o n f i g M C O ( u i n t 3 2 _ t   M C O x S o u r c e )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ M C O S E L ,   M C O x S o u r c e ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ P e r i p h e r a l _ C l o c k _ S o u r c e   P e r i p h e r a l   C l o c k   S o u r c e  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ I 2 S 2 S R C )  
 / * *  
     *   @ b r i e f     C o n f i g u r e   I 2 S x   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R 2                 I 2 S 2 S R C               L L _ R C C _ S e t I 2 S C l o c k S o u r c e \ n  
     *                   C F G R 2                 I 2 S 3 S R C               L L _ R C C _ S e t I 2 S C l o c k S o u r c e  
     *   @ p a r a m     I 2 S x S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ S Y S C L K  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ P L L I 2 S _ V C O  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ S Y S C L K  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ P L L I 2 S _ V C O  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t I 2 S C l o c k S o u r c e ( u i n t 3 2 _ t   I 2 S x S o u r c e )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R 2 ,   ( I 2 S x S o u r c e   &   0 x F F F F 0 0 0 0 U ) ,   ( I 2 S x S o u r c e   < <   1 6 U ) ) ;  
 }  
 # e n d i f   / *   R C C _ C F G R 2 _ I 2 S 2 S R C   * /  
  
 # i f   d e f i n e d ( U S B _ O T G _ F S )   | |   d e f i n e d ( U S B )  
 / * *  
     *   @ b r i e f     C o n f i g u r e   U S B   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R                   O T G F S P R E             L L _ R C C _ S e t U S B C l o c k S o u r c e \ n  
     *                   C F G R                   U S B P R E                 L L _ R C C _ S e t U S B C l o c k S o u r c e  
     *   @ p a r a m     U S B x S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 1 _ 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 3   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t U S B C l o c k S o u r c e ( u i n t 3 2 _ t   U S B x S o u r c e )  
 {  
 # i f   d e f i n e d ( R C C _ C F G R _ U S B P R E )  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ U S B P R E ,   U S B x S o u r c e ) ;  
 # e l s e   / * R C C _ C F G R _ O T G F S P R E * /  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ O T G F S P R E ,   U S B x S o u r c e ) ;  
 # e n d i f   / * R C C _ C F G R _ U S B P R E * /  
 }  
 # e n d i f   / *   U S B _ O T G _ F S   | |   U S B   * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   A D C   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R                   A D C P R E                 L L _ R C C _ S e t A D C C l o c k S o u r c e  
     *   @ p a r a m     A D C x S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 8  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t A D C C l o c k S o u r c e ( u i n t 3 2 _ t   A D C x S o u r c e )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ A D C P R E ,   A D C x S o u r c e ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ I 2 S 2 S R C )  
 / * *  
     *   @ b r i e f     G e t   I 2 S x   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R 2                 I 2 S 2 S R C               L L _ R C C _ G e t I 2 S C l o c k S o u r c e \ n  
     *                   C F G R 2                 I 2 S 3 S R C               L L _ R C C _ G e t I 2 S C l o c k S o u r c e  
     *   @ p a r a m     I 2 S x   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 2 _ C L K S O U R C E  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 3 _ C L K S O U R C E  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ S Y S C L K  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 2 _ C L K S O U R C E _ P L L I 2 S _ V C O  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ S Y S C L K  
     *                   @ a r g   @ r e f   L L _ R C C _ I 2 S 3 _ C L K S O U R C E _ P L L I 2 S _ V C O  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t I 2 S C l o c k S o u r c e ( u i n t 3 2 _ t   I 2 S x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R 2 ,   I 2 S x )   > >   1 6 U   |   I 2 S x ) ;  
 }  
 # e n d i f   / *   R C C _ C F G R 2 _ I 2 S 2 S R C   * /  
  
 # i f   d e f i n e d ( U S B _ O T G _ F S )   | |   d e f i n e d ( U S B )  
 / * *  
     *   @ b r i e f     G e t   U S B x   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R                   O T G F S P R E             L L _ R C C _ G e t U S B C l o c k S o u r c e \ n  
     *                   C F G R                   U S B P R E                 L L _ R C C _ G e t U S B C l o c k S o u r c e  
     *   @ p a r a m     U S B x   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 1 _ 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ U S B _ C L K S O U R C E _ P L L _ D I V _ 3   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t U S B C l o c k S o u r c e ( u i n t 3 2 _ t   U S B x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   U S B x ) ) ;  
 }  
 # e n d i f   / *   U S B _ O T G _ F S   | |   U S B   * /  
  
 / * *  
     *   @ b r i e f     G e t   A D C x   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R                   A D C P R E                 L L _ R C C _ G e t A D C C l o c k S o u r c e  
     *   @ p a r a m     A D C x   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S O U R C E  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ A D C _ C L K S R C _ P C L K 2 _ D I V _ 8  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t A D C C l o c k S o u r c e ( u i n t 3 2 _ t   A D C x )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   A D C x ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ R T C   R T C  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t   R T C   C l o c k   S o u r c e  
     *   @ n o t e   O n c e   t h e   R T C   c l o c k   s o u r c e   h a s   b e e n   s e l e c t e d ,   i t   c a n n o t   b e   c h a n g e d   a n y   m o r e   u n l e s s  
     *               t h e   B a c k u p   d o m a i n   i s   r e s e t .   T h e   B D R S T   b i t   c a n   b e   u s e d   t o   r e s e t   t h e m .  
     *   @ r m t o l l   B D C R                   R T C S E L                 L L _ R C C _ S e t R T C C l o c k S o u r c e  
     *   @ p a r a m     S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ N O N E  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ L S E  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ L S I  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ H S E _ D I V 1 2 8  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ S e t R T C C l o c k S o u r c e ( u i n t 3 2 _ t   S o u r c e )  
 {  
     M O D I F Y _ R E G ( R C C - > B D C R ,   R C C _ B D C R _ R T C S E L ,   S o u r c e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   R T C   C l o c k   S o u r c e  
     *   @ r m t o l l   B D C R                   R T C S E L                 L L _ R C C _ G e t R T C C l o c k S o u r c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ N O N E  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ L S E  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ L S I  
     *                   @ a r g   @ r e f   L L _ R C C _ R T C _ C L K S O U R C E _ H S E _ D I V 1 2 8  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ G e t R T C C l o c k S o u r c e ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ R T C S E L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   R T C  
     *   @ r m t o l l   B D C R                   R T C E N                   L L _ R C C _ E n a b l e R T C  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e R T C ( v o i d )  
 {  
     S E T _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ R T C E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   R T C  
     *   @ r m t o l l   B D C R                   R T C E N                   L L _ R C C _ D i s a b l e R T C  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e R T C ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ R T C E N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R T C   h a s   b e e n   e n a b l e d   o r   n o t  
     *   @ r m t o l l   B D C R                   R T C E N                   L L _ R C C _ I s E n a b l e d R T C  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d R T C ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ R T C E N )   = =   ( R C C _ B D C R _ R T C E N ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     F o r c e   t h e   B a c k u p   d o m a i n   r e s e t  
     *   @ r m t o l l   B D C R                   B D R S T                   L L _ R C C _ F o r c e B a c k u p D o m a i n R e s e t  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ F o r c e B a c k u p D o m a i n R e s e t ( v o i d )  
 {  
     S E T _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ B D R S T ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e l e a s e   t h e   B a c k u p   d o m a i n   r e s e t  
     *   @ r m t o l l   B D C R                   B D R S T                   L L _ R C C _ R e l e a s e B a c k u p D o m a i n R e s e t  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ R e l e a s e B a c k u p D o m a i n R e s e t ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > B D C R ,   R C C _ B D C R _ B D R S T ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ P L L   P L L  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   P L L  
     *   @ r m t o l l   C R                       P L L O N                   L L _ R C C _ P L L _ E n a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L _ E n a b l e ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ P L L O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   P L L  
     *   @ n o t e   C a n n o t   b e   d i s a b l e d   i f   t h e   P L L   c l o c k   i s   u s e d   a s   t h e   s y s t e m   c l o c k  
     *   @ r m t o l l   C R                       P L L O N                   L L _ R C C _ P L L _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L _ D i s a b l e ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   P L L   R e a d y  
     *   @ r m t o l l   C R                       P L L R D Y                 L L _ R C C _ P L L _ I s R e a d y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L _ I s R e a d y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ P L L R D Y )   = =   ( R C C _ C R _ P L L R D Y ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   P L L   u s e d   f o r   S Y S C L K   D o m a i n  
     *   @ r m t o l l   C F G R                   P L L S R C                 L L _ R C C _ P L L _ C o n f i g D o m a i n _ S Y S \ n  
     *                   C F G R                   P L L X T P R E             L L _ R C C _ P L L _ C o n f i g D o m a i n _ S Y S \ n  
     *                   C F G R                   P L L M U L L               L L _ R C C _ P L L _ C o n f i g D o m a i n _ S Y S \ n  
     *                   C F G R 2                 P R E D I V 1               L L _ R C C _ P L L _ C o n f i g D o m a i n _ S Y S \ n  
     *                   C F G R 2                 P R E D I V 1 S R C         L L _ R C C _ P L L _ C o n f i g D o m a i n _ S Y S  
     *   @ p a r a m     S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S I _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 6   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 7   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 8   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 9   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E _ D I V _ 1 6   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 6   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 7   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 8   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 9   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2 _ D I V _ 1 6   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     *   @ p a r a m     P L L M u l   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 6 _ 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 6   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L _ C o n f i g D o m a i n _ S Y S ( u i n t 3 2 _ t   S o u r c e ,   u i n t 3 2 _ t   P L L M u l )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P L L S R C   |   R C C _ C F G R _ P L L X T P R E   |   R C C _ C F G R _ P L L M U L L ,  
                           ( S o u r c e   &   ( R C C _ C F G R _ P L L S R C   |   R C C _ C F G R _ P L L X T P R E ) )   |   P L L M u l ) ;  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
     M O D I F Y _ R E G ( R C C - > C F G R 2 ,   ( R C C _ C F G R 2 _ P R E D I V 1   |   R C C _ C F G R 2 _ P R E D I V 1 S R C ) ,  
                           ( S o u r c e   &   R C C _ C F G R 2 _ P R E D I V 1 )   |   ( ( S o u r c e   &   ( R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U ) )   > >   4 U ) ) ;  
 # e l s e  
     M O D I F Y _ R E G ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 ,   ( S o u r c e   &   R C C _ C F G R 2 _ P R E D I V 1 ) ) ;  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 S R C * /  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 * /  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   P L L   c l o c k   s o u r c e  
     *   @ r m t o l l   C F G R             P L L S R C                 L L _ R C C _ P L L _ S e t M a i n S o u r c e \ n  
     *                   C F G R 2           P R E D I V 1 S R C         L L _ R C C _ P L L _ S e t M a i n S o u r c e  
     *   @ p a r a m   P L L S o u r c e   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S I _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2   ( * )  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L _ S e t M a i n S o u r c e ( u i n t 3 2 _ t   P L L S o u r c e )  
 {  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
     M O D I F Y _ R E G ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ,   ( ( P L L S o u r c e   &   ( R C C _ C F G R 2 _ P R E D I V 1 S R C   < <   4 U ) )   > >   4 U ) ) ;  
 # e n d i f   / *   R C C _ C F G R 2 _ P R E D I V 1 S R C   * /  
     M O D I F Y _ R E G ( R C C - > C F G R ,   R C C _ C F G R _ P L L S R C ,   P L L S o u r c e ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   t h e   o s c i l l a t o r   u s e d   a s   P L L   c l o c k   s o u r c e .  
     *   @ r m t o l l   C F G R                   P L L S R C                 L L _ R C C _ P L L _ G e t M a i n S o u r c e \ n  
     *                   C F G R 2                 P R E D I V 1 S R C         L L _ R C C _ P L L _ G e t M a i n S o u r c e  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S I _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ H S E  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L S O U R C E _ P L L 2   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L _ G e t M a i n S o u r c e ( v o i d )  
 {  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 S R C )  
     u i n t 3 2 _ t   p l l s r c   =   R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ P L L S R C ) ;  
     u i n t 3 2 _ t   p r e d i v s r c   =   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C )   < <   4 U ) ;  
     r e t u r n   ( u i n t 3 2 _ t ) ( p l l s r c   |   p r e d i v s r c ) ;  
 # e l s e  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ P L L S R C ) ) ;  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 S R C * /  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P L L   m u l t i p l i c a t i o n   F a c t o r  
     *   @ r m t o l l   C F G R                   P L L M U L L               L L _ R C C _ P L L _ G e t M u l t i p l i c a t o r  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 6 _ 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L _ M U L _ 1 6   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L _ G e t M u l t i p l i c a t o r ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ P L L M U L L ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P R E D I V 1   d i v i s i o n   f a c t o r   f o r   t h e   m a i n   P L L  
     *   @ n o t e   T h e y   c a n   b e   w r i t t e n   o n l y   w h e n   t h e   P L L   i s   d i s a b l e d  
     *   @ r m t o l l   C F G R 2                 P R E D I V 1               L L _ R C C _ P L L _ G e t P r e d i v \ n  
     *                   C F G R 2                 P L L X T P R E             L L _ R C C _ P L L _ G e t P r e d i v  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 6   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 7   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 8   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 9   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ R C C _ P R E D I V _ D I V _ 1 6   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L _ G e t P r e d i v ( v o i d )  
 {  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ P R E D I V 1 )  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 ) ) ;  
 # e l s e  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R ,   R C C _ C F G R _ P L L X T P R E )   > >   R C C _ C F G R _ P L L X T P R E _ P o s ) ;  
 # e n d i f   / * R C C _ C F G R 2 _ P R E D I V 1 * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ P L L I 2 S   P L L I 2 S  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   P L L I 2 S  
     *   @ r m t o l l   C R                       P L L 3 O N                 L L _ R C C _ P L L I 2 S _ E n a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L I 2 S _ E n a b l e ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   P L L I 2 S  
     *   @ r m t o l l   C R                       P L L 3 O N                 L L _ R C C _ P L L I 2 S _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L I 2 S _ D i s a b l e ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   P L L I 2 S   R e a d y  
     *   @ r m t o l l   C R                       P L L 3 R D Y               L L _ R C C _ P L L I 2 S _ I s R e a d y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L I 2 S _ I s R e a d y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 3 R D Y )   = =   ( R C C _ C R _ P L L 3 R D Y ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   P L L I 2 S   u s e d   f o r   I 2 S   D o m a i n  
     *   @ r m t o l l   C F G R 2                 P R E D I V 2               L L _ R C C _ P L L _ C o n f i g D o m a i n _ P L L I 2 S \ n  
     *                   C F G R 2                 P L L 3 M U L               L L _ R C C _ P L L _ C o n f i g D o m a i n _ P L L I 2 S  
     *   @ p a r a m     D i v i d e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 6  
     *   @ p a r a m     M u l t i p l i c a t o r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 2 0  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L _ C o n f i g D o m a i n _ P L L I 2 S ( u i n t 3 2 _ t   D i v i d e r ,   u i n t 3 2 _ t   M u l t i p l i c a t o r )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 2   |   R C C _ C F G R 2 _ P L L 3 M U L ,   D i v i d e r   |   M u l t i p l i c a t o r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P L L I 2 S   M u l t i p l i c a t i o n   F a c t o r  
     *   @ r m t o l l   C F G R 2                 P L L 3 M U L               L L _ R C C _ P L L I 2 S _ G e t M u l t i p l i c a t o r  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L I 2 S _ M U L _ 2 0  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L I 2 S _ G e t M u l t i p l i c a t o r ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P L L 3 M U L ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ P L L 2   P L L 2  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   P L L 2  
     *   @ r m t o l l   C R                       P L L 2 O N                 L L _ R C C _ P L L 2 _ E n a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L 2 _ E n a b l e ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 2 O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   P L L 2  
     *   @ r m t o l l   C R                       P L L 2 O N                 L L _ R C C _ P L L 2 _ D i s a b l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L 2 _ D i s a b l e ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 2 O N ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   P L L 2   R e a d y  
     *   @ r m t o l l   C R                       P L L 2 R D Y               L L _ R C C _ P L L 2 _ I s R e a d y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L 2 _ I s R e a d y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C R ,   R C C _ C R _ P L L 2 R D Y )   = =   ( R C C _ C R _ P L L 2 R D Y ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e   P L L 2   u s e d   f o r   P L L 2   D o m a i n  
     *   @ r m t o l l   C F G R 2                 P R E D I V 2               L L _ R C C _ P L L _ C o n f i g D o m a i n _ P L L 2 \ n  
     *                   C F G R 2                 P L L 2 M U L               L L _ R C C _ P L L _ C o n f i g D o m a i n _ P L L 2  
     *   @ p a r a m     D i v i d e r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 6  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 7  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 5  
     *                   @ a r g   @ r e f   L L _ R C C _ H S E _ P R E D I V 2 _ D I V _ 1 6  
     *   @ p a r a m     M u l t i p l i c a t o r   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 2 0  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ P L L _ C o n f i g D o m a i n _ P L L 2 ( u i n t 3 2 _ t   D i v i d e r ,   u i n t 3 2 _ t   M u l t i p l i c a t o r )  
 {  
     M O D I F Y _ R E G ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 2   |   R C C _ C F G R 2 _ P L L 2 M U L ,   D i v i d e r   |   M u l t i p l i c a t o r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   P L L 2   M u l t i p l i c a t i o n   F a c t o r  
     *   @ r m t o l l   C F G R 2                 P L L 2 M U L               L L _ R C C _ P L L 2 _ G e t M u l t i p l i c a t o r  
     *   @ r e t v a l   R e t u r n e d   v a l u e   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 8  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 9  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 0  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 1  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 2  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 3  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 4  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 1 6  
     *                   @ a r g   @ r e f   L L _ R C C _ P L L 2 _ M U L _ 2 0  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ P L L 2 _ G e t M u l t i p l i c a t o r ( v o i d )  
 {  
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P L L 2 M U L ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ F L A G _ M a n a g e m e n t   F L A G   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C l e a r   L S I   r e a d y   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                   L S I R D Y C               L L _ R C C _ C l e a r F l a g _ L S I R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ L S I R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S I R D Y C ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   L S E   r e a d y   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                   L S E R D Y C               L L _ R C C _ C l e a r F l a g _ L S E R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ L S E R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S E R D Y C ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   H S I   r e a d y   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                   H S I R D Y C               L L _ R C C _ C l e a r F l a g _ H S I R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ H S I R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S I R D Y C ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   H S E   r e a d y   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                   H S E R D Y C               L L _ R C C _ C l e a r F l a g _ H S E R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ H S E R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S E R D Y C ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   P L L   r e a d y   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                   P L L R D Y C               L L _ R C C _ C l e a r F l a g _ P L L R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ P L L R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L R D Y C ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *  
     *   @ b r i e f     C l e a r   P L L I 2 S   r e a d y   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                     P L L 3 R D Y C             L L _ R C C _ C l e a r F l a g _ P L L I 2 S R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ P L L I 2 S R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 3 R D Y C ) ;  
 }  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *  
     *   @ b r i e f     C l e a r   P L L 2   r e a d y   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                     P L L 2 R D Y C             L L _ R C C _ C l e a r F l a g _ P L L 2 R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ P L L 2 R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 2 R D Y C ) ;  
 }  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *  
     *   @ b r i e f     C l e a r   C l o c k   s e c u r i t y   s y s t e m   i n t e r r u p t   f l a g  
     *   @ r m t o l l   C I R                   C S S C                     L L _ R C C _ C l e a r F l a g _ H S E C S S  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r F l a g _ H S E C S S ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ C S S C ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   L S I   r e a d y   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                   L S I R D Y F               L L _ R C C _ I s A c t i v e F l a g _ L S I R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ L S I R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S I R D Y F )   = =   ( R C C _ C I R _ L S I R D Y F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   L S E   r e a d y   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                   L S E R D Y F               L L _ R C C _ I s A c t i v e F l a g _ L S E R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ L S E R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S E R D Y F )   = =   ( R C C _ C I R _ L S E R D Y F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   H S I   r e a d y   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                   H S I R D Y F               L L _ R C C _ I s A c t i v e F l a g _ H S I R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ H S I R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S I R D Y F )   = =   ( R C C _ C I R _ H S I R D Y F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   H S E   r e a d y   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                   H S E R D Y F               L L _ R C C _ I s A c t i v e F l a g _ H S E R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ H S E R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S E R D Y F )   = =   ( R C C _ C I R _ H S E R D Y F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   P L L   r e a d y   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                   P L L R D Y F               L L _ R C C _ I s A c t i v e F l a g _ P L L R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ P L L R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L R D Y F )   = =   ( R C C _ C I R _ P L L R D Y F ) ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *  
     *   @ b r i e f     C h e c k   i f   P L L I 2 S   r e a d y   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                     P L L 3 R D Y F             L L _ R C C _ I s A c t i v e F l a g _ P L L I 2 S R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ P L L I 2 S R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 3 R D Y F )   = =   ( R C C _ C I R _ P L L 3 R D Y F ) ) ;  
 }  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *  
     *   @ b r i e f     C h e c k   i f   P L L 2   r e a d y   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                     P L L 2 R D Y F             L L _ R C C _ I s A c t i v e F l a g _ P L L 2 R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ P L L 2 R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 2 R D Y F )   = =   ( R C C _ C I R _ P L L 2 R D Y F ) ) ;  
 }  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   C l o c k   s e c u r i t y   s y s t e m   i n t e r r u p t   o c c u r r e d   o r   n o t  
     *   @ r m t o l l   C I R                   C S S F                     L L _ R C C _ I s A c t i v e F l a g _ H S E C S S  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ H S E C S S ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ C S S F )   = =   ( R C C _ C I R _ C S S F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R C C   f l a g   I n d e p e n d e n t   W a t c h d o g   r e s e t   i s   s e t   o r   n o t .  
     *   @ r m t o l l   C S R                     I W D G R S T F             L L _ R C C _ I s A c t i v e F l a g _ I W D G R S T  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ I W D G R S T ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C S R ,   R C C _ C S R _ I W D G R S T F )   = =   ( R C C _ C S R _ I W D G R S T F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R C C   f l a g   L o w   P o w e r   r e s e t   i s   s e t   o r   n o t .  
     *   @ r m t o l l   C S R                     L P W R R S T F             L L _ R C C _ I s A c t i v e F l a g _ L P W R R S T  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ L P W R R S T ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C S R ,   R C C _ C S R _ L P W R R S T F )   = =   ( R C C _ C S R _ L P W R R S T F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R C C   f l a g   P i n   r e s e t   i s   s e t   o r   n o t .  
     *   @ r m t o l l   C S R                     P I N R S T F               L L _ R C C _ I s A c t i v e F l a g _ P I N R S T  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ P I N R S T ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C S R ,   R C C _ C S R _ P I N R S T F )   = =   ( R C C _ C S R _ P I N R S T F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R C C   f l a g   P O R / P D R   r e s e t   i s   s e t   o r   n o t .  
     *   @ r m t o l l   C S R                     P O R R S T F               L L _ R C C _ I s A c t i v e F l a g _ P O R R S T  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ P O R R S T ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C S R ,   R C C _ C S R _ P O R R S T F )   = =   ( R C C _ C S R _ P O R R S T F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R C C   f l a g   S o f t w a r e   r e s e t   i s   s e t   o r   n o t .  
     *   @ r m t o l l   C S R                     S F T R S T F               L L _ R C C _ I s A c t i v e F l a g _ S F T R S T  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ S F T R S T ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C S R ,   R C C _ C S R _ S F T R S T F )   = =   ( R C C _ C S R _ S F T R S T F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   R C C   f l a g   W i n d o w   W a t c h d o g   r e s e t   i s   s e t   o r   n o t .  
     *   @ r m t o l l   C S R                     W W D G R S T F             L L _ R C C _ I s A c t i v e F l a g _ W W D G R S T  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s A c t i v e F l a g _ W W D G R S T ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C S R ,   R C C _ C S R _ W W D G R S T F )   = =   ( R C C _ C S R _ W W D G R S T F ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   R M V F   b i t   t o   c l e a r   t h e   r e s e t   f l a g s .  
     *   @ r m t o l l   C S R                     R M V F                     L L _ R C C _ C l e a r R e s e t F l a g s  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ C l e a r R e s e t F l a g s ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C S R ,   R C C _ C S R _ R M V F ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ I T _ M a n a g e m e n t   I T   M a n a g e m e n t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   L S I   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   L S I R D Y I E             L L _ R C C _ E n a b l e I T _ L S I R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e I T _ L S I R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S I R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   L S E   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   L S E R D Y I E             L L _ R C C _ E n a b l e I T _ L S E R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e I T _ L S E R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S E R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   H S I   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   H S I R D Y I E             L L _ R C C _ E n a b l e I T _ H S I R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e I T _ H S I R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S I R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   H S E   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   H S E R D Y I E             L L _ R C C _ E n a b l e I T _ H S E R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e I T _ H S E R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S E R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e   P L L   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   P L L R D Y I E             L L _ R C C _ E n a b l e I T _ P L L R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e I T _ P L L R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L R D Y I E ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *  
     *   @ b r i e f     E n a b l e   P L L I 2 S   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                     P L L 3 R D Y I E           L L _ R C C _ E n a b l e I T _ P L L I 2 S R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e I T _ P L L I 2 S R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 3 R D Y I E ) ;  
 }  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *  
     *   @ b r i e f     E n a b l e   P L L 2   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                     P L L 2 R D Y I E           L L _ R C C _ E n a b l e I T _ P L L 2 R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ E n a b l e I T _ P L L 2 R D Y ( v o i d )  
 {  
     S E T _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 2 R D Y I E ) ;  
 }  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *  
     *   @ b r i e f     D i s a b l e   L S I   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   L S I R D Y I E             L L _ R C C _ D i s a b l e I T _ L S I R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e I T _ L S I R D Y ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S I R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   L S E   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   L S E R D Y I E             L L _ R C C _ D i s a b l e I T _ L S E R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e I T _ L S E R D Y ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S E R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   H S I   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   H S I R D Y I E             L L _ R C C _ D i s a b l e I T _ H S I R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e I T _ H S I R D Y ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S I R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   H S E   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   H S E R D Y I E             L L _ R C C _ D i s a b l e I T _ H S E R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e I T _ H S E R D Y ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S E R D Y I E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   P L L   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                   P L L R D Y I E             L L _ R C C _ D i s a b l e I T _ P L L R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e I T _ P L L R D Y ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L R D Y I E ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *  
     *   @ b r i e f     D i s a b l e   P L L I 2 S   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                     P L L 3 R D Y I E           L L _ R C C _ D i s a b l e I T _ P L L I 2 S R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e I T _ P L L I 2 S R D Y ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 3 R D Y I E ) ;  
 }  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *  
     *   @ b r i e f     D i s a b l e   P L L 2   r e a d y   i n t e r r u p t  
     *   @ r m t o l l   C I R                     P L L 2 R D Y I E           L L _ R C C _ D i s a b l e I T _ P L L 2 R D Y  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ R C C _ D i s a b l e I T _ P L L 2 R D Y ( v o i d )  
 {  
     C L E A R _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 2 R D Y I E ) ;  
 }  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *  
     *   @ b r i e f     C h e c k s   i f   L S I   r e a d y   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C I R                   L S I R D Y I E             L L _ R C C _ I s E n a b l e d I T _ L S I R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d I T _ L S I R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S I R D Y I E )   = =   ( R C C _ C I R _ L S I R D Y I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   i f   L S E   r e a d y   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C I R                   L S E R D Y I E             L L _ R C C _ I s E n a b l e d I T _ L S E R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d I T _ L S E R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ L S E R D Y I E )   = =   ( R C C _ C I R _ L S E R D Y I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   i f   H S I   r e a d y   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C I R                   H S I R D Y I E             L L _ R C C _ I s E n a b l e d I T _ H S I R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d I T _ H S I R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S I R D Y I E )   = =   ( R C C _ C I R _ H S I R D Y I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   i f   H S E   r e a d y   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C I R                   H S E R D Y I E             L L _ R C C _ I s E n a b l e d I T _ H S E R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d I T _ H S E R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ H S E R D Y I E )   = =   ( R C C _ C I R _ H S E R D Y I E ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   i f   P L L   r e a d y   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C I R                   P L L R D Y I E             L L _ R C C _ I s E n a b l e d I T _ P L L R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d I T _ P L L R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L R D Y I E )   = =   ( R C C _ C I R _ P L L R D Y I E ) ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ P L L I 2 S _ S U P P O R T )  
 / * *  
     *   @ b r i e f     C h e c k s   i f   P L L I 2 S   r e a d y   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C I R                     P L L 3 R D Y I E           L L _ R C C _ I s E n a b l e d I T _ P L L I 2 S R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d I T _ P L L I 2 S R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 3 R D Y I E )   = =   ( R C C _ C I R _ P L L 3 R D Y I E ) ) ;  
 }  
 # e n d i f   / *   R C C _ P L L I 2 S _ S U P P O R T   * /  
  
 # i f   d e f i n e d ( R C C _ P L L 2 _ S U P P O R T )  
 / * *  
     *   @ b r i e f     C h e c k s   i f   P L L 2   r e a d y   i n t e r r u p t   s o u r c e   i s   e n a b l e d   o r   d i s a b l e d .  
     *   @ r m t o l l   C I R                     P L L 2 R D Y I E           L L _ R C C _ I s E n a b l e d I T _ P L L 2 R D Y  
     *   @ r e t v a l   S t a t e   o f   b i t   ( 1   o r   0 ) .  
     * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ R C C _ I s E n a b l e d I T _ P L L 2 R D Y ( v o i d )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > C I R ,   R C C _ C I R _ P L L 2 R D Y I E )   = =   ( R C C _ C I R _ P L L 2 R D Y I E ) ) ;  
 }  
 # e n d i f   / *   R C C _ P L L 2 _ S U P P O R T   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ I n i t   D e - i n i t i a l i z a t i o n   f u n c t i o n  
     *   @ {  
     * /  
 E r r o r S t a t u s   L L _ R C C _ D e I n i t ( v o i d ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R C C _ L L _ E F _ G e t _ F r e q   G e t   s y s t e m   a n d   p e r i p h e r a l s   c l o c k s   f r e q u e n c y   f u n c t i o n s  
     *   @ {  
     * /  
 v o i d                 L L _ R C C _ G e t S y s t e m C l o c k s F r e q ( L L _ R C C _ C l o c k s T y p e D e f   * R C C _ C l o c k s ) ;  
 # i f   d e f i n e d ( R C C _ C F G R 2 _ I 2 S 2 S R C )  
 u i n t 3 2 _ t         L L _ R C C _ G e t I 2 S C l o c k F r e q ( u i n t 3 2 _ t   I 2 S x S o u r c e ) ;  
 # e n d i f   / *   R C C _ C F G R 2 _ I 2 S 2 S R C   * /  
 # i f   d e f i n e d ( U S B _ O T G _ F S )   | |   d e f i n e d ( U S B )  
 u i n t 3 2 _ t         L L _ R C C _ G e t U S B C l o c k F r e q ( u i n t 3 2 _ t   U S B x S o u r c e ) ;  
 # e n d i f   / *   U S B _ O T G _ F S   | |   U S B   * /  
 u i n t 3 2 _ t         L L _ R C C _ G e t A D C C l o c k F r e q ( u i n t 3 2 _ t   A D C x S o u r c e ) ;  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   R C C   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ R C C _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  