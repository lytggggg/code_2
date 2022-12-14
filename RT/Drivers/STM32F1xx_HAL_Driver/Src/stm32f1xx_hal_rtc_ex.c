??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ r t c _ e x . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       E x t e n d e d   R T C   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   R e a l   T i m e   C l o c k   ( R T C )   E x t e n s i o n   p e r i p h e r a l :  
     *                       +   R T C   T a m p e r   f u n c t i o n s  
     *                       +   E x t e n s i o n   C o n t r o l   f u n c t i o n s  
     *                       +   E x t e n s i o n   R T C   f e a t u r e s   f u n c t i o n s  
     *  
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ R T C _ M O D U L E _ E N A B L E D  
  
 / * *   @ d e f g r o u p   R T C E x   R T C E x  
     *   @ b r i e f   R T C   E x t e n d e d   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   R T C E x _ P r i v a t e _ M a c r o s   R T C E x   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s   R T C E x   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   R T C   T a m p e r   f u n c t i o n s  
     *   @ b r i e f         R T C   T a m p e r   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                   # # # # #   R T C   T a m p e r   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
   [ . . ]   T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   c o n f i g u r e   T a m p e r   f e a t u r e  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t s   T a m p e r  
     *   @ n o t e       B y   c a l l i n g   t h i s   A P I   w e   d i s a b l e   t h e   t a m p e r   i n t e r r u p t   f o r   a l l   t a m p e r s .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s T a m p e r :   P o i n t e r   t o   T a m p e r   S t r u c t u r e .  
     *   @ n o t e       T a m p e r   c a n   b e   e n a b l e d   o n l y   i f   A S O E   a n d   C C O   b i t   a r e   r e s e t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t T a m p e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T a m p e r T y p e D e f   * s T a m p e r )  
 {  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s T a m p e r   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ T A M P E R ( s T a m p e r - > T a m p e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ R T C _ T A M P E R _ T R I G G E R ( s T a m p e r - > T r i g g e r ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     i f   ( H A L _ I S _ B I T _ S E T ( B K P - > R T C C R ,   ( B K P _ R T C C R _ C C O   |   B K P _ R T C C R _ A S O E ) ) )  
     {  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     M O D I F Y _ R E G ( B K P - > C R ,   ( B K P _ C R _ T P E   |   B K P _ C R _ T P A L ) ,   ( s T a m p e r - > T a m p e r   |   ( s T a m p e r - > T r i g g e r ) ) ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t s   T a m p e r   w i t h   i n t e r r u p t .  
     *   @ n o t e       B y   c a l l i n g   t h i s   A P I   w e   f o r c e   t h e   t a m p e r   i n t e r r u p t   f o r   a l l   t a m p e r s .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     s T a m p e r :   P o i n t e r   t o   R T C   T a m p e r .  
     *   @ n o t e       T a m p e r   c a n   b e   e n a b l e d   o n l y   i f   A S O E   a n d   C C O   b i t   a r e   r e s e t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t T a m p e r _ I T ( R T C _ H a n d l e T y p e D e f   * h r t c ,   R T C _ T a m p e r T y p e D e f   * s T a m p e r )  
 {  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( ( h r t c   = =   N U L L )   | |   ( s T a m p e r   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ T A M P E R ( s T a m p e r - > T a m p e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ R T C _ T A M P E R _ T R I G G E R ( s T a m p e r - > T r i g g e r ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     i f   ( H A L _ I S _ B I T _ S E T ( B K P - > R T C C R ,   ( B K P _ R T C C R _ C C O   |   B K P _ R T C C R _ A S O E ) ) )  
     {  
         h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h r t c ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     M O D I F Y _ R E G ( B K P - > C R ,   ( B K P _ C R _ T P E   |   B K P _ C R _ T P A L ) ,   ( s T a m p e r - > T a m p e r   |   ( s T a m p e r - > T r i g g e r ) ) ) ;  
  
     / *   C o n f i g u r e   t h e   T a m p e r   I n t e r r u p t   i n   t h e   B K P - > C S R   * /  
     _ _ H A L _ R T C _ T A M P E R _ E N A B L E _ I T ( h r t c ,   R T C _ I T _ T A M P 1 ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e a c t i v a t e s   T a m p e r .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     T a m p e r :   S e l e c t e d   t a m p e r   p i n .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   R T C E x _ T a m p e r _ P i n s _ D e f i n i t i o n s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ D e a c t i v a t e T a m p e r ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T a m p e r )  
 {  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( T a m p e r ) ;  
  
     a s s e r t _ p a r a m ( I S _ R T C _ T A M P E R ( T a m p e r ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   s e l e c t e d   T a m p e r   p i n   * /  
     C L E A R _ B I T ( B K P - > C R ,   B K P _ C R _ T P E ) ;  
  
     / *   D i s a b l e   t h e   T a m p e r   I n t e r r u p t   i n   t h e   B K P - > C S R   * /  
     / *   C o n f i g u r e   t h e   T a m p e r   I n t e r r u p t   i n   t h e   B K P - > C S R   * /  
     _ _ H A L _ R T C _ T A M P E R _ D I S A B L E _ I T ( h r t c ,   R T C _ I T _ T A M P 1 ) ;  
  
     / *   C l e a r   t h e   T a m p e r   i n t e r r u p t   p e n d i n g   b i t   * /  
     _ _ H A L _ R T C _ T A M P E R _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ T A M P 1 F ) ;  
     S E T _ B I T ( B K P - > C S R ,   B K P _ C S R _ C T E ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   T a m p e r   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R T C E x _ T a m p e r I R Q H a n d l e r ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   G e t   t h e   s t a t u s   o f   t h e   I n t e r r u p t   * /  
     i f   ( _ _ H A L _ R T C _ T A M P E R _ G E T _ I T _ S O U R C E ( h r t c ,   R T C _ I T _ T A M P 1 ) )  
     {  
         / *   G e t   t h e   T A M P E R   I n t e r r u p t   e n a b l e   b i t   a n d   p e n d i n g   b i t   * /  
         i f   ( _ _ H A L _ R T C _ T A M P E R _ G E T _ F L A G ( h r t c ,   R T C _ F L A G _ T A M P 1 F )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
         {  
             / *   T a m p e r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             h r t c - > T a m p e r 1 E v e n t C a l l b a c k ( h r t c ) ;  
 # e l s e  
             H A L _ R T C E x _ T a m p e r 1 E v e n t C a l l b a c k ( h r t c ) ;  
 # e n d i f   / *   U S E _ H A L _ R T C _ R E G I S T E R _ C A L L B A C K S   * /  
  
             / *   C l e a r   t h e   T a m p e r   i n t e r r u p t   p e n d i n g   b i t   * /  
             _ _ H A L _ R T C _ T A M P E R _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ T A M P 1 F ) ;  
         }  
     }  
  
     / *   C h a n g e   R T C   s t a t e   * /  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     T a m p e r   1   c a l l b a c k .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R T C E x _ T a m p e r 1 E v e n t C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ R T C E x _ T a m p e r 1 E v e n t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   T a m p e r 1   P o l l i n g .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     T i m e o u t :   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ P o l l F o r T a m p e r 1 E v e n t ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   G e t   t h e   s t a t u s   o f   t h e   I n t e r r u p t   * /  
     w h i l e   ( _ _ H A L _ R T C _ T A M P E R _ G E T _ F L A G ( h r t c ,   R T C _ F L A G _ T A M P 1 F )   = =   R E S E T )  
     {  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t ) )  
             {  
                 h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ T I M E O U T ;  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
  
     / *   C l e a r   t h e   T a m p e r   F l a g   * /  
     _ _ H A L _ R T C _ T A M P E R _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ T A M P 1 F ) ;  
  
     / *   C h a n g e   R T C   s t a t e   * /  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   R T C   S e c o n d   f u n c t i o n s  
     *   @ b r i e f         R T C   S e c o n d   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                   # # # # #   R T C   S e c o n d   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
   [ . . ]   T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   i m p l e m e n t i n g   s e c o n d   i n t e r u p t   h a n d l e r s  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e t s   I n t e r r u p t   f o r   s e c o n d  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t S e c o n d _ I T ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   E n a b l e   S e c o n d   i n t e r u p t i o n   * /  
     _ _ H A L _ R T C _ S E C O N D _ E N A B L E _ I T ( h r t c ,   R T C _ I T _ S E C ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e a c t i v a t e s   S e c o n d .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ D e a c t i v a t e S e c o n d ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   D e a c t i v a t e   S e c o n d   i n t e r u p t i o n * /  
     _ _ H A L _ R T C _ S E C O N D _ D I S A B L E _ I T ( h r t c ,   R T C _ I T _ S E C ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   s e c o n d   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R T C E x _ R T C I R Q H a n d l e r ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     i f   ( _ _ H A L _ R T C _ S E C O N D _ G E T _ I T _ S O U R C E ( h r t c ,   R T C _ I T _ S E C ) )  
     {  
         / *   G e t   t h e   s t a t u s   o f   t h e   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ R T C _ S E C O N D _ G E T _ F L A G ( h r t c ,   R T C _ F L A G _ S E C ) )  
         {  
             / *   C h e c k   i f   O v e r r u n   o c c u r r e d   * /  
             i f   ( _ _ H A L _ R T C _ S E C O N D _ G E T _ F L A G ( h r t c ,   R T C _ F L A G _ O W ) )  
             {  
                 / *   S e c o n d   e r r o r   c a l l b a c k   * /  
                 H A L _ R T C E x _ R T C E v e n t E r r o r C a l l b a c k ( h r t c ) ;  
  
                 / *   C l e a r   f l a g   S e c o n d   * /  
                 _ _ H A L _ R T C _ O V E R F L O W _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ O W ) ;  
  
                 / *   C h a n g e   R T C   s t a t e   * /  
                 h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ E R R O R ;  
             }  
             e l s e  
             {  
                 / *   S e c o n d   c a l l b a c k   * /  
                 H A L _ R T C E x _ R T C E v e n t C a l l b a c k ( h r t c ) ;  
  
                 / *   C h a n g e   R T C   s t a t e   * /  
                 h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
             }  
  
             / *   C l e a r   f l a g   S e c o n d   * /  
             _ _ H A L _ R T C _ S E C O N D _ C L E A R _ F L A G ( h r t c ,   R T C _ F L A G _ S E C ) ;  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S e c o n d   e v e n t   c a l l b a c k .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R T C E x _ R T C E v e n t C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ R T C E x _ R T C E v e n t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S e c o n d   e v e n t   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ R T C E x _ R T C E v e n t E r r o r C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ R T C E x _ R T C E v e n t E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   R T C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *   @ b r i e f         E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   E x t e n s i o n   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o  
             ( + )   W r i t e s   a   d a t a   i n   a   s p e c i f i e d   R T C   B a c k u p   d a t a   r e g i s t e r  
             ( + )   R e a d   a   d a t a   i n   a   s p e c i f i e d   R T C   B a c k u p   d a t a   r e g i s t e r  
             ( + )   S e t s   t h e   S m o o t h   c a l i b r a t i o n   p a r a m e t e r s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     W r i t e s   a   d a t a   i n   a   s p e c i f i e d   R T C   B a c k u p   d a t a   r e g i s t e r .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     B a c k u p R e g i s t e r :   R T C   B a c k u p   d a t a   R e g i s t e r   n u m b e r .  
     *                     T h i s   p a r a m e t e r   c a n   b e :   R T C _ B K P _ D R x   w h e r e   x   c a n   b e   f r o m   1   t o   1 0   ( o r   4 2 )   t o  
     *                                                                   s p e c i f y   t h e   r e g i s t e r   ( d e p e n d i n g   d e v i c e s ) .  
     *   @ p a r a m     D a t a :   D a t a   t o   b e   w r i t t e n   i n   t h e   s p e c i f i e d   R T C   B a c k u p   d a t a   r e g i s t e r .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R T C E x _ B K U P W r i t e ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   B a c k u p R e g i s t e r ,   u i n t 3 2 _ t   D a t a )  
 {  
     u i n t 3 2 _ t   t m p   =   0 U ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ B K P ( B a c k u p R e g i s t e r ) ) ;  
  
     t m p   =   ( u i n t 3 2 _ t ) B K P _ B A S E ;  
     t m p   + =   ( B a c k u p R e g i s t e r   *   4 U ) ;  
  
     * ( _ _ I O   u i n t 3 2 _ t   * )   t m p   =   ( D a t a   &   B K P _ D R 1 _ D ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   d a t a   f r o m   t h e   s p e c i f i e d   R T C   B a c k u p   d a t a   R e g i s t e r .  
     *   @ p a r a m     h r t c :   p o i n t e r   t o   a   R T C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   R T C .  
     *   @ p a r a m     B a c k u p R e g i s t e r :   R T C   B a c k u p   d a t a   R e g i s t e r   n u m b e r .  
     *                     T h i s   p a r a m e t e r   c a n   b e :   R T C _ B K P _ D R x   w h e r e   x   c a n   b e   f r o m   1   t o   1 0   ( o r   4 2 )   t o  
     *                                                                   s p e c i f y   t h e   r e g i s t e r   ( d e p e n d i n g   d e v i c e s ) .  
     *   @ r e t v a l   R e a d   v a l u e  
     * /  
 u i n t 3 2 _ t   H A L _ R T C E x _ B K U P R e a d ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   B a c k u p R e g i s t e r )  
 {  
     u i n t 3 2 _ t   b a c k u p r e g i s t e r   =   0 U ;  
     u i n t 3 2 _ t   p v a l u e   =   0 U ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h r t c ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ B K P ( B a c k u p R e g i s t e r ) ) ;  
  
     b a c k u p r e g i s t e r   =   ( u i n t 3 2 _ t ) B K P _ B A S E ;  
     b a c k u p r e g i s t e r   + =   ( B a c k u p R e g i s t e r   *   4 U ) ;  
  
     p v a l u e   =   ( * ( _ _ I O   u i n t 3 2 _ t   * ) ( b a c k u p r e g i s t e r ) )   &   B K P _ D R 1 _ D ;  
  
     / *   R e a d   t h e   s p e c i f i e d   r e g i s t e r   * /  
     r e t u r n   p v a l u e ;  
 }  
  
  
 / * *  
     *   @ b r i e f     S e t s   t h e   S m o o t h   c a l i b r a t i o n   p a r a m e t e r s .  
     *   @ p a r a m     h r t c :   R T C   h a n d l e  
     *   @ p a r a m     S m o o t h C a l i b P e r i o d :   N o t   u s e d   ( o n l y   p r e s e n t   f o r   c o m p a t i b i l i t y   w i t h   a n o t h e r   f a m i l i e s )  
     *   @ p a r a m     S m o o t h C a l i b P l u s P u l s e s :   N o t   u s e d   ( o n l y   p r e s e n t   f o r   c o m p a t i b i l i t y   w i t h   a n o t h e r   f a m i l i e s )  
     *   @ p a r a m     S m o u t h C a l i b M i n u s P u l s e s V a l u e :   s p e c i f i e s   t h e   R T C   C l o c k   C a l i b r a t i o n   v a l u e .  
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   n u m b e r   b e t w e e n   0   a n d   0 x 7 F .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ R T C E x _ S e t S m o o t h C a l i b ( R T C _ H a n d l e T y p e D e f   * h r t c ,   u i n t 3 2 _ t   S m o o t h C a l i b P e r i o d ,   u i n t 3 2 _ t   S m o o t h C a l i b P l u s P u l s e s ,   u i n t 3 2 _ t   S m o u t h C a l i b M i n u s P u l s e s V a l u e )  
 {  
     / *   C h e c k   i n p u t   p a r a m e t e r s   * /  
     i f   ( h r t c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( S m o o t h C a l i b P e r i o d ) ;  
     U N U S E D ( S m o o t h C a l i b P l u s P u l s e s ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ S M O O T H _ C A L I B _ M I N U S ( S m o u t h C a l i b M i n u s P u l s e s V a l u e ) ) ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h r t c ) ;  
  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ B U S Y ;  
  
     / *   S e t s   R T C   C l o c k   C a l i b r a t i o n   v a l u e . * /  
     M O D I F Y _ R E G ( B K P - > R T C C R ,   B K P _ R T C C R _ C A L ,   S m o u t h C a l i b M i n u s P u l s e s V a l u e ) ;  
  
     / *   C h a n g e   R T C   s t a t e   * /  
     h r t c - > S t a t e   =   H A L _ R T C _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h r t c ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
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
 # e n d i f   / *   H A L _ R T C _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  
  