??/ *   U S E R   C O D E   B E G I N   H e a d e r   * /  
 / * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ c o n f . h  
     *   @ b r i e f       H A L   c o n f i g u r a t i o n   f i l e .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d .  
     *  
     *   T h i s   s o f t w a r e   i s   l i c e n s e d   u n d e r   t e r m s   t h a t   c a n   b e   f o u n d   i n   t h e   L I C E N S E   f i l e  
     *   i n   t h e   r o o t   d i r e c t o r y   o f   t h i s   s o f t w a r e   c o m p o n e n t .  
     *   I f   n o   L I C E N S E   f i l e   c o m e s   w i t h   t h i s   s o f t w a r e ,   i t   i s   p r o v i d e d   A S - I S .  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
 / *   U S E R   C O D E   E N D   H e a d e r   * /  
  
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ C O N F _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ C O N F _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
   e x t e r n   " C "   {  
 # e n d i f  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #   M o d u l e   S e l e c t i o n   # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   * /  
 / * *  
     *   @ b r i e f   T h i s   i s   t h e   l i s t   o f   m o d u l e s   t o   b e   u s e d   i n   t h e   H A L   d r i v e r  
     * /  
  
 # d e f i n e   H A L _ M O D U L E _ E N A B L E D  
     / * # d e f i n e   H A L _ A D C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ C R Y P _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ C A N _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ C A N _ L E G A C Y _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ C E C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ C O R T E X _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ C R C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ D A C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ D M A _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ E T H _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ F L A S H _ M O D U L E _ E N A B L E D       * /  
 # d e f i n e   H A L _ G P I O _ M O D U L E _ E N A B L E D  
 / * # d e f i n e   H A L _ I 2 C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ I 2 S _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ I R D A _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ I W D G _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ N O R _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ N A N D _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ P C C A R D _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ P C D _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ H C D _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ P W R _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ R C C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ R T C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ S D _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ M M C _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ S D R A M _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ S M A R T C A R D _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ S P I _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ S R A M _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ T I M _ M O D U L E _ E N A B L E D       * /  
 # d e f i n e   H A L _ U A R T _ M O D U L E _ E N A B L E D  
 / * # d e f i n e   H A L _ U S A R T _ M O D U L E _ E N A B L E D       * /  
 / * # d e f i n e   H A L _ W W D G _ M O D U L E _ E N A B L E D       * /  
  
 # d e f i n e   H A L _ C O R T E X _ M O D U L E _ E N A B L E D  
 # d e f i n e   H A L _ D M A _ M O D U L E _ E N A B L E D  
 # d e f i n e   H A L _ F L A S H _ M O D U L E _ E N A B L E D  
 # d e f i n e   H A L _ E X T I _ M O D U L E _ E N A B L E D  
 # d e f i n e   H A L _ G P I O _ M O D U L E _ E N A B L E D  
 # d e f i n e   H A L _ P W R _ M O D U L E _ E N A B L E D  
 # d e f i n e   H A L _ R C C _ M O D U L E _ E N A B L E D  
  
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #   O s c i l l a t o r   V a l u e s   a d a p t a t i o n   # # # # # # # # # # # # # # # # # # # # * /  
 / * *  
     *   @ b r i e f   A d j u s t   t h e   v a l u e   o f   E x t e r n a l   H i g h   S p e e d   o s c i l l a t o r   ( H S E )   u s e d   i n   y o u r   a p p l i c a t i o n .  
     *                 T h i s   v a l u e   i s   u s e d   b y   t h e   R C C   H A L   m o d u l e   t o   c o m p u t e   t h e   s y s t e m   f r e q u e n c y  
     *                 ( w h e n   H S E   i s   u s e d   a s   s y s t e m   c l o c k   s o u r c e ,   d i r e c t l y   o r   t h r o u g h   t h e   P L L ) .  
     * /  
 # i f   ! d e f i n e d     ( H S E _ V A L U E )  
     # d e f i n e   H S E _ V A L U E         8 0 0 0 0 0 0 U   / * ! <   V a l u e   o f   t h e   E x t e r n a l   o s c i l l a t o r   i n   H z   * /  
 # e n d i f   / *   H S E _ V A L U E   * /  
  
 # i f   ! d e f i n e d     ( H S E _ S T A R T U P _ T I M E O U T )  
     # d e f i n e   H S E _ S T A R T U P _ T I M E O U T         1 0 0 U       / * ! <   T i m e   o u t   f o r   H S E   s t a r t   u p ,   i n   m s   * /  
 # e n d i f   / *   H S E _ S T A R T U P _ T I M E O U T   * /  
  
 / * *  
     *   @ b r i e f   I n t e r n a l   H i g h   S p e e d   o s c i l l a t o r   ( H S I )   v a l u e .  
     *                 T h i s   v a l u e   i s   u s e d   b y   t h e   R C C   H A L   m o d u l e   t o   c o m p u t e   t h e   s y s t e m   f r e q u e n c y  
     *                 ( w h e n   H S I   i s   u s e d   a s   s y s t e m   c l o c k   s o u r c e ,   d i r e c t l y   o r   t h r o u g h   t h e   P L L ) .  
     * /  
 # i f   ! d e f i n e d     ( H S I _ V A L U E )  
     # d e f i n e   H S I _ V A L U E         8 0 0 0 0 0 0 U   / * ! <   V a l u e   o f   t h e   I n t e r n a l   o s c i l l a t o r   i n   H z * /  
 # e n d i f   / *   H S I _ V A L U E   * /  
  
 / * *  
     *   @ b r i e f   I n t e r n a l   L o w   S p e e d   o s c i l l a t o r   ( L S I )   v a l u e .  
     * /  
 # i f   ! d e f i n e d     ( L S I _ V A L U E )  
   # d e f i n e   L S I _ V A L U E                               4 0 0 0 0 U         / * ! <   L S I   T y p i c a l   V a l u e   i n   H z   * /  
 # e n d i f   / *   L S I _ V A L U E   * /                                           / * ! <   V a l u e   o f   t h e   I n t e r n a l   L o w   S p e e d   o s c i l l a t o r   i n   H z  
                                                                                                 T h e   r e a l   v a l u e   m a y   v a r y   d e p e n d i n g   o n   t h e   v a r i a t i o n s  
                                                                                                 i n   v o l t a g e   a n d   t e m p e r a t u r e .   * /  
  
 / * *  
     *   @ b r i e f   E x t e r n a l   L o w   S p e e d   o s c i l l a t o r   ( L S E )   v a l u e .  
     *                 T h i s   v a l u e   i s   u s e d   b y   t h e   U A R T ,   R T C   H A L   m o d u l e   t o   c o m p u t e   t h e   s y s t e m   f r e q u e n c y  
     * /  
 # i f   ! d e f i n e d     ( L S E _ V A L U E )  
     # d e f i n e   L S E _ V A L U E         3 2 7 6 8 U   / * ! <   V a l u e   o f   t h e   E x t e r n a l   o s c i l l a t o r   i n   H z * /  
 # e n d i f   / *   L S E _ V A L U E   * /  
  
 # i f   ! d e f i n e d     ( L S E _ S T A R T U P _ T I M E O U T )  
     # d e f i n e   L S E _ S T A R T U P _ T I M E O U T         5 0 0 0 U       / * ! <   T i m e   o u t   f o r   L S E   s t a r t   u p ,   i n   m s   * /  
 # e n d i f   / *   L S E _ S T A R T U P _ T I M E O U T   * /  
  
 / *   T i p :   T o   a v o i d   m o d i f y i n g   t h i s   f i l e   e a c h   t i m e   y o u   n e e d   t o   u s e   d i f f e r e n t   H S E ,  
       = = =     y o u   c a n   d e f i n e   t h e   H S E   v a l u e   i n   y o u r   t o o l c h a i n   c o m p i l e r   p r e p r o c e s s o r .   * /  
  
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # # #   S y s t e m   C o n f i g u r a t i o n   # # # # # # # # # # # # # # # # # # # # # # # # #   * /  
 / * *  
     *   @ b r i e f   T h i s   i s   t h e   H A L   s y s t e m   c o n f i g u r a t i o n   s e c t i o n  
     * /  
 # d e f i n e     V D D _ V A L U E                                         3 3 0 0 U   / * ! <   V a l u e   o f   V D D   i n   m v   * /  
 # d e f i n e     T I C K _ I N T _ P R I O R I T Y                         0 U         / * ! <   t i c k   i n t e r r u p t   p r i o r i t y   ( l o w e s t   b y   d e f a u l t )     * /  
 # d e f i n e     U S E _ R T O S                                           0 U  
 # d e f i n e     P R E F E T C H _ E N A B L E                             1 U  
  
 # d e f i n e     U S E _ H A L _ A D C _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   A D C   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ C A N _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   C A N   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   C E C   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ D A C _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   D A C   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   E T H   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   H C D   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ I 2 C _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   I 2 C   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ I 2 S _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   I 2 S   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ M M C _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   M M C   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ N A N D _ R E G I S T E R _ C A L L B A C K S                 0 U   / *   N A N D   r e g i s t e r   c a l l b a c k   d i s a b l e d             * /  
 # d e f i n e     U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   N O R   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S             0 U   / *   P C C A R D   r e g i s t e r   c a l l b a c k   d i s a b l e d         * /  
 # d e f i n e     U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   P C D   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   R T C   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ S D _ R E G I S T E R _ C A L L B A C K S                     0 U   / *   S D   r e g i s t e r   c a l l b a c k   d i s a b l e d                 * /  
 # d e f i n e     U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S       0 U   / *   S M A R T C A R D   r e g i s t e r   c a l l b a c k   d i s a b l e d   * /  
 # d e f i n e     U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S                 0 U   / *   I R D A   r e g i s t e r   c a l l b a c k   d i s a b l e d             * /  
 # d e f i n e     U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S                 0 U   / *   S R A M   r e g i s t e r   c a l l b a c k   d i s a b l e d             * /  
 # d e f i n e     U S E _ H A L _ S P I _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   S P I   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S                   0 U   / *   T I M   r e g i s t e r   c a l l b a c k   d i s a b l e d               * /  
 # d e f i n e     U S E _ H A L _ U A R T _ R E G I S T E R _ C A L L B A C K S                 0 U   / *   U A R T   r e g i s t e r   c a l l b a c k   d i s a b l e d             * /  
 # d e f i n e     U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S               0 U   / *   U S A R T   r e g i s t e r   c a l l b a c k   d i s a b l e d           * /  
 # d e f i n e     U S E _ H A L _ W W D G _ R E G I S T E R _ C A L L B A C K S                 0 U   / *   W W D G   r e g i s t e r   c a l l b a c k   d i s a b l e d             * /  
  
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #   A s s e r t   S e l e c t i o n   # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   * /  
 / * *  
     *   @ b r i e f   U n c o m m e n t   t h e   l i n e   b e l o w   t o   e x p a n s e   t h e   " a s s e r t _ p a r a m "   m a c r o   i n   t h e  
     *                 H A L   d r i v e r s   c o d e  
     * /  
 / *   # d e f i n e   U S E _ F U L L _ A S S E R T         1 U   * /  
  
 / *   # # # # # # # # # # # # # # # # # #   E t h e r n e t   p e r i p h e r a l   c o n f i g u r a t i o n   # # # # # # # # # # # # # # # # # # # # #   * /  
  
 / *   S e c t i o n   1   :   E t h e r n e t   p e r i p h e r a l   c o n f i g u r a t i o n   * /  
  
 / *   M A C   A D D R E S S :   M A C _ A D D R 0 : M A C _ A D D R 1 : M A C _ A D D R 2 : M A C _ A D D R 3 : M A C _ A D D R 4 : M A C _ A D D R 5   * /  
 # d e f i n e   M A C _ A D D R 0       2 U  
 # d e f i n e   M A C _ A D D R 1       0 U  
 # d e f i n e   M A C _ A D D R 2       0 U  
 # d e f i n e   M A C _ A D D R 3       0 U  
 # d e f i n e   M A C _ A D D R 4       0 U  
 # d e f i n e   M A C _ A D D R 5       0 U  
  
 / *   D e f i n i t i o n   o f   t h e   E t h e r n e t   d r i v e r   b u f f e r s   s i z e   a n d   c o u n t   * /  
 # d e f i n e   E T H _ R X _ B U F _ S I Z E                                 E T H _ M A X _ P A C K E T _ S I Z E   / *   b u f f e r   s i z e   f o r   r e c e i v e                               * /  
 # d e f i n e   E T H _ T X _ B U F _ S I Z E                                 E T H _ M A X _ P A C K E T _ S I Z E   / *   b u f f e r   s i z e   f o r   t r a n s m i t                             * /  
 # d e f i n e   E T H _ R X B U F N B                                         8 U               / *   4   R x   b u f f e r s   o f   s i z e   E T H _ R X _ B U F _ S I Z E     * /  
 # d e f i n e   E T H _ T X B U F N B                                         4 U               / *   4   T x   b u f f e r s   o f   s i z e   E T H _ T X _ B U F _ S I Z E     * /  
  
 / *   S e c t i o n   2 :   P H Y   c o n f i g u r a t i o n   s e c t i o n   * /  
  
 / *   D P 8 3 8 4 8 _ P H Y _ A D D R E S S   A d d r e s s * /  
 # d e f i n e   D P 8 3 8 4 8 _ P H Y _ A D D R E S S                       0 x 0 1 U  
 / *   P H Y   R e s e t   d e l a y   t h e s e   v a l u e s   a r e   b a s e d   o n   a   1   m s   S y s t i c k   i n t e r r u p t * /  
 # d e f i n e   P H Y _ R E S E T _ D E L A Y                                   0 x 0 0 0 0 0 0 F F U  
 / *   P H Y   C o n f i g u r a t i o n   d e l a y   * /  
 # d e f i n e   P H Y _ C O N F I G _ D E L A Y                                 0 x 0 0 0 0 0 F F F U  
  
 # d e f i n e   P H Y _ R E A D _ T O                                           0 x 0 0 0 0 F F F F U  
 # d e f i n e   P H Y _ W R I T E _ T O                                         0 x 0 0 0 0 F F F F U  
  
 / *   S e c t i o n   3 :   C o m m o n   P H Y   R e g i s t e r s   * /  
  
 # d e f i n e   P H Y _ B C R                                                   ( ( u i n t 1 6 _ t ) 0 x 0 0 )         / * ! <   T r a n s c e i v e r   B a s i c   C o n t r o l   R e g i s t e r       * /  
 # d e f i n e   P H Y _ B S R                                                   ( ( u i n t 1 6 _ t ) 0 x 0 1 )         / * ! <   T r a n s c e i v e r   B a s i c   S t a t u s   R e g i s t e r         * /  
  
 # d e f i n e   P H Y _ R E S E T                                               ( ( u i n t 1 6 _ t ) 0 x 8 0 0 0 )     / * ! <   P H Y   R e s e t   * /  
 # d e f i n e   P H Y _ L O O P B A C K                                         ( ( u i n t 1 6 _ t ) 0 x 4 0 0 0 )     / * ! <   S e l e c t   l o o p - b a c k   m o d e   * /  
 # d e f i n e   P H Y _ F U L L D U P L E X _ 1 0 0 M                           ( ( u i n t 1 6 _ t ) 0 x 2 1 0 0 )     / * ! <   S e t   t h e   f u l l - d u p l e x   m o d e   a t   1 0 0   M b / s   * /  
 # d e f i n e   P H Y _ H A L F D U P L E X _ 1 0 0 M                           ( ( u i n t 1 6 _ t ) 0 x 2 0 0 0 )     / * ! <   S e t   t h e   h a l f - d u p l e x   m o d e   a t   1 0 0   M b / s   * /  
 # d e f i n e   P H Y _ F U L L D U P L E X _ 1 0 M                             ( ( u i n t 1 6 _ t ) 0 x 0 1 0 0 )     / * ! <   S e t   t h e   f u l l - d u p l e x   m o d e   a t   1 0   M b / s     * /  
 # d e f i n e   P H Y _ H A L F D U P L E X _ 1 0 M                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 0 )     / * ! <   S e t   t h e   h a l f - d u p l e x   m o d e   a t   1 0   M b / s     * /  
 # d e f i n e   P H Y _ A U T O N E G O T I A T I O N                           ( ( u i n t 1 6 _ t ) 0 x 1 0 0 0 )     / * ! <   E n a b l e   a u t o - n e g o t i a t i o n   f u n c t i o n           * /  
 # d e f i n e   P H Y _ R E S T A R T _ A U T O N E G O T I A T I O N           ( ( u i n t 1 6 _ t ) 0 x 0 2 0 0 )     / * ! <   R e s t a r t   a u t o - n e g o t i a t i o n   f u n c t i o n         * /  
 # d e f i n e   P H Y _ P O W E R D O W N                                       ( ( u i n t 1 6 _ t ) 0 x 0 8 0 0 )     / * ! <   S e l e c t   t h e   p o w e r   d o w n   m o d e                       * /  
 # d e f i n e   P H Y _ I S O L A T E                                           ( ( u i n t 1 6 _ t ) 0 x 0 4 0 0 )     / * ! <   I s o l a t e   P H Y   f r o m   M I I                                   * /  
  
 # d e f i n e   P H Y _ A U T O N E G O _ C O M P L E T E                       ( ( u i n t 1 6 _ t ) 0 x 0 0 2 0 )     / * ! <   A u t o - N e g o t i a t i o n   p r o c e s s   c o m p l e t e d       * /  
 # d e f i n e   P H Y _ L I N K E D _ S T A T U S                               ( ( u i n t 1 6 _ t ) 0 x 0 0 0 4 )     / * ! <   V a l i d   l i n k   e s t a b l i s h e d                               * /  
 # d e f i n e   P H Y _ J A B B E R _ D E T E C T I O N                         ( ( u i n t 1 6 _ t ) 0 x 0 0 0 2 )     / * ! <   J a b b e r   c o n d i t i o n   d e t e c t e d                         * /  
  
 / *   S e c t i o n   4 :   E x t e n d e d   P H Y   R e g i s t e r s   * /  
 # d e f i n e   P H Y _ S R                                                     ( ( u i n t 1 6 _ t ) 0 x 1 0 U )         / * ! <   P H Y   s t a t u s   r e g i s t e r   O f f s e t                                             * /  
  
 # d e f i n e   P H Y _ S P E E D _ S T A T U S                                 ( ( u i n t 1 6 _ t ) 0 x 0 0 0 2 U )     / * ! <   P H Y   S p e e d   m a s k                                                                     * /  
 # d e f i n e   P H Y _ D U P L E X _ S T A T U S                               ( ( u i n t 1 6 _ t ) 0 x 0 0 0 4 U )     / * ! <   P H Y   D u p l e x   m a s k                                                                   * /  
  
 / *   # # # # # # # # # # # # # # # # # #   S P I   p e r i p h e r a l   c o n f i g u r a t i o n   # # # # # # # # # # # # # # # # # # # # # # # # # #   * /  
  
 / *   C R C   F E A T U R E :   U s e   t o   a c t i v a t e   C R C   f e a t u r e   i n s i d e   H A L   S P I   D r i v e r  
 *   A c t i v a t e d :   C R C   c o d e   i s   p r e s e n t   i n s i d e   d r i v e r  
 *   D e a c t i v a t e d :   C R C   c o d e   c l e a n e d   f r o m   d r i v e r  
 * /  
  
 # d e f i n e   U S E _ S P I _ C R C                                           0 U  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *  
     *   @ b r i e f   I n c l u d e   m o d u l e ' s   h e a d e r   f i l e  
     * /  
  
 # i f d e f   H A L _ R C C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ r c c . h "  
 # e n d i f   / *   H A L _ R C C _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ G P I O _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ g p i o . h "  
 # e n d i f   / *   H A L _ G P I O _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ E X T I _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ e x t i . h "  
 # e n d i f   / *   H A L _ E X T I _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ D M A _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d m a . h "  
 # e n d i f   / *   H A L _ D M A _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ E T H _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ e t h . h "  
 # e n d i f   / *   H A L _ E T H _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ C A N _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ c a n . h "  
 # e n d i f   / *   H A L _ C A N _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ C A N _ L E G A C Y _ M O D U L E _ E N A B L E D  
     # i n c l u d e   " L e g a c y / s t m 3 2 f 1 x x _ h a l _ c a n _ l e g a c y . h "  
 # e n d i f   / *   H A L _ C A N _ L E G A C Y _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ C E C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ c e c . h "  
 # e n d i f   / *   H A L _ C E C _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ C O R T E X _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ c o r t e x . h "  
 # e n d i f   / *   H A L _ C O R T E X _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ A D C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ a d c . h "  
 # e n d i f   / *   H A L _ A D C _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ C R C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ c r c . h "  
 # e n d i f   / *   H A L _ C R C _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ D A C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d a c . h "  
 # e n d i f   / *   H A L _ D A C _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ F L A S H _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ f l a s h . h "  
 # e n d i f   / *   H A L _ F L A S H _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ S R A M _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ s r a m . h "  
 # e n d i f   / *   H A L _ S R A M _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ N O R _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ n o r . h "  
 # e n d i f   / *   H A L _ N O R _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ I 2 C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ i 2 c . h "  
 # e n d i f   / *   H A L _ I 2 C _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ I 2 S _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ i 2 s . h "  
 # e n d i f   / *   H A L _ I 2 S _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ I W D G _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ i w d g . h "  
 # e n d i f   / *   H A L _ I W D G _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ P W R _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ p w r . h "  
 # e n d i f   / *   H A L _ P W R _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ R T C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ r t c . h "  
 # e n d i f   / *   H A L _ R T C _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ P C C A R D _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ p c c a r d . h "  
 # e n d i f   / *   H A L _ P C C A R D _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ S D _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ s d . h "  
 # e n d i f   / *   H A L _ S D _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ N A N D _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ n a n d . h "  
 # e n d i f   / *   H A L _ N A N D _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ S P I _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ s p i . h "  
 # e n d i f   / *   H A L _ S P I _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ T I M _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ t i m . h "  
 # e n d i f   / *   H A L _ T I M _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ U A R T _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ u a r t . h "  
 # e n d i f   / *   H A L _ U A R T _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ U S A R T _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ u s a r t . h "  
 # e n d i f   / *   H A L _ U S A R T _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ I R D A _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ i r d a . h "  
 # e n d i f   / *   H A L _ I R D A _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ S M A R T C A R D _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ s m a r t c a r d . h "  
 # e n d i f   / *   H A L _ S M A R T C A R D _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ W W D G _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ w w d g . h "  
 # e n d i f   / *   H A L _ W W D G _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ P C D _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ p c d . h "  
 # e n d i f   / *   H A L _ P C D _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ H C D _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ h c d . h "  
 # e n d i f   / *   H A L _ H C D _ M O D U L E _ E N A B L E D   * /  
  
 # i f d e f   H A L _ M M C _ M O D U L E _ E N A B L E D  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ m m c . h "  
 # e n d i f   / *   H A L _ M M C _ M O D U L E _ E N A B L E D   * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f d e f     U S E _ F U L L _ A S S E R T  
 / * *  
     *   @ b r i e f     T h e   a s s e r t _ p a r a m   m a c r o   i s   u s e d   f o r   f u n c t i o n ' s   p a r a m e t e r s   c h e c k .  
     *   @ p a r a m     e x p r   I f   e x p r   i s   f a l s e ,   i t   c a l l s   a s s e r t _ f a i l e d   f u n c t i o n  
     *                   w h i c h   r e p o r t s   t h e   n a m e   o f   t h e   s o u r c e   f i l e   a n d   t h e   s o u r c e  
     *                   l i n e   n u m b e r   o f   t h e   c a l l   t h a t   f a i l e d .  
     *                   I f   e x p r   i s   t r u e ,   i t   r e t u r n s   n o   v a l u e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   a s s e r t _ p a r a m ( e x p r )   ( ( e x p r )   ?   ( v o i d ) 0 U   :   a s s e r t _ f a i l e d ( ( u i n t 8 _ t   * ) _ _ F I L E _ _ ,   _ _ L I N E _ _ ) )  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
 v o i d   a s s e r t _ f a i l e d ( u i n t 8 _ t *   f i l e ,   u i n t 3 2 _ t   l i n e ) ;  
 # e l s e  
 # d e f i n e   a s s e r t _ p a r a m ( e x p r )   ( ( v o i d ) 0 U )  
 # e n d i f   / *   U S E _ F U L L _ A S S E R T   * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ C O N F _ H   * /  
  