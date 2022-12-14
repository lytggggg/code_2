??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ f l a s h . h 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       H e a d e r   f i l e   o f   F l a s h   H A L   m o d u l e . 
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ F L A S H _ H 
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ F L A S H _ H 
 
 # i f d e f   _ _ c p l u s p l u s 
   e x t e r n   " C "   { 
 # e n d i f 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h " 
       
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   F L A S H 
     *   @ { 
     * / 
     
 / * *   @ a d d t o g r o u p   F L A S H _ P r i v a t e _ C o n s t a n t s 
     *   @ { 
     * / 
 # d e f i n e   F L A S H _ T I M E O U T _ V A L U E                             5 0 0 0 0 U   / *   5 0   s   * / 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   F L A S H _ P r i v a t e _ M a c r o s 
     *   @ { 
     * / 
 
 # d e f i n e   I S _ F L A S H _ T Y P E P R O G R A M ( V A L U E )     ( ( ( V A L U E )   = =   F L A S H _ T Y P E P R O G R A M _ H A L F W O R D )   | |   \ 
                                                                             ( ( V A L U E )   = =   F L A S H _ T Y P E P R O G R A M _ W O R D )           | |   \ 
                                                                             ( ( V A L U E )   = =   F L A S H _ T Y P E P R O G R A M _ D O U B L E W O R D ) )     
 
 # i f       d e f i n e d ( F L A S H _ A C R _ L A T E N C Y ) 
 # d e f i n e   I S _ F L A S H _ L A T E N C Y ( _ _ L A T E N C Y _ _ )   ( ( ( _ _ L A T E N C Y _ _ )   = =   F L A S H _ L A T E N C Y _ 0 )   | |   \ 
                                                                               ( ( _ _ L A T E N C Y _ _ )   = =   F L A S H _ L A T E N C Y _ 1 )   | |   \ 
                                                                               ( ( _ _ L A T E N C Y _ _ )   = =   F L A S H _ L A T E N C Y _ 2 ) ) 
 
 # e l s e 
 # d e f i n e   I S _ F L A S H _ L A T E N C Y ( _ _ L A T E N C Y _ _ )       ( ( _ _ L A T E N C Y _ _ )   = =   F L A S H _ L A T E N C Y _ 0 ) 
 # e n d i f   / *   F L A S H _ A C R _ L A T E N C Y   * / 
 / * * 
     *   @ } 
     * /     
 
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /   
 / * *   @ d e f g r o u p   F L A S H _ E x p o r t e d _ T y p e s   F L A S H   E x p o r t e d   T y p e s 
     *   @ { 
     * /     
 
 / * * 
     *   @ b r i e f     F L A S H   P r o c e d u r e   s t r u c t u r e   d e f i n i t i o n 
     * / 
 t y p e d e f   e n u m   
 { 
     F L A S H _ P R O C _ N O N E                             =   0 U ,   
     F L A S H _ P R O C _ P A G E E R A S E                   =   1 U , 
     F L A S H _ P R O C _ M A S S E R A S E                   =   2 U , 
     F L A S H _ P R O C _ P R O G R A M H A L F W O R D       =   3 U , 
     F L A S H _ P R O C _ P R O G R A M W O R D               =   4 U , 
     F L A S H _ P R O C _ P R O G R A M D O U B L E W O R D   =   5 U 
 }   F L A S H _ P r o c e d u r e T y p e D e f ; 
 
 / * *   
     *   @ b r i e f     F L A S H   h a n d l e   S t r u c t u r e   d e f i n i t i o n     
     * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I O   F L A S H _ P r o c e d u r e T y p e D e f   P r o c e d u r e O n G o i n g ;   / * ! <   I n t e r n a l   v a r i a b l e   t o   i n d i c a t e   w h i c h   p r o c e d u r e   i s   o n g o i n g   o r   n o t   i n   I T   c o n t e x t   * / 
     
     _ _ I O   u i n t 3 2 _ t                               D a t a R e m a i n i n g ;         / * ! <   I n t e r n a l   v a r i a b l e   t o   s a v e   t h e   r e m a i n i n g   p a g e s   t o   e r a s e   o r   h a l f - w o r d   t o   p r o g r a m   i n   I T   c o n t e x t   * / 
 
     _ _ I O   u i n t 3 2 _ t                               A d d r e s s ;                     / * ! <   I n t e r n a l   v a r i a b l e   t o   s a v e   a d d r e s s   s e l e c t e d   f o r   p r o g r a m   o r   e r a s e   * / 
 
     _ _ I O   u i n t 6 4 _ t                               D a t a ;                           / * ! <   I n t e r n a l   v a r i a b l e   t o   s a v e   d a t a   t o   b e   p r o g r a m m e d   * / 
 
     H A L _ L o c k T y p e D e f                           L o c k ;                           / * ! <   F L A S H   l o c k i n g   o b j e c t                                 * / 
 
     _ _ I O   u i n t 3 2 _ t                               E r r o r C o d e ;                 / * ! <   F L A S H   e r r o r   c o d e                                         
                                                                                                           T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   F L A S H _ E r r o r _ C o d e s     * / 
 }   F L A S H _ P r o c e s s T y p e D e f ; 
 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   F L A S H _ E x p o r t e d _ C o n s t a n t s   F L A S H   E x p o r t e d   C o n s t a n t s 
     *   @ { 
     * /     
 
 / * *   @ d e f g r o u p   F L A S H _ E r r o r _ C o d e s   F L A S H   E r r o r   C o d e s 
     *   @ { 
     * / 
 
 # d e f i n e   H A L _ F L A S H _ E R R O R _ N O N E             0 x 0 0 U     / * ! <   N o   e r r o r   * / 
 # d e f i n e   H A L _ F L A S H _ E R R O R _ P R O G             0 x 0 1 U     / * ! <   P r o g r a m m i n g   e r r o r   * / 
 # d e f i n e   H A L _ F L A S H _ E R R O R _ W R P               0 x 0 2 U     / * ! <   W r i t e   p r o t e c t i o n   e r r o r   * / 
 # d e f i n e   H A L _ F L A S H _ E R R O R _ O P T V             0 x 0 4 U     / * ! <   O p t i o n   v a l i d i t y   e r r o r   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   F L A S H _ T y p e _ P r o g r a m   F L A S H   T y p e   P r o g r a m 
     *   @ { 
     * /   
 # d e f i n e   F L A S H _ T Y P E P R O G R A M _ H A L F W O R D                           0 x 0 1 U     / * ! < P r o g r a m   a   h a l f - w o r d   ( 1 6 - b i t )   a t   a   s p e c i f i e d   a d d r e s s . * / 
 # d e f i n e   F L A S H _ T Y P E P R O G R A M _ W O R D                                   0 x 0 2 U     / * ! < P r o g r a m   a   w o r d   ( 3 2 - b i t )   a t   a   s p e c i f i e d   a d d r e s s . * / 
 # d e f i n e   F L A S H _ T Y P E P R O G R A M _ D O U B L E W O R D                       0 x 0 3 U     / * ! < P r o g r a m   a   d o u b l e   w o r d   ( 6 4 - b i t )   a t   a   s p e c i f i e d   a d d r e s s * / 
 
 / * * 
     *   @ } 
     * / 
 
 # i f       d e f i n e d ( F L A S H _ A C R _ L A T E N C Y ) 
 / * *   @ d e f g r o u p   F L A S H _ L a t e n c y   F L A S H   L a t e n c y 
     *   @ { 
     * / 
 # d e f i n e   F L A S H _ L A T E N C Y _ 0                         0 x 0 0 0 0 0 0 0 0 U                               / * ! <   F L A S H   Z e r o   L a t e n c y   c y c l e   * / 
 # d e f i n e   F L A S H _ L A T E N C Y _ 1                         F L A S H _ A C R _ L A T E N C Y _ 0               / * ! <   F L A S H   O n e   L a t e n c y   c y c l e   * / 
 # d e f i n e   F L A S H _ L A T E N C Y _ 2                         F L A S H _ A C R _ L A T E N C Y _ 1               / * ! <   F L A S H   T w o   L a t e n c y   c y c l e s   * / 
 
 / * * 
     *   @ } 
     * / 
 
 # e l s e 
 / * *   @ d e f g r o u p   F L A S H _ L a t e n c y   F L A S H   L a t e n c y 
     *   @ { 
     * / 
 # d e f i n e   F L A S H _ L A T E N C Y _ 0                         0 x 0 0 0 0 0 0 0 0 U         / * ! <   F L A S H   Z e r o   L a t e n c y   c y c l e   * / 
 
 / * * 
     *   @ } 
     * / 
 
 # e n d i f   / *   F L A S H _ A C R _ L A T E N C Y   * / 
 / * * 
     *   @ } 
     * /     
     
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   F L A S H _ E x p o r t e d _ M a c r o s   F L A S H   E x p o r t e d   M a c r o s 
   *     @ b r i e f   m a c r o s   t o   c o n t r o l   F L A S H   f e a t u r e s   
   *     @ { 
   * / 
   
 / * *   @ d e f g r o u p   F L A S H _ H a l f _ C y c l e   F L A S H   H a l f   C y c l e 
   *     @ b r i e f   m a c r o s   t o   h a n d l e   F L A S H   h a l f   c y c l e 
   *   @ { 
   * / 
 
 / * * 
     *   @ b r i e f     E n a b l e   t h e   F L A S H   h a l f   c y c l e   a c c e s s . 
     *   @ n o t e       h a l f   c y c l e   a c c e s s   c a n   o n l y   b e   u s e d   w i t h   a   l o w - f r e q u e n c y   c l o c k   o f   l e s s   t h a n 
                         8   M H z   t h a t   c a n   b e   o b t a i n e d   w i t h   t h e   u s e   o f   H S I   o r   H S E   b u t   n o t   o f   P L L . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ F L A S H _ H A L F _ C Y C L E _ A C C E S S _ E N A B L E ( )     ( F L A S H - > A C R   | =   F L A S H _ A C R _ H L F C Y A ) 
 
 / * * 
     *   @ b r i e f     D i s a b l e   t h e   F L A S H   h a l f   c y c l e   a c c e s s . 
     *   @ n o t e       h a l f   c y c l e   a c c e s s   c a n   o n l y   b e   u s e d   w i t h   a   l o w - f r e q u e n c y   c l o c k   o f   l e s s   t h a n 
                         8   M H z   t h a t   c a n   b e   o b t a i n e d   w i t h   t h e   u s e   o f   H S I   o r   H S E   b u t   n o t   o f   P L L . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ F L A S H _ H A L F _ C Y C L E _ A C C E S S _ D I S A B L E ( )   ( F L A S H - > A C R   & =   ( ~ F L A S H _ A C R _ H L F C Y A ) ) 
 
 / * * 
     *   @ } 
     * / 
 
 # i f   d e f i n e d ( F L A S H _ A C R _ L A T E N C Y ) 
 / * *   @ d e f g r o u p   F L A S H _ E M _ L a t e n c y   F L A S H   L a t e n c y 
   *     @ b r i e f   m a c r o s   t o   h a n d l e   F L A S H   L a t e n c y 
   *   @ { 
   * /   
     
 / * * 
     *   @ b r i e f     S e t   t h e   F L A S H   L a t e n c y . 
     *   @ p a r a m     _ _ L A T E N C Y _ _   F L A S H   L a t e n c y                                       
     *                   T h e   v a l u e   o f   t h i s   p a r a m e t e r   d e p e n d   o n   d e v i c e   u s e d   w i t h i n   t h e   s a m e   s e r i e s 
     *   @ r e t v a l   N o n e 
     * /   
 # d e f i n e   _ _ H A L _ F L A S H _ S E T _ L A T E N C Y ( _ _ L A T E N C Y _ _ )         ( F L A S H - > A C R   =   ( F L A S H - > A C R & ( ~ F L A S H _ A C R _ L A T E N C Y ) )   |   ( _ _ L A T E N C Y _ _ ) ) 
 
 
 / * * 
     *   @ b r i e f     G e t   t h e   F L A S H   L a t e n c y . 
     *   @ r e t v a l   F L A S H   L a t e n c y                                       
     *                   T h e   v a l u e   o f   t h i s   p a r a m e t e r   d e p e n d   o n   d e v i c e   u s e d   w i t h i n   t h e   s a m e   s e r i e s 
     * /   
 # d e f i n e   _ _ H A L _ F L A S H _ G E T _ L A T E N C Y ( )           ( R E A D _ B I T ( ( F L A S H - > A C R ) ,   F L A S H _ A C R _ L A T E N C Y ) ) 
 
 / * * 
     *   @ } 
     * / 
 
 # e n d i f   / *   F L A S H _ A C R _ L A T E N C Y   * / 
 / * *   @ d e f g r o u p   F L A S H _ P r e f e t c h   F L A S H   P r e f e t c h 
   *     @ b r i e f   m a c r o s   t o   h a n d l e   F L A S H   P r e f e t c h   b u f f e r 
   *   @ { 
   * /       
 / * * 
     *   @ b r i e f     E n a b l e   t h e   F L A S H   p r e f e t c h   b u f f e r . 
     *   @ r e t v a l   N o n e 
     * /   
 # d e f i n e   _ _ H A L _ F L A S H _ P R E F E T C H _ B U F F E R _ E N A B L E ( )         ( F L A S H - > A C R   | =   F L A S H _ A C R _ P R F T B E ) 
 
 / * * 
     *   @ b r i e f     D i s a b l e   t h e   F L A S H   p r e f e t c h   b u f f e r . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ F L A S H _ P R E F E T C H _ B U F F E R _ D I S A B L E ( )       ( F L A S H - > A C R   & =   ( ~ F L A S H _ A C R _ P R F T B E ) ) 
 
 / * * 
     *   @ } 
     * / 
     
 / * * 
     *   @ } 
     * /   
 
 / *   I n c l u d e   F L A S H   H A L   E x t e n d e d   m o d u l e   * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ f l a s h _ e x . h "     
 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ a d d t o g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s 
     *   @ { 
     * / 
     
 / * *   @ a d d t o g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1 
     *   @ { 
     * / 
 / *   I O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ P r o g r a m ( u i n t 3 2 _ t   T y p e P r o g r a m ,   u i n t 3 2 _ t   A d d r e s s ,   u i n t 6 4 _ t   D a t a ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ P r o g r a m _ I T ( u i n t 3 2 _ t   T y p e P r o g r a m ,   u i n t 3 2 _ t   A d d r e s s ,   u i n t 6 4 _ t   D a t a ) ; 
 
 / *   F L A S H   I R Q   h a n d l e r   f u n c t i o n   * / 
 v o i d               H A L _ F L A S H _ I R Q H a n d l e r ( v o i d ) ; 
 / *   C a l l b a c k s   i n   n o n   b l o c k i n g   m o d e s   * /   
 v o i d               H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k ( u i n t 3 2 _ t   R e t u r n V a l u e ) ; 
 v o i d               H A L _ F L A S H _ O p e r a t i o n E r r o r C a l l b a c k ( u i n t 3 2 _ t   R e t u r n V a l u e ) ; 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2 
     *   @ { 
     * / 
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ U n l o c k ( v o i d ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ L o c k ( v o i d ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ O B _ U n l o c k ( v o i d ) ; 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H _ O B _ L o c k ( v o i d ) ; 
 v o i d   H A L _ F L A S H _ O B _ L a u n c h ( v o i d ) ; 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   F L A S H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3 
     *   @ { 
     * / 
 / *   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 u i n t 3 2 _ t   H A L _ F L A S H _ G e t E r r o r ( v o i d ) ; 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   f u n c t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ a d d t o g r o u p   F L A S H _ P r i v a t e _ F u n c t i o n s 
   *   @ { 
   * / 
 H A L _ S t a t u s T y p e D e f               F L A S H _ W a i t F o r L a s t O p e r a t i o n ( u i n t 3 2 _ t   T i m e o u t ) ; 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
 H A L _ S t a t u s T y p e D e f               F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( u i n t 3 2 _ t   T i m e o u t ) ; 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
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
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ F L A S H _ H   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 
 