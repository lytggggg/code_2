??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ u s a r t . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   U S A R T   H A L   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ U S A R T _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ U S A R T _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   U S A R T  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ E x p o r t e d _ T y p e s   U S A R T   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   U S A R T   I n i t   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   B a u d R a t e ;                                     / * ! <   T h i s   m e m b e r   c o n f i g u r e s   t h e   U s a r t   c o m m u n i c a t i o n   b a u d   r a t e .  
                                                                                       T h e   b a u d   r a t e   i s   c o m p u t e d   u s i n g   t h e   f o l l o w i n g   f o r m u l a :  
                                                                                       -   I n t e g e r D i v i d e r   =   ( ( P C L K x )   /   ( 1 6   *   ( h u s a r t - > I n i t . B a u d R a t e ) ) )  
                                                                                       -   F r a c t i o n a l D i v i d e r   =   ( ( I n t e g e r D i v i d e r   -   ( ( u i n t 3 2 _ t )   I n t e g e r D i v i d e r ) )   *   1 6 )   +   0 . 5   * /  
  
     u i n t 3 2 _ t   W o r d L e n g t h ;                                 / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   d a t a   b i t s   t r a n s m i t t e d   o r   r e c e i v e d   i n   a   f r a m e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ W o r d _ L e n g t h   * /  
  
     u i n t 3 2 _ t   S t o p B i t s ;                                     / * ! <   S p e c i f i e s   t h e   n u m b e r   o f   s t o p   b i t s   t r a n s m i t t e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ S t o p _ B i t s   * /  
  
     u i n t 3 2 _ t   P a r i t y ;                                         / * ! <   S p e c i f i e s   t h e   p a r i t y   m o d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ P a r i t y  
                                                                                       @ n o t e   W h e n   p a r i t y   i s   e n a b l e d ,   t h e   c o m p u t e d   p a r i t y   i s   i n s e r t e d  
                                                                                                   a t   t h e   M S B   p o s i t i o n   o f   t h e   t r a n s m i t t e d   d a t a   ( 9 t h   b i t   w h e n  
                                                                                                   t h e   w o r d   l e n g t h   i s   s e t   t o   9   d a t a   b i t s ;   8 t h   b i t   w h e n   t h e  
                                                                                                   w o r d   l e n g t h   i s   s e t   t o   8   d a t a   b i t s ) .   * /  
  
     u i n t 3 2 _ t   M o d e ;                                             / * ! <   S p e c i f i e s   w h e t h e r   t h e   R e c e i v e   o r   T r a n s m i t   m o d e   i s   e n a b l e d   o r   d i s a b l e d .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ M o d e   * /  
  
     u i n t 3 2 _ t   C L K P o l a r i t y ;                               / * ! <   S p e c i f i e s   t h e   s t e a d y   s t a t e   o f   t h e   s e r i a l   c l o c k .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ C l o c k _ P o l a r i t y   * /  
  
     u i n t 3 2 _ t   C L K P h a s e ;                                     / * ! <   S p e c i f i e s   t h e   c l o c k   t r a n s i t i o n   o n   w h i c h   t h e   b i t   c a p t u r e   i s   m a d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ C l o c k _ P h a s e   * /  
  
     u i n t 3 2 _ t   C L K L a s t B i t ;                                 / * ! <   S p e c i f i e s   w h e t h e r   t h e   c l o c k   p u l s e   c o r r e s p o n d i n g   t o   t h e   l a s t   t r a n s m i t t e d  
                                                                                       d a t a   b i t   ( M S B )   h a s   t o   b e   o u t p u t   o n   t h e   S C L K   p i n   i n   s y n c h r o n o u s   m o d e .  
                                                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   U S A R T _ L a s t _ B i t   * /  
 }   U S A R T _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f   H A L   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ U S A R T _ S T A T E _ R E S E T                           =   0 x 0 0 U ,         / * ! <   P e r i p h e r a l   i s   n o t   y e t   I n i t i a l i z e d       * /  
     H A L _ U S A R T _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,         / * ! <   P e r i p h e r a l   I n i t i a l i z e d   a n d   r e a d y   f o r   u s e   * /  
     H A L _ U S A R T _ S T A T E _ B U S Y                             =   0 x 0 2 U ,         / * ! <   a n   i n t e r n a l   p r o c e s s   i s   o n g o i n g   * /  
     H A L _ U S A R T _ S T A T E _ B U S Y _ T X                       =   0 x 1 2 U ,         / * ! <   D a t a   T r a n s m i s s i o n   p r o c e s s   i s   o n g o i n g   * /  
     H A L _ U S A R T _ S T A T E _ B U S Y _ R X                       =   0 x 2 2 U ,         / * ! <   D a t a   R e c e p t i o n   p r o c e s s   i s   o n g o i n g   * /  
     H A L _ U S A R T _ S T A T E _ B U S Y _ T X _ R X                 =   0 x 3 2 U ,         / * ! <   D a t a   T r a n s m i s s i o n   R e c e p t i o n   p r o c e s s   i s   o n g o i n g   * /  
     H A L _ U S A R T _ S T A T E _ T I M E O U T                       =   0 x 0 3 U ,         / * ! <   T i m e o u t   s t a t e   * /  
     H A L _ U S A R T _ S T A T E _ E R R O R                           =   0 x 0 4 U           / * ! <   E r r o r   * /  
 }   H A L _ U S A R T _ S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     U S A R T   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f  
 {  
     U S A R T _ T y p e D e f                                   * I n s t a n c e ;                 / * ! <   U S A R T   r e g i s t e r s   b a s e   a d d r e s s                 * /  
  
     U S A R T _ I n i t T y p e D e f                           I n i t ;                           / * ! <   U s a r t   c o m m u n i c a t i o n   p a r a m e t e r s             * /  
  
     u i n t 8 _ t                                               * p T x B u f f P t r ;             / * ! <   P o i n t e r   t o   U s a r t   T x   t r a n s f e r   B u f f e r   * /  
  
     u i n t 1 6 _ t                                             T x X f e r S i z e ;               / * ! <   U s a r t   T x   T r a n s f e r   s i z e                             * /  
  
     _ _ I O   u i n t 1 6 _ t                                   T x X f e r C o u n t ;             / * ! <   U s a r t   T x   T r a n s f e r   C o u n t e r                       * /  
  
     u i n t 8 _ t                                               * p R x B u f f P t r ;             / * ! <   P o i n t e r   t o   U s a r t   R x   t r a n s f e r   B u f f e r   * /  
  
     u i n t 1 6 _ t                                             R x X f e r S i z e ;               / * ! <   U s a r t   R x   T r a n s f e r   s i z e                             * /  
  
     _ _ I O   u i n t 1 6 _ t                                   R x X f e r C o u n t ;             / * ! <   U s a r t   R x   T r a n s f e r   C o u n t e r                       * /  
  
     D M A _ H a n d l e T y p e D e f                           * h d m a t x ;                     / * ! <   U s a r t   T x   D M A   H a n d l e   p a r a m e t e r s             * /  
  
     D M A _ H a n d l e T y p e D e f                           * h d m a r x ;                     / * ! <   U s a r t   R x   D M A   H a n d l e   p a r a m e t e r s             * /  
  
     H A L _ L o c k T y p e D e f                                 L o c k ;                         / * ! <   L o c k i n g   o b j e c t                                             * /  
  
     _ _ I O   H A L _ U S A R T _ S t a t e T y p e D e f         S t a t e ;                       / * ! <   U s a r t   c o m m u n i c a t i o n   s t a t e                       * /  
  
     _ _ I O   u i n t 3 2 _ t                                     E r r o r C o d e ;               / * ! <   U S A R T   E r r o r   c o d e                                         * /  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   T x H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                 / * ! <   U S A R T   T x   H a l f   C o m p l e t e   C a l l b a c k                 * /  
     v o i d   ( *   T x C p l t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                         / * ! <   U S A R T   T x   C o m p l e t e   C a l l b a c k                           * /  
     v o i d   ( *   R x H a l f C p l t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                 / * ! <   U S A R T   R x   H a l f   C o m p l e t e   C a l l b a c k                 * /  
     v o i d   ( *   R x C p l t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                         / * ! <   U S A R T   R x   C o m p l e t e   C a l l b a c k                           * /  
     v o i d   ( *   T x R x C p l t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                     / * ! <   U S A R T   T x   R x   C o m p l e t e   C a l l b a c k                     * /  
     v o i d   ( *   E r r o r C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                           / * ! <   U S A R T   E r r o r   C a l l b a c k                                       * /  
     v o i d   ( *   A b o r t C p l t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                   / * ! <   U S A R T   A b o r t   C o m p l e t e   C a l l b a c k                     * /  
  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                       / * ! <   U S A R T   M s p   I n i t   c a l l b a c k                                 * /  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;                   / * ! <   U S A R T   M s p   D e I n i t   c a l l b a c k                             * /  
 # e n d i f     / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
 }   U S A R T _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   U S A R T   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ U S A R T _ T X _ H A L F C O M P L E T E _ C B _ I D                   =   0 x 0 0 U ,         / * ! <   U S A R T   T x   H a l f   C o m p l e t e   C a l l b a c k   I D                 * /  
     H A L _ U S A R T _ T X _ C O M P L E T E _ C B _ I D                           =   0 x 0 1 U ,         / * ! <   U S A R T   T x   C o m p l e t e   C a l l b a c k   I D                           * /  
     H A L _ U S A R T _ R X _ H A L F C O M P L E T E _ C B _ I D                   =   0 x 0 2 U ,         / * ! <   U S A R T   R x   H a l f   C o m p l e t e   C a l l b a c k   I D                 * /  
     H A L _ U S A R T _ R X _ C O M P L E T E _ C B _ I D                           =   0 x 0 3 U ,         / * ! <   U S A R T   R x   C o m p l e t e   C a l l b a c k   I D                           * /  
     H A L _ U S A R T _ T X _ R X _ C O M P L E T E _ C B _ I D                     =   0 x 0 4 U ,         / * ! <   U S A R T   T x   R x   C o m p l e t e   C a l l b a c k   I D                     * /  
     H A L _ U S A R T _ E R R O R _ C B _ I D                                       =   0 x 0 5 U ,         / * ! <   U S A R T   E r r o r   C a l l b a c k   I D                                       * /  
     H A L _ U S A R T _ A B O R T _ C O M P L E T E _ C B _ I D                     =   0 x 0 6 U ,         / * ! <   U S A R T   A b o r t   C o m p l e t e   C a l l b a c k   I D                     * /  
  
     H A L _ U S A R T _ M S P I N I T _ C B _ I D                                   =   0 x 0 7 U ,         / * ! <   U S A R T   M s p I n i t   c a l l b a c k   I D                                   * /  
     H A L _ U S A R T _ M S P D E I N I T _ C B _ I D                               =   0 x 0 8 U           / * ! <   U S A R T   M s p D e I n i t   c a l l b a c k   I D                               * /  
  
 }   H A L _ U S A R T _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   U S A R T   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f     v o i d   ( * p U S A R T _ C a l l b a c k T y p e D e f ) ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;     / * ! <   p o i n t e r   t o   a n   U S A R T   c a l l b a c k   f u n c t i o n   * /  
  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ E x p o r t e d _ C o n s t a n t s   U S A R T   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ E r r o r _ C o d e   U S A R T   E r r o r   C o d e  
     *   @ b r i e f         U S A R T   E r r o r   C o d e  
     *   @ {  
     * /  
 # d e f i n e   H A L _ U S A R T _ E R R O R _ N O N E                           0 x 0 0 0 0 0 0 0 0 U       / * ! <   N o   e r r o r                                 * /  
 # d e f i n e   H A L _ U S A R T _ E R R O R _ P E                               0 x 0 0 0 0 0 0 0 1 U       / * ! <   P a r i t y   e r r o r                         * /  
 # d e f i n e   H A L _ U S A R T _ E R R O R _ N E                               0 x 0 0 0 0 0 0 0 2 U       / * ! <   N o i s e   e r r o r                           * /  
 # d e f i n e   H A L _ U S A R T _ E R R O R _ F E                               0 x 0 0 0 0 0 0 0 4 U       / * ! <   F r a m e   e r r o r                           * /  
 # d e f i n e   H A L _ U S A R T _ E R R O R _ O R E                             0 x 0 0 0 0 0 0 0 8 U       / * ! <   O v e r r u n   e r r o r                       * /  
 # d e f i n e   H A L _ U S A R T _ E R R O R _ D M A                             0 x 0 0 0 0 0 0 1 0 U       / * ! <   D M A   t r a n s f e r   e r r o r             * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K   0 x 0 0 0 0 0 0 2 0 U         / * ! <   I n v a l i d   C a l l b a c k   e r r o r   * /  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ W o r d _ L e n g t h   U S A R T   W o r d   L e n g t h  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ W O R D L E N G T H _ 8 B                     0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   U S A R T _ W O R D L E N G T H _ 9 B                     ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ M )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ S t o p _ B i t s   U S A R T   N u m b e r   o f   S t o p   B i t s  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ S T O P B I T S _ 1                           0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   U S A R T _ S T O P B I T S _ 0 _ 5                       ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ S T O P _ 0 )  
 # d e f i n e   U S A R T _ S T O P B I T S _ 2                           ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ S T O P _ 1 )  
 # d e f i n e   U S A R T _ S T O P B I T S _ 1 _ 5                       ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 2 _ S T O P _ 0   |   U S A R T _ C R 2 _ S T O P _ 1 ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ P a r i t y   U S A R T   P a r i t y  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ P A R I T Y _ N O N E                         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   U S A R T _ P A R I T Y _ E V E N                         ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ P C E )  
 # d e f i n e   U S A R T _ P A R I T Y _ O D D                           ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ M o d e   U S A R T   M o d e  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ M O D E _ R X                                 ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ R E )  
 # d e f i n e   U S A R T _ M O D E _ T X                                 ( ( u i n t 3 2 _ t ) U S A R T _ C R 1 _ T E )  
 # d e f i n e   U S A R T _ M O D E _ T X _ R X                           ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ T E   |   U S A R T _ C R 1 _ R E ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ C l o c k   U S A R T   C l o c k  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ C L O C K _ D I S A B L E                     0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   U S A R T _ C L O C K _ E N A B L E                       ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ C L K E N )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ C l o c k _ P o l a r i t y   U S A R T   C l o c k   P o l a r i t y  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ P O L A R I T Y _ L O W                       0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   U S A R T _ P O L A R I T Y _ H I G H                     ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ C P O L )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ C l o c k _ P h a s e   U S A R T   C l o c k   P h a s e  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ P H A S E _ 1 E D G E                         0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   U S A R T _ P H A S E _ 2 E D G E                         ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ C P H A )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ L a s t _ B i t   U S A R T   L a s t   B i t  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ L A S T B I T _ D I S A B L E                 0 x 0 0 0 0 0 0 0 0 U  
 # d e f i n e   U S A R T _ L A S T B I T _ E N A B L E                   ( ( u i n t 3 2 _ t ) U S A R T _ C R 2 _ L B C L )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ N A C K _ S t a t e   U S A R T   N A C K   S t a t e  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ N A C K _ E N A B L E                         ( ( u i n t 3 2 _ t ) U S A R T _ C R 3 _ N A C K )  
 # d e f i n e   U S A R T _ N A C K _ D I S A B L E                       0 x 0 0 0 0 0 0 0 0 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ F l a g s   U S A R T   F l a g s  
     *                 E l e m e n t s   v a l u e s   c o n v e n t i o n :   0 x X X X X  
     *                       -   0 x X X X X     :   F l a g   m a s k   i n   t h e   S R   r e g i s t e r  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ F L A G _ T X E                               ( ( u i n t 3 2 _ t ) U S A R T _ S R _ T X E )  
 # d e f i n e   U S A R T _ F L A G _ T C                                 ( ( u i n t 3 2 _ t ) U S A R T _ S R _ T C )  
 # d e f i n e   U S A R T _ F L A G _ R X N E                             ( ( u i n t 3 2 _ t ) U S A R T _ S R _ R X N E )  
 # d e f i n e   U S A R T _ F L A G _ I D L E                             ( ( u i n t 3 2 _ t ) U S A R T _ S R _ I D L E )  
 # d e f i n e   U S A R T _ F L A G _ O R E                               ( ( u i n t 3 2 _ t ) U S A R T _ S R _ O R E )  
 # d e f i n e   U S A R T _ F L A G _ N E                                 ( ( u i n t 3 2 _ t ) U S A R T _ S R _ N E )  
 # d e f i n e   U S A R T _ F L A G _ F E                                 ( ( u i n t 3 2 _ t ) U S A R T _ S R _ F E )  
 # d e f i n e   U S A R T _ F L A G _ P E                                 ( ( u i n t 3 2 _ t ) U S A R T _ S R _ P E )  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ I n t e r r u p t _ d e f i n i t i o n   U S A R T   I n t e r r u p t s   D e f i n i t i o n  
     *                 E l e m e n t s   v a l u e s   c o n v e n t i o n :   0 x Y 0 0 0 X X X X  
     *                       -   X X X X     :   I n t e r r u p t   m a s k   i n   t h e   X X   r e g i s t e r  
     *                       -   Y     :   I n t e r r u p t   s o u r c e   r e g i s t e r   ( 2 b i t s )  
     *                                   -   0 1 :   C R 1   r e g i s t e r  
     *                                   -   1 0 :   C R 2   r e g i s t e r  
     *                                   -   1 1 :   C R 3   r e g i s t e r  
     *   @ {  
     * /  
 # d e f i n e   U S A R T _ I T _ P E                                     ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ P E I E ) )  
 # d e f i n e   U S A R T _ I T _ T X E                                   ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ T X E I E ) )  
 # d e f i n e   U S A R T _ I T _ T C                                     ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ T C I E ) )  
 # d e f i n e   U S A R T _ I T _ R X N E                                 ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ R X N E I E ) )  
 # d e f i n e   U S A R T _ I T _ I D L E                                 ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 1 _ I D L E I E ) )  
 # d e f i n e   U S A R T _ I T _ E R R                                   ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 3 _ R E G _ I N D E X   < <   2 8 U   |   U S A R T _ C R 3 _ E I E ) )  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ E x p o r t e d _ M a c r o s   U S A R T   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f   R e s e t   U S A R T   h a n d l e   s t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ U S A R T _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )     d o {                                                                                         \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E S E T ;   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ;                 \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;             \  
                                                                                                         }   w h i l e ( 0 U )  
 # e l s e  
 # d e f i n e   _ _ H A L _ U S A R T _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )     ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E S E T )  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   U S A R T   f l a g   i s   s e t   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   U S A R T _ F L A G _ T X E :     T r a n s m i t   d a t a   r e g i s t e r   e m p t y   f l a g  
     *                         @ a r g   U S A R T _ F L A G _ T C :       T r a n s m i s s i o n   C o m p l e t e   f l a g  
     *                         @ a r g   U S A R T _ F L A G _ R X N E :   R e c e i v e   d a t a   r e g i s t e r   n o t   e m p t y   f l a g  
     *                         @ a r g   U S A R T _ F L A G _ I D L E :   I d l e   L i n e   d e t e c t i o n   f l a g  
     *                         @ a r g   U S A R T _ F L A G _ O R E :     O v e r r u n   E r r o r   f l a g  
     *                         @ a r g   U S A R T _ F L A G _ N E :       N o i s e   E r r o r   f l a g  
     *                         @ a r g   U S A R T _ F L A G _ F E :       F r a m i n g   E r r o r   f l a g  
     *                         @ a r g   U S A R T _ F L A G _ P E :       P a r i t y   E r r o r   f l a g  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ F L A G _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   &   ( _ _ F L A G _ _ ) )   = =   ( _ _ F L A G _ _ ) )  
  
 / * *   @ b r i e f     C l e a r   t h e   s p e c i f i e d   U S A R T   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ F L A G _ _   s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   U S A R T _ F L A G _ T C :       T r a n s m i s s i o n   C o m p l e t e   f l a g .  
     *                         @ a r g   U S A R T _ F L A G _ R X N E :   R e c e i v e   d a t a   r e g i s t e r   n o t   e m p t y   f l a g .  
     *  
     *   @ n o t e       P E   ( P a r i t y   e r r o r ) ,   F E   ( F r a m i n g   e r r o r ) ,   N E   ( N o i s e   e r r o r ) ,   O R E   ( O v e r r u n  
     *                     e r r o r )   a n d   I D L E   ( I d l e   l i n e   d e t e c t e d )   f l a g s   a r e   c l e a r e d   b y   s o f t w a r e  
     *                     s e q u e n c e :   a   r e a d   o p e r a t i o n   t o   U S A R T _ S R   r e g i s t e r   f o l l o w e d   b y   a   r e a d  
     *                     o p e r a t i o n   t o   U S A R T _ D R   r e g i s t e r .  
     *   @ n o t e       R X N E   f l a g   c a n   b e   a l s o   c l e a r e d   b y   a   r e a d   t o   t h e   U S A R T _ D R   r e g i s t e r .  
     *   @ n o t e       T C   f l a g   c a n   b e   a l s o   c l e a r e d   b y   s o f t w a r e   s e q u e n c e :   a   r e a d   o p e r a t i o n   t o  
     *                     U S A R T _ S R   r e g i s t e r   f o l l o w e d   b y   a   w r i t e   o p e r a t i o n   t o   U S A R T _ D R   r e g i s t e r .  
     *   @ n o t e       T X E   f l a g   i s   c l e a r e d   o n l y   b y   a   w r i t e   t o   t h e   U S A R T _ D R   r e g i s t e r .  
     *  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R   =   ~ ( _ _ F L A G _ _ ) )  
  
 / * *   @ b r i e f     C l e a r   t h e   U S A R T   P E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )         \  
     d o {                                                                                       \  
         _ _ I O   u i n t 3 2 _ t   t m p r e g   =   0 x 0 0 U ;                               \  
         t m p r e g   =   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > S R ;                 \  
         t m p r e g   =   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > D R ;                 \  
         U N U S E D ( t m p r e g ) ;                                                           \  
     }   w h i l e ( 0 U )  
  
 / * *   @ b r i e f     C l e a r   t h e   U S A R T   F E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ C L E A R _ F E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ U S A R T _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     C l e a r   t h e   U S A R T   N E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ C L E A R _ N E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ U S A R T _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     C l e a r   t h e   U S A R T   O R E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ C L E A R _ O R E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ U S A R T _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     C l e a r   t h e   U S A R T   I D L E   p e n d i n g   f l a g .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ C L E A R _ I D L E F L A G ( _ _ H A N D L E _ _ )   _ _ H A L _ U S A R T _ C L E A R _ P E F L A G ( _ _ H A N D L E _ _ )  
  
 / * *   @ b r i e f     E n a b l e s   o r   d i s a b l e s   t h e   s p e c i f i e d   U S A R T   i n t e r r u p t s .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _   s p e c i f i e s   t h e   U S A R T   i n t e r r u p t   s o u r c e   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   U S A R T _ I T _ T X E :     T r a n s m i t   D a t a   R e g i s t e r   e m p t y   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ T C :       T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ R X N E :   R e c e i v e   D a t a   r e g i s t e r   n o t   e m p t y   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ I D L E :   I d l e   l i n e   d e t e c t i o n   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ P E :       P a r i t y   E r r o r   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ E R R :     E r r o r   i n t e r r u p t ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )       ( ( ( ( _ _ I N T E R R U P T _ _ )   > >   2 8 U )   = =   U S A R T _ C R 1 _ R E G _ I N D E X ) ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   | =   ( ( _ _ I N T E R R U P T _ _ )   &   U S A R T _ I T _ M A S K ) ) :   \  
                                                                                                                         ( ( ( _ _ I N T E R R U P T _ _ )   > >   2 8 U )   = =   U S A R T _ C R 2 _ R E G _ I N D E X ) ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2   | =   ( ( _ _ I N T E R R U P T _ _ )   &   U S A R T _ I T _ M A S K ) ) :   \  
                                                                                                                           ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   | =   ( ( _ _ I N T E R R U P T _ _ )   &   U S A R T _ I T _ M A S K ) ) )  
 # d e f i n e   _ _ H A L _ U S A R T _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     ( ( ( ( _ _ I N T E R R U P T _ _ )   > >   2 8 U )   = =   U S A R T _ C R 1 _ R E G _ I N D E X ) ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   & =   ~ ( ( _ _ I N T E R R U P T _ _ )   &   U S A R T _ I T _ M A S K ) ) :   \  
                                                                                                                         ( ( ( _ _ I N T E R R U P T _ _ )   > >   2 8 U )   = =   U S A R T _ C R 2 _ R E G _ I N D E X ) ?   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2   & =   ~ ( ( _ _ I N T E R R U P T _ _ )   &   U S A R T _ I T _ M A S K ) ) :   \  
                                                                                                                           ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   & =   ~   ( ( _ _ I N T E R R U P T _ _ )   &   U S A R T _ I T _ M A S K ) ) )  
  
 / * *   @ b r i e f     C h e c k s   w h e t h e r   t h e   s p e c i f i e d   U S A R T   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ p a r a m     _ _ I T _ _   s p e c i f i e s   t h e   U S A R T   i n t e r r u p t   s o u r c e   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   U S A R T _ I T _ T X E :   T r a n s m i t   D a t a   R e g i s t e r   e m p t y   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ T C :     T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ R X N E :   R e c e i v e   D a t a   r e g i s t e r   n o t   e m p t y   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ I D L E :   I d l e   l i n e   d e t e c t i o n   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ E R R :   E r r o r   i n t e r r u p t  
     *                         @ a r g   U S A R T _ I T _ P E :   P a r i t y   E r r o r   i n t e r r u p t  
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ I T _ _   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I T _ _ )   ( ( ( ( ( _ _ I T _ _ )   > >   2 8 U )   = =   U S A R T _ C R 1 _ R E G _ I N D E X ) ?   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1 : ( ( ( ( ( u i n t 3 2 _ t ) ( _ _ I T _ _ ) )   > >   2 8 U )   = =   U S A R T _ C R 2 _ R E G _ I N D E X ) ?   \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 2   :   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3 ) )   &   ( ( ( u i n t 3 2 _ t ) ( _ _ I T _ _ ) )   &   U S A R T _ I T _ M A S K ) )  
  
 / * *   @ b r i e f     M a c r o   t o   e n a b l e   t h e   U S A R T ' s   o n e   b i t   s a m p l e   m e t h o d  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ O N E _ B I T _ S A M P L E _ E N A B L E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   | =   U S A R T _ C R 3 _ O N E B I T )  
  
 / * *   @ b r i e f     M a c r o   t o   d i s a b l e   t h e   U S A R T ' s   o n e   b i t   s a m p l e   m e t h o d  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ O N E _ B I T _ S A M P L E _ D I S A B L E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 3   & =   ( u i n t 1 6 _ t ) ~ ( ( u i n t 1 6 _ t ) U S A R T _ C R 3 _ O N E B I T ) )  
  
 / * *   @ b r i e f     E n a b l e   U S A R T  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ E N A B L E ( _ _ H A N D L E _ _ )                               ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   | =   U S A R T _ C R 1 _ U E )  
  
 / * *   @ b r i e f     D i s a b l e   U S A R T  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   U S A R T   H a n d l e .  
     *                   U S A R T   H a n d l e   s e l e c t s   t h e   U S A R T x   p e r i p h e r a l   ( U S A R T   a v a i l a b i l i t y   a n d   x   v a l u e   d e p e n d i n g   o n   d e v i c e ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ U S A R T _ D I S A B L E ( _ _ H A N D L E _ _ )                             ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R 1   & =   ~ U S A R T _ C R 1 _ U E )  
  
 / * *  
     *   @ }  
     * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D e I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ M s p I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ M s p D e I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
  
 / *   C a l l b a c k s   R e g i s t e r / U n R e g i s t e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e g i s t e r C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   H A L _ U S A R T _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p U S A R T _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ U n R e g i s t e r C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   H A L _ U S A R T _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 / *   I O   o p e r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e c e i v e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t R e c e i v e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 8 _ t   * p R x D a t a ,     u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t _ D M A ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e c e i v e _ D M A ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ D M A ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D M A P a u s e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D M A R e s u m e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D M A S t o p ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 / *   T r a n s f e r   A b o r t   f u n c t i o n s   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ A b o r t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ A b o r t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
  
 v o i d   H A L _ U S A R T _ I R Q H a n d l e r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ T x C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ R x C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ T x R x C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ E r r o r C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 v o i d   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 / *   P e r i p h e r a l   S t a t e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ U S A R T _ S t a t e T y p e D e f   H A L _ U S A R T _ G e t S t a t e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 u i n t 3 2 _ t                               H A L _ U S A R T _ G e t E r r o r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
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
 / * *   @ d e f g r o u p   U S A R T _ P r i v a t e _ C o n s t a n t s   U S A R T   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 / * *   @ b r i e f   U S A R T   i n t e r r u p t i o n s   f l a g   m a s k  
     *  
     * /  
 # d e f i n e   U S A R T _ I T _ M A S K     ( ( u i n t 3 2 _ t )   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E   |   U S A R T _ C R 1 _ R X N E I E   |   \  
                                                                       U S A R T _ C R 1 _ I D L E I E   |   U S A R T _ C R 2 _ L B D I E   |   U S A R T _ C R 3 _ C T S I E   |   U S A R T _ C R 3 _ E I E   )  
  
 # d e f i n e   U S A R T _ C R 1 _ R E G _ I N D E X                     1 U  
 # d e f i n e   U S A R T _ C R 2 _ R E G _ I N D E X                     2 U  
 # d e f i n e   U S A R T _ C R 3 _ R E G _ I N D E X                     3 U  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ P r i v a t e _ M a c r o s   U S A R T   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ U S A R T _ N A C K _ S T A T E ( N A C K )         ( ( ( N A C K )   = =   U S A R T _ N A C K _ E N A B L E )   | |   \  
                                                                             ( ( N A C K )   = =   U S A R T _ N A C K _ D I S A B L E ) )  
  
 # d e f i n e   I S _ U S A R T _ L A S T B I T ( L A S T B I T )         ( ( ( L A S T B I T )   = =   U S A R T _ L A S T B I T _ D I S A B L E )   | |   \  
                                                                             ( ( L A S T B I T )   = =   U S A R T _ L A S T B I T _ E N A B L E ) )  
  
 # d e f i n e   I S _ U S A R T _ P H A S E ( C P H A )                   ( ( ( C P H A )   = =   U S A R T _ P H A S E _ 1 E D G E )   | |   \  
                                                                             ( ( C P H A )   = =   U S A R T _ P H A S E _ 2 E D G E ) )  
  
 # d e f i n e   I S _ U S A R T _ P O L A R I T Y ( C P O L )             ( ( ( C P O L )   = =   U S A R T _ P O L A R I T Y _ L O W )   | |   \  
                                                                             ( ( C P O L )   = =   U S A R T _ P O L A R I T Y _ H I G H ) )  
  
 # d e f i n e   I S _ U S A R T _ C L O C K ( C L O C K )                 ( ( ( C L O C K )   = =   U S A R T _ C L O C K _ D I S A B L E )   | |   \  
                                                                             ( ( C L O C K )   = =   U S A R T _ C L O C K _ E N A B L E ) )  
  
 # d e f i n e   I S _ U S A R T _ W O R D _ L E N G T H ( L E N G T H )   ( ( ( L E N G T H )   = =   U S A R T _ W O R D L E N G T H _ 8 B )   | |   \  
                                                                             ( ( L E N G T H )   = =   U S A R T _ W O R D L E N G T H _ 9 B ) )  
  
 # d e f i n e   I S _ U S A R T _ S T O P B I T S ( S T O P B I T S )     ( ( ( S T O P B I T S )   = =   U S A R T _ S T O P B I T S _ 1 )   | |   \  
                                                                             ( ( S T O P B I T S )   = =   U S A R T _ S T O P B I T S _ 0 _ 5 )   | |   \  
                                                                             ( ( S T O P B I T S )   = =   U S A R T _ S T O P B I T S _ 1 _ 5 )   | |   \  
                                                                             ( ( S T O P B I T S )   = =   U S A R T _ S T O P B I T S _ 2 ) )  
  
 # d e f i n e   I S _ U S A R T _ P A R I T Y ( P A R I T Y )             ( ( ( P A R I T Y )   = =   U S A R T _ P A R I T Y _ N O N E )   | |   \  
                                                                             ( ( P A R I T Y )   = =   U S A R T _ P A R I T Y _ E V E N )   | |   \  
                                                                             ( ( P A R I T Y )   = =   U S A R T _ P A R I T Y _ O D D ) )  
  
 # d e f i n e   I S _ U S A R T _ M O D E ( M O D E )                     ( ( ( ( M O D E )   &   ( ~ ( ( u i n t 3 2 _ t ) U S A R T _ M O D E _ T X _ R X ) ) )   = =   0 x 0 0 U )   & &   ( ( M O D E )   ! =   0 x 0 0 U ) )  
  
 # d e f i n e   I S _ U S A R T _ B A U D R A T E ( B A U D R A T E )     ( ( B A U D R A T E )   < =   4 5 0 0 0 0 0 U )  
  
 # d e f i n e   U S A R T _ D I V ( _ P C L K _ ,   _ B A U D _ )             ( ( ( _ P C L K _ ) * 2 5 U ) / ( 4 U * ( _ B A U D _ ) ) )  
  
 # d e f i n e   U S A R T _ D I V M A N T ( _ P C L K _ ,   _ B A U D _ )     ( U S A R T _ D I V ( ( _ P C L K _ ) ,   ( _ B A U D _ ) ) / 1 0 0 U )  
  
 # d e f i n e   U S A R T _ D I V F R A Q ( _ P C L K _ ,   _ B A U D _ )     ( ( ( ( U S A R T _ D I V ( ( _ P C L K _ ) ,   ( _ B A U D _ ) )   -   ( U S A R T _ D I V M A N T ( ( _ P C L K _ ) ,   ( _ B A U D _ ) )   *   1 0 0 U ) )   *   1 6 U )   +   5 0 U )   /   1 0 0 U )  
  
     / *   U A R T   B R R   =   m a n t i s s a   +   o v e r f l o w   +   f r a c t i o n  
                             =   ( U A R T   D I V M A N T   < <   4 )   +   ( ( U A R T   D I V F R A Q   &   0 x F 0 )   < <   1 )   +   ( U A R T   D I V F R A Q   &   0 x 0 F U )   * /  
                          
 # d e f i n e   U S A R T _ B R R ( _ P C L K _ ,   _ B A U D _ )             ( ( ( U S A R T _ D I V M A N T ( ( _ P C L K _ ) ,   ( _ B A U D _ ) )   < <   4 U )   +   \  
                                                                                 ( ( U S A R T _ D I V F R A Q ( ( _ P C L K _ ) ,   ( _ B A U D _ ) )   &   0 x F 0 U )   < <   1 U ) )   +   \  
                                                                                   ( U S A R T _ D I V F R A Q ( ( _ P C L K _ ) ,   ( _ B A U D _ ) )   &   0 x 0 F U ) )  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ P r i v a t e _ F u n c t i o n s   U S A R T   P r i v a t e   F u n c t i o n s  
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
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ U S A R T _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  