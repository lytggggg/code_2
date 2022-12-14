??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ s r a m . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   S R A M   H A L   m o d u l e .  
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
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ S R A M _ H  
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ S R A M _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 # i f   d e f i n e d ( F S M C _ B A N K 1 )  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ f s m c . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
 / * *   @ a d d t o g r o u p   S R A M  
     *   @ {  
     * /  
  
 / *   E x p o r t e d   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   S R A M _ E x p o r t e d _ T y p e s   S R A M   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     H A L   S R A M   S t a t e   s t r u c t u r e s   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ S R A M _ S T A T E _ R E S E T           =   0 x 0 0 U ,     / * ! <   S R A M   n o t   y e t   i n i t i a l i z e d   o r   d i s a b l e d                       * /  
     H A L _ S R A M _ S T A T E _ R E A D Y           =   0 x 0 1 U ,     / * ! <   S R A M   i n i t i a l i z e d   a n d   r e a d y   f o r   u s e                           * /  
     H A L _ S R A M _ S T A T E _ B U S Y             =   0 x 0 2 U ,     / * ! <   S R A M   i n t e r n a l   p r o c e s s   i s   o n g o i n g                               * /  
     H A L _ S R A M _ S T A T E _ E R R O R           =   0 x 0 3 U ,     / * ! <   S R A M   e r r o r   s t a t e                                                               * /  
     H A L _ S R A M _ S T A T E _ P R O T E C T E D   =   0 x 0 4 U       / * ! <   S R A M   p e r i p h e r a l   N O R S R A M   d e v i c e   w r i t e   p r o t e c t e d   * /  
  
 }   H A L _ S R A M _ S t a t e T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     S R A M   h a n d l e   S t r u c t u r e   d e f i n i t i o n  
     * /  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 t y p e d e f   s t r u c t   _ _ S R A M _ H a n d l e T y p e D e f  
 # e l s e  
 t y p e d e f   s t r u c t  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S     * /  
 {  
     F S M C _ N O R S R A M _ T y p e D e f                       * I n s t a n c e ;     / * ! <   R e g i s t e r   b a s e   a d d r e s s                                                 * /  
  
     F S M C _ N O R S R A M _ E X T E N D E D _ T y p e D e f     * E x t e n d e d ;     / * ! <   E x t e n d e d   m o d e   r e g i s t e r   b a s e   a d d r e s s                     * /  
  
     F S M C _ N O R S R A M _ I n i t T y p e D e f               I n i t ;               / * ! <   S R A M   d e v i c e   c o n t r o l   c o n f i g u r a t i o n   p a r a m e t e r s   * /  
  
     H A L _ L o c k T y p e D e f                               L o c k ;               / * ! <   S R A M   l o c k i n g   o b j e c t                                                     * /  
  
     _ _ I O   H A L _ S R A M _ S t a t e T y p e D e f         S t a t e ;             / * ! <   S R A M   d e v i c e   a c c e s s   s t a t e                                           * /  
  
     D M A _ H a n d l e T y p e D e f                           * h d m a ;             / * ! <   P o i n t e r   D M A   h a n d l e r                                                     * /  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d   ( *   M s p I n i t C a l l b a c k ) ( s t r u c t   _ _ S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;                               / * ! <   S R A M   M s p   I n i t   c a l l b a c k                             * /  
     v o i d   ( *   M s p D e I n i t C a l l b a c k ) ( s t r u c t   _ _ S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;                           / * ! <   S R A M   M s p   D e I n i t   c a l l b a c k                         * /  
     v o i d   ( *   D m a X f e r C p l t C a l l b a c k ) ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;                                             / * ! <   S R A M   D M A   X f e r   C o m p l e t e   c a l l b a c k           * /  
     v o i d   ( *   D m a X f e r E r r o r C a l l b a c k ) ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;                                           / * ! <   S R A M   D M A   X f e r   E r r o r   c a l l b a c k                 * /  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S     * /  
 }   S R A M _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   S R A M   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ S R A M _ M S P _ I N I T _ C B _ I D               =   0 x 0 0 U ,     / * ! <   S R A M   M s p I n i t   C a l l b a c k   I D                       * /  
     H A L _ S R A M _ M S P _ D E I N I T _ C B _ I D           =   0 x 0 1 U ,     / * ! <   S R A M   M s p D e I n i t   C a l l b a c k   I D                   * /  
     H A L _ S R A M _ D M A _ X F E R _ C P L T _ C B _ I D     =   0 x 0 2 U ,     / * ! <   S R A M   D M A   X f e r   C o m p l e t e   C a l l b a c k   I D   * /  
     H A L _ S R A M _ D M A _ X F E R _ E R R _ C B _ I D       =   0 x 0 3 U       / * ! <   S R A M   D M A   X f e r   C o m p l e t e   C a l l b a c k   I D   * /  
 }   H A L _ S R A M _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   S R A M   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f   v o i d   ( * p S R A M _ C a l l b a c k T y p e D e f ) ( S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;  
 t y p e d e f   v o i d   ( * p S R A M _ D m a C a l l b a c k T y p e D e f ) ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   S R A M _ E x p o r t e d _ M a c r o s   S R A M   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f   R e s e t   S R A M   h a n d l e   s t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _   S R A M   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ S R A M _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )                   d o   {                                                                                           \  
                                                                                                                               ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E S E T ;   \  
                                                                                                                               ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ;               \  
                                                                                                                               ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;           \  
                                                                                                                           }   w h i l e ( 0 )  
 # e l s e  
 # d e f i n e   _ _ H A L _ S R A M _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   ( ( _ _ H A N D L E _ _ ) - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E S E T )  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s   S R A M   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ {  
     * /  
  
 / *   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * T i m i n g ,  
                                                                 F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * E x t T i m i n g ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ D e I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;  
 v o i d   H A L _ S R A M _ M s p I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;  
 v o i d   H A L _ S R A M _ M s p D e I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   O u t p u t   a n d   m e m o r y   c o n t r o l   f u n c t i o n s  
     *   @ {  
     * /  
  
 / *   I / O   o p e r a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ 8 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 8 _ t   * p D s t B u f f e r ,  
                                                                       u i n t 3 2 _ t   B u f f e r S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ 8 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 8 _ t   * p S r c B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ 1 6 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 1 6 _ t   * p D s t B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ 1 6 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 1 6 _ t   * p S r c B u f f e r ,  
                                                                           u i n t 3 2 _ t   B u f f e r S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ 3 2 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p D s t B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ 3 2 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p S r c B u f f e r ,  
                                                                           u i n t 3 2 _ t   B u f f e r S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ D M A ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p D s t B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ D M A ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p S r c B u f f e r ,  
                                                                           u i n t 3 2 _ t   B u f f e r S i z e ) ;  
  
 v o i d   H A L _ S R A M _ D M A _ X f e r C p l t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 v o i d   H A L _ S R A M _ D M A _ X f e r E r r o r C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / *   S R A M   c a l l b a c k   r e g i s t e r i n g / u n r e g i s t e r i n g   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e g i s t e r C a l l b a c k ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   H A L _ S R A M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                         p S R A M _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ U n R e g i s t e r C a l l b a c k ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   H A L _ S R A M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e g i s t e r D m a C a l l b a c k ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   H A L _ S R A M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                               p S R A M _ D m a C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   C o n t r o l   f u n c t i o n s  
     *   @ {  
     * /  
  
 / *   S R A M   C o n t r o l   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e O p e r a t i o n _ E n a b l e ( S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e O p e r a t i o n _ D i s a b l e ( S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *   @ {  
     * /  
  
 / *   S R A M     S t a t e   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S R A M _ S t a t e T y p e D e f   H A L _ S R A M _ G e t S t a t e ( S R A M _ H a n d l e T y p e D e f   * h s r a m ) ;  
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
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   F S M C _ B A N K 1   * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ S R A M _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  