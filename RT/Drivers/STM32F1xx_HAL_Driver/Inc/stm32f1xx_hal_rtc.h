??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ r t c . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   R T C   H A L   m o d u l e .  
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ R T C _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ R T C _ H  
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
 / * *   @ a d d t o g r o u p   R T C  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   R T C _ P r i v a t e _ M a c r o s  
     *   @ {  
     * /  
  
 # d e f i n e   I S _ R T C _ A S Y N C H _ P R E D I V ( P R E D I V )     ( ( ( P R E D I V )   < =   0 x F F F F F U )   | |   ( ( P R E D I V )   = =   R T C _ A U T O _ 1 _ S E C O N D ) )  
 # d e f i n e   I S _ R T C _ H O U R 2 4 ( H O U R )                       ( ( H O U R )   < =   2 3 U )  
 # d e f i n e   I S _ R T C _ M I N U T E S ( M I N U T E S )               ( ( M I N U T E S )   < =   5 9 U )  
 # d e f i n e   I S _ R T C _ S E C O N D S ( S E C O N D S )               ( ( S E C O N D S )   < =   5 9 U )  
 # d e f i n e   I S _ R T C _ F O R M A T ( F O R M A T )                   ( ( ( F O R M A T )   = =   R T C _ F O R M A T _ B I N )   | |   ( ( F O R M A T )   = =   R T C _ F O R M A T _ B C D ) )  
 # d e f i n e   I S _ R T C _ Y E A R ( Y E A R )                           ( ( Y E A R )   < =   9 9 U )  
 # d e f i n e   I S _ R T C _ M O N T H ( M O N T H )                       ( ( ( M O N T H )   > =   1 U )   & &   ( ( M O N T H )   < =   1 2 U ) )  
 # d e f i n e   I S _ R T C _ D A T E ( D A T E )                           ( ( ( D A T E )   > =   1 U )   & &   ( ( D A T E )   < =   3 1 U ) )  
 # d e f i n e   I S _ R T C _ A L A R M ( A L A R M )                       ( ( A L A R M )   = =   R T C _ A L A R M _ A )  
 # d e f i n e   I S _ R T C _ C A L I B _ O U T P U T ( _ _ O U T P U T _ _ )   ( ( ( _ _ O U T P U T _ _ )   = =   R T C _ O U T P U T S O U R C E _ N O N E )   | |   \  
                                                                                   ( ( _ _ O U T P U T _ _ )   = =   R T C _ O U T P U T S O U R C E _ C A L I B C L O C K )   | |   \  
                                                                                   ( ( _ _ O U T P U T _ _ )   = =   R T C _ O U T P U T S O U R C E _ A L A R M )   | |   \  
                                                                                   ( ( _ _ O U T P U T _ _ )   = =   R T C _ O U T P U T S O U R C E _ S E C O N D ) )  
  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   R T C _ P r i v a t e _ C o n s t a n t s  
     *   @ {  
     * /  
 / * *   @ d e f g r o u p   R T C _ T i m e o u t _ V a l u e   D e f a u l t   T i m e o u t   V a l u e  
     *   @ {  
     * /  
 # d e f i n e   R T C _ T I M E O U T _ V A L U E                       1 0 0 0 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ E X T I _ L i n e _ E v e n t   R T C   E X T I   L i n e   e v e n t  
     *   @ {  
     * /  
 # d e f i n e   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T       ( ( u i n t 3 2 _ t ) E X T I _ I M R _ M R 1 7 )     / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 7   C o n n e c t e d   t o   t h e   R T C   A l a r m   e v e n t   * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ T y p e s   R T C   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     R T C   T i m e   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 8 _ t   H o u r s ;                         / * ! <   S p e c i f i e s   t h e   R T C   T i m e   H o u r .  
                                                                   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   2 3   * /  
  
     u i n t 8 _ t   M i n u t e s ;                     / * ! <   S p e c i f i e s   t h e   R T C   T i m e   M i n u t e s .  
                                                                   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   5 9   * /  
  
     u i n t 8 _ t   S e c o n d s ;                     / * ! <   S p e c i f i e s   t h e   R T C   T i m e   S e c o n d s .  
                                                                   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   5 9   * /  
  
 }   R T C _ T i m e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     R T C   A l a r m   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     R T C _ T i m e T y p e D e f   A l a r m T i m e ;           / * ! <   S p e c i f i e s   t h e   R T C   A l a r m   T i m e   m e m b e r s   * /  
  
     u i n t 3 2 _ t   A l a r m ;                                 / * ! <   S p e c i f i e s   t h e   a l a r m   I D   ( o n l y   1   a l a r m   I D   f o r   S T M 3 2 F 1 ) .  
                                                                             T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   R T C _ A l a r m s _ D e f i n i t i o n s   * /  
 }   R T C _ A l a r m T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ R T C _ S T A T E _ R E S E T                           =   0 x 0 0 U ,     / * ! <   R T C   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d   * /  
     H A L _ R T C _ S T A T E _ R E A D Y                           =   0 x 0 1 U ,     / * ! <   R T C   i n i t i a l i z e d   a n d   r e a d y   f o r   u s e       * /  
     H A L _ R T C _ S T A T E _ B U S Y                             =   0 x 0 2 U ,     / * ! <   R T C   p r o c e s s   i s   o n g o i n g                             * /  
     H A L _ R T C _ S T A T E _ T I M E O U T                       =   0 x 0 3 U ,     / * ! <   R T C   t i m e o u t   s t a t e                                       * /  
     H A L _ R T C _ S T A T E _ E R R O R                           =   0 x 0 4 U       / * ! <   R T C   e r r o r   s t a t e                                           * /  
  
 }   H A L _ R T C S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     R T C   C o n f i g u r a t i o n   S t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   A s y n c h P r e d i v ;         / * ! <   S p e c i f i e s   t h e   R T C   A s y n c h r o n o u s   P r e d i v i d e r   v a l u e .  
                                                                   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0 x 0 0   a n d   M a x _ D a t a   =   0 x F F F F F     o r   R T C _ A U T O _ 1 _ S E C O N D  
                                                                   I f   R T C _ A U T O _ 1 _ S E C O N D   i s   s e l e c t e d ,   A s y n c h P r e d i v   w i l l   b e   s e t   a u t o m a t i c a l l y   t o   g e t   1 s e c   t i m e b a s e   * /  
  
     u i n t 3 2 _ t   O u t P u t ;                     / * ! <   S p e c i f i e s   w h i c h   s i g n a l   w i l l   b e   r o u t e d   t o   t h e   R T C   T a m p e r   p i n .  
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   R T C _ o u t p u t _ s o u r c e _ t o _ o u t p u t _ o n _ t h e _ T a m p e r _ p i n   * /  
  
 }   R T C _ I n i t T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     R T C   D a t e   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   s t r u c t  
 {  
     u i n t 8 _ t   W e e k D a y ;     / * ! <   S p e c i f i e s   t h e   R T C   D a t e   W e e k D a y   ( n o t   n e c e s s a r y   f o r   H A L _ R T C _ S e t D a t e ) .  
                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   R T C _ W e e k D a y _ D e f i n i t i o n s   * /  
  
     u i n t 8 _ t   M o n t h ;         / * ! <   S p e c i f i e s   t h e   R T C   D a t e   M o n t h   ( i n   B C D   f o r m a t ) .  
                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   R T C _ M o n t h _ D a t e _ D e f i n i t i o n s   * /  
  
     u i n t 8 _ t   D a t e ;           / * ! <   S p e c i f i e s   t h e   R T C   D a t e .  
                                                   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   1   a n d   M a x _ D a t a   =   3 1   * /  
  
     u i n t 8 _ t   Y e a r ;           / * ! <   S p e c i f i e s   t h e   R T C   D a t e   Y e a r .  
                                                   T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   M i n _ D a t a   =   0   a n d   M a x _ D a t a   =   9 9   * /  
  
 }   R T C _ D a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     T i m e   H a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 t y p e d e f   s t r u c t   _ _ R T C _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S )   * /  
 {  
     R T C _ T y p e D e f                                   * I n s t a n c e ;     / * ! <   R e g i s t e r   b a s e   a d d r e s s         * /  
  
     R T C _ I n i t T y p e D e f                           I n i t ;               / * ! <   R T C   r e q u i r e d   p a r a m e t e r s     * /  
  
     R T C _ D a t e T y p e D e f                           D a t e T o U p d a t e ;               / * ! <   C u r r e n t   d a t e   s e t   b y   u s e r   a n d   u p d a t e d   a u t o m a t i c a l l y     * /  
  
     H A L _ L o c k T y p e D e f                           L o c k ;               / * ! <   R T C   l o c k i n g   o b j e c t               * /  
  
     _ _ I O   H A L _ R T C S t a t e T y p e D e f         S t a t e ;             / * ! <   T i m e   c o m m u n i c a t i o n   s t a t e   * /  
  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   A l a r m A E v e n t C a l l b a c k ) ( s t r u c t   _ _ R T C _ H a n d l e T y p e D e f   * h r t c ) ;                       / * ! <   R T C   A l a r m   A   E v e n t   c a l l b a c k                   * /  
  
     v o i d   ( *   T a m p e r 1 E v e n t C a l l b a c k ) ( s t r u c t   _ _ R T C _ H a n d l e T y p e D e f   * h r t c ) ;                     / * ! <   R T C   T a m p e r   1   E v e n t   c a l l b a c k                 * /  
  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ R T C _ H a n d l e T y p e D e f   * h r t c ) ;                               / * ! <   R T C   M s p   I n i t   c a l l b a c k                             * /  
  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ R T C _ H a n d l e T y p e D e f   * h r t c ) ;                           / * ! <   R T C   M s p   D e I n i t   c a l l b a c k                         * /  
  
 # e n d i f   / *   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S )   * /  
  
 }   R T C _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   R T C   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ R T C _ A L A R M _ A _ E V E N T _ C B _ I D                       =   0 x 0 0 u ,         / * ! <   R T C   A l a r m   A   E v e n t   C a l l b a c k   I D               * /  
     H A L _ R T C _ T A M P E R 1 _ E V E N T _ C B _ I D                       =   0 x 0 4 u ,         / * ! <   R T C   T a m p e r   1   C a l l b a c k   I D                         * /  
     H A L _ R T C _ M S P I N I T _ C B _ I D                                   =   0 x 0 E u ,         / * ! <   R T C   M s p   I n i t   c a l l b a c k   I D                         * /  
     H A L _ R T C _ M S P D E I N I T _ C B _ I D                               =   0 x 0 F u           / * ! <   R T C   M s p   D e I n i t   c a l l b a c k   I D                     * /  
 }   H A L _ R T C _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   R T C   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f     v o i d   ( * p R T C _ C a l l b a c k T y p e D e f ) ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;     / * ! <   p o i n t e r   t o   a n   R T C   c a l l b a c k   f u n c t i o n   * /  
 # e n d i f   / *   U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ C o n s t a n t s   R T C   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ A u t o m a t i c _ P r e d i v _ 1 _ S e c o n d   A u t o m a t i c   c a l c u l a t i o n   o f   p r e d i v   f o r   1 s e c   t i m e b a s e  
     *   @ {  
     * /  
 # d e f i n e   R T C _ A U T O _ 1 _ S E C O N D                                             0 x F F F F F F F F U  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ I n p u t _ p a r a m e t e r _ f o r m a t _ d e f i n i t i o n s   I n p u t   P a r a m e t e r   F o r m a t  
     *   @ {  
     * /  
 # d e f i n e   R T C _ F O R M A T _ B I N                                                   0 x 0 0 0 0 0 0 0 0 0 U  
 # d e f i n e   R T C _ F O R M A T _ B C D                                                   0 x 0 0 0 0 0 0 0 0 1 U  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ M o n t h _ D a t e _ D e f i n i t i o n s   M o n t h   D e f i n i t i o n s  
     *   @ {  
     * /  
  
 / *   C o d e d   i n   B C D   f o r m a t   * /  
 # d e f i n e   R T C _ M O N T H _ J A N U A R Y                             ( ( u i n t 8 _ t ) 0 x 0 1 )  
 # d e f i n e   R T C _ M O N T H _ F E B R U A R Y                           ( ( u i n t 8 _ t ) 0 x 0 2 )  
 # d e f i n e   R T C _ M O N T H _ M A R C H                                 ( ( u i n t 8 _ t ) 0 x 0 3 )  
 # d e f i n e   R T C _ M O N T H _ A P R I L                                 ( ( u i n t 8 _ t ) 0 x 0 4 )  
 # d e f i n e   R T C _ M O N T H _ M A Y                                     ( ( u i n t 8 _ t ) 0 x 0 5 )  
 # d e f i n e   R T C _ M O N T H _ J U N E                                   ( ( u i n t 8 _ t ) 0 x 0 6 )  
 # d e f i n e   R T C _ M O N T H _ J U L Y                                   ( ( u i n t 8 _ t ) 0 x 0 7 )  
 # d e f i n e   R T C _ M O N T H _ A U G U S T                               ( ( u i n t 8 _ t ) 0 x 0 8 )  
 # d e f i n e   R T C _ M O N T H _ S E P T E M B E R                         ( ( u i n t 8 _ t ) 0 x 0 9 )  
 # d e f i n e   R T C _ M O N T H _ O C T O B E R                             ( ( u i n t 8 _ t ) 0 x 1 0 )  
 # d e f i n e   R T C _ M O N T H _ N O V E M B E R                           ( ( u i n t 8 _ t ) 0 x 1 1 )  
 # d e f i n e   R T C _ M O N T H _ D E C E M B E R                           ( ( u i n t 8 _ t ) 0 x 1 2 )  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ W e e k D a y _ D e f i n i t i o n s   W e e k D a y   D e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   R T C _ W E E K D A Y _ M O N D A Y                           ( ( u i n t 8 _ t ) 0 x 0 1 )  
 # d e f i n e   R T C _ W E E K D A Y _ T U E S D A Y                         ( ( u i n t 8 _ t ) 0 x 0 2 )  
 # d e f i n e   R T C _ W E E K D A Y _ W E D N E S D A Y                     ( ( u i n t 8 _ t ) 0 x 0 3 )  
 # d e f i n e   R T C _ W E E K D A Y _ T H U R S D A Y                       ( ( u i n t 8 _ t ) 0 x 0 4 )  
 # d e f i n e   R T C _ W E E K D A Y _ F R I D A Y                           ( ( u i n t 8 _ t ) 0 x 0 5 )  
 # d e f i n e   R T C _ W E E K D A Y _ S A T U R D A Y                       ( ( u i n t 8 _ t ) 0 x 0 6 )  
 # d e f i n e   R T C _ W E E K D A Y _ S U N D A Y                           ( ( u i n t 8 _ t ) 0 x 0 0 )  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ A l a r m s _ D e f i n i t i o n s   A l a r m s   D e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   R T C _ A L A R M _ A                                                 0 U                                                                   / * ! <   S p e c i f y   a l a r m   I D   ( m a i n l y   f o r   l e g a c y   p u r p o s e s )   * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / * *   @ d e f g r o u p   R T C _ o u t p u t _ s o u r c e _ t o _ o u t p u t _ o n _ t h e _ T a m p e r _ p i n   O u t p u t   s o u r c e   t o   o u t p u t   o n   t h e   T a m p e r   p i n  
     *   @ {  
     * /  
  
 # d e f i n e   R T C _ O U T P U T S O U R C E _ N O N E                               0 x 0 0 0 0 0 0 0 0 U                                               / * ! <   N o   o u t p u t   o n   t h e   T A M P E R   p i n     * /  
 # d e f i n e   R T C _ O U T P U T S O U R C E _ C A L I B C L O C K                   B K P _ R T C C R _ C C O                                           / * ! <   R T C   c l o c k   w i t h   a   f r e q u e n c y   d i v i d e d   b y   6 4   o n   t h e   T A M P E R   p i n     * /  
 # d e f i n e   R T C _ O U T P U T S O U R C E _ A L A R M                             B K P _ R T C C R _ A S O E                                         / * ! <   A l a r m   p u l s e   s i g n a l   o n   t h e   T A M P E R   p i n     * /  
 # d e f i n e   R T C _ O U T P U T S O U R C E _ S E C O N D                           ( B K P _ R T C C R _ A S O S   |   B K P _ R T C C R _ A S O E )   / * ! <   S e c o n d   p u l s e   s i g n a l   o n   t h e   T A M P E R   p i n     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ I n t e r r u p t s _ D e f i n i t i o n s   I n t e r r u p t s   D e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   R T C _ I T _ O W                         R T C _ C R H _ O W I E               / * ! <   O v e r f l o w   i n t e r r u p t   * /  
 # d e f i n e   R T C _ I T _ A L R A                     R T C _ C R H _ A L R I E             / * ! <   A l a r m   i n t e r r u p t   * /  
 # d e f i n e   R T C _ I T _ S E C                       R T C _ C R H _ S E C I E             / * ! <   S e c o n d   i n t e r r u p t   * /  
 # d e f i n e   R T C _ I T _ T A M P 1                   B K P _ C S R _ T P I E               / * ! <   T A M P E R   P i n   i n t e r r u p t   e n a b l e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C _ F l a g s _ D e f i n i t i o n s   F l a g s   D e f i n i t i o n s  
     *   @ {  
     * /  
 # d e f i n e   R T C _ F L A G _ R T O F F               R T C _ C R L _ R T O F F             / * ! <   R T C   O p e r a t i o n   O F F   f l a g   * /  
 # d e f i n e   R T C _ F L A G _ R S F                   R T C _ C R L _ R S F                 / * ! <   R e g i s t e r s   S y n c h r o n i z e d   f l a g   * /  
 # d e f i n e   R T C _ F L A G _ O W                     R T C _ C R L _ O W F                 / * ! <   O v e r f l o w   f l a g   * /  
 # d e f i n e   R T C _ F L A G _ A L R A F               R T C _ C R L _ A L R F               / * ! <   A l a r m   f l a g   * /  
 # d e f i n e   R T C _ F L A G _ S E C                   R T C _ C R L _ S E C F               / * ! <   S e c o n d   f l a g   * /  
 # d e f i n e   R T C _ F L A G _ T A M P 1 F             B K P _ C S R _ T E F                 / * ! <   T a m p e r   I n t e r r u p t   F l a g   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C _ E x p o r t e d _ m a c r o s   R T C   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f     R e s e t   R T C   h a n d l e   s t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _ :   R T C   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ R T C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   d o { \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ R T C _ S T A T E _ R E S E T ; \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ; \  
                                                                                                             ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ; \  
                                                                                                           } w h i l e ( 0 u )  
 # e l s e  
 # d e f i n e   _ _ H A L _ R T C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ R T C _ S T A T E _ R E S E T )  
 # e n d i f   / *   U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ D I S A B L E ( _ _ H A N D L E _ _ )                   S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L ,   R T C _ C R L _ C N F )  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ E N A B L E ( _ _ H A N D L E _ _ )                     C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L ,   R T C _ C R L _ C N F )  
  
 / * *  
     *   @ b r i e f     E n a b l e   t h e   R T C   A l a r m   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   A l a r m   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ A L R A :   A l a r m   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )     S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     D i s a b l e   t h e   R T C   A l a r m   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   A l a r m   i n t e r r u p t   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   R T C _ I T _ A L R A :   A l a r m   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   R T C   A l a r m   i n t e r r u p t   h a s   b e e n   e n a b l e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   A l a r m   i n t e r r u p t   s o u r c e s   t o   b e   c h e c k e d  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ I T _ A L R A :   A l a r m   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )           ( ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R H ) &   ( ( _ _ I N T E R R U P T _ _ ) ) ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     G e t   t h e   s e l e c t e d   R T C   A l a r m ' s   f l a g   s t a t u s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   A l a r m   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ A L R A F  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                 ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L )   &   ( _ _ F L A G _ _ ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     C h e c k   w h e t h e r   t h e   s p e c i f i e d   R T C   A l a r m   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   R T C   A l a r m   i n t e r r u p t   s o u r c e s   t o   c h e c k .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ I T _ A L R A :   A l a r m   A   i n t e r r u p t  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ G E T _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )                 ( ( ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L )   &   ( _ _ I N T E R R U P T _ _ ) )   ! =   R E S E T ) ?   S E T   :   R E S E T )  
  
 / * *  
     *   @ b r i e f     C l e a r   t h e   R T C   A l a r m ' s   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   R T C   h a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   R T C   A l a r m   F l a g   s o u r c e s   t o   b e   e n a b l e d   o r   d i s a b l e d .  
     *                   T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   R T C _ F L A G _ A L R A F  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )             ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C R L )   & =   ~ ( _ _ F L A G _ _ )  
  
 / * *  
     *   @ b r i e f   E n a b l e   i n t e r r u p t   o n   A L A R M   E x t i   L i n e   1 7 .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ I T ( )                                     S E T _ B I T ( E X T I - > I M R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
 / * *  
     *   @ b r i e f   D i s a b l e   i n t e r r u p t   o n   A L A R M   E x t i   L i n e   1 7 .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ I T ( )                                   C L E A R _ B I T ( E X T I - > I M R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
 / * *  
     *   @ b r i e f   E n a b l e   e v e n t   o n   A L A R M   E x t i   L i n e   1 7 .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ E V E N T ( )                               S E T _ B I T ( E X T I - > E M R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
 / * *  
     *   @ b r i e f   D i s a b l e   e v e n t   o n   A L A R M   E x t i   L i n e   1 7 .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ E V E N T ( )                             C L E A R _ B I T ( E X T I - > E M R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
  
 / * *  
     *   @ b r i e f     A L A R M   E X T I   l i n e   c o n f i g u r a t i o n :   s e t   f a l l i n g   e d g e   t r i g g e r .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )                 S E T _ B I T ( E X T I - > F T S R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
  
 / * *  
     *   @ b r i e f   D i s a b l e   t h e   A L A R M   E x t e n d e d   I n t e r r u p t   F a l l i n g   T r i g g e r .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )               C L E A R _ B I T ( E X T I - > F T S R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
  
 / * *  
     *   @ b r i e f     A L A R M   E X T I   l i n e   c o n f i g u r a t i o n :   s e t   r i s i n g   e d g e   t r i g g e r .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )                   S E T _ B I T ( E X T I - > R T S R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
 / * *  
     *   @ b r i e f   D i s a b l e   t h e   A L A R M   E x t e n d e d   I n t e r r u p t   R i s i n g   T r i g g e r .  
     *   T h i s   p a r a m e t e r   c a n   b e :  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )                 C L E A R _ B I T ( E X T I - > R T S R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
  
 / * *  
     *   @ b r i e f     A L A R M   E X T I   l i n e   c o n f i g u r a t i o n :   s e t   r i s i n g   &   f a l l i n g   e d g e   t r i g g e r .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ R I S I N G _ F A L L I N G _ E D G E ( )             \  
 d o {                                                                                                                         \  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ;                                   \  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ;                                 \  
     }   w h i l e ( 0 U )  
  
 / * *  
     *   @ b r i e f   D i s a b l e   t h e   A L A R M   E x t e n d e d   I n t e r r u p t   R i s i n g   &   F a l l i n g   T r i g g e r .  
     *   T h i s   p a r a m e t e r   c a n   b e :  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ R I S I N G _ F A L L I N G _ E D G E ( )             \  
 d o {                                                                                                                           \  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ;                                   \  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ;                                 \  
     }   w h i l e ( 0 U )  
  
 / * *  
     *   @ b r i e f   C h e c k   w h e t h e r   t h e   s p e c i f i e d   A L A R M   E X T I   i n t e r r u p t   f l a g   i s   s e t   o r   n o t .  
     *   @ r e t v a l   E X T I   A L A R M   L i n e   S t a t u s .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ G E T _ F L A G ( )                                       ( E X T I - > P R   &   ( R T C _ E X T I _ L I N E _ A L A R M _ E V E N T ) )  
  
 / * *  
     *   @ b r i e f   C l e a r   t h e   A L A R M   E X T I   f l a g .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ C L E A R _ F L A G ( )                                   ( E X T I - > P R   =   ( R T C _ E X T I _ L I N E _ A L A R M _ E V E N T ) )  
  
 / * *  
     *   @ b r i e f   G e n e r a t e   a   S o f t w a r e   i n t e r r u p t   o n   s e l e c t e d   E X T I   l i n e .  
     *   @ r e t v a l   N o n e .  
     * /  
 # d e f i n e   _ _ H A L _ R T C _ A L A R M _ E X T I _ G E N E R A T E _ S W I T ( )                             S E T _ B I T ( E X T I - > S W I E R ,   R T C _ E X T I _ L I N E _ A L A R M _ E V E N T )  
 / * *  
     *   @ }  
     * /  
  
 / *   I n c l u d e   R T C   H A L   E x t e n s i o n   m o d u l e   * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ r t c _ e x . h "  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
  
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ D e I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 v o i d                             H A L _ R T C _ M s p I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 v o i d                             H A L _ R T C _ M s p D e I n i t ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
  
 / *   C a l l b a c k s   R e g i s t e r / U n R e g i s t e r   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ R e g i s t e r C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ,   H A L _ R T C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p R T C _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ U n R e g i s t e r C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ,   H A L _ R T C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
 # e n d i f   / *   U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   R T C   T i m e   a n d   D a t e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t T i m e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T i m e T y p e D e f   * s T i m e ,   u i n t 3 2 _ t   F o r m a t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ G e t T i m e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T i m e T y p e D e f   * s T i m e ,   u i n t 3 2 _ t   F o r m a t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t D a t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ D a t e T y p e D e f   * s D a t e ,   u i n t 3 2 _ t   F o r m a t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ G e t D a t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ D a t e T y p e D e f   * s D a t e ,   u i n t 3 2 _ t   F o r m a t ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   R T C   A l a r m   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t A l a r m ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ A l a r m T y p e D e f   * s A l a r m ,   u i n t 3 2 _ t   F o r m a t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ S e t A l a r m _ I T ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ A l a r m T y p e D e f   * s A l a r m ,   u i n t 3 2 _ t   F o r m a t ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ D e a c t i v a t e A l a r m ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   A l a r m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ G e t A l a r m ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ A l a r m T y p e D e f   * s A l a r m ,   u i n t 3 2 _ t   A l a r m ,   u i n t 3 2 _ t   F o r m a t ) ;  
 v o i d                             H A L _ R T C _ A l a r m I R Q H a n d l e r ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C _ P o l l F o r A l a r m A E v e n t ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 v o i d                             H A L _ R T C _ A l a r m A E v e n t C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   P e r i p h e r a l   S t a t e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4  
     *   @ {  
     * /  
 H A L _ R T C S t a t e T y p e D e f   H A L _ R T C _ G e t S t a t e ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   R T C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f       H A L _ R T C _ W a i t F o r S y n c h r o ( R T C _ H a n d l e T y p e D e f   * h r t c ) ;  
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
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ R T C _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  