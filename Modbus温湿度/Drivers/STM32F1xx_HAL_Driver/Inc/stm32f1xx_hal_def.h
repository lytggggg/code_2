�?/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ d e f . h 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       T h i s   f i l e   c o n t a i n s   H A L   c o m m o n   d e f i n e s ,   e n u m e r a t i o n ,   m a c r o s   a n d 
     *                     s t r u c t u r e s   d e f i n i t i o n s . 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ a t t e n t i o n 
     * 
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s . 
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ D E F 
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ D E F 
 
 # i f d e f   _ _ c p l u s p l u s 
 e x t e r n   " C "   { 
 # e n d i f 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x . h " 
 # i n c l u d e   " L e g a c y / s t m 3 2 _ h a l _ l e g a c y . h " 
 # i n c l u d e   < s t d d e f . h > 
 
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * * 
     *   @ b r i e f     H A L   S t a t u s   s t r u c t u r e s   d e f i n i t i o n 
     * / 
 t y p e d e f   e n u m 
 { 
     H A L _ O K               =   0 x 0 0 U , 
     H A L _ E R R O R         =   0 x 0 1 U , 
     H A L _ B U S Y           =   0 x 0 2 U , 
     H A L _ T I M E O U T     =   0 x 0 3 U 
 }   H A L _ S t a t u s T y p e D e f ; 
 
 / * * 
     *   @ b r i e f     H A L   L o c k   s t r u c t u r e s   d e f i n i t i o n 
     * / 
 t y p e d e f   e n u m 
 { 
     H A L _ U N L O C K E D   =   0 x 0 0 U , 
     H A L _ L O C K E D       =   0 x 0 1 U 
 }   H A L _ L o c k T y p e D e f ; 
 
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # d e f i n e   H A L _ M A X _ D E L A Y             0 x F F F F F F F F U 
 
 # d e f i n e   H A L _ I S _ B I T _ S E T ( R E G ,   B I T )                   ( ( ( R E G )   &   ( B I T ) )   ! =   0 U ) 
 # d e f i n e   H A L _ I S _ B I T _ C L R ( R E G ,   B I T )                   ( ( ( R E G )   &   ( B I T ) )   = =   0 U ) 
 
 # d e f i n e   _ _ H A L _ L I N K D M A ( _ _ H A N D L E _ _ ,   _ _ P P P _ D M A _ F I E L D _ _ ,   _ _ D M A _ H A N D L E _ _ )                               \ 
                                                 d o {                                                                                                             \ 
                                                             ( _ _ H A N D L E _ _ ) - > _ _ P P P _ D M A _ F I E L D _ _   =   & ( _ _ D M A _ H A N D L E _ _ ) ;   \ 
                                                             ( _ _ D M A _ H A N D L E _ _ ) . P a r e n t   =   ( _ _ H A N D L E _ _ ) ;                           \ 
                                                     }   w h i l e ( 0 U ) 
 
 # d e f i n e   U N U S E D ( X )   ( v o i d ) X             / *   T o   a v o i d   g c c / g + +   w a r n i n g s   * / 
 
 / * *   @ b r i e f   R e s e t   t h e   H a n d l e ' s   S t a t e   f i e l d . 
     *   @ p a r a m   _ _ H A N D L E _ _   s p e c i f i e s   t h e   P e r i p h e r a l   H a n d l e . 
     *   @ n o t e     T h i s   m a c r o   c a n   b e   u s e d   f o r   t h e   f o l l o w i n g   p u r p o s e : 
     *                     -   W h e n   t h e   H a n d l e   i s   d e c l a r e d   a s   l o c a l   v a r i a b l e ;   b e f o r e   p a s s i n g   i t   a s   p a r a m e t e r 
     *                         t o   H A L _ P P P _ I n i t ( )   f o r   t h e   f i r s t   t i m e ,   i t   i s   m a n d a t o r y   t o   u s e   t h i s   m a c r o 
     *                         t o   s e t   t o   0   t h e   H a n d l e ' s   " S t a t e "   f i e l d . 
     *                         O t h e r w i s e ,   " S t a t e "   f i e l d   m a y   h a v e   a n y   r a n d o m   v a l u e   a n d   t h e   f i r s t   t i m e   t h e   f u n c t i o n 
     *                         H A L _ P P P _ I n i t ( )   i s   c a l l e d ,   t h e   l o w   l e v e l   h a r d w a r e   i n i t i a l i z a t i o n   w i l l   b e   m i s s e d 
     *                         ( i . e .   H A L _ P P P _ M s p I n i t ( )   w i l l   n o t   b e   e x e c u t e d ) . 
     *                     -   W h e n   t h e r e   i s   a   n e e d   t o   r e c o n f i g u r e   t h e   l o w   l e v e l   h a r d w a r e :   i n s t e a d   o f   c a l l i n g 
     *                         H A L _ P P P _ D e I n i t ( )   t h e n   H A L _ P P P _ I n i t ( ) ,   u s e r   c a n   m a k e   a   c a l l   t o   t h i s   m a c r o   t h e n   H A L _ P P P _ I n i t ( ) . 
     *                         I n   t h i s   l a t e r   f u n c t i o n ,   w h e n   t h e   H a n d l e ' s   " S t a t e "   f i e l d   i s   s e t   t o   0 ,   i t   w i l l   e x e c u t e   t h e   f u n c t i o n 
     *                         H A L _ P P P _ M s p I n i t ( )   w h i c h   w i l l   r e c o n f i g u r e   t h e   l o w   l e v e l   h a r d w a r e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   0 U ) 
 
 # i f   ( U S E _ R T O S   = =   1 U ) 
 / *   R e s e r v e d   f o r   f u t u r e   u s e   * / 
 # e r r o r   " U S E _ R T O S   s h o u l d   b e   0   i n   t h e   c u r r e n t   H A L   r e l e a s e " 
 # e l s e 
 # d e f i n e   _ _ H A L _ L O C K ( _ _ H A N D L E _ _ )                                                                                       \ 
                                                                 d o {                                                                                 \ 
                                                                         i f ( ( _ _ H A N D L E _ _ ) - > L o c k   = =   H A L _ L O C K E D )       \ 
                                                                         {                                                                             \ 
                                                                               r e t u r n   H A L _ B U S Y ;                                         \ 
                                                                         }                                                                             \ 
                                                                         e l s e                                                                       \ 
                                                                         {                                                                             \ 
                                                                               ( _ _ H A N D L E _ _ ) - > L o c k   =   H A L _ L O C K E D ;         \ 
                                                                         }                                                                             \ 
                                                                     } w h i l e   ( 0 U ) 
 
 # d e f i n e   _ _ H A L _ U N L O C K ( _ _ H A N D L E _ _ )                                                                                     \ 
                                                                     d o {                                                                               \ 
                                                                             ( _ _ H A N D L E _ _ ) - > L o c k   =   H A L _ U N L O C K E D ;         \ 
                                                                         } w h i l e   ( 0 U ) 
 # e n d i f   / *   U S E _ R T O S   * / 
 
 # i f   d e f i n e d   ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 )   / *   A R M   C o m p i l e r   V 6   * / 
 # i f n d e f   _ _ w e a k 
 # d e f i n e   _ _ w e a k     _ _ a t t r i b u t e _ _ ( ( w e a k ) ) 
 # e n d i f 
 # i f n d e f   _ _ p a c k e d 
 # d e f i n e   _ _ p a c k e d     _ _ a t t r i b u t e _ _ ( ( p a c k e d ) ) 
 # e n d i f 
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   )   & &   ! d e f i n e d   ( _ _ C C _ A R M )   / *   G N U   C o m p i l e r   * / 
 # i f n d e f   _ _ w e a k 
 # d e f i n e   _ _ w e a k       _ _ a t t r i b u t e _ _ ( ( w e a k ) ) 
 # e n d i f   / *   _ _ w e a k   * / 
 # i f n d e f   _ _ p a c k e d 
 # d e f i n e   _ _ p a c k e d   _ _ a t t r i b u t e _ _ ( ( _ _ p a c k e d _ _ ) ) 
 # e n d i f   / *   _ _ p a c k e d   * / 
 # e n d i f   / *   _ _ G N U C _ _   * / 
 
 
 / *   M a c r o   t o   g e t   v a r i a b l e   a l i g n e d   o n   4 - b y t e s ,   f o r   _ _ I C C A R M _ _   t h e   d i r e c t i v e   " # p r a g m a   d a t a _ a l i g n m e n t = 4 "   m u s t   b e   u s e d   i n s t e a d   * / 
 # i f   d e f i n e d   ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 )   / *   A R M   C o m p i l e r   V 6   * / 
 # i f n d e f   _ _ A L I G N _ B E G I N 
 # d e f i n e   _ _ A L I G N _ B E G I N 
 # e n d i f 
 # i f n d e f   _ _ A L I G N _ E N D 
 # d e f i n e   _ _ A L I G N _ E N D             _ _ a t t r i b u t e _ _   ( ( a l i g n e d   ( 4 ) ) ) 
 # e n d i f 
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   )   & &   ! d e f i n e d   ( _ _ C C _ A R M )   / *   G N U   C o m p i l e r   * / 
 # i f n d e f   _ _ A L I G N _ E N D 
 # d e f i n e   _ _ A L I G N _ E N D         _ _ a t t r i b u t e _ _   ( ( a l i g n e d   ( 4 ) ) ) 
 # e n d i f   / *   _ _ A L I G N _ E N D   * / 
 # i f n d e f   _ _ A L I G N _ B E G I N 
 # d e f i n e   _ _ A L I G N _ B E G I N 
 # e n d i f   / *   _ _ A L I G N _ B E G I N   * / 
 # e l s e 
 # i f n d e f   _ _ A L I G N _ E N D 
 # d e f i n e   _ _ A L I G N _ E N D 
 # e n d i f   / *   _ _ A L I G N _ E N D   * / 
 # i f n d e f   _ _ A L I G N _ B E G I N 
 # i f   d e f i n e d       ( _ _ C C _ A R M )             / *   A R M   C o m p i l e r   V 5 * / 
 # d e f i n e   _ _ A L I G N _ B E G I N         _ _ a l i g n ( 4 ) 
 # e l i f   d e f i n e d   ( _ _ I C C A R M _ _ )         / *   I A R   C o m p i l e r   * / 
 # d e f i n e   _ _ A L I G N _ B E G I N 
 # e n d i f   / *   _ _ C C _ A R M   * / 
 # e n d i f   / *   _ _ A L I G N _ B E G I N   * / 
 # e n d i f   / *   _ _ G N U C _ _   * / 
 
 
 / * * 
     *   @ b r i e f     _ _ R A M _ F U N C   d e f i n i t i o n 
     * / 
 # i f   d e f i n e d   (   _ _ C C _ A R M       )   | |   ( d e f i n e d   ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 ) ) 
 / *   A R M   C o m p i l e r   V 4 / V 5   a n d   V 6 
       - - - - - - - - - - - - - - - - - - - - - - - - - - 
       R A M   f u n c t i o n s   a r e   d e f i n e d   u s i n g   t h e   t o o l c h a i n   o p t i o n s . 
       F u n c t i o n s   t h a t   a r e   e x e c u t e d   i n   R A M   s h o u l d   r e s i d e   i n   a   s e p a r a t e   s o u r c e   m o d u l e . 
       U s i n g   t h e   ' O p t i o n s   f o r   F i l e '   d i a l o g   y o u   c a n   s i m p l y   c h a n g e   t h e   ' C o d e   /   C o n s t ' 
       a r e a   o f   a   m o d u l e   t o   a   m e m o r y   s p a c e   i n   p h y s i c a l   R A M . 
       A v a i l a b l e   m e m o r y   a r e a s   a r e   d e c l a r e d   i n   t h e   ' T a r g e t '   t a b   o f   t h e   ' O p t i o n s   f o r   T a r g e t ' 
       d i a l o g . 
 * / 
 # d e f i n e   _ _ R A M _ F U N C 
 
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   ) 
 / *   I C C A R M   C o m p i l e r 
       - - - - - - - - - - - - - - - 
       R A M   f u n c t i o n s   a r e   d e f i n e d   u s i n g   a   s p e c i f i c   t o o l c h a i n   k e y w o r d   " _ _ r a m f u n c " . 
 * / 
 # d e f i n e   _ _ R A M _ F U N C   _ _ r a m f u n c 
 
 # e l i f   d e f i n e d       (     _ _ G N U C _ _     ) 
 / *   G N U   C o m p i l e r 
       - - - - - - - - - - - - 
     R A M   f u n c t i o n s   a r e   d e f i n e d   u s i n g   a   s p e c i f i c   t o o l c h a i n   a t t r i b u t e 
       " _ _ a t t r i b u t e _ _ ( ( s e c t i o n ( " . R a m F u n c " ) ) ) " . 
 * / 
 # d e f i n e   _ _ R A M _ F U N C   _ _ a t t r i b u t e _ _ ( ( s e c t i o n ( " . R a m F u n c " ) ) ) 
 
 # e n d i f 
 
 / * * 
     *   @ b r i e f     _ _ N O I N L I N E   d e f i n i t i o n 
     * / 
 # i f   d e f i n e d   (   _ _ C C _ A R M       )   | |   ( d e f i n e d   ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 ) )   | |   d e f i n e d       (     _ _ G N U C _ _     ) 
 / *   A R M   V 4 / V 5   a n d   V 6   &   G N U   C o m p i l e r 
       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 * / 
 # d e f i n e   _ _ N O I N L I N E   _ _ a t t r i b u t e _ _   (   ( n o i n l i n e )   ) 
 
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   ) 
 / *   I C C A R M   C o m p i l e r 
       - - - - - - - - - - - - - - - 
 * / 
 # d e f i n e   _ _ N O I N L I N E   _ P r a g m a ( " o p t i m i z e   =   n o _ i n l i n e " ) 
 
 # e n d i f 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 # e n d i f   / *   _ _ _ S T M 3 2 F 1 x x _ H A L _ D E F   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 