??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ s m a r t c a r d . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   S M A R T C A R D   H A L   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ S M A R T C A R D _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ S M A R T C A R D _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
   e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   S M A R T C A R D  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E x p o r t e d _ T y p e s   S M A R T C A R D   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   S M A R T C A R D   I n i t   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   B a u d R a t e ;                                     / * ! <   T h i s   m e m b e r   c o n f i g u r e s   t h e   S m a r t C a r d   c o m m u n i c a t i o n   b a u d   r a t e .  
                                                                                       T h e   b a u d   r a t e   i s   c o m p u t e d   u s i n g   t h e   f o l l o w i n g   f o r m u l a :  
                                                                                       -   I n t e g e r D i v i d e r   =   ( ( P C L K x )   /   ( 1 6   *   ( h s c - > I n i t . B a u d R a t e ) ) )  
                                                                                       -   F r a c t i o n a l D i v i d e r   =   ( ( I n t e g e r D i v i d e r   -   ( ( u i n t 3 2 _ t )   I n t e g e r D i v i d e r ) )   *   1 6 )   +   0 . 5   * /  
  
     u i n t 3 2 _ t   W o r d L e n g t h ;                                 / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   d a t a   b i t s   t r a n s m i t t e d   o r   r e c e i v e d   i n   a   f r a m e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ W o r d _ L e n g t h   * /  
  
     u i n t 3 2 _ t   S t o p B i t s ;                                     / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   s t o p   b i t s   t r a n s m i t t e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ S t o p _ B i t s   * /  
  
     u i n t 3 2 _ t   P a r i t y ;                                         / * ! <   S p e c i f i e s   t h e   p a r i t y   m o d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ P a r i t y  
                                                                                       @ n o t e   W h e n   p a r i t y   i s   e n a b l e d ,   t h e   c o m p u t e d   p a r i t y   i s   i n s e r t e d  
                                                                                                   a t   t h e   M S B   p o s i t i o n   o f   t h e   t r a n s m i t t e d   d a t a   ( 9 t h   b i t   w h e n  
                                                                                                   t h e   w o r d   l e n g t h   i s   s e t   t o   9   d a t a   b i t s ;   8 t h   b i t   w h e n   t h e  
                                                                                                   w o r d   l e n g t h   i s   s e t   t o   8   d a t a   b i t s ) . * /  
  
     u i n t 3 2 _ t   M o d e ;                                             / * ! <   S p e c i f i e s   w h e t h e r   t h e   R e c e i v e   o r   T r a n s m i t   m o d e   i s   e n a b l e d   o r   d i s a b l e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ M o d e   * /  
  
     u i n t 3 2 _ t   C L K P o l a r i t y ;                               / * ! <   S p e c i f i e s   t h e   s t e a d y   s t a t e   o f   t h e   s e r i a l   c l o c k .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ C l o c k _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   C L K P h a s e ;                                     / * ! <   S p e c i f i e s   t h e   c l o c k   t r a n s i t i o n   o n   w h i c h   t h e   b i t   c a p t u r e   i s   m a d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ C l o c k _ P h a s e   * /  
  
     u i n t 3 2 _ t   C L K L a s t B i t ;                                 / * ! <   S p e c i f i e s   w h e t h e r   t h e   c l o c k   p u l s e   c o r r e s p o n d i n g   t o   t h e   l a s t   t r a n s m i t t e d  
                                                                                       d a t a   b i t   ( M S B )   h a s   t o   b e   o u t p u t   o n   t h e   S C L K   p i n   i n   s y n c h r o n o u s   m o d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ L a s t _ B i t   * /  
  
     u i n t 3 2 _ t   P r e s c a l e r ;                                   / * ! <   S p e c i f i e s   t h e   S m a r t C a r d   P r e s c a l e r   v a l u e   u s e d   f o r   d i v i d i n g   t h e   s y s t e m   c l o c k  
                                                                                       t o   p r o v i d e   t h e   s m a r t c a r d   c l o c k .   T h e   v a l u e   g i v e n   i n   t h e   r e g i s t e r   ( 5   s i g n i f i c a n t   b i t s )  
                                                                                       i s   m u l t i p l i e d   b y   2   t o   g i v e   t h e   d i v i s i o n   f a c t o r   o f   t h e   s o u r c e   c l o c k   f r e q u e n c y .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ P r e s c a l e r   * /  
  
     u i n t 3 2 _ t   G u a r d T i m e ;                                   / * ! <   S p e c i f i e s   t h e   S m a r t C a r d   G u a r d   T i m e   v a l u e   i n   t e r m s   o f   n u m b e r   o f   b a u d   c l o c k s   * /  
  
     u i n t 3 2 _ t   N A C K S t a t e ;                                   / * ! <   S p e c i f i e s   t h e   S m a r t C a r d   N A C K   T r a n s m i s s i o n   s t a t e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   S M A R T C A R D _ N A C K _ S t a t e   * /  
 } S M A R T C A R D _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f   H A L   S M A R T C A R D   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     *   @ n o t e     H A L   S M A R T C A R D   S t a t e   v a l u e   i s   a   c o m b i n a t i o n   o f   2   d i f f e r e n t   s u b s t a t e s :   g S t a t e   a n d   R x S t a t e .  
     *                 -   g S t a t e   c o n t a i n s   S M A R T C A R D   s t a t e   i n f o r m a t i o n   r e l a t e d   t o   g l o b a l   H a n d l e   m a n a g e m e n t  
     *                     a n d   a l s o   i n f o r m a t i o n   r e l a t e d   t o   T x   o p e r a t i o n s .  
     *                     g S t a t e   v a l u e   c o d i n g   f o l l o w   b e l o w   d e s c r i b e d   b i t m a p   :  
     *                     b 7 - b 6     E r r o r   i n f o r m a t i o n  
     *                           0 0   :   N o   E r r o r  
     *                           0 1   :   ( N o t   U s e d )  
     *                           1 0   :   T i m e o u t  
     *                           1 1   :   E r r o r  
     *                     b 5           I P   i n i t i a l i z a t i o n   s t a t u s  
     *                           0     :   R e s e t   ( I P   n o t   i n i t i a l i z e d )  
     *                           1     :   I n i t   d o n e   ( I P   i n i t i a l i z e d .   H A L   S M A R T C A R D   I n i t   f u n c t i o n   a l r e a d y   c a l l e d )  
     *                     b 4 - b 3     ( n o t   u s e d )  
     *                           x x   :   S h o u l d   b e   s e t   t o   0 0  
     *                     b 2           I n t r i n s i c   p r o c e s s   s t a t e  
     *                           0     :   R e a d y  
     *                           1     :   B u s y   ( I P   b u s y   w i t h   s o m e   c o n f i g u r a t i o n   o r   i n t e r n a l   o p e r a t i o n s )  
     *                     b 1           ( n o t   u s e d )  
     *                           x     :   S h o u l d   b e   s e t   t o   0  
     *                     b 0           T x   s t a t e  
     *                           0     :   R e a d y   ( n o   T x   o p e r a t i o n   o n g o i n g )  
     *                           1     :   B u s y   ( T x   o p e r a t i o n   o n g o i n g )  
     *                 -   R x S t a t e   c o n t a i n s   i n f o r m a t i o n   r e l a t e d   t o   R x   o p e r a t i o n s .  
     *                     R x S t a t e   v a l u e   c o d i n g   f o l l o w   b e l o w   d e s c r i b e d   b i t m a p   :  
     *                     b 7 - b 6     ( n o t   u s e d )  
     *                           x x   :   S h o u l d   b e   s e t   t o   0 0  
     *                     b 5           I P   i n i t i a l i z a t i o n   s t a t u s  
     *                           0     :   R e s e t   ( I P   n o t   i n i t i a l i z e d )  
     *                           1     :   I n i t   d o n e   ( I P   i n i t i a l i z e d )  
     *                     b 4 - b 2     ( n o t   u s e d )  
     *                         x x x   :   S h o u l d   b e   s e t   t o   0 0 0  
     *                     b 1           R x   s t a t e  
     *                           0     :   R e a d y   ( n o   R x   o p e r a t i o n   o n g o i n g )  
     *                           1     :   B u s y   ( R x   o p e r a t i o n   o n g o i n g )  
     *                     b 0           ( n o t   u s e d )  
     *                           x     :   S h o u l d   b e   s e t   t o   0 .  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ S M A R T C A R D _ S T A T E _ R E S E T                           =   0 x 0 0 U ,         / * ! <   P e r i p h e r a l   i s   n o t   y e t   I n i t i a l i z e d  
                                                                                                                 V a l u e   i s   a l l o w e d   f o r   g S t a t e   a n d   R x S t a t e   * /  
     H A L _ S M A R T C A R D _ S T A T E _ R E A D Y                           =   0 x 2 0 U ,         / * ! <   P e r i p h e r a l   I n i t i a l i z e d   a n d   r e a d y   f o r   u s e  
                                                                                                                 V a l u e   i s   a l l o w e d   f o r   g S t a t e   a n d   R x S t a t e   * /  
     H A L _ S M A R T C A R D _ S T A T E _ B U S Y                             =   0 x 2 4 U ,         / * ! <   a n   i n t e r n a l   p r o c e s s   i s   o n g o i n g  
                                                                                                                 V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y   * /  
     H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ T X                       =   0 x 2 1 U ,         / * ! <   D a t a   T r a n s m i s s i o n   p r o c e s s   i s   o n g o i n g  
                                                                                                                 V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y   * /  
     H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ R X                       =   0 x 2 2 U ,         / * ! <   D a t a   R e c e p t i o n   p r o c e s s   i s   o n g o i n g  
                                                                                                                 V a l u e   i s   a l l o w e d   f o r   R x S t a t e   o n l y   * /  
     H A L _ S M A R T C A R D _ S T A T E _ B U S Y _ T X _ R X                 =   0 x 2 3 U ,         / * ! <   D a t a   T r a n s m i s s i o n   a n d   R e c e p t i o n   p r o c e s s   i s   o n g o i n g  
                                                                                                                 N o t   t o   b e   u s e d   f o r   n e i t h e r   g S t a t e   n o r   R x S t a t e .  
                                                                                                                 V a l u e   i s   r e s u l t   o f   c o m b i n a t i o n   ( O r )   b e t w e e n   g S t a t e   a n d   R x S t a t e   v a l u e s   * /  
     H A L _ S M A R T C A R D _ S T A T E _ T I M E O U T                       =   0 x A 0 U ,         / * ! <   T i m e o u t   s t a t e  
                                                                                                                 V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y   * /  
     H A L _ S M A R T C A R D _ S T A T E _ E R R O R                           =   0 x E 0 U           / * ! <   E r r o r  
                                                                                                                 V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y   * /  
 } H A L _ S M A R T C A R D _ S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     S M A R T C A R D   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f  
 {  
     U S A R T _ T y p e D e f                                         * I n s t a n c e ;                 / * ! <   U S A R T   r e g i s t e r s   b a s e   a d d r e s s   * /  
  
     S M A R T C A R D _ I n i t T y p e D e f                         I n i t ;                           / * ! <   S m a r t C a r d   c o m m u n i c a t i o n   p a r a m e t e r s   * /  
  
     u i n t 8 _ t                                                     * p T x B u f f P t r ;             / * ! <   P o i n t e r   t o   S m a r t C a r d   T x   t r a n s f e r   B u f f e r   * /  
  
     u i n t 1 6 _ t                                                   T x X f e r S i z e ;               / * ! <   S m a r t C a r d   T x   T r a n s f e r   s i z e   * /  
  
     _ _ I O   u i n t 1 6 _ t                                         T x X f e r C o u n t ;             / * ! <   S m a r t C a r d   T x   T r a n s f e r   C o u n t e r   * /  
  
     u i n t 8 _ t                                                     * p R x B u f f P t r ;             / * ! <   P o i n t e r   t o   S m a r t C a r d   R x   t r a n s f e r   B u f f e r   * /  
  
     u i n t 1 6 _ t                                                   R x X f e r S i z e ;               / * ! <   S m a r t C a r d   R x   T r a n s f e r   s i z e   * /  
  
     _ _ I O   u i n t 1 6 _ t                                         R x X f e r C o u n t ;             / * ! <   S m a r t C a r d   R x   T r a n s f e r   C o u n t e r   * /  
  
     D M A _ H a n d l e T y p e D e f                                 * h d m a t x ;                     / * ! <   S m a r t C a r d   T x   D M A   H a n d l e   p a r a m e t e r s   * /  
  
     D M A _ H a n d l e T y p e D e f                                 * h d m a r x ;                     / * ! <   S m a r t C a r d   R x   D M A   H a n d l e   p a r a m e t e r s   * /  
  
     H A L _ L o c k T y p e D e f                                     L o c k ;                           / * ! <   L o c k i n g   o b j e c t   * /  
  
     _ _ I O   H A L _ S M A R T C A R D _ S t a t e T y p e D e f     g S t a t e ;                       / * ! <   S m a r t C a r d   s t a t e   i n f o r m a t i o n   r e l a t e d   t o   g l o b a l   H a n d l e   m a n a g e m e n t  
                                                                                                                 a n d   a l s o   r e l a t e d   t o   T x   o p e r a t i o n s .  
                                                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   H A L _ S M A R T C A R D _ S t a t e T y p e D e f   * /  
  
     _ _ I O   H A L _ S M A R T C A R D _ S t a t e T y p e D e f     R x S t a t e ;                     / * ! <   S m a r t C a r d   s t a t e   i n f o r m a t i o n   r e l a t e d   t o   R x   o p e r a t i o n s .  
                                                                                                                 T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   H A L _ S M A R T C A R D _ S t a t e T y p e D e f   * /  
  
     _ _ I O   u i n t 3 2 _ t                                         E r r o r C o d e ;                 / * ! <   S m a r t C a r d   E r r o r   c o d e   * /  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   T x C p l t C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;                         / * ! <   S M A R T C A R D   T x   C o m p l e t e   C a l l b a c k                           * /  
  
     v o i d   ( *   R x C p l t C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;                         / * ! <   S M A R T C A R D   R x   C o m p l e t e   C a l l b a c k                           * /  
  
     v o i d   ( *   E r r o r C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;                           / * ! <   S M A R T C A R D   E r r o r   C a l l b a c k                                       * /  
  
     v o i d   ( *   A b o r t C p l t C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;                   / * ! <   S M A R T C A R D   A b o r t   C o m p l e t e   C a l l b a c k                     * /  
  
     v o i d   ( *   A b o r t T r a n s m i t C p l t C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;   / * ! <   S M A R T C A R D   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
  
     v o i d   ( *   A b o r t R e c e i v e C p l t C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;     / * ! <   S M A R T C A R D   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k     * /  
  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;                       / * ! <   S M A R T C A R D   M s p   I n i t   c a l l b a c k                                 * /  
  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;                   / * ! <   S M A R T C A R D   M s p   D e I n i t   c a l l b a c k                             * /  
 # e n d i f     / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 }   S M A R T C A R D _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   S M A R T C A R D   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ S M A R T C A R D _ T X _ C O M P L E T E _ C B _ I D                           =   0 x 0 0 U ,         / * ! <   S M A R T C A R D   T x   C o m p l e t e   C a l l b a c k   I D                           * /  
     H A L _ S M A R T C A R D _ R X _ C O M P L E T E _ C B _ I D                           =   0 x 0 1 U ,         / * ! <   S M A R T C A R D   R x   C o m p l e t e   C a l l b a c k   I D                           * /  
     H A L _ S M A R T C A R D _ E R R O R _ C B _ I D                                       =   0 x 0 2 U ,         / * ! <   S M A R T C A R D   E r r o r   C a l l b a c k   I D                                       * /  
     H A L _ S M A R T C A R D _ A B O R T _ C O M P L E T E _ C B _ I D                     =   0 x 0 3 U ,         / * ! <   S M A R T C A R D   A b o r t   C o m p l e t e   C a l l b a c k   I D                     * /  
     H A L _ S M A R T C A R D _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   =   0 x 0 4 U ,         / * ! <   S M A R T C A R D   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   I D   * /  
     H A L _ S M A R T C A R D _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D     =   0 x 0 5 U ,         / * ! <   S M A R T C A R D   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   I D     * /  
  
     H A L _ S M A R T C A R D _ M S P I N I T _ C B _ I D                                   =   0 x 0 8 U ,         / * ! <   S M A R T C A R D   M s p I n i t   c a l l b a c k   I D                                   * /  
     H A L _ S M A R T C A R D _ M S P D E I N I T _ C B _ I D                               =   0 x 0 9 U           / * ! <   S M A R T C A R D   M s p D e I n i t   c a l l b a c k   I D                               * /  
  
 }   H A L _ S M A R T C A R D _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   S M A R T C A R D   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f     v o i d   ( * p S M A R T C A R D _ C a l l b a c k T y p e D e f ) ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;     / * ! <   p o i n t e r   t o   a n   S M A R T C A R D   c a l l b a c k   f u n c t i o n   * /  
  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E x p o r t e d _ C o n s t a n t s     S M A R T C A R D   E x p o r t e d   c o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E r r o r _ C o d e   S M A R T C A R D   E r r o r   C o d e  
     *   @ {  
     * /  
 # d e f i n e   H A L _ S M A R T C A R D _ E R R O R _ N O N E                           0 x 0 0 0 0 0 0 0 0 U       / * ! <   N o   e r r o r                         * /  
 # d e f i n e   H A L _ S M A R T C A R D _ E R R O R _ P E                               0 x 0 0 0 0 0 0 0 1 U       / * ! <   P a r i t y   e r r o r                 * /  
 # d e f i n e   H A L _ S M A R T C A R D _ E R R O R _ N E                               0 x 0 0 0 0 0 0 0 2 U       / * ! <   N o i s e   e r r o r                   * /  
 # d e f i n e   H A L _ S M A R T C A R D _ E R R O R _ F E                               0 x 0 0 0 0 0 0 0 4 U       / * ! <   F r a m e   e r r o r                   * /  
 # d e f i n e   H A L _ S M A R T C A R D _ E R R O R _ O R E                             0 x 0 0 0 0 0 0 0 8 U       / * ! <   O v e r r u n   e r r o r               * /  
 # d e f i n e   H A L _ S M A R T C A R D _ E R R O R _ D M A                             0 x 0 0 0 0 0 0 1 0 U       / * ! <   D M A   t r a n s f e r   e r r o r     * /  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   H A L _ S M A R T C A R D _ E R R O R _ I N V A L I D _ C A L L B A C K   0 x 0 0 0 0 0 0 2 0 U       / * ! <   I n v a l i d   C a l l b a c k   e r r o r     * /  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ W o r d _ L e n g t h   S M A R T C A R D   W o r d   L e n g t h  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ W O R D L E N G T H _ 9 B                           ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ M )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ S t o p _ B i t s   S M A R T C A R D   N u m b e r   o f   S t o p   B i t s  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ S T O P B I T S _ 0 _ 5                             ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ S T O P _ 0 )  
 # d e f i n e   S M A R T C A R D _ S T O P B I T S _ 1 _ 5                             ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 2 _ S T O P _ 0   |   U S A R T _ C R 2 _ S T O P _ 1 ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ P a r i t y   S M A R T C A R D   P a r i t y  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ P A R I T Y _ E V E N                               ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ P C E )  
 # d e f i n e   S M A R T C A R D _ P A R I T Y _ O D D                                 ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ M o d e   S M A R T C A R D   M o d e  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ M O D E _ R X                                       ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ R E )  
 # d e f i n e   S M A R T C A R D _ M O D E _ T X                                       ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ T E )  
 # d e f i n e   S M A R T C A R D _ M O D E _ T X _ R X                                 ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ T E   | U S A R T _ C R 1 _ R E ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ C l o c k _ P o l a r i t y   S M A R T C A R D   C l o c k   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ P O L A R I T Y _ L O W                             0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   S M A R T C A R D _ P O L A R I T Y _ H I G H                           ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ C P O L )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ C l o c k _ P h a s e     S M A R T C A R D   C l o c k   P h a s e  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ P H A S E _ 1 E D G E                               0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   S M A R T C A R D _ P H A S E _ 2 E D G E                               ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ C P H A )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ L a s t _ B i t     S M A R T C A R D   L a s t   B i t  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ L A S T B I T _ D I S A B L E                       0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   S M A R T C A R D _ L A S T B I T _ E N A B L E                         ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ L B C L )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ N A C K _ S t a t e     S M A R T C A R D   N A C K   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ N A C K _ E N A B L E                               ( ( u i n t 3 2 _ t ) U S A R T _ C R 3 _ N A C K )  
 # d e f i n e   S M A R T C A R D _ N A C K _ D I S A B L E                             0 x 0 0 0 0 0 0 0 0 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ D M A _ R e q u e s t s       S M A R T C A R D   D M A   r e q u e s t s  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ D M A R E Q _ T X                                   ( ( u i n t 3 2 _ t ) U S A R T _ C R 3 _ D M A T )  
 # d e f i n e   S M A R T C A R D _ D M A R E Q _ R X                                   ( ( u i n t 3 2 _ t ) U S A R T _ C R 3 _ D M A R )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S M A R T C A R D _ P r e s c a l e r   S M A R T C A R D   P r e s c a l e r  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 2           0 x 0 0 0 0 0 0 0 1 U                     / * ! <   S Y S C L K   d i v i d e d   b y   2   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 4           0 x 0 0 0 0 0 0 0 2 U                     / * ! <   S Y S C L K   d i v i d e d   b y   4   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 6           0 x 0 0 0 0 0 0 0 3 U                     / * ! <   S Y S C L K   d i v i d e d   b y   6   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 8           0 x 0 0 0 0 0 0 0 4 U                     / * ! <   S Y S C L K   d i v i d e d   b y   8   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 1 0         0 x 0 0 0 0 0 0 0 5 U                     / * ! <   S Y S C L K   d i v i d e d   b y   1 0   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 1 2         0 x 0 0 0 0 0 0 0 6 U                     / * ! <   S Y S C L K   d i v i d e d   b y   1 2   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 1 4         0 x 0 0 0 0 0 0 0 7 U                     / * ! <   S Y S C L K   d i v i d e d   b y   1 4   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 1 6         0 x 0 0 0 0 0 0 0 8 U                     / * ! <   S Y S C L K   d i v i d e d   b y   1 6   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 1 8         0 x 0 0 0 0 0 0 0 9 U                     / * ! <   S Y S C L K   d i v i d e d   b y   1 8   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 2 0         0 x 0 0 0 0 0 0 0 A U                     / * ! <   S Y S C L K   d i v i d e d   b y   2 0   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 2 2         0 x 0 0 0 0 0 0 0 B U                     / * ! <   S Y S C L K   d i v i d e d   b y   2 2   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 2 4         0 x 0 0 0 0 0 0 0 C U                     / * ! <   S Y S C L K   d i v i d e d   b y   2 4   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 2 6         0 x 0 0 0 0 0 0 0 D U                     / * ! <   S Y S C L K   d i v i d e d   b y   2 6   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 2 8         0 x 0 0 0 0 0 0 0 E U                     / * ! <   S Y S C L K   d i v i d e d   b y   2 8   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 3 0         0 x 0 0 0 0 0 0 0 F U                     / * ! <   S Y S C L K   d i v i d e d   b y   3 0   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 3 2         0 x 0 0 0 0 0 0 1 0 U                     / * ! <   S Y S C L K   d i v i d e d   b y   3 2   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 3 4         0 x 0 0 0 0 0 0 1 1 U                     / * ! <   S Y S C L K   d i v i d e d   b y   3 4   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 3 6         0 x 0 0 0 0 0 0 1 2 U                     / * ! <   S Y S C L K   d i v i d e d   b y   3 6   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 3 8         0 x 0 0 0 0 0 0 1 3 U                     / * ! <   S Y S C L K   d i v i d e d   b y   3 8   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 4 0         0 x 0 0 0 0 0 0 1 4 U                     / * ! <   S Y S C L K   d i v i d e d   b y   4 0   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 4 2         0 x 0 0 0 0 0 0 1 5 U                     / * ! <   S Y S C L K   d i v i d e d   b y   4 2   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 4 4         0 x 0 0 0 0 0 0 1 6 U                     / * ! <   S Y S C L K   d i v i d e d   b y   4 4   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 4 6         0 x 0 0 0 0 0 0 1 7 U                     / * ! <   S Y S C L K   d i v i d e d   b y   4 6   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 4 8         0 x 0 0 0 0 0 0 1 8 U                     / * ! <   S Y S C L K   d i v i d e d   b y   4 8   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 5 0         0 x 0 0 0 0 0 0 1 9 U                     / * ! <   S Y S C L K   d i v i d e d   b y   5 0   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 5 2         0 x 0 0 0 0 0 0 1 A U                     / * ! <   S Y S C L K   d i v i d e d   b y   5 2   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 5 4         0 x 0 0 0 0 0 0 1 B U                     / * ! <   S Y S C L K   d i v i d e d   b y   5 4   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 5 6         0 x 0 0 0 0 0 0 1 C U                     / * ! <   S Y S C L K   d i v i d e d   b y   5 6   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 5 8         0 x 0 0 0 0 0 0 1 D U                     / * ! <   S Y S C L K   d i v i d e d   b y   5 8   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 6 0         0 x 0 0 0 0 0 0 1 E U                     / * ! <   S Y S C L K   d i v i d e d   b y   6 0   * /  
 # d e f i n e   S M A R T C A R D _ P R E S C A L E R _ S Y S C L K _ D I V 6 2         0 x 0 0 0 0 0 0 1 F U                     / * ! <   S Y S C L K   d i v i d e d   b y   6 2   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S m a r t C a r d _ F l a g s   S M A R T C A R D   F l a g s  
     *                 E l e m e n t s   v a l u e s   c o n v e n t i o n :   0 x X X X X  
     *                       -   0 x X X X X     :   F l a g   m a s k   i n   t h e   S R   r e g i s t e r  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ F L A G _ T X E                                     ( ( u i n t 3 2 _ t ) U S A R T _ S R _ T X E )  
 # d e f i n e   S M A R T C A R D _ F L A G _ T C                                       ( ( u i n t 3 2 _ t ) U S A R T _ S R _ T C )  
 # d e f i n e   S M A R T C A R D _ F L A G _ R X N E                                   ( ( u i n t 3 2 _ t ) U S A R T _ S R _ R X N E )  
 # d e f i n e   S M A R T C A R D _ F L A G _ I D L E                                   ( ( u i n t 3 2 _ t ) U S A R T _ S R _ I D L E )  
 # d e f i n e   S M A R T C A R D _ F L A G _ O R E                                     ( ( u i n t 3 2 _ t ) U S A R T _ S R _ O R E )  
 # d e f i n e   S M A R T C A R D _ F L A G _ N E                                       ( ( u i n t 3 2 _ t ) U S A R T _ S R _ N E )  
 # d e f i n e   S M A R T C A R D _ F L A G _ F E                                       ( ( u i n t 3 2 _ t ) U S A R T _ S R _ F E )  
 # d e f i n e   S M A R T C A R D _ F L A G _ P E                                       ( ( u i n t 3 2 _ t ) U S A R T _ S R _ P E )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S m a r t C a r d _ I n t e r r u p t _ d e f i n i t i o n   S M A R T C A R D   I n t e r r u p t s   D e f i n i t i o n  
     *                 E l e m e n t s   v a l u e s   c o n v e n t i o n :   0 x Y 0 0 0 X X X X  
     *                       -   X X X X     :   I n t e r r u p t   m a s k   i n   t h e   Y   r e g i s t e r  
     *                       -   Y     :   I n t e r r u p t   s o u r c e   r e g i s t e r   ( 2 b i t s )  
     *                                   -   0 1 :   C R 1   r e g i s t e r  
     *                                   -   1 1 :   C R 3   r e g i s t e r  
     *   @ {  
     * /  
 # d e f i n e   S M A R T C A R D _ I T _ P E                                           ( ( u i n t 3 2 _ t ) ( S M A R T C A R D _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ P E I E ) )  
 # d e f i n e   S M A R T C A R D _ I T _ T X E                                         ( ( u i n t 3 2 _ t ) ( S M A R T C A R D _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ T X E I E ) )  
 # d e f i n e   S M A R T C A R D _ I T _ T C                                           ( ( u i n t 3 2 _ t ) ( S M A R T C A R D _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ T C I E ) )  
 # d e f i n e   S M A R T C A R D _ I T _ R X N E                                       ( ( u i n t 3 2 _ t ) ( S M A R T C A R D _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ R X N E I E ) )  
 # d e f i n e   S M A R T C A R D _ I T _ I D L E                                       ( ( u i n t 3 2 _ t ) ( S M A R T C A R D _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ I D L E I E ) )  
 # d e f i n e   S M A R T C A R D _ I T _ E R R                                         ( ( u i n t 3 2 _ t ) ( S M A R T C A R D _ C R 3 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 3 _ E I E ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S M A R T C A R D _ E x p o r t e d _ M a c r o s   S M A R T C A R D   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f   R e s e t   S M A R T C A R D   h a n d l e   g s t a t e   &   R x S t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )     d o {                                                                                                               \  
                                                                                                                       ( _ _ H A N D L E _ _ ) - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T ;             \  
                                                                                                                       ( _ _ H A N D L E _ _ ) - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T ;           \  
                                                                                                                       ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ;                                     \  
                                                                                                                       ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;                                 \  
                                                                                                                     }   w h i l e ( 0 U )  
 # e l s e  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )     d o {                                                                                                               \  
                                                                                                                       ( _ _ H A N D L E _ _ ) - > g S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T ;             \  
                                                                                                                       ( _ _ H A N D L E _ _ ) - > R x S t a t e   =   H A L _ S M A R T C A R D _ S T A T E _ R E S E T ;           \  
                                                                                                                     }   w h i l e ( 0 U )  
 # e n d i f   / * U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S     * /  
  
 / * *   @ b r i e f     F l u s h   t h e   S m a r t c a r d   D R   r e g i s t e r  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ F L U S H _ D R R E G I S T E R ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D R )  
  
 / * *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   S m a r t c a r d   f l a g   i s   s e t   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S M A R T C A R D _ F L A G _ T X E :     T r a n s m i t   d a t a   r e g i s t e r   e m p t y   f l a g  
     *                         @ a r g   S M A R T C A R D _ F L A G _ T C :       T r a n s m i s s i o n   C o m p l e t e   f l a g  
     *                         @ a r g   S M A R T C A R D _ F L A G _ R X N E :   R e c e i v e   d a t a   r e g i s t e r   n o t   e m p t y   f l a g  
     *                         @ a r g   S M A R T C A R D _ F L A G _ I D L E :   I d l e   L i n e   d e t e c t i o n   f l a g  
     *                         @ a r g   S M A R T C A R D _ F L A G _ O R E :     O v e r r u n   E r r o r   f l a g  
     *                         @ a r g   S M A R T C A R D _ F L A G _ N E :       N o i s e   E r r o r   f l a g  
     *                         @ a r g   S M A R T C A R D _ F L A G _ F E :       F r a m i n g   E r r o r   f l a g  
     *                         @ a r g   S M A R T C A R D _ F L A G _ P E :       P a r i t y   E r r o r   f l a g  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ F L A G _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   &   ( _ _ F L A G _ _ ) )   = =   ( _ _ F L A G _ _ ) )  
  
 / * *   @ b r i e f     C l e a r   t h e   s p e c i f i e d   S m a r t c a r d   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S M A R T C A R D _ F L A G _ T C :       T r a n s m i s s i o n   C o m p l e t e   f l a g .  
     *                         @ a r g   S M A R T C A R D _ F L A G _ R X N E :   R e c e i v e   d a t a   r e g i s t e r   n o t   e m p t y   f l a g .  
     *  
     *   @ n o t e       P E   ( P a r i t y   e r r o r ) ,   F E   ( F r a m i n g   e r r o r ) ,   N E   ( N o i s e   e r r o r )   a n d   O R E   ( O v e r r u n  
     *                     e r r o r )   f l a g s   a r e   c l e a r e d   b y   s o f t w a r e   s e q u e n c e :   a   r e a d   o p e r a t i o n   t o  
     *                     U S A R T _ S R   r e g i s t e r   f o l l o w e d   b y   a   r e a d   o p e r a t i o n   t o   U S A R T _ D R   r e g i s t e r .  
     *   @ n o t e       R X N E   f l a g   c a n   b e   a l s o   c l e a r e d   b y   a   r e a d   t o   t h e   U S A R T _ D R   r e g i s t e r .  
     *   @ n o t e       T C   f l a g   c a n   b e   a l s o   c l e a r e d   b y   s o f t w a r e   s e q u e n c e :   a   r e a d   o p e r a t i o n   t o  
     *                     U S A R T _ S R   r e g i s t e r   f o l l o w e d   b y   a   w r i t e   o p e r a t i o n   t o   U S A R T _ D R   r e g i s t e r .  
     *   @ n o t e       T X E   f l a g   i s   c l e a r e d   o n l y   b y   a   w r i t e   t o   t h e   U S A R T _ D R   r e g i s t e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   =   ~ ( _ _ F L A G _ _ ) )  
  
 / * *   @ b r i e f     C l e a r   t h e   S M A R T C A R D   P E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )     \  
         d o {                                                                                       \  
             _ _ I O   u i n t 3 2 _ t   t m p r e g   =   0 x 0 0 U ;                               \  
             t m p r e g   =   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R ;                 \  
             t m p r e g   =   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D R ;                 \  
             U N U S E D ( t m p r e g ) ;                                                           \  
         }   w h i l e ( 0 U )  
  
 / * *   @ b r i e f     C l e a r   t h e   S M A R T C A R D   F E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ C L E A R _ F E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ S M A R T C A R D _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     C l e a r   t h e   S M A R T C A R D   N E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ C L E A R _ N E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ S M A R T C A R D _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     C l e a r   t h e   S M A R T C A R D   O R E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ C L E A R _ O R E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ S M A R T C A R D _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     C l e a r   t h e   S M A R T C A R D   I D L E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ C L E A R _ I D L E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ S M A R T C A R D _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     E n a b l e   t h e   s p e c i f i e d   S m a r t C a r d   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   S M A R T C A R D   i n t e r r u p t   t o   e n a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S M A R T C A R D _ I T _ T X E :     T r a n s m i t   D a t a   R e g i s t e r   e m p t y   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ T C :       T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ R X N E :   R e c e i v e   D a t a   r e g i s t e r   n o t   e m p t y   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ I D L E :   I d l e   l i n e   d e t e c t i o n   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ P E :       P a r i t y   E r r o r   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ E R R :     E r r o r   i n t e r r u p t ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )       ( ( ( ( _ _ I N T E R R U P T _ _ )   > >   2 8 U )   = =   S M A R T C A R D _ C R 1 _ R E G _ I N D E X ) ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   | =   ( ( _ _ I N T E R R U P T _ _ )   &   S M A R T C A R D _ I T _ M A S K ) ) :   \  
                                                                                                                                   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   | =   ( ( _ _ I N T E R R U P T _ _ )   &   S M A R T C A R D _ I T _ M A S K ) ) )  
  
 / * *   @ b r i e f     D i s a b l e   t h e   s p e c i f i e d   S m a r t C a r d   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   S M A R T C A R D   i n t e r r u p t   t o   d i s a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S M A R T C A R D _ I T _ T X E :     T r a n s m i t   D a t a   R e g i s t e r   e m p t y   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ T C :       T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ R X N E :   R e c e i v e   D a t a   r e g i s t e r   n o t   e m p t y   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ I D L E :   I d l e   l i n e   d e t e c t i o n   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ P E :       P a r i t y   E r r o r   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ E R R :     E r r o r   i n t e r r u p t ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     ( ( ( ( _ _ I N T E R R U P T _ _ )   > >   2 8 U )   = =   S M A R T C A R D _ C R 1 _ R E G _ I N D E X ) ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   & =   ~ ( ( _ _ I N T E R R U P T _ _ )   &   S M A R T C A R D _ I T _ M A S K ) ) :   \  
                                                                                                                                   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   & =   ~   ( ( _ _ I N T E R R U P T _ _ )   &   S M A R T C A R D _ I T _ M A S K ) ) )  
  
 / * *   @ b r i e f     C h e c k s   w h e t h e r   t h e   s p e c i f i e d   S m a r t C a r d   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S m a r t C a r d   H a n d l e .  
     *   @ p a r a m     _ _ I T _ _   s p e c i f i e s   t h e   S M A R T C A R D   i n t e r r u p t   s o u r c e   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S M A R T C A R D _ I T _ T X E :   T r a n s m i t   D a t a   R e g i s t e r   e m p t y   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ T C :     T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ R X N E :   R e c e i v e   D a t a   r e g i s t e r   n o t   e m p t y   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ I D L E :   I d l e   l i n e   d e t e c t i o n   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ E R R :   E r r o r   i n t e r r u p t  
     *                         @ a r g   S M A R T C A R D _ I T _ P E :   P a r i t y   E r r o r   i n t e r r u p t  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ I T _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I T _ _ )   ( ( ( ( ( _ _ I T _ _ )   > >   2 8 U )   = =   S M A R T C A R D _ C R 1 _ R E G _ I N D E X ) ?   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1 :   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3 )   &   ( ( ( u i n t 3 2 _ t ) ( _ _ I T _ _ ) )   &   S M A R T C A R D _ I T _ M A S K ) )  
  
 / * *   @ b r i e f     E n a b l e   t h e   U S A R T   a s s o c i a t e d   t o   t h e   S M A R T C A R D   H a n d l e  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ E N A B L E ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   | =     U S A R T _ C R 1 _ U E )  
  
 / * *   @ b r i e f     D i s a b l e   t h e   U S A R T   a s s o c i a t e d   t o   t h e   S M A R T C A R D   H a n d l e  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S M A R T C A R D   H a n d l e .  
     *                   S M A R T C A R D   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ D I S A B L E ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   & =     ~ U S A R T _ C R 1 _ U E )  
  
 / * *   @ b r i e f     M a c r o s   t o   e n a b l e   t h e   S m a r t C a r d   D M A   r e q u e s t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S m a r t C a r d   H a n d l e .  
     *   @ p a r a m     _ _ R E Q U E S T _ _   s p e c i f i e s   t h e   S m a r t C a r d   D M A   r e q u e s t .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S M A R T C A R D _ D M A R E Q _ T X :   S m a r t C a r d   D M A   t r a n s m i t   r e q u e s t  
     *                         @ a r g   S M A R T C A R D _ D M A R E Q _ R X :   S m a r t C a r d   D M A   r e c e i v e   r e q u e s t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ D M A _ R E Q U E S T _ E N A B L E ( _ _ H A N D L E _ _ ,   _ _ R E Q U E S T _ _ )         ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   | =     ( _ _ R E Q U E S T _ _ ) )  
  
 / * *   @ b r i e f     M a c r o s   t o   d i s a b l e   t h e   S m a r t C a r d   D M A   r e q u e s t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   S m a r t C a r d   H a n d l e .  
     *   @ p a r a m     _ _ R E Q U E S T _ _   s p e c i f i e s   t h e   S m a r t C a r d   D M A   r e q u e s t .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   S M A R T C A R D _ D M A R E Q _ T X :   S m a r t C a r d   D M A   t r a n s m i t   r e q u e s t  
     *                         @ a r g   S M A R T C A R D _ D M A R E Q _ R X :   S m a r t C a r d   D M A   r e c e i v e   r e q u e s t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ S M A R T C A R D _ D M A _ R E Q U E S T _ D I S A B L E ( _ _ H A N D L E _ _ ,   _ _ R E Q U E S T _ _ )       ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   & =     ~ ( _ _ R E Q U E S T _ _ ) )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ D e I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ M s p I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ M s p D e I n i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 # i f   ( U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / *   C a l l b a c k s   R e g i s t e r / U n R e g i s t e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e g i s t e r C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   H A L _ S M A R T C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p S M A R T C A R D _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ U n R e g i s t e r C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   H A L _ S M A R T C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
 # e n d i f   / *   U S E _ H A L _ S M A R T C A R D _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 / *   I O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ T r a n s m i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e c e i v e ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e c e i v e _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ T r a n s m i t _ D M A ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ R e c e i v e _ D M A ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 / *   T r a n s f e r   A b o r t   f u n c t i o n s   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t R e c e i v e ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S M A R T C A R D _ A b o r t R e c e i v e _ I T ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
  
 v o i d   H A L _ S M A R T C A R D _ I R Q H a n d l e r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ T x C p l t C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ R x C p l t C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ E r r o r C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ A b o r t C p l t C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ A b o r t T r a n s m i t C p l t C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 v o i d   H A L _ S M A R T C A R D _ A b o r t R e c e i v e C p l t C a l l b a c k ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S M A R T C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 / *   P e r i p h e r a l   S t a t e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S M A R T C A R D _ S t a t e T y p e D e f   H A L _ S M A R T C A R D _ G e t S t a t e ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 u i n t 3 2 _ t   H A L _ S M A R T C A R D _ G e t E r r o r ( S M A R T C A R D _ H a n d l e T y p e D e f   * h s c ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S M A R T C A R D _ P r i v a t e _ C o n s t a n t s   S M A R T C A R D   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f   S M A R T C A R D   i n t e r r u p t i o n s   f l a g   m a s k  
     *  
     * /  
 # d e f i n e   S M A R T C A R D _ I T _ M A S K                                       ( ( u i n t 3 2 _ t )   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E   |   U S A R T _ C R 1 _ R X N E I E   |   \  
                                                                                                                 U S A R T _ C R 1 _ I D L E I E   |   U S A R T _ C R 3 _ E I E   )  
  
 # d e f i n e   S M A R T C A R D _ C R 1 _ R E G _ I N D E X                           1 U  
 # d e f i n e   S M A R T C A R D _ C R 3 _ R E G _ I N D E X                           3 U  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S M A R T C A R D _ P r i v a t e _ M a c r o s       S M A R T C A R D   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ S M A R T C A R D _ W O R D _ L E N G T H ( L E N G T H )         ( ( L E N G T H )   = =   S M A R T C A R D _ W O R D L E N G T H _ 9 B )  
 # d e f i n e   I S _ S M A R T C A R D _ S T O P B I T S ( S T O P B I T S )           ( ( ( S T O P B I T S )   = =   S M A R T C A R D _ S T O P B I T S _ 0 _ 5 )   | |   \  
                                                                                           ( ( S T O P B I T S )   = =   S M A R T C A R D _ S T O P B I T S _ 1 _ 5 ) )  
 # d e f i n e   I S _ S M A R T C A R D _ P A R I T Y ( P A R I T Y )                   ( ( ( P A R I T Y )   = =   S M A R T C A R D _ P A R I T Y _ E V E N )   | |   \  
                                                                                           ( ( P A R I T Y )   = =   S M A R T C A R D _ P A R I T Y _ O D D ) )  
 # d e f i n e   I S _ S M A R T C A R D _ M O D E ( M O D E )                           ( ( ( ( M O D E )   &   0 x 0 0 0 0 F F F 3 U )   = =   0 x 0 0 U )   & &   ( ( M O D E )   ! =   0 x 0 0 0 0 0 0 U ) )  
 # d e f i n e   I S _ S M A R T C A R D _ P O L A R I T Y ( C P O L )                   ( ( ( C P O L )   = =   S M A R T C A R D _ P O L A R I T Y _ L O W )   | |   ( ( C P O L )   = =   S M A R T C A R D _ P O L A R I T Y _ H I G H ) )  
 # d e f i n e   I S _ S M A R T C A R D _ P H A S E ( C P H A )                         ( ( ( C P H A )   = =   S M A R T C A R D _ P H A S E _ 1 E D G E )   | |   ( ( C P H A )   = =   S M A R T C A R D _ P H A S E _ 2 E D G E ) )  
 # d e f i n e   I S _ S M A R T C A R D _ L A S T B I T ( L A S T B I T )               ( ( ( L A S T B I T )   = =   S M A R T C A R D _ L A S T B I T _ D I S A B L E )   | |   \  
                                                                                           ( ( L A S T B I T )   = =   S M A R T C A R D _ L A S T B I T _ E N A B L E ) )  
 # d e f i n e   I S _ S M A R T C A R D _ N A C K _ S T A T E ( N A C K )               ( ( ( N A C K )   = =   S M A R T C A R D _ N A C K _ E N A B L E )   | |   \  
                                                                                           ( ( N A C K )   = =   S M A R T C A R D _ N A C K _ D I S A B L E ) )  
 # d e f i n e   I S _ S M A R T C A R D _ B A U D R A T E ( B A U D R A T E )           ( ( B A U D R A T E )   <   4 5 0 0 0 0 1 U )  
  
 # d e f i n e   S M A R T C A R D _ D I V ( _ _ P C L K _ _ ,   _ _ B A U D _ _ )                                 ( ( ( _ _ P C L K _ _ ) * 2 5 U ) / ( 4 U * ( _ _ B A U D _ _ ) ) )  
 # d e f i n e   S M A R T C A R D _ D I V M A N T ( _ _ P C L K _ _ ,   _ _ B A U D _ _ )                         ( S M A R T C A R D _ D I V ( ( _ _ P C L K _ _ ) ,   ( _ _ B A U D _ _ ) ) / 1 0 0 U )  
 # d e f i n e   S M A R T C A R D _ D I V F R A Q ( _ _ P C L K _ _ ,   _ _ B A U D _ _ )                         ( ( ( ( S M A R T C A R D _ D I V ( ( _ _ P C L K _ _ ) ,   ( _ _ B A U D _ _ ) )   -   ( S M A R T C A R D _ D I V M A N T ( ( _ _ P C L K _ _ ) ,   ( _ _ B A U D _ _ ) )   *   1 0 0 U ) )   *   1 6 U )   +   5 0 U )   /   1 0 0 U )  
 / *   S M A R T C A R D   B R R   =   m a n t i s s a   +   o v e r f l o w   +   f r a c t i o n  
                         =   ( S M A R T C A R D   D I V M A N T   < <   4 )   +   ( S M A R T C A R D   D I V F R A Q   &   0 x F 0 )   +   ( S M A R T C A R D   D I V F R A Q   &   0 x 0 F U )   * /  
 # d e f i n e   S M A R T C A R D _ B R R ( _ _ P C L K _ _ ,   _ _ B A U D _ _ )               ( ( ( S M A R T C A R D _ D I V M A N T ( ( _ _ P C L K _ _ ) ,   ( _ _ B A U D _ _ ) )   < <   4 U )   +   \  
                                                                                                   ( S M A R T C A R D _ D I V F R A Q ( ( _ _ P C L K _ _ ) ,   ( _ _ B A U D _ _ ) )   &   0 x F 0 U ) )   +   \  
                                                                                                   ( S M A R T C A R D _ D I V F R A Q ( ( _ _ P C L K _ _ ) ,   ( _ _ B A U D _ _ ) )   &   0 x 0 F U ) )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   S M A R T C A R D _ P r i v a t e _ F u n c t i o n s   S M A R T C A R D   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ S M A R T C A R D _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  