??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ p c c a r d . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   P C C A R D   H A L   m o d u l e .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                               o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ P C C A R D _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ P C C A R D _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 # i f   d e f i n e d ( F S M C _ B A N K 4 )  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ f s m c . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   P C C A R D  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C C A R D _ E x p o r t e d _ T y p e s   P C C A R D   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     H A L   P C C A R D   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ P C C A R D _ S T A T E _ R E S E T           =   0 x 0 0 U ,         / * ! <   P C C A R D   p e r i p h e r a l   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d   * /  
     H A L _ P C C A R D _ S T A T E _ R E A D Y           =   0 x 0 1 U ,         / * ! <   P C C A R D   p e r i p h e r a l   r e a d y                                                       * /  
     H A L _ P C C A R D _ S T A T E _ B U S Y             =   0 x 0 2 U ,         / * ! <   P C C A R D   p e r i p h e r a l   b u s y                                                         * /  
     H A L _ P C C A R D _ S T A T E _ E R R O R           =   0 x 0 4 U           / * ! <   P C C A R D   p e r i p h e r a l   e r r o r                                                       * /  
 }   H A L _ P C C A R D _ S t a t e T y p e D e f ;  
  
 t y p e d e f   e n u m  
 {  
     H A L _ P C C A R D _ S T A T U S _ S U C C E S S   =   0 U ,  
     H A L _ P C C A R D _ S T A T U S _ O N G O I N G ,  
     H A L _ P C C A R D _ S T A T U S _ E R R O R ,  
     H A L _ P C C A R D _ S T A T U S _ T I M E O U T  
 }   H A L _ P C C A R D _ S t a t u s T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     F S M C _ P C C A R D   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 t y p e d e f   s t r u c t   _ _ P C C A R D _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S     * /  
 {  
     F S M C _ P C C A R D _ T y p e D e f                       * I n s t a n c e ;                             / * ! <   R e g i s t e r   b a s e   a d d r e s s   f o r   P C C A R D   d e v i c e                     * /  
  
     F S M C _ P C C A R D _ I n i t T y p e D e f               I n i t ;                                       / * ! <   P C C A R D   d e v i c e   c o n t r o l   c o n f i g u r a t i o n   p a r a m e t e r s       * /  
  
     _ _ I O   H A L _ P C C A R D _ S t a t e T y p e D e f   S t a t e ;                                     / * ! <   P C C A R D   d e v i c e   a c c e s s   s t a t e                                               * /  
  
     H A L _ L o c k T y p e D e f                             L o c k ;                                       / * ! <   P C C A R D   L o c k                                                                             * /  
  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;                               / * ! <   P C C A R D   M s p   I n i t   c a l l b a c k                             * /  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;                           / * ! <   P C C A R D   M s p   D e I n i t   c a l l b a c k                         * /  
     v o i d   ( *   I t C a l l b a c k ) ( s t r u c t   _ _ P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;                                         / * ! <   P C C A R D   I T   c a l l b a c k                                         * /  
 # e n d i f  
 }   P C C A R D _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   P C C A R D   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ P C C A R D _ M S P _ I N I T _ C B _ I D               =   0 x 0 0 U ,     / * ! <   P C C A R D   M s p I n i t   C a l l b a c k   I D                     * /  
     H A L _ P C C A R D _ M S P _ D E I N I T _ C B _ I D           =   0 x 0 1 U ,     / * ! <   P C C A R D   M s p D e I n i t   C a l l b a c k   I D                 * /  
     H A L _ P C C A R D _ I T _ C B _ I D                           =   0 x 0 2 U       / * ! <   P C C A R D   I T   C a l l b a c k   I D                               * /  
 }   H A L _ P C C A R D _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   P C C A R D   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f   v o i d   ( * p P C C A R D _ C a l l b a c k T y p e D e f ) ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 # e n d i f  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C C A R D _ E x p o r t e d _ M a c r o s   P C C A R D   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
 / * *   @ b r i e f   R e s e t   P C C A R D   h a n d l e   s t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _   s p e c i f i e s   t h e   P C C A R D   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ P C C A R D _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )               d o   {                                                                                               \  
                                                                                                                               ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E S E T ;   \  
                                                                                                                               ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ;                   \  
                                                                                                                               ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;               \  
                                                                                                                           }   w h i l e ( 0 )  
 # e l s e  
 # d e f i n e   _ _ H A L _ P C C A R D _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ P C C A R D _ S T A T E _ R E S E T )  
 # e n d i f  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1  
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * C o m S p a c e T i m i n g ,  
                                                                       F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * A t t S p a c e T i m i n g ,   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * I O S p a c e T i m i n g ) ;  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ D e I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 v o i d   H A L _ P C C A R D _ M s p I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 v o i d   H A L _ P C C A R D _ M s p D e I n i t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2  
     *   @ {  
     * /  
 / *   I O   o p e r a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ R e a d _ I D ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 8 _ t   C o m p a c t F l a s h _ I D [ ] ,   u i n t 8 _ t   * p S t a t u s ) ;  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ W r i t e _ S e c t o r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 1 6 _ t   * p B u f f e r ,   u i n t 1 6 _ t   S e c t o r A d d r e s s ,  
                                                                                       u i n t 8 _ t   * p S t a t u s ) ;  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ R e a d _ S e c t o r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 1 6 _ t   * p B u f f e r ,   u i n t 1 6 _ t   S e c t o r A d d r e s s ,  
                                                                                     u i n t 8 _ t   * p S t a t u s ) ;  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ E r a s e _ S e c t o r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   u i n t 1 6 _ t   S e c t o r A d d r e s s ,   u i n t 8 _ t   * p S t a t u s ) ;  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ R e s e t ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 v o i d                               H A L _ P C C A R D _ I R Q H a n d l e r ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 v o i d                               H A L _ P C C A R D _ I T C a l l b a c k ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
  
 # i f   ( U S E _ H A L _ P C C A R D _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / *   P C C A R D   c a l l b a c k   r e g i s t e r i n g / u n r e g i s t e r i n g   * /  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ R e g i s t e r C a l l b a c k ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,   H A L _ P C C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                               p P C C A R D _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f     H A L _ P C C A R D _ U n R e g i s t e r C a l l b a c k ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ,  
                                                                                                   H A L _ P C C A R D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ) ;  
 # e n d i f  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   P C C A R D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3  
     *   @ {  
     * /  
 / *   P C C A R D   S t a t e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ P C C A R D _ S t a t e T y p e D e f     H A L _ P C C A R D _ G e t S t a t e ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 H A L _ P C C A R D _ S t a t u s T y p e D e f   H A L _ P C C A R D _ G e t S t a t u s ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
 H A L _ P C C A R D _ S t a t u s T y p e D e f   H A L _ P C C A R D _ R e a d S t a t u s ( P C C A R D _ H a n d l e T y p e D e f   * h p c c a r d ) ;  
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
 / * *   @ d e f g r o u p   P C C A R D _ P r i v a t e _ C o n s t a n t s   P C C A R D   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 # d e f i n e   P C C A R D _ D E V I C E _ A D D R E S S                           0 x 9 0 0 0 0 0 0 0 U  
 # d e f i n e   P C C A R D _ A T T R I B U T E _ S P A C E _ A D D R E S S         0 x 9 8 0 0 0 0 0 0 U                             / *   A t t r i b u t e   s p a c e   s i z e   t o   @ 0 x 9 B F F   F F F F   * /  
 # d e f i n e   P C C A R D _ C O M M O N _ S P A C E _ A D D R E S S               P C C A R D _ D E V I C E _ A D D R E S S         / *   C o m m o n   s p a c e   s i z e   t o   @ 0 x 9 3 F F   F F F F         * /  
 # d e f i n e   P C C A R D _ I O _ S P A C E _ A D D R E S S                       0 x 9 C 0 0 0 0 0 0 U                             / *   I O   s p a c e   s i z e   t o   @ 0 x 9 F F F   F F F F                 * /  
 # d e f i n e   P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R             0 x 9 C 0 0 0 1 F 0 U                             / *   I O   s p a c e   s i z e   t o   @ 0 x 9 F F F   F F F F                 * /  
  
 / *   F l a s h - A T A   r e g i s t e r s   d e s c r i p t i o n   * /  
 # d e f i n e   A T A _ D A T A                                               ( ( u i n t 8 _ t ) 0 x 0 0 )         / *   D a t a   r e g i s t e r   * /  
 # d e f i n e   A T A _ S E C T O R _ C O U N T                               ( ( u i n t 8 _ t ) 0 x 0 2 )         / *   S e c t o r   C o u n t   r e g i s t e r   * /  
 # d e f i n e   A T A _ S E C T O R _ N U M B E R                             ( ( u i n t 8 _ t ) 0 x 0 3 )         / *   S e c t o r   N u m b e r   r e g i s t e r   * /  
 # d e f i n e   A T A _ C Y L I N D E R _ L O W                               ( ( u i n t 8 _ t ) 0 x 0 4 )         / *   C y l i n d e r   l o w   r e g i s t e r   * /  
 # d e f i n e   A T A _ C Y L I N D E R _ H I G H                             ( ( u i n t 8 _ t ) 0 x 0 5 )         / *   C y l i n d e r   h i g h   r e g i s t e r   * /  
 # d e f i n e   A T A _ C A R D _ H E A D                                     ( ( u i n t 8 _ t ) 0 x 0 6 )         / *   C a r d / H e a d   r e g i s t e r   * /  
 # d e f i n e   A T A _ S T A T U S _ C M D                                   ( ( u i n t 8 _ t ) 0 x 0 7 )         / *   S t a t u s ( r e a d ) / C o m m a n d ( w r i t e )   r e g i s t e r   * /  
 # d e f i n e   A T A _ S T A T U S _ C M D _ A L T E R N A T E               ( ( u i n t 8 _ t ) 0 x 0 E )         / *   A l t e r n a t e   S t a t u s ( r e a d ) / C o m m a n d ( w r i t e )   r e g i s t e r   * /  
 # d e f i n e   A T A _ C O M M O N _ D A T A _ A R E A                       ( ( u i n t 1 6 _ t ) 0 x 0 4 0 0 )   / *   S t a r t   o f   d a t a   a r e a   ( f o r   C o m m o n   a c c e s s   o n l y ! )   * /  
 # d e f i n e   A T A _ C A R D _ C O N F I G U R A T I O N                   ( ( u i n t 1 6 _ t ) 0 x 0 2 0 2 )   / *   C a r d   C o n f i g u r a t i o n   a n d   S t a t u s   R e g i s t e r   * /  
  
 / *   F l a s h - A T A   c o m m a n d s   * /  
 # d e f i n e   A T A _ R E A D _ S E C T O R _ C M D                         ( ( u i n t 8 _ t ) 0 x 2 0 )  
 # d e f i n e   A T A _ W R I T E _ S E C T O R _ C M D                       ( ( u i n t 8 _ t ) 0 x 3 0 )  
 # d e f i n e   A T A _ E R A S E _ S E C T O R _ C M D                       ( ( u i n t 8 _ t ) 0 x C 0 )  
 # d e f i n e   A T A _ I D E N T I F Y _ C M D                               ( ( u i n t 8 _ t ) 0 x E C )  
  
 / *   P C   C a r d / C o m p a c t   F l a s h   s t a t u s   * /  
 # d e f i n e   P C C A R D _ T I M E O U T _ E R R O R                       ( ( u i n t 8 _ t ) 0 x 6 0 )  
 # d e f i n e   P C C A R D _ B U S Y                                         ( ( u i n t 8 _ t ) 0 x 8 0 )  
 # d e f i n e   P C C A R D _ P R O G R                                       ( ( u i n t 8 _ t ) 0 x 0 1 )  
 # d e f i n e   P C C A R D _ R E A D Y                                       ( ( u i n t 8 _ t ) 0 x 4 0 )  
  
 # d e f i n e   P C C A R D _ S E C T O R _ S I Z E                           2 5 5 U                               / *   I n   h a l f   w o r d s   * /  
  
 / * *  
     *   @ }  
     * /  
 / *   C o m p a c t   F l a s h   r e d e f i n i t i o n   * /  
 # d e f i n e   H A L _ C F _ I n i t                                   H A L _ P C C A R D _ I n i t  
 # d e f i n e   H A L _ C F _ D e I n i t                               H A L _ P C C A R D _ D e I n i t  
 # d e f i n e   H A L _ C F _ M s p I n i t                             H A L _ P C C A R D _ M s p I n i t  
 # d e f i n e   H A L _ C F _ M s p D e I n i t                         H A L _ P C C A R D _ M s p D e I n i t  
  
 # d e f i n e   H A L _ C F _ R e a d _ I D                             H A L _ P C C A R D _ R e a d _ I D  
 # d e f i n e   H A L _ C F _ W r i t e _ S e c t o r                   H A L _ P C C A R D _ W r i t e _ S e c t o r  
 # d e f i n e   H A L _ C F _ R e a d _ S e c t o r                     H A L _ P C C A R D _ R e a d _ S e c t o r  
 # d e f i n e   H A L _ C F _ E r a s e _ S e c t o r                   H A L _ P C C A R D _ E r a s e _ S e c t o r  
 # d e f i n e   H A L _ C F _ R e s e t                                 H A L _ P C C A R D _ R e s e t  
 # d e f i n e   H A L _ C F _ I R Q H a n d l e r                       H A L _ P C C A R D _ I R Q H a n d l e r  
 # d e f i n e   H A L _ C F _ I T C a l l b a c k                       H A L _ P C C A R D _ I T C a l l b a c k  
  
 # d e f i n e   H A L _ C F _ G e t S t a t e                           H A L _ P C C A R D _ G e t S t a t e  
 # d e f i n e   H A L _ C F _ G e t S t a t u s                         H A L _ P C C A R D _ G e t S t a t u s  
 # d e f i n e   H A L _ C F _ R e a d S t a t u s                       H A L _ P C C A R D _ R e a d S t a t u s  
  
 # d e f i n e   H A L _ C F _ S T A T U S _ S U C C E S S               H A L _ P C C A R D _ S T A T U S _ S U C C E S S  
 # d e f i n e   H A L _ C F _ S T A T U S _ O N G O I N G               H A L _ P C C A R D _ S T A T U S _ O N G O I N G  
 # d e f i n e   H A L _ C F _ S T A T U S _ E R R O R                   H A L _ P C C A R D _ S T A T U S _ E R R O R  
 # d e f i n e   H A L _ C F _ S T A T U S _ T I M E O U T               H A L _ P C C A R D _ S T A T U S _ T I M E O U T  
 # d e f i n e   H A L _ C F _ S t a t u s T y p e D e f                 H A L _ P C C A R D _ S t a t u s T y p e D e f  
  
 # d e f i n e   C F _ D E V I C E _ A D D R E S S                       P C C A R D _ D E V I C E _ A D D R E S S  
 # d e f i n e   C F _ A T T R I B U T E _ S P A C E _ A D D R E S S     P C C A R D _ A T T R I B U T E _ S P A C E _ A D D R E S S  
 # d e f i n e   C F _ C O M M O N _ S P A C E _ A D D R E S S           P C C A R D _ C O M M O N _ S P A C E _ A D D R E S S  
 # d e f i n e   C F _ I O _ S P A C E _ A D D R E S S                   P C C A R D _ I O _ S P A C E _ A D D R E S S  
 # d e f i n e   C F _ I O _ S P A C E _ P R I M A R Y _ A D D R         P C C A R D _ I O _ S P A C E _ P R I M A R Y _ A D D R  
  
 # d e f i n e   C F _ T I M E O U T _ E R R O R                         P C C A R D _ T I M E O U T _ E R R O R  
 # d e f i n e   C F _ B U S Y                                           P C C A R D _ B U S Y  
 # d e f i n e   C F _ P R O G R                                         P C C A R D _ P R O G R  
 # d e f i n e   C F _ R E A D Y                                         P C C A R D _ R E A D Y  
  
 # d e f i n e   C F _ S E C T O R _ S I Z E                             P C C A R D _ S E C T O R _ S I Z E  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *  
     *   @ }  
     * /  
  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   F S M C _ B A N K 4   * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ P C C A R D _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  