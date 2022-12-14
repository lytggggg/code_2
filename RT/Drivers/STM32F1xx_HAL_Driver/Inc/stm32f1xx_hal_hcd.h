??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ h c d . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   H C D   H A L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ H C D _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ H C D _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ u s b . h "  
  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   H C D   H C D  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ T y p e s   H C D   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ T y p e s _ G r o u p 1   H C D   S t a t e   S t r u c t u r e   d e f i n i t i o n  
     *   @ {  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ H C D _ S T A T E _ R E S E T         =   0 x 0 0 ,  
     H A L _ H C D _ S T A T E _ R E A D Y         =   0 x 0 1 ,  
     H A L _ H C D _ S T A T E _ E R R O R         =   0 x 0 2 ,  
     H A L _ H C D _ S T A T E _ B U S Y           =   0 x 0 3 ,  
     H A L _ H C D _ S T A T E _ T I M E O U T     =   0 x 0 4  
 }   H C D _ S t a t e T y p e D e f ;  
  
 t y p e d e f   U S B _ O T G _ G l o b a l T y p e D e f       H C D _ T y p e D e f ;  
 t y p e d e f   U S B _ O T G _ C f g T y p e D e f             H C D _ I n i t T y p e D e f ;  
 t y p e d e f   U S B _ O T G _ H C T y p e D e f               H C D _ H C T y p e D e f ;  
 t y p e d e f   U S B _ O T G _ U R B S t a t e T y p e D e f   H C D _ U R B S t a t e T y p e D e f ;  
 t y p e d e f   U S B _ O T G _ H C S t a t e T y p e D e f     H C D _ H C S t a t e T y p e D e f ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ T y p e s _ G r o u p 2   H C D   H a n d l e   S t r u c t u r e   d e f i n i t i o n  
     *   @ {  
     * /  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 t y p e d e f   s t r u c t   _ _ H C D _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
 {  
     H C D _ T y p e D e f                               * I n s t a n c e ;     / * ! <   R e g i s t e r   b a s e   a d d r e s s         * /  
     H C D _ I n i t T y p e D e f                       I n i t ;               / * ! <   H C D   r e q u i r e d   p a r a m e t e r s     * /  
     H C D _ H C T y p e D e f                           h c [ 1 6 ] ;           / * ! <   H o s t   c h a n n e l s   p a r a m e t e r s   * /  
     H A L _ L o c k T y p e D e f                       L o c k ;               / * ! <   H C D   p e r i p h e r a l   s t a t u s         * /  
     _ _ I O   H C D _ S t a t e T y p e D e f           S t a t e ;             / * ! <   H C D   c o m m u n i c a t i o n   s t a t e     * /  
     _ _ I O     u i n t 3 2 _ t                         E r r o r C o d e ;     / * ! <   H C D   E r r o r   c o d e                       * /  
     v o i d                                             * p D a t a ;           / * ! <   P o i n t e r   S t a c k   H a n d l e r         * /  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     v o i d   ( *   S O F C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                                               / * ! <   U S B   O T G   H C D   S O F   c a l l b a c k                                 * /  
     v o i d   ( *   C o n n e c t C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                                       / * ! <   U S B   O T G   H C D   C o n n e c t   c a l l b a c k                         * /  
     v o i d   ( *   D i s c o n n e c t C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                                 / * ! <   U S B   O T G   H C D   D i s c o n n e c t   c a l l b a c k                   * /  
     v o i d   ( *   P o r t E n a b l e d C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                               / * ! <   U S B   O T G   H C D   P o r t   E n a b l e   c a l l b a c k                 * /  
     v o i d   ( *   P o r t D i s a b l e d C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                             / * ! <   U S B   O T G   H C D   P o r t   D i s a b l e   c a l l b a c k               * /  
     v o i d   ( *   H C _ N o t i f y U R B C h a n g e C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ,  
                                                                             H C D _ U R B S t a t e T y p e D e f   u r b _ s t a t e ) ;                                       / * ! <   U S B   O T G   H C D   H o s t   C h a n n e l   N o t i f y   U R B   C h a n g e   c a l l b a c k     * /  
  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                                       / * ! <   U S B   O T G   H C D   M s p   I n i t   c a l l b a c k                       * /  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                                   / * ! <   U S B   O T G   H C D   M s p   D e I n i t   c a l l b a c k                   * /  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
 }   H C D _ H a n d l e T y p e D e f ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ C o n s t a n t s   H C D   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ S p e e d   H C D   S p e e d  
     *   @ {  
     * /  
 # d e f i n e   H C D _ S P E E D _ F U L L                               U S B H _ F S L S _ S P E E D  
 # d e f i n e   H C D _ S P E E D _ L O W                                 U S B H _ F S L S _ S P E E D  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ D e v i c e _ S p e e d   H C D   D e v i c e   S p e e d  
     *   @ {  
     * /  
 # d e f i n e   H C D _ D E V I C E _ S P E E D _ H I G H                               0 U  
 # d e f i n e   H C D _ D E V I C E _ S P E E D _ F U L L                               1 U  
 # d e f i n e   H C D _ D E V I C E _ S P E E D _ L O W                                 2 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ P H Y _ M o d u l e   H C D   P H Y   M o d u l e  
     *   @ {  
     * /  
 # d e f i n e   H C D _ P H Y _ U L P I                                   1 U  
 # d e f i n e   H C D _ P H Y _ E M B E D D E D                           2 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E r r o r _ C o d e _ d e f i n i t i o n   H C D   E r r o r   C o d e   d e f i n i t i o n  
     *   @ b r i e f     H C D   E r r o r   C o d e   d e f i n i t i o n  
     *   @ {  
     * /  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 # d e f i n e     H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K                                                 ( 0 x 0 0 0 0 0 0 1 0 U )         / * ! <   I n v a l i d   C a l l b a c k   e r r o r     * /  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
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
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ M a c r o s   H C D   E x p o r t e d   M a c r o s  
     *     @ b r i e f   m a c r o s   t o   h a n d l e   i n t e r r u p t s   a n d   s p e c i f i c   c l o c k   c o n f i g u r a t i o n s  
     *   @ {  
     * /  
 # d e f i n e   _ _ H A L _ H C D _ E N A B L E ( _ _ H A N D L E _ _ )                                       ( v o i d ) U S B _ E n a b l e G l o b a l I n t   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )  
 # d e f i n e   _ _ H A L _ H C D _ D I S A B L E ( _ _ H A N D L E _ _ )                                     ( v o i d ) U S B _ D i s a b l e G l o b a l I n t   ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )  
  
 # d e f i n e   _ _ H A L _ H C D _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )             ( ( U S B _ R e a d I n t e r r u p t s ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e ) \  
                                                                                                                           &   ( _ _ I N T E R R U P T _ _ ) )   = =   ( _ _ I N T E R R U P T _ _ ) )  
 # d e f i n e   _ _ H A L _ H C D _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )         ( ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > G I N T S T S )   =   ( _ _ I N T E R R U P T _ _ ) )  
 # d e f i n e   _ _ H A L _ H C D _ I S _ I N V A L I D _ I N T E R R U P T ( _ _ H A N D L E _ _ )                   ( U S B _ R e a d I n t e r r u p t s ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e )   = =   0 U )  
  
 # d e f i n e   _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h n u m ,   _ _ I N T E R R U P T _ _ )     ( U S B x _ H C ( c h n u m ) - > H C I N T   =   ( _ _ I N T E R R U P T _ _ ) )  
 # d e f i n e   _ _ H A L _ H C D _ M A S K _ H A L T _ H C _ I N T ( c h n u m )                           ( U S B x _ H C ( c h n u m ) - > H C I N T M S K   & =   ~ U S B _ O T G _ H C I N T M S K _ C H H M )  
 # d e f i n e   _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h n u m )                       ( U S B x _ H C ( c h n u m ) - > H C I N T M S K   | =   U S B _ O T G _ H C I N T M S K _ C H H M )  
 # d e f i n e   _ _ H A L _ H C D _ M A S K _ A C K _ H C _ I N T ( c h n u m )                             ( U S B x _ H C ( c h n u m ) - > H C I N T M S K   & =   ~ U S B _ O T G _ H C I N T M S K _ A C K M )  
 # d e f i n e   _ _ H A L _ H C D _ U N M A S K _ A C K _ H C _ I N T ( c h n u m )                         ( U S B x _ H C ( c h n u m ) - > H C I N T M S K   | =   U S B _ O T G _ H C I N T M S K _ A C K M )  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s   H C D   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ D e I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ H C _ I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h _ n u m ,  
                                                                     u i n t 8 _ t   e p n u m ,   u i n t 8 _ t   d e v _ a d d r e s s ,  
                                                                     u i n t 8 _ t   s p e e d ,   u i n t 8 _ t   e p _ t y p e ,   u i n t 1 6 _ t   m p s ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ H C _ H a l t ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h _ n u m ) ;  
 v o i d                             H A L _ H C D _ M s p I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d                             H A L _ H C D _ M s p D e I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 / * *   @ d e f g r o u p   H A L _ H C D _ C a l l b a c k _ I D _ e n u m e r a t i o n _ d e f i n i t i o n   H A L   U S B   O T G   H C D   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     *   @ b r i e f     H A L   U S B   O T G   H C D   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     *   @ {  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ H C D _ S O F _ C B _ I D                         =   0 x 0 1 ,               / * ! <   U S B   H C D   S O F   c a l l b a c k   I D                       * /  
     H A L _ H C D _ C O N N E C T _ C B _ I D                 =   0 x 0 2 ,               / * ! <   U S B   H C D   C o n n e c t   c a l l b a c k   I D               * /  
     H A L _ H C D _ D I S C O N N E C T _ C B _ I D           =   0 x 0 3 ,               / * ! <   U S B   H C D   D i s c o n n e c t   c a l l b a c k   I D         * /  
     H A L _ H C D _ P O R T _ E N A B L E D _ C B _ I D       =   0 x 0 4 ,               / * ! <   U S B   H C D   P o r t   E n a b l e   c a l l b a c k   I D       * /  
     H A L _ H C D _ P O R T _ D I S A B L E D _ C B _ I D     =   0 x 0 5 ,               / * ! <   U S B   H C D   P o r t   D i s a b l e   c a l l b a c k   I D     * /  
  
     H A L _ H C D _ M S P I N I T _ C B _ I D                 =   0 x 0 6 ,               / * ! <   U S B   H C D   M s p I n i t   c a l l b a c k   I D               * /  
     H A L _ H C D _ M S P D E I N I T _ C B _ I D             =   0 x 0 7                 / * ! <   U S B   H C D   M s p D e I n i t   c a l l b a c k   I D           * /  
  
 }   H A L _ H C D _ C a l l b a c k I D T y p e D e f ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ H C D _ C a l l b a c k _ p o i n t e r _ d e f i n i t i o n   H A L   U S B   O T G   H C D   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     *   @ b r i e f     H A L   U S B   O T G   H C D   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     *   @ {  
     * /  
  
 t y p e d e f   v o i d   ( * p H C D _ C a l l b a c k T y p e D e f ) ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;                                       / * ! <   p o i n t e r   t o   a   c o m m o n   U S B   O T G   H C D   c a l l b a c k   f u n c t i o n     * /  
 t y p e d e f   v o i d   ( * p H C D _ H C _ N o t i f y U R B C h a n g e C a l l b a c k T y p e D e f ) ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                                                               u i n t 8 _ t   e p n u m ,  
                                                                                                               H C D _ U R B S t a t e T y p e D e f   u r b _ s t a t e ) ;       / * ! <   p o i n t e r   t o   U S B   O T G   H C D   h o s t   c h a n n e l     c a l l b a c k   * /  
 / * *  
     *   @ }  
     * /  
  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ R e g i s t e r C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                                       H A L _ H C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                       p H C D _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ U n R e g i s t e r C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                                           H A L _ H C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ R e g i s t e r H C _ N o t i f y U R B C h a n g e C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                                                                           p H C D _ H C _ N o t i f y U R B C h a n g e C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ U n R e g i s t e r H C _ N o t i f y U R B C h a n g e C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   I / O   o p e r a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ H C _ S u b m i t R e q u e s t ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h _ n u m ,  
                                                                                       u i n t 8 _ t   d i r e c t i o n ,   u i n t 8 _ t   e p _ t y p e ,  
                                                                                       u i n t 8 _ t   t o k e n ,   u i n t 8 _ t   * p b u f f ,  
                                                                                       u i n t 1 6 _ t   l e n g t h ,   u i n t 8 _ t   d o _ p i n g ) ;  
  
 / *   N o n - B l o c k i n g   m o d e :   I n t e r r u p t   * /  
 v o i d   H A L _ H C D _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d   H A L _ H C D _ W K U P _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d   H A L _ H C D _ S O F _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d   H A L _ H C D _ C o n n e c t _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d   H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d   H A L _ H C D _ P o r t E n a b l e d _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d   H A L _ H C D _ P o r t D i s a b l e d _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 v o i d   H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ,  
                                                                                   H C D _ U R B S t a t e T y p e D e f   u r b _ s t a t e ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *   @ {  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ R e s e t P o r t ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ S t a r t ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ S t o p ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   P e r i p h e r a l   S t a t e   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / * *   @ a d d t o g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *   @ {  
     * /  
 H C D _ S t a t e T y p e D e f                 H A L _ H C D _ G e t S t a t e ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 H C D _ U R B S t a t e T y p e D e f           H A L _ H C D _ H C _ G e t U R B S t a t e ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ) ;  
 H C D _ H C S t a t e T y p e D e f             H A L _ H C D _ H C _ G e t S t a t e ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ) ;  
 u i n t 3 2 _ t                                 H A L _ H C D _ H C _ G e t X f e r C o u n t ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ) ;  
 u i n t 3 2 _ t                                 H A L _ H C D _ G e t C u r r e n t F r a m e ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 u i n t 3 2 _ t                                 H A L _ H C D _ G e t C u r r e n t S p e e d ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H C D _ P r i v a t e _ M a c r o s   H C D   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   f u n c t i o n s   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
     *   @ }  
     * /  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ H C D _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  