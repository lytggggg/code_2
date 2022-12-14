??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ p c d . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   P C D   H A L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ P C D _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ P C D _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ u s b . h "  
  
 # i f   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   P C D  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ T y p e s   P C D   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P C D   S t a t e   s t r u c t u r e   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ P C D _ S T A T E _ R E S E T       =   0 x 0 0 ,  
     H A L _ P C D _ S T A T E _ R E A D Y       =   0 x 0 1 ,  
     H A L _ P C D _ S T A T E _ E R R O R       =   0 x 0 2 ,  
     H A L _ P C D _ S T A T E _ B U S Y         =   0 x 0 3 ,  
     H A L _ P C D _ S T A T E _ T I M E O U T   =   0 x 0 4  
 }   P C D _ S t a t e T y p e D e f ;  
  
 / *   D e v i c e   L P M   s u s p e n d   s t a t e   * /  
 t y p e d e f   e n u m  
 {  
     L P M _ L 0   =   0 x 0 0 ,   / *   o n   * /  
     L P M _ L 1   =   0 x 0 1 ,   / *   L P M   L 1   s l e e p   * /  
     L P M _ L 2   =   0 x 0 2 ,   / *   s u s p e n d   * /  
     L P M _ L 3   =   0 x 0 3 ,   / *   o f f   * /  
 }   P C D _ L P M _ S t a t e T y p e D e f ;  
  
 t y p e d e f   e n u m  
 {  
     P C D _ L P M _ L 0 _ A C T I V E   =   0 x 0 0 ,   / *   o n   * /  
     P C D _ L P M _ L 1 _ A C T I V E   =   0 x 0 1 ,   / *   L P M   L 1   s l e e p   * /  
 }   P C D _ L P M _ M s g T y p e D e f ;  
  
 t y p e d e f   e n u m  
 {  
     P C D _ B C D _ E R R O R                                           =   0 x F F ,  
     P C D _ B C D _ C O N T A C T _ D E T E C T I O N                   =   0 x F E ,  
     P C D _ B C D _ S T D _ D O W N S T R E A M _ P O R T               =   0 x F D ,  
     P C D _ B C D _ C H A R G I N G _ D O W N S T R E A M _ P O R T     =   0 x F C ,  
     P C D _ B C D _ D E D I C A T E D _ C H A R G I N G _ P O R T       =   0 x F B ,  
     P C D _ B C D _ D I S C O V E R Y _ C O M P L E T E D               =   0 x 0 0 ,  
  
 }   P C D _ B C D _ M s g T y p e D e f ;  
  
 # i f   d e f i n e d   ( U S B )  
  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 t y p e d e f   U S B _ O T G _ G l o b a l T y p e D e f     P C D _ T y p e D e f ;  
 t y p e d e f   U S B _ O T G _ C f g T y p e D e f           P C D _ I n i t T y p e D e f ;  
 t y p e d e f   U S B _ O T G _ E P T y p e D e f             P C D _ E P T y p e D e f ;  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
 # i f   d e f i n e d   ( U S B )  
 t y p e d e f   U S B _ T y p e D e f                 P C D _ T y p e D e f ;  
 t y p e d e f   U S B _ C f g T y p e D e f           P C D _ I n i t T y p e D e f ;  
 t y p e d e f   U S B _ E P T y p e D e f             P C D _ E P T y p e D e f ;  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
 / * *  
     *   @ b r i e f     P C D   H a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 t y p e d e f   s t r u c t   _ _ P C D _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
 {  
     P C D _ T y p e D e f                           * I n s t a n c e ;       / * ! <   R e g i s t e r   b a s e   a d d r e s s                           * /  
     P C D _ I n i t T y p e D e f                   I n i t ;                 / * ! <   P C D   r e q u i r e d   p a r a m e t e r s                       * /  
     _ _ I O   u i n t 8 _ t                         U S B _ A d d r e s s ;   / * ! <   U S B   A d d r e s s                                               * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
     P C D _ E P T y p e D e f                       I N _ e p [ 1 6 ] ;       / * ! <   I N   e n d p o i n t   p a r a m e t e r s                         * /  
     P C D _ E P T y p e D e f                       O U T _ e p [ 1 6 ] ;     / * ! <   O U T   e n d p o i n t   p a r a m e t e r s                       * /  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
 # i f   d e f i n e d   ( U S B )  
     P C D _ E P T y p e D e f                       I N _ e p [ 8 ] ;       / * ! <   I N   e n d p o i n t   p a r a m e t e r s                           * /  
     P C D _ E P T y p e D e f                       O U T _ e p [ 8 ] ;     / * ! <   O U T   e n d p o i n t   p a r a m e t e r s                         * /  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
     H A L _ L o c k T y p e D e f                   L o c k ;                 / * ! <   P C D   p e r i p h e r a l   s t a t u s                           * /  
     _ _ I O   P C D _ S t a t e T y p e D e f       S t a t e ;               / * ! <   P C D   c o m m u n i c a t i o n   s t a t e                       * /  
     _ _ I O     u i n t 3 2 _ t                     E r r o r C o d e ;       / * ! <   P C D   E r r o r   c o d e                                         * /  
     u i n t 3 2 _ t                                 S e t u p [ 1 2 ] ;       / * ! <   S e t u p   p a c k e t   b u f f e r                               * /  
     P C D _ L P M _ S t a t e T y p e D e f         L P M _ S t a t e ;       / * ! <   L P M   S t a t e                                                   * /  
     u i n t 3 2 _ t                                 B E S L ;  
  
     v o i d                                         * p D a t a ;             / * ! <   P o i n t e r   t o   u p p e r   s t a c k   H a n d l e r   * /  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     v o i d   ( *   S O F C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                             / * ! <   U S B   O T G   P C D   S O F   c a l l b a c k                                 * /  
     v o i d   ( *   S e t u p S t a g e C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                               / * ! <   U S B   O T G   P C D   S e t u p   S t a g e   c a l l b a c k                 * /  
     v o i d   ( *   R e s e t C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                         / * ! <   U S B   O T G   P C D   R e s e t   c a l l b a c k                             * /  
     v o i d   ( *   S u s p e n d C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                     / * ! <   U S B   O T G   P C D   S u s p e n d   c a l l b a c k                         * /  
     v o i d   ( *   R e s u m e C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                       / * ! <   U S B   O T G   P C D   R e s u m e   c a l l b a c k                           * /  
     v o i d   ( *   C o n n e c t C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                     / * ! <   U S B   O T G   P C D   C o n n e c t   c a l l b a c k                         * /  
     v o i d   ( *   D i s c o n n e c t C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                               / * ! <   U S B   O T G   P C D   D i s c o n n e c t   c a l l b a c k                   * /  
  
     v o i d   ( *   D a t a O u t S t a g e C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;             / * ! <   U S B   O T G   P C D   D a t a   O U T   S t a g e   c a l l b a c k           * /  
     v o i d   ( *   D a t a I n S t a g e C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;               / * ! <   U S B   O T G   P C D   D a t a   I N   S t a g e   c a l l b a c k             * /  
     v o i d   ( *   I S O O U T I n c o m p l e t e C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;     / * ! <   U S B   O T G   P C D   I S O   O U T   I n c o m p l e t e   c a l l b a c k   * /  
     v o i d   ( *   I S O I N I n c o m p l e t e C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;       / * ! <   U S B   O T G   P C D   I S O   I N   I n c o m p l e t e   c a l l b a c k     * /  
  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                     / * ! <   U S B   O T G   P C D   M s p   I n i t   c a l l b a c k                       * /  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                 / * ! <   U S B   O T G   P C D   M s p   D e I n i t   c a l l b a c k                   * /  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
 }   P C D _ H a n d l e T y p e D e f ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   I n c l u d e   P C D   H A L   E x t e n d e d   m o d u l e   * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ p c d _ e x . h "  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ C o n s t a n t s   P C D   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ S p e e d   P C D   S p e e d  
     *   @ {  
     * /  
 # d e f i n e   P C D _ S P E E D _ F U L L                               U S B D _ F S _ S P E E D  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ P H Y _ M o d u l e   P C D   P H Y   M o d u l e  
     *   @ {  
     * /  
 # d e f i n e   P C D _ P H Y _ U L P I                                   1 U  
 # d e f i n e   P C D _ P H Y _ E M B E D D E D                           2 U  
 # d e f i n e   P C D _ P H Y _ U T M I                                   3 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ E r r o r _ C o d e _ d e f i n i t i o n   P C D   E r r o r   C o d e   d e f i n i t i o n  
     *   @ b r i e f     P C D   E r r o r   C o d e   d e f i n i t i o n  
     *   @ {  
     * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 # d e f i n e     H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K                                                 ( 0 x 0 0 0 0 0 0 1 0 U )         / * ! <   I n v a l i d   C a l l b a c k   e r r o r     * /  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ M a c r o s   P C D   E x p o r t e d   M a c r o s  
     *     @ b r i e f   m a c r o s   t o   h a n d l e   i n t e r r u p t s   a n d   s p e c i f i c   c l o c k   c o n f i g u r a t i o n s  
     *   @ {  
     * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 # d e f i n e   _ _ H A L _ P C D _ E N A B L E ( _ _ H A N D L E _ _ )                                               ( v o i d ) U S B _ E n a b l e G l o b a l I n t   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )  
 # d e f i n e   _ _ H A L _ P C D _ D I S A B L E ( _ _ H A N D L E _ _ )                                             ( v o i d ) U S B _ D i s a b l e G l o b a l I n t   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )  
  
 # d e f i n e   _ _ H A L _ P C D _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   \  
     ( ( U S B _ R e a d I n t e r r u p t s ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   &   ( _ _ I N T E R R U P T _ _ ) )   = =   ( _ _ I N T E R R U P T _ _ ) )  
  
 # d e f i n e   _ _ H A L _ P C D _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )         ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > G I N T S T S )   & =     ( _ _ I N T E R R U P T _ _ ) )  
 # d e f i n e   _ _ H A L _ P C D _ I S _ I N V A L I D _ I N T E R R U P T ( _ _ H A N D L E _ _ )                   ( U S B _ R e a d I n t e r r u p t s ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   0 U )  
  
 # d e f i n e   _ _ H A L _ P C D _ U N G A T E _ P H Y C L O C K ( _ _ H A N D L E _ _ )   \  
     * ( _ _ I O   u i n t 3 2 _ t   * ) ( ( u i n t 3 2 _ t ) ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   +   U S B _ O T G _ P C G C C T L _ B A S E )   & =   ~ ( U S B _ O T G _ P C G C C T L _ S T O P C L K )  
  
 # d e f i n e   _ _ H A L _ P C D _ G A T E _ P H Y C L O C K ( _ _ H A N D L E _ _ )   \  
     * ( _ _ I O   u i n t 3 2 _ t   * ) ( ( u i n t 3 2 _ t ) ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   +   U S B _ O T G _ P C G C C T L _ B A S E )   | =   U S B _ O T G _ P C G C C T L _ S T O P C L K  
  
 # d e f i n e   _ _ H A L _ P C D _ I S _ P H Y _ S U S P E N D E D ( _ _ H A N D L E _ _ )   \  
     ( ( * ( _ _ I O   u i n t 3 2 _ t   * ) ( ( u i n t 3 2 _ t ) ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   +   U S B _ O T G _ P C G C C T L _ B A S E ) )   &   0 x 1 0 U )  
  
 # d e f i n e   _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ E N A B L E _ I T ( )         E X T I - > I M R   | =   U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E  
 # d e f i n e   _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ D I S A B L E _ I T ( )       E X T I - > I M R   & =   ~ ( U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E )  
 # d e f i n e   _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ G E T _ F L A G ( )           E X T I - > P R   &   ( U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E )  
 # d e f i n e   _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ C L E A R _ F L A G ( )       E X T I - > P R   =   U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E  
  
 # d e f i n e   _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   \  
     d o   {   \  
         E X T I - > F T S R   & =   ~ ( U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E ) ;   \  
         E X T I - > R T S R   | =   U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E ;   \  
     }   w h i l e ( 0 U )  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f   d e f i n e d   ( U S B )  
 # d e f i n e   _ _ H A L _ P C D _ E N A B L E ( _ _ H A N D L E _ _ )                                                                     ( v o i d ) U S B _ E n a b l e G l o b a l I n t   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )  
 # d e f i n e   _ _ H A L _ P C D _ D I S A B L E ( _ _ H A N D L E _ _ )                                                                   ( v o i d ) U S B _ D i s a b l e G l o b a l I n t   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )  
 # d e f i n e   _ _ H A L _ P C D _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )                                   ( ( U S B _ R e a d I n t e r r u p t s ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e ) \  
                                                                                                                                                 &   ( _ _ I N T E R R U P T _ _ ) )   = =   ( _ _ I N T E R R U P T _ _ ) )  
  
 # d e f i n e   _ _ H A L _ P C D _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )                               ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > I S T R ) \  
                                                                                                                                               & =   ( u i n t 1 6 _ t ) ( ~ ( _ _ I N T E R R U P T _ _ ) ) )  
  
 # d e f i n e   _ _ H A L _ U S B _ W A K E U P _ E X T I _ E N A B L E _ I T ( )                                                           E X T I - > I M R   | =   U S B _ W A K E U P _ E X T I _ L I N E  
 # d e f i n e   _ _ H A L _ U S B _ W A K E U P _ E X T I _ D I S A B L E _ I T ( )                                                         E X T I - > I M R   & =   ~ ( U S B _ W A K E U P _ E X T I _ L I N E )  
 # d e f i n e   _ _ H A L _ U S B _ W A K E U P _ E X T I _ G E T _ F L A G ( )                                                             E X T I - > P R   &   ( U S B _ W A K E U P _ E X T I _ L I N E )  
 # d e f i n e   _ _ H A L _ U S B _ W A K E U P _ E X T I _ C L E A R _ F L A G ( )                                                         E X T I - > P R   =   U S B _ W A K E U P _ E X T I _ L I N E  
  
 # d e f i n e   _ _ H A L _ U S B _ W A K E U P _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )   \  
     d o   {   \  
         E X T I - > F T S R   & =   ~ ( U S B _ W A K E U P _ E X T I _ L I N E ) ;   \  
         E X T I - > R T S R   | =   U S B _ W A K E U P _ E X T I _ L I N E ;   \  
     }   w h i l e ( 0 U )  
  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s   P C D   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / *   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ M s p I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ M s p D e I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 / * *   @ d e f g r o u p   H A L _ P C D _ C a l l b a c k _ I D _ e n u m e r a t i o n _ d e f i n i t i o n   H A L   U S B   O T G   P C D   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     *   @ b r i e f     H A L   U S B   O T G   P C D   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     *   @ {  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ P C D _ S O F _ C B _ I D                     =   0 x 0 1 ,             / * ! <   U S B   P C D   S O F   c a l l b a c k   I D                     * /  
     H A L _ P C D _ S E T U P S T A G E _ C B _ I D       =   0 x 0 2 ,             / * ! <   U S B   P C D   S e t u p   S t a g e   c a l l b a c k   I D     * /  
     H A L _ P C D _ R E S E T _ C B _ I D                 =   0 x 0 3 ,             / * ! <   U S B   P C D   R e s e t   c a l l b a c k   I D                 * /  
     H A L _ P C D _ S U S P E N D _ C B _ I D             =   0 x 0 4 ,             / * ! <   U S B   P C D   S u s p e n d   c a l l b a c k   I D             * /  
     H A L _ P C D _ R E S U M E _ C B _ I D               =   0 x 0 5 ,             / * ! <   U S B   P C D   R e s u m e   c a l l b a c k   I D               * /  
     H A L _ P C D _ C O N N E C T _ C B _ I D             =   0 x 0 6 ,             / * ! <   U S B   P C D   C o n n e c t   c a l l b a c k   I D             * /  
     H A L _ P C D _ D I S C O N N E C T _ C B _ I D       =   0 x 0 7 ,             / * ! <   U S B   P C D   D i s c o n n e c t   c a l l b a c k   I D       * /  
  
     H A L _ P C D _ M S P I N I T _ C B _ I D             =   0 x 0 8 ,             / * ! <   U S B   P C D   M s p I n i t   c a l l b a c k   I D             * /  
     H A L _ P C D _ M S P D E I N I T _ C B _ I D         =   0 x 0 9               / * ! <   U S B   P C D   M s p D e I n i t   c a l l b a c k   I D         * /  
  
 }   H A L _ P C D _ C a l l b a c k I D T y p e D e f ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ P C D _ C a l l b a c k _ p o i n t e r _ d e f i n i t i o n   H A L   U S B   O T G   P C D   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     *   @ b r i e f     H A L   U S B   O T G   P C D   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     *   @ {  
     * /  
  
 t y p e d e f   v o i d   ( * p P C D _ C a l l b a c k T y p e D e f ) ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;                                                                       / * ! <   p o i n t e r   t o   a   c o m m o n   U S B   O T G   P C D   c a l l b a c k   f u n c t i o n     * /  
 t y p e d e f   v o i d   ( * p P C D _ D a t a O u t S t a g e C a l l b a c k T y p e D e f ) ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;                 / * ! <   p o i n t e r   t o   U S B   O T G   P C D   D a t a   O U T   S t a g e   c a l l b a c k           * /  
 t y p e d e f   v o i d   ( * p P C D _ D a t a I n S t a g e C a l l b a c k T y p e D e f ) ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;                   / * ! <   p o i n t e r   t o   U S B   O T G   P C D   D a t a   I N   S t a g e   c a l l b a c k             * /  
 t y p e d e f   v o i d   ( * p P C D _ I s o O u t I n c p l t C a l l b a c k T y p e D e f ) ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;                 / * ! <   p o i n t e r   t o   U S B   O T G   P C D   I S O   O U T   I n c o m p l e t e   c a l l b a c k   * /  
 t y p e d e f   v o i d   ( * p P C D _ I s o I n I n c p l t C a l l b a c k T y p e D e f ) ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;                   / * ! <   p o i n t e r   t o   U S B   O T G   P C D   I S O   I N   I n c o m p l e t e   c a l l b a c k     * /  
  
 / * *  
     *   @ }  
     * /  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                       H A L _ P C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                       p P C D _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                           H A L _ P C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r D a t a O u t S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                               p P C D _ D a t a O u t S t a g e C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r D a t a O u t S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r D a t a I n S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                             p P C D _ D a t a I n S t a g e C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r D a t a I n S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r I s o O u t I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                               p P C D _ I s o O u t I n c p l t C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r I s o O u t I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r I s o I n I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                             p P C D _ I s o I n I n c p l t C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r I s o I n I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   I / O   o p e r a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 / * *   @ a d d t o g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ S t a r t ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ S t o p ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ I R Q H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ W K U P _ I R Q H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 v o i d   H A L _ P C D _ S O F C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ S e t u p S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ R e s e t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ S u s p e n d C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ R e s u m e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ C o n n e c t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 v o i d   H A L _ P C D _ D i s c o n n e c t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 v o i d   H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;  
 v o i d   H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;  
 v o i d   H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;  
 v o i d   H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e v C o n n e c t ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e v D i s c o n n e c t ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ S e t A d d r e s s ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   a d d r e s s ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ O p e n ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ,  
                                                                     u i n t 1 6 _ t   e p _ m p s ,   u i n t 8 _ t   e p _ t y p e ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ C l o s e ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ R e c e i v e ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ,  
                                                                           u i n t 8 _ t   * p B u f ,   u i n t 3 2 _ t   l e n ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ T r a n s m i t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ,  
                                                                             u i n t 8 _ t   * p B u f ,   u i n t 3 2 _ t   l e n ) ;  
  
  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ S e t S t a l l ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ C l r S t a l l ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ F l u s h ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ A c t i v a t e R e m o t e W a k e u p ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e A c t i v a t e R e m o t e W a k e u p ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
  
 u i n t 3 2 _ t                     H A L _ P C D _ E P _ G e t R x C o u n t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   P e r i p h e r a l   S t a t e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *   @ {  
     * /  
 P C D _ S t a t e T y p e D e f   H A L _ P C D _ G e t S t a t e ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ P r i v a t e _ C o n s t a n t s   P C D   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 / * *   @ d e f g r o u p   U S B _ E X T I _ L i n e _ I n t e r r u p t   U S B   E X T I   l i n e   i n t e r r u p t  
     *   @ {  
     * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 # d e f i n e   U S B _ O T G _ F S _ W A K E U P _ E X T I _ L I N E                                                                       ( 0 x 1 U   < <   1 8 )     / * ! <   U S B   F S   E X T I   L i n e   W a k e U p   I n t e r r u p t   * /  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f   d e f i n e d   ( U S B )  
 # d e f i n e   U S B _ W A K E U P _ E X T I _ L I N E                                                                                     ( 0 x 1 U   < <   1 8 )     / * ! <   U S B   F S   E X T I   L i n e   W a k e U p   I n t e r r u p t   * /  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
 / * *  
     *   @ }  
     * /  
 # i f   d e f i n e d   ( U S B )  
 / * *   @ d e f g r o u p   P C D _ E P 0 _ M P S   P C D   E P 0   M P S  
     *   @ {  
     * /  
 # d e f i n e   P C D _ E P 0 M P S _ 6 4                                                                                                   E P _ M P S _ 6 4  
 # d e f i n e   P C D _ E P 0 M P S _ 3 2                                                                                                   E P _ M P S _ 3 2  
 # d e f i n e   P C D _ E P 0 M P S _ 1 6                                                                                                   E P _ M P S _ 1 6  
 # d e f i n e   P C D _ E P 0 M P S _ 0 8                                                                                                   E P _ M P S _ 8  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ E N D P   P C D   E N D P  
     *   @ {  
     * /  
 # d e f i n e   P C D _ E N D P 0                                                                                                           0 U  
 # d e f i n e   P C D _ E N D P 1                                                                                                           1 U  
 # d e f i n e   P C D _ E N D P 2                                                                                                           2 U  
 # d e f i n e   P C D _ E N D P 3                                                                                                           3 U  
 # d e f i n e   P C D _ E N D P 4                                                                                                           4 U  
 # d e f i n e   P C D _ E N D P 5                                                                                                           5 U  
 # d e f i n e   P C D _ E N D P 6                                                                                                           6 U  
 # d e f i n e   P C D _ E N D P 7                                                                                                           7 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ E N D P _ K i n d   P C D   E n d p o i n t   K i n d  
     *   @ {  
     * /  
 # d e f i n e   P C D _ S N G _ B U F                                                                                                       0 U  
 # d e f i n e   P C D _ D B L _ B U F                                                                                                       1 U  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
 / * *  
     *   @ }  
     * /  
  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 # i f n d e f   U S B _ O T G _ D O E P I N T _ O T E P S P R  
 # d e f i n e   U S B _ O T G _ D O E P I N T _ O T E P S P R                                 ( 0 x 1 U L   < <   5 )             / * ! <   S t a t u s   P h a s e   R e c e i v e d   i n t e r r u p t   * /  
 # e n d i f   / *   d e f i n e d   U S B _ O T G _ D O E P I N T _ O T E P S P R   * /  
  
 # i f n d e f   U S B _ O T G _ D O E P M S K _ O T E P S P R M  
 # d e f i n e   U S B _ O T G _ D O E P M S K _ O T E P S P R M                               ( 0 x 1 U L   < <   5 )             / * ! <   S e t u p   P a c k e t   R e c e i v e d   i n t e r r u p t   m a s k   * /  
 # e n d i f   / *   d e f i n e d   U S B _ O T G _ D O E P M S K _ O T E P S P R M   * /  
  
 # i f n d e f   U S B _ O T G _ D O E P I N T _ N A K  
 # d e f i n e   U S B _ O T G _ D O E P I N T _ N A K                                         ( 0 x 1 U L   < <   1 3 )             / * ! <   N A K   i n t e r r u p t   * /  
 # e n d i f   / *   d e f i n e d   U S B _ O T G _ D O E P I N T _ N A K   * /  
  
 # i f n d e f   U S B _ O T G _ D O E P M S K _ N A K M  
 # d e f i n e   U S B _ O T G _ D O E P M S K _ N A K M                                       ( 0 x 1 U L   < <   1 3 )             / * ! <   O U T   P a c k e t   N A K   i n t e r r u p t   m a s k   * /  
 # e n d i f   / *   d e f i n e d   U S B _ O T G _ D O E P M S K _ N A K M   * /  
  
 # i f n d e f   U S B _ O T G _ D O E P I N T _ S T P K T R X  
 # d e f i n e   U S B _ O T G _ D O E P I N T _ S T P K T R X                                 ( 0 x 1 U L   < <   1 5 )             / * ! <   S e t u p   P a c k e t   R e c e i v e d   i n t e r r u p t   * /  
 # e n d i f   / *   d e f i n e d   U S B _ O T G _ D O E P I N T _ S T P K T R X   * /  
  
 # i f n d e f   U S B _ O T G _ D O E P M S K _ N Y E T M  
 # d e f i n e   U S B _ O T G _ D O E P M S K _ N Y E T M                                     ( 0 x 1 U L   < <   1 4 )             / * ! <   S e t u p   P a c k e t   R e c e i v e d   i n t e r r u p t   m a s k   * /  
 # e n d i f   / *   d e f i n e d   U S B _ O T G _ D O E P M S K _ N Y E T M   * /  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ P r i v a t e _ M a c r o s   P C D   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # i f   d e f i n e d   ( U S B )  
 / * * * * * * * * * * * * * * * * * * * *     B i t   d e f i n i t i o n   f o r   U S B _ C O U N T n _ R X   r e g i s t e r     * * * * * * * * * * * * * /  
 # d e f i n e   U S B _ C N T R X _ N B L K _ M S K                                         ( 0 x 1 F U   < <   1 0 )  
 # d e f i n e   U S B _ C N T R X _ B L S I Z E                                             ( 0 x 1 U   < <   1 5 )  
  
 / *   S e t E N D P O I N T   * /  
 # d e f i n e   P C D _ S E T _ E N D P O I N T ( U S B x ,   b E p N u m ,   w R e g V a l u e )     ( * ( _ _ I O   u i n t 1 6 _ t   * ) \  
                                                                                                         ( & ( U S B x ) - > E P 0 R   +   ( ( b E p N u m )   *   2 U ) )   =   ( u i n t 1 6 _ t ) ( w R e g V a l u e ) )  
  
 / *   G e t E N D P O I N T   * /  
 # d e f i n e   P C D _ G E T _ E N D P O I N T ( U S B x ,   b E p N u m )                           ( * ( _ _ I O   u i n t 1 6 _ t   * ) ( & ( U S B x ) - > E P 0 R   +   ( ( b E p N u m )   *   2 U ) ) )  
  
 / *   E N D P O I N T   t r a n s f e r   * /  
 # d e f i n e   U S B _ E P 0 S t a r t X f e r                                                       U S B _ E P S t a r t X f e r  
  
 / * *  
     *   @ b r i e f     s e t s   t h e   t y p e   i n   t h e   e n d p o i n t   r e g i s t e r ( b i t s   E P _ T Y P E [ 1 : 0 ] )  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w T y p e   E n d p o i n t   T y p e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P T Y P E ( U S B x ,   b E p N u m ,   w T y p e )   ( P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( ( P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ) \  
                                                                                                                             &   U S B _ E P _ T _ M A S K )   |   ( w T y p e )   |   U S B _ E P _ C T R _ T X   |   U S B _ E P _ C T R _ R X ) ) )  
  
  
 / * *  
     *   @ b r i e f     g e t s   t h e   t y p e   i n   t h e   e n d p o i n t   r e g i s t e r ( b i t s   E P _ T Y P E [ 1 : 0 ] )  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   E n d p o i n t   T y p e  
     * /  
 # d e f i n e   P C D _ G E T _ E P T Y P E ( U S B x ,   b E p N u m )   ( P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P _ T _ F I E L D )  
  
 / * *  
     *   @ b r i e f   f r e e   b u f f e r   u s e d   f r o m   t h e   a p p l i c a t i o n   r e a l i z i n g   i t   t o   t h e   l i n e  
     *                   t o g g l e s   b i t   S W _ B U F   i n   t h e   d o u b l e   b u f f e r e d   e n d p o i n t   r e g i s t e r  
     *   @ p a r a m   U S B x   U S B   d e v i c e .  
     *   @ p a r a m       b E p N u m ,   b D i r  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ F r e e U s e r B u f f e r ( U S B x ,   b E p N u m ,   b D i r )   \  
     d o   {   \  
         i f   ( ( b D i r )   = =   0 U )   \  
         {   \  
             / *   O U T   d o u b l e   b u f f e r e d   e n d p o i n t   * /   \  
             P C D _ T X _ D T O G ( ( U S B x ) ,   ( b E p N u m ) ) ;   \  
         }   \  
         e l s e   i f   ( ( b D i r )   = =   1 U )   \  
         {   \  
             / *   I N   d o u b l e   b u f f e r e d   e n d p o i n t   * /   \  
             P C D _ R X _ D T O G ( ( U S B x ) ,   ( b E p N u m ) ) ;   \  
         }   \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     s e t s   t h e   s t a t u s   f o r   t x   t r a n s f e r   ( b i t s   S T A T _ T X [ 1 : 0 ] ) .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w S t a t e   n e w   s t a t e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ T X _ S T A T U S ( U S B x ,   b E p N u m ,   w S t a t e )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P T X _ D T O G M A S K ;   \  
         / *   t o g g l e   f i r s t   b i t   ?   * /   \  
         i f   ( ( U S B _ E P T X _ D T O G 1   &   ( w S t a t e ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P T X _ D T O G 1 ;   \  
         }   \  
         / *   t o g g l e   s e c o n d   b i t   ?     * /   \  
         i f   ( ( U S B _ E P T X _ D T O G 2   &   ( w S t a t e ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P T X _ D T O G 2 ;   \  
         }   \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ T X _ S T A T U S   * /  
  
 / * *  
     *   @ b r i e f     s e t s   t h e   s t a t u s   f o r   r x   t r a n s f e r   ( b i t s   S T A T _ T X [ 1 : 0 ] )  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w S t a t e   n e w   s t a t e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ R X _ S T A T U S ( U S B x ,   b E p N u m , w S t a t e )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P R X _ D T O G M A S K ;   \  
         / *   t o g g l e   f i r s t   b i t   ?   * /   \  
         i f   ( ( U S B _ E P R X _ D T O G 1   &   ( w S t a t e ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P R X _ D T O G 1 ;   \  
         }   \  
         / *   t o g g l e   s e c o n d   b i t   ?   * /   \  
         i f   ( ( U S B _ E P R X _ D T O G 2   &   ( w S t a t e ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P R X _ D T O G 2 ;   \  
         }   \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ R X _ S T A T U S   * /  
  
 / * *  
     *   @ b r i e f     s e t s   t h e   s t a t u s   f o r   r x   &   t x   ( b i t s   S T A T _ T X [ 1 : 0 ]   &   S T A T _ R X [ 1 : 0 ] )  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w S t a t e r x   n e w   s t a t e .  
     *   @ p a r a m     w S t a t e t x   n e w   s t a t e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ T X R X _ S T A T U S ( U S B x ,   b E p N u m ,   w S t a t e r x ,   w S t a t e t x )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   ( U S B _ E P R X _ D T O G M A S K   |   U S B _ E P T X _ S T A T ) ;   \  
         / *   t o g g l e   f i r s t   b i t   ?   * /   \  
         i f   ( ( U S B _ E P R X _ D T O G 1   &   ( w S t a t e r x ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P R X _ D T O G 1 ;   \  
         }   \  
         / *   t o g g l e   s e c o n d   b i t   ?   * /   \  
         i f   ( ( U S B _ E P R X _ D T O G 2   &   ( w S t a t e r x ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P R X _ D T O G 2 ;   \  
         }   \  
         / *   t o g g l e   f i r s t   b i t   ?   * /   \  
         i f   ( ( U S B _ E P T X _ D T O G 1   &   ( w S t a t e t x ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P T X _ D T O G 1 ;   \  
         }   \  
         / *   t o g g l e   s e c o n d   b i t   ?     * /   \  
         i f   ( ( U S B _ E P T X _ D T O G 2   &   ( w S t a t e t x ) ) ! =   0 U )   \  
         {   \  
             _ w R e g V a l   ^ =   U S B _ E P T X _ D T O G 2 ;   \  
         }   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ T X R X _ S T A T U S   * /  
  
 / * *  
     *   @ b r i e f     g e t s   t h e   s t a t u s   f o r   t x / r x   t r a n s f e r   ( b i t s   S T A T _ T X [ 1 : 0 ]  
     *                   / S T A T _ R X [ 1 : 0 ] )  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   s t a t u s  
     * /  
 # d e f i n e   P C D _ G E T _ E P _ T X _ S T A T U S ( U S B x ,   b E p N u m )           ( ( u i n t 1 6 _ t ) P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P T X _ S T A T )  
 # d e f i n e   P C D _ G E T _ E P _ R X _ S T A T U S ( U S B x ,   b E p N u m )           ( ( u i n t 1 6 _ t ) P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P R X _ S T A T )  
  
 / * *  
     *   @ b r i e f     s e t s   d i r e c t l y   t h e   V A L I D   t x / r x - s t a t u s   i n t o   t h e   e n d p o i n t   r e g i s t e r  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ T X _ V A L I D ( U S B x ,   b E p N u m )             ( P C D _ S E T _ E P _ T X _ S T A T U S ( ( U S B x ) ,   ( b E p N u m ) ,   U S B _ E P _ T X _ V A L I D ) )  
 # d e f i n e   P C D _ S E T _ E P _ R X _ V A L I D ( U S B x ,   b E p N u m )             ( P C D _ S E T _ E P _ R X _ S T A T U S ( ( U S B x ) ,   ( b E p N u m ) ,   U S B _ E P _ R X _ V A L I D ) )  
  
 / * *  
     *   @ b r i e f     c h e c k s   s t a l l   c o n d i t i o n   i n   a n   e n d p o i n t .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   T R U E   =   e n d p o i n t   i n   s t a l l   c o n d i t i o n .  
     * /  
 # d e f i n e   P C D _ G E T _ E P _ T X _ S T A L L _ S T A T U S ( U S B x ,   b E p N u m )   ( P C D _ G E T _ E P _ T X _ S T A T U S ( ( U S B x ) ,   ( b E p N u m ) )   = =   U S B _ E P _ T X _ S T A L L )  
 # d e f i n e   P C D _ G E T _ E P _ R X _ S T A L L _ S T A T U S ( U S B x ,   b E p N u m )   ( P C D _ G E T _ E P _ R X _ S T A T U S ( ( U S B x ) ,   ( b E p N u m ) )   = =   U S B _ E P _ R X _ S T A L L )  
  
 / * *  
     *   @ b r i e f     s e t   &   c l e a r   E P _ K I N D   b i t .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ K I N D ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P R E G _ M A S K ;   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X   |   U S B _ E P _ K I N D ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ K I N D   * /  
  
 # d e f i n e   P C D _ C L E A R _ E P _ K I N D ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P K I N D _ M A S K ;   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ C L E A R _ E P _ K I N D   * /  
  
 / * *  
     *   @ b r i e f     S e t s / c l e a r s   d i r e c t l y   S T A T U S _ O U T   b i t   i n   t h e   e n d p o i n t   r e g i s t e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ O U T _ S T A T U S ( U S B x ,   b E p N u m )               P C D _ S E T _ E P _ K I N D ( ( U S B x ) ,   ( b E p N u m ) )  
 # d e f i n e   P C D _ C L E A R _ O U T _ S T A T U S ( U S B x ,   b E p N u m )           P C D _ C L E A R _ E P _ K I N D ( ( U S B x ) ,   ( b E p N u m ) )  
  
 / * *  
     *   @ b r i e f     S e t s / c l e a r s   d i r e c t l y   E P _ K I N D   b i t   i n   t h e   e n d p o i n t   r e g i s t e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ D B U F ( U S B x ,   b E p N u m )                     P C D _ S E T _ E P _ K I N D ( ( U S B x ) ,   ( b E p N u m ) )  
 # d e f i n e   P C D _ C L E A R _ E P _ D B U F ( U S B x ,   b E p N u m )                 P C D _ C L E A R _ E P _ K I N D ( ( U S B x ) ,   ( b E p N u m ) )  
  
 / * *  
     *   @ b r i e f     C l e a r s   b i t   C T R _ R X   /   C T R _ T X   i n   t h e   e n d p o i n t   r e g i s t e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ C L E A R _ R X _ E P _ C T R ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   ( 0 x 7 F F F U   &   U S B _ E P R E G _ M A S K ) ;   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ T X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ C L E A R _ R X _ E P _ C T R   * /  
  
 # d e f i n e   P C D _ C L E A R _ T X _ E P _ C T R ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   ( 0 x F F 7 F U   &   U S B _ E P R E G _ M A S K ) ;   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ R X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ C L E A R _ T X _ E P _ C T R   * /  
  
 / * *  
     *   @ b r i e f     T o g g l e s   D T O G _ R X   /   D T O G _ T X   b i t   i n   t h e   e n d p o i n t   r e g i s t e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ R X _ D T O G ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w E P V a l ;   \  
         \  
         _ w E P V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P R E G _ M A S K ;   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w E P V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X   |   U S B _ E P _ D T O G _ R X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ R X _ D T O G   * /  
  
 # d e f i n e   P C D _ T X _ D T O G ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w E P V a l ;   \  
         \  
         _ w E P V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P R E G _ M A S K ;   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w E P V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X   |   U S B _ E P _ D T O G _ T X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ T X _ D T O G   * /  
 / * *  
     *   @ b r i e f     C l e a r s   D T O G _ R X   /   D T O G _ T X   b i t   i n   t h e   e n d p o i n t   r e g i s t e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ C L E A R _ R X _ D T O G ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ) ;   \  
         \  
         i f   ( ( _ w R e g V a l   &   U S B _ E P _ D T O G _ R X )   ! =   0 U ) \  
         {   \  
             P C D _ R X _ D T O G ( ( U S B x ) ,   ( b E p N u m ) ) ;   \  
         }   \  
     }   w h i l e ( 0 )   / *   P C D _ C L E A R _ R X _ D T O G   * /  
  
 # d e f i n e   P C D _ C L E A R _ T X _ D T O G ( U S B x ,   b E p N u m )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ) ;   \  
         \  
         i f   ( ( _ w R e g V a l   &   U S B _ E P _ D T O G _ T X )   ! =   0 U ) \  
         {   \  
             P C D _ T X _ D T O G ( ( U S B x ) ,   ( b E p N u m ) ) ;   \  
         }   \  
     }   w h i l e ( 0 )   / *   P C D _ C L E A R _ T X _ D T O G   * /  
  
 / * *  
     *   @ b r i e f     S e t s   a d d r e s s   i n   a n   e n d p o i n t   r e g i s t e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     b A d d r   A d d r e s s .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ A D D R E S S ( U S B x ,   b E p N u m ,   b A d d r )   \  
     d o   {   \  
         u i n t 1 6 _ t   _ w R e g V a l ;   \  
         \  
         _ w R e g V a l   =   ( P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P R E G _ M A S K )   |   ( b A d d r ) ;   \  
         \  
         P C D _ S E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( _ w R e g V a l   |   U S B _ E P _ C T R _ R X   |   U S B _ E P _ C T R _ T X ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ A D D R E S S   * /  
  
 / * *  
     *   @ b r i e f     G e t s   a d d r e s s   i n   a n   e n d p o i n t   r e g i s t e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ G E T _ E P _ A D D R E S S ( U S B x ,   b E p N u m )   ( ( u i n t 8 _ t ) ( P C D _ G E T _ E N D P O I N T ( ( U S B x ) ,   ( b E p N u m ) )   &   U S B _ E P A D D R _ F I E L D ) )  
  
 # d e f i n e   P C D _ E P _ T X _ C N T ( U S B x ,   b E p N u m )   ( ( u i n t 1 6 _ t   * ) ( ( ( ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E \  
                                                                                                         +   ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   +   2 U )   *   P M A _ A C C E S S )   +   ( ( u i n t 3 2 _ t ) ( U S B x )   +   0 x 4 0 0 U ) ) )  
  
 # d e f i n e   P C D _ E P _ R X _ C N T ( U S B x ,   b E p N u m )   ( ( u i n t 1 6 _ t   * ) ( ( ( ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E \  
                                                                                                         +   ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   +   6 U )   *   P M A _ A C C E S S )   +   ( ( u i n t 3 2 _ t ) ( U S B x )   +   0 x 4 0 0 U ) ) )  
  
  
 / * *  
     *   @ b r i e f     s e t s   a d d r e s s   o f   t h e   t x / r x   b u f f e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w A d d r   a d d r e s s   t o   b e   s e t   ( m u s t   b e   w o r d   a l i g n e d ) .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ T X _ A D D R E S S ( U S B x ,   b E p N u m ,   w A d d r )   \  
     d o   {   \  
         _ _ I O   u i n t 1 6 _ t   * _ w R e g V a l ;   \  
         u i n t 3 2 _ t   _ w R e g B a s e   =   ( u i n t 3 2 _ t ) U S B x ;   \  
         \  
         _ w R e g B a s e   + =   ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E ;   \  
         _ w R e g V a l   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( _ w R e g B a s e   +   0 x 4 0 0 U   +   ( ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   *   P M A _ A C C E S S ) ) ;   \  
         * _ w R e g V a l   =   ( ( w A d d r )   > >   1 )   < <   1 ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ T X _ A D D R E S S   * /  
  
 # d e f i n e   P C D _ S E T _ E P _ R X _ A D D R E S S ( U S B x ,   b E p N u m ,   w A d d r )   \  
     d o   {   \  
         _ _ I O   u i n t 1 6 _ t   * _ w R e g V a l ;   \  
         u i n t 3 2 _ t   _ w R e g B a s e   =   ( u i n t 3 2 _ t ) U S B x ;   \  
         \  
         _ w R e g B a s e   + =   ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E ;   \  
         _ w R e g V a l   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( _ w R e g B a s e   +   0 x 4 0 0 U   +   ( ( ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   +   4 U )   *   P M A _ A C C E S S ) ) ;   \  
         * _ w R e g V a l   =   ( ( w A d d r )   > >   1 )   < <   1 ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ R X _ A D D R E S S   * /  
  
 / * *  
     *   @ b r i e f     G e t s   a d d r e s s   o f   t h e   t x / r x   b u f f e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   a d d r e s s   o f   t h e   b u f f e r .  
     * /  
 # d e f i n e   P C D _ G E T _ E P _ T X _ A D D R E S S ( U S B x ,   b E p N u m )   ( ( u i n t 1 6 _ t ) * P C D _ E P _ T X _ A D D R E S S ( ( U S B x ) ,   ( b E p N u m ) ) )  
 # d e f i n e   P C D _ G E T _ E P _ R X _ A D D R E S S ( U S B x ,   b E p N u m )   ( ( u i n t 1 6 _ t ) * P C D _ E P _ R X _ A D D R E S S ( ( U S B x ) ,   ( b E p N u m ) ) )  
  
 / * *  
     *   @ b r i e f     S e t s   c o u n t e r   o f   r x   b u f f e r   w i t h   n o .   o f   b l o c k s .  
     *   @ p a r a m     p d w R e g   R e g i s t e r   p o i n t e r  
     *   @ p a r a m     w C o u n t   C o u n t e r .  
     *   @ p a r a m     w N B l o c k s   n o .   o f   B l o c k s .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ C A L C _ B L K 3 2 ( p d w R e g ,   w C o u n t ,   w N B l o c k s )   \  
     d o   {   \  
         ( w N B l o c k s )   =   ( w C o u n t )   > >   5 ;   \  
         i f   ( ( ( w C o u n t )   &   0 x 1 f U )   = =   0 U )   \  
         {   \  
             ( w N B l o c k s ) - - ;   \  
         }   \  
         * ( p d w R e g )   =   ( u i n t 1 6 _ t ) ( ( ( w N B l o c k s )   < <   1 0 )   |   U S B _ C N T R X _ B L S I Z E ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ C A L C _ B L K 3 2   * /  
  
 # d e f i n e   P C D _ C A L C _ B L K 2 ( p d w R e g ,   w C o u n t ,   w N B l o c k s )   \  
     d o   {   \  
         ( w N B l o c k s )   =   ( w C o u n t )   > >   1 ;   \  
         i f   ( ( ( w C o u n t )   &   0 x 1 U )   ! =   0 U )   \  
         {   \  
             ( w N B l o c k s ) + + ;   \  
         }   \  
         * ( p d w R e g )   =   ( u i n t 1 6 _ t ) ( ( w N B l o c k s )   < <   1 0 ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ C A L C _ B L K 2   * /  
  
 # d e f i n e   P C D _ S E T _ E P _ C N T _ R X _ R E G ( p d w R e g ,   w C o u n t )   \  
     d o   {   \  
         u i n t 3 2 _ t   w N B l o c k s ;   \  
         i f   ( ( w C o u n t )   = =   0 U )   \  
         {   \  
             * ( p d w R e g )   & =   ( u i n t 1 6 _ t ) ~ U S B _ C N T R X _ N B L K _ M S K ;   \  
             * ( p d w R e g )   | =   U S B _ C N T R X _ B L S I Z E ;   \  
         }   \  
         e l s e   i f ( ( w C o u n t )   < =   6 2 U )   \  
         {   \  
             P C D _ C A L C _ B L K 2 ( ( p d w R e g ) ,   ( w C o u n t ) ,   w N B l o c k s ) ;   \  
         }   \  
         e l s e   \  
         {   \  
             P C D _ C A L C _ B L K 3 2 ( ( p d w R e g ) ,   ( w C o u n t ) ,   w N B l o c k s ) ;   \  
         }   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ C N T _ R X _ R E G   * /  
  
 # d e f i n e   P C D _ S E T _ E P _ R X _ D B U F 0 _ C N T ( U S B x ,   b E p N u m ,   w C o u n t )   \  
     d o   {   \  
         u i n t 3 2 _ t   _ w R e g B a s e   =   ( u i n t 3 2 _ t ) ( U S B x ) ;   \  
         _ _ I O   u i n t 1 6 _ t   * p d w R e g ;   \  
         \  
         _ w R e g B a s e   + =   ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E ;   \  
         p d w R e g   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( _ w R e g B a s e   +   0 x 4 0 0 U   +   ( ( ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   +   2 U )   *   P M A _ A C C E S S ) ) ;   \  
         P C D _ S E T _ E P _ C N T _ R X _ R E G ( p d w R e g ,   ( w C o u n t ) ) ;   \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     s e t s   c o u n t e r   f o r   t h e   t x / r x   b u f f e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w C o u n t   C o u n t e r   v a l u e .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ T X _ C N T ( U S B x ,   b E p N u m ,   w C o u n t )   \  
     d o   {   \  
         u i n t 3 2 _ t   _ w R e g B a s e   =   ( u i n t 3 2 _ t ) ( U S B x ) ;   \  
         _ _ I O   u i n t 1 6 _ t   * _ w R e g V a l ;   \  
         \  
         _ w R e g B a s e   + =   ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E ;   \  
         _ w R e g V a l   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( _ w R e g B a s e   +   0 x 4 0 0 U   +   ( ( ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   +   2 U )   *   P M A _ A C C E S S ) ) ;   \  
         * _ w R e g V a l   =   ( u i n t 1 6 _ t ) ( w C o u n t ) ;   \  
     }   w h i l e ( 0 )  
  
 # d e f i n e   P C D _ S E T _ E P _ R X _ C N T ( U S B x ,   b E p N u m ,   w C o u n t )   \  
     d o   {   \  
         u i n t 3 2 _ t   _ w R e g B a s e   =   ( u i n t 3 2 _ t ) ( U S B x ) ;   \  
         _ _ I O   u i n t 1 6 _ t   * _ w R e g V a l ;   \  
         \  
         _ w R e g B a s e   + =   ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E ;   \  
         _ w R e g V a l   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( _ w R e g B a s e   +   0 x 4 0 0 U   +   ( ( ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   +   6 U )   *   P M A _ A C C E S S ) ) ;   \  
         P C D _ S E T _ E P _ C N T _ R X _ R E G ( _ w R e g V a l ,   ( w C o u n t ) ) ;   \  
     }   w h i l e ( 0 )  
  
 / * *  
     *   @ b r i e f     g e t s   c o u n t e r   o f   t h e   t x   b u f f e r .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   C o u n t e r   v a l u e  
     * /  
 # d e f i n e   P C D _ G E T _ E P _ T X _ C N T ( U S B x ,   b E p N u m )                 ( ( u i n t 3 2 _ t ) ( * P C D _ E P _ T X _ C N T ( ( U S B x ) ,   ( b E p N u m ) ) )   &   0 x 3 f f U )  
 # d e f i n e   P C D _ G E T _ E P _ R X _ C N T ( U S B x ,   b E p N u m )                 ( ( u i n t 3 2 _ t ) ( * P C D _ E P _ R X _ C N T ( ( U S B x ) ,   ( b E p N u m ) ) )   &   0 x 3 f f U )  
  
 / * *  
     *   @ b r i e f     S e t s   b u f f e r   0 / 1   a d d r e s s   i n   a   d o u b l e   b u f f e r   e n d p o i n t .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w B u f 0 A d d r   b u f f e r   0   a d d r e s s .  
     *   @ r e t v a l   C o u n t e r   v a l u e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ D B U F 0 _ A D D R ( U S B x ,   b E p N u m ,   w B u f 0 A d d r )   \  
     d o   {   \  
         P C D _ S E T _ E P _ T X _ A D D R E S S ( ( U S B x ) ,   ( b E p N u m ) ,   ( w B u f 0 A d d r ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ D B U F 0 _ A D D R   * /  
  
 # d e f i n e   P C D _ S E T _ E P _ D B U F 1 _ A D D R ( U S B x ,   b E p N u m ,   w B u f 1 A d d r )   \  
     d o   {   \  
         P C D _ S E T _ E P _ R X _ A D D R E S S ( ( U S B x ) ,   ( b E p N u m ) ,   ( w B u f 1 A d d r ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ D B U F 1 _ A D D R   * /  
  
 / * *  
     *   @ b r i e f     S e t s   a d d r e s s e s   i n   a   d o u b l e   b u f f e r   e n d p o i n t .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     w B u f 0 A d d r :   b u f f e r   0   a d d r e s s .  
     *   @ p a r a m     w B u f 1 A d d r   =   b u f f e r   1   a d d r e s s .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ D B U F _ A D D R ( U S B x ,   b E p N u m ,   w B u f 0 A d d r ,   w B u f 1 A d d r )   \  
     d o   {   \  
         P C D _ S E T _ E P _ D B U F 0 _ A D D R ( ( U S B x ) ,   ( b E p N u m ) ,   ( w B u f 0 A d d r ) ) ;   \  
         P C D _ S E T _ E P _ D B U F 1 _ A D D R ( ( U S B x ) ,   ( b E p N u m ) ,   ( w B u f 1 A d d r ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ D B U F _ A D D R   * /  
  
 / * *  
     *   @ b r i e f     G e t s   b u f f e r   0 / 1   a d d r e s s   o f   a   d o u b l e   b u f f e r   e n d p o i n t .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ G E T _ E P _ D B U F 0 _ A D D R ( U S B x ,   b E p N u m )         ( P C D _ G E T _ E P _ T X _ A D D R E S S ( ( U S B x ) ,   ( b E p N u m ) ) )  
 # d e f i n e   P C D _ G E T _ E P _ D B U F 1 _ A D D R ( U S B x ,   b E p N u m )         ( P C D _ G E T _ E P _ R X _ A D D R E S S ( ( U S B x ) ,   ( b E p N u m ) ) )  
  
 / * *  
     *   @ b r i e f     G e t s   b u f f e r   0 / 1   a d d r e s s   o f   a   d o u b l e   b u f f e r   e n d p o i n t .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ p a r a m     b D i r   e n d p o i n t   d i r     E P _ D B U F _ O U T   =   O U T  
     *                   E P _ D B U F _ I N     =   I N  
     *   @ p a r a m     w C o u n t :   C o u n t e r   v a l u e  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ S E T _ E P _ D B U F 0 _ C N T ( U S B x ,   b E p N u m ,   b D i r ,   w C o u n t )   \  
     d o   {   \  
         i f   ( ( b D i r )   = =   0 U )   \  
             / *   O U T   e n d p o i n t   * /   \  
         {   \  
             P C D _ S E T _ E P _ R X _ D B U F 0 _ C N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( w C o u n t ) ) ;   \  
         }   \  
         e l s e   \  
         {   \  
             i f   ( ( b D i r )   = =   1 U )   \  
             {   \  
                 / *   I N   e n d p o i n t   * /   \  
                 P C D _ S E T _ E P _ T X _ C N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( w C o u n t ) ) ;   \  
             }   \  
         }   \  
     }   w h i l e ( 0 )   / *   S e t E P D b l B u f 0 C o u n t * /  
  
 # d e f i n e   P C D _ S E T _ E P _ D B U F 1 _ C N T ( U S B x ,   b E p N u m ,   b D i r ,   w C o u n t )   \  
     d o   {   \  
         u i n t 3 2 _ t   _ w B a s e   =   ( u i n t 3 2 _ t ) ( U S B x ) ;   \  
         _ _ I O   u i n t 1 6 _ t   * _ w E P R e g V a l ;   \  
         \  
         i f   ( ( b D i r )   = =   0 U )   \  
         {   \  
             / *   O U T   e n d p o i n t   * /   \  
             P C D _ S E T _ E P _ R X _ C N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( w C o u n t ) ) ;   \  
         }   \  
         e l s e   \  
         {   \  
             i f   ( ( b D i r )   = =   1 U )   \  
             {   \  
                 / *   I N   e n d p o i n t   * /   \  
                 _ w B a s e   + =   ( u i n t 3 2 _ t ) ( U S B x ) - > B T A B L E ;   \  
                 _ w E P R e g V a l   =   ( _ _ I O   u i n t 1 6 _ t   * ) ( _ w B a s e   +   0 x 4 0 0 U   +   ( ( ( ( u i n t 3 2 _ t ) ( b E p N u m )   *   8 U )   +   6 U )   *   P M A _ A C C E S S ) ) ;   \  
                 * _ w E P R e g V a l   =   ( u i n t 1 6 _ t ) ( w C o u n t ) ;   \  
             }   \  
         }   \  
     }   w h i l e ( 0 )   / *   S e t E P D b l B u f 1 C o u n t   * /  
  
 # d e f i n e   P C D _ S E T _ E P _ D B U F _ C N T ( U S B x ,   b E p N u m ,   b D i r ,   w C o u n t )   \  
     d o   {   \  
         P C D _ S E T _ E P _ D B U F 0 _ C N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( b D i r ) ,   ( w C o u n t ) ) ;   \  
         P C D _ S E T _ E P _ D B U F 1 _ C N T ( ( U S B x ) ,   ( b E p N u m ) ,   ( b D i r ) ,   ( w C o u n t ) ) ;   \  
     }   w h i l e ( 0 )   / *   P C D _ S E T _ E P _ D B U F _ C N T   * /  
  
 / * *  
     *   @ b r i e f     G e t s   b u f f e r   0 / 1   r x / t x   c o u n t e r   f o r   d o u b l e   b u f f e r i n g .  
     *   @ p a r a m     U S B x   U S B   p e r i p h e r a l   i n s t a n c e   r e g i s t e r   a d d r e s s .  
     *   @ p a r a m     b E p N u m   E n d p o i n t   N u m b e r .  
     *   @ r e t v a l   N o n e  
     * /  
 # d e f i n e   P C D _ G E T _ E P _ D B U F 0 _ C N T ( U S B x ,   b E p N u m )           ( P C D _ G E T _ E P _ T X _ C N T ( ( U S B x ) ,   ( b E p N u m ) ) )  
 # d e f i n e   P C D _ G E T _ E P _ D B U F 1 _ C N T ( U S B x ,   b E p N u m )           ( P C D _ G E T _ E P _ R X _ C N T ( ( U S B x ) ,   ( b E p N u m ) ) )  
  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
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
 # e n d i f   / *   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ P C D _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  