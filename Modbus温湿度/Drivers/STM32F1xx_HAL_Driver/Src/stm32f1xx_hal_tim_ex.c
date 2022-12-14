??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ t i m _ e x . c 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       T I M   H A L   m o d u l e   d r i v e r . 
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g 
     *                     f u n c t i o n a l i t i e s   o f   t h e   T i m e r   E x t e n d e d   p e r i p h e r a l : 
     *                       +   T i m e   H a l l   S e n s o r   I n t e r f a c e   I n i t i a l i z a t i o n 
     *                       +   T i m e   H a l l   S e n s o r   I n t e r f a c e   S t a r t 
     *                       +   T i m e   C o m p l e m e n t a r y   s i g n a l   b r e a k   a n d   d e a d   t i m e   c o n f i g u r a t i o n 
     *                       +   T i m e   M a s t e r   a n d   S l a v e   s y n c h r o n i z a t i o n   c o n f i g u r a t i o n 
     *                       +   T i m e r   r e m a p p i n g   c a p a b i l i t i e s   c o n f i g u r a t i o n 
     @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                             # # # # #   T I M E R   E x t e n d e d   f e a t u r e s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h e   T i m e r   E x t e n d e d   f e a t u r e s   i n c l u d e : 
         ( # )   C o m p l e m e n t a r y   o u t p u t s   w i t h   p r o g r a m m a b l e   d e a d - t i m e   f o r   : 
                 ( + + )   O u t p u t   C o m p a r e 
                 ( + + )   P W M   g e n e r a t i o n   ( E d g e   a n d   C e n t e r - a l i g n e d   M o d e ) 
                 ( + + )   O n e - p u l s e   m o d e   o u t p u t 
         ( # )   S y n c h r o n i z a t i o n   c i r c u i t   t o   c o n t r o l   t h e   t i m e r   w i t h   e x t e r n a l   s i g n a l s   a n d   t o 
                 i n t e r c o n n e c t   s e v e r a l   t i m e r s   t o g e t h e r . 
         ( # )   B r e a k   i n p u t   t o   p u t   t h e   t i m e r   o u t p u t   s i g n a l s   i n   r e s e t   s t a t e   o r   i n   a   k n o w n   s t a t e . 
         ( # )   S u p p o r t s   i n c r e m e n t a l   ( q u a d r a t u r e )   e n c o d e r   a n d   h a l l - s e n s o r   c i r c u i t r y   f o r 
                 p o s i t i o n i n g   p u r p o s e s 
 
                         # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
         [ . . ] 
           ( # )   I n i t i a l i z e   t h e   T I M   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   f o l l o w i n g   f u n c t i o n s 
                   d e p e n d i n g   o n   t h e   s e l e c t e d   f e a t u r e : 
                       ( + + )   H a l l   S e n s o r   o u t p u t   :   H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t ( ) 
 
           ( # )   I n i t i a l i z e   t h e   T I M   l o w   l e v e l   r e s o u r c e s   : 
                 ( # # )   E n a b l e   t h e   T I M   i n t e r f a c e   c l o c k   u s i n g   _ _ H A L _ R C C _ T I M x _ C L K _ E N A B L E ( ) ; 
                 ( # # )   T I M   p i n s   c o n f i g u r a t i o n 
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   T I M   G P I O s   u s i n g   t h e   f o l l o w i n g   f u n c t i o n : 
                             _ _ H A L _ R C C _ G P I O x _ C L K _ E N A B L E ( ) ; 
                         ( + + + )   C o n f i g u r e   t h e s e   T I M   p i n s   i n   A l t e r n a t e   f u n c t i o n   m o d e   u s i n g   H A L _ G P I O _ I n i t ( ) ; 
 
           ( # )   T h e   e x t e r n a l   C l o c k   c a n   b e   c o n f i g u r e d ,   i f   n e e d e d   ( t h e   d e f a u l t   c l o c k   i s   t h e 
                   i n t e r n a l   c l o c k   f r o m   t h e   A P B x ) ,   u s i n g   t h e   f o l l o w i n g   f u n c t i o n : 
                   H A L _ T I M _ C o n f i g C l o c k S o u r c e ,   t h e   c l o c k   c o n f i g u r a t i o n   s h o u l d   b e   d o n e   b e f o r e 
                   a n y   s t a r t   f u n c t i o n . 
 
           ( # )   C o n f i g u r e   t h e   T I M   i n   t h e   d e s i r e d   f u n c t i o n i n g   m o d e   u s i n g   o n e   o f   t h e 
                   i n i t i a l i z a t i o n   f u n c t i o n   o f   t h i s   d r i v e r : 
                     ( + + )   H A L _ T I M E x _ H a l l S e n s o r _ I n i t ( )   a n d   H A L _ T I M E x _ C o n f i g C o m m u t E v e n t ( ) :   t o   u s e   t h e 
                               T i m e r   H a l l   S e n s o r   I n t e r f a c e   a n d   t h e   c o m m u t a t i o n   e v e n t   w i t h   t h e   c o r r e s p o n d i n g 
                               I n t e r r u p t   a n d   D M A   r e q u e s t   i f   n e e d e d   ( N o t e   t h a t   O n e   T i m e r   i s   u s e d   t o   i n t e r f a c e 
                               w i t h   t h e   H a l l   s e n s o r   I n t e r f a c e   a n d   a n o t h e r   T i m e r   s h o u l d   b e   u s e d   t o   u s e 
                               t h e   c o m m u t a t i o n   e v e n t ) . 
 
           ( # )   A c t i v a t e   t h e   T I M   p e r i p h e r a l   u s i n g   o n e   o f   t h e   s t a r t   f u n c t i o n s : 
                       ( + + )   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   :   H A L _ T I M E x _ O C N _ S t a r t ( ) ,   H A L _ T I M E x _ O C N _ S t a r t _ D M A ( ) , 
                                 H A L _ T I M E x _ O C N _ S t a r t _ I T ( ) 
                       ( + + )   C o m p l e m e n t a r y   P W M   g e n e r a t i o n   :   H A L _ T I M E x _ P W M N _ S t a r t ( ) ,   H A L _ T I M E x _ P W M N _ S t a r t _ D M A ( ) , 
                                 H A L _ T I M E x _ P W M N _ S t a r t _ I T ( ) 
                       ( + + )   C o m p l e m e n t a r y   O n e - p u l s e   m o d e   o u t p u t   :   H A L _ T I M E x _ O n e P u l s e N _ S t a r t ( ) ,   H A L _ T I M E x _ O n e P u l s e N _ S t a r t _ I T ( ) 
                       ( + + )   H a l l   S e n s o r   o u t p u t   :   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t ( ) ,   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t _ D M A ( ) , 
                                 H A L _ T I M E x _ H a l l S e n s o r _ S t a r t _ I T ( ) . 
 
     @ e n d v e r b a t i m 
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h " 
 
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x   T I M E x 
     *   @ b r i e f   T I M   E x t e n d e d   H A L   m o d u l e   d r i v e r 
     *   @ { 
     * / 
 
 # i f d e f   H A L _ T I M _ M O D U L E _ E N A B L E D 
 
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 s t a t i c   v o i d   T I M _ D M A D e l a y P u l s e N C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 s t a t i c   v o i d   T I M _ D M A E r r o r C C x N ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 s t a t i c   v o i d   T I M _ C C x N C h a n n e l C m d ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   C h a n n e l N S t a t e ) ; 
 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s   T I M   E x t e n d e d   E x p o r t e d   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   E x t e n d e d   T i m e r   H a l l   S e n s o r   f u n c t i o n s 
     *   @ b r i e f         T i m e r   H a l l   S e n s o r   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                             # # # # #   T i m e r   H a l l   S e n s o r   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   T I M   H A L   S e n s o r . 
         ( + )   D e - i n i t i a l i z e   T I M   H A L   S e n s o r . 
         ( + )   S t a r t   t h e   H a l l   S e n s o r   I n t e r f a c e . 
         ( + )   S t o p   t h e   H a l l   S e n s o r   I n t e r f a c e . 
         ( + )   S t a r t   t h e   H a l l   S e n s o r   I n t e r f a c e   a n d   e n a b l e   i n t e r r u p t s . 
         ( + )   S t o p   t h e   H a l l   S e n s o r   I n t e r f a c e   a n d   d i s a b l e   i n t e r r u p t s . 
         ( + )   S t a r t   t h e   H a l l   S e n s o r   I n t e r f a c e   a n d   e n a b l e   D M A   t r a n s f e r s . 
         ( + )   S t o p   t h e   H a l l   S e n s o r   I n t e r f a c e   a n d   d i s a b l e   D M A   t r a n s f e r s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   H a l l   S e n s o r   I n t e r f a c e   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e . 
     *   @ n o t e       W h e n   t h e   t i m e r   i n s t a n c e   i s   i n i t i a l i z e d   i n   H a l l   S e n s o r   I n t e r f a c e   m o d e , 
     *                   t i m e r   c h a n n e l s   1   a n d   c h a n n e l   2   a r e   r e s e r v e d   a n d   c a n n o t   b e   u s e d   f o r 
     *                   o t h e r   p u r p o s e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     s C o n f i g   T I M   H a l l   S e n s o r   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ H a l l S e n s o r _ I n i t T y p e D e f   * s C o n f i g ) 
 { 
     T I M _ O C _ I n i t T y p e D e f   O C _ C o n f i g ; 
 
     / *   C h e c k   t h e   T I M   h a n d l e   a l l o c a t i o n   * / 
     i f   ( h t i m   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C O U N T E R _ M O D E ( h t i m - > I n i t . C o u n t e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K D I V I S I O N _ D I V ( h t i m - > I n i t . C l o c k D i v i s i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( h t i m - > I n i t . A u t o R e l o a d P r e l o a d ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ P O L A R I T Y ( s C o n f i g - > I C 1 P o l a r i t y ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ P R E S C A L E R ( s C o n f i g - > I C 1 P r e s c a l e r ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ F I L T E R ( s C o n f i g - > I C 1 F i l t e r ) ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * / 
         h t i m - > L o c k   =   H A L _ U N L O C K E D ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
         / *   R e s e t   i n t e r r u p t   c a l l b a c k s   t o   l e g a c y   w e e k   c a l l b a c k s   * / 
         T I M _ R e s e t C a l l b a c k ( h t i m ) ; 
 
         i f   ( h t i m - > H a l l S e n s o r _ M s p I n i t C a l l b a c k   = =   N U L L ) 
         { 
             h t i m - > H a l l S e n s o r _ M s p I n i t C a l l b a c k   =   H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t ; 
         } 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         h t i m - > H a l l S e n s o r _ M s p I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
         H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   C o n f i g u r e   t h e   T i m e   b a s e   i n   t h e   E n c o d e r   M o d e   * / 
     T I M _ B a s e _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & h t i m - > I n i t ) ; 
 
     / *   C o n f i g u r e   t h e   C h a n n e l   1   a s   I n p u t   C h a n n e l   t o   i n t e r f a c e   w i t h   t h e   t h r e e   O u t p u t s   o f   t h e     H a l l   s e n s o r   * / 
     T I M _ T I 1 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g - > I C 1 P o l a r i t y ,   T I M _ I C S E L E C T I O N _ T R C ,   s C o n f i g - > I C 1 F i l t e r ) ; 
 
     / *   R e s e t   t h e   I C 1 P S C   B i t s   * / 
     h t i m - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ I C 1 P S C ; 
     / *   S e t   t h e   I C 1 P S C   v a l u e   * / 
     h t i m - > I n s t a n c e - > C C M R 1   | =   s C o n f i g - > I C 1 P r e s c a l e r ; 
 
     / *   E n a b l e   t h e   H a l l   s e n s o r   i n t e r f a c e   ( X O R   f u n c t i o n   o f   t h e   t h r e e   i n p u t s )   * / 
     h t i m - > I n s t a n c e - > C R 2   | =   T I M _ C R 2 _ T I 1 S ; 
 
     / *   S e l e c t   t h e   T I M _ T S _ T I 1 F _ E D   s i g n a l   a s   I n p u t   t r i g g e r   f o r   t h e   T I M   * / 
     h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ T S ; 
     h t i m - > I n s t a n c e - > S M C R   | =   T I M _ T S _ T I 1 F _ E D ; 
 
     / *   U s e   t h e   T I M _ T S _ T I 1 F _ E D   s i g n a l   t o   r e s e t   t h e   T I M   c o u n t e r   e a c h   e d g e   d e t e c t i o n   * / 
     h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ S M S ; 
     h t i m - > I n s t a n c e - > S M C R   | =   T I M _ S L A V E M O D E _ R E S E T ; 
 
     / *   P r o g r a m   c h a n n e l   2   i n   P W M   2   m o d e   w i t h   t h e   d e s i r e d   C o m m u t a t i o n _ D e l a y * / 
     O C _ C o n f i g . O C F a s t M o d e   =   T I M _ O C F A S T _ D I S A B L E ; 
     O C _ C o n f i g . O C I d l e S t a t e   =   T I M _ O C I D L E S T A T E _ R E S E T ; 
     O C _ C o n f i g . O C M o d e   =   T I M _ O C M O D E _ P W M 2 ; 
     O C _ C o n f i g . O C N I d l e S t a t e   =   T I M _ O C N I D L E S T A T E _ R E S E T ; 
     O C _ C o n f i g . O C N P o l a r i t y   =   T I M _ O C N P O L A R I T Y _ H I G H ; 
     O C _ C o n f i g . O C P o l a r i t y   =   T I M _ O C P O L A R I T Y _ H I G H ; 
     O C _ C o n f i g . P u l s e   =   s C o n f i g - > C o m m u t a t i o n _ D e l a y ; 
 
     T I M _ O C 2 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & O C _ C o n f i g ) ; 
 
     / *   S e l e c t   O C 2 R E F   a s   t r i g g e r   o u t p u t   o n   T R G O :   w r i t e   t h e   M M S   b i t s   i n   t h e   T I M x _ C R 2 
         r e g i s t e r   t o   1 0 1   * / 
     h t i m - > I n s t a n c e - > C R 2   & =   ~ T I M _ C R 2 _ M M S ; 
     h t i m - > I n s t a n c e - > C R 2   | =   T I M _ T R G O _ O C 2 R E F ; 
 
     / *   I n i t i a l i z e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   I n i t i a l i z e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   I n i t i a l i z e   t h e   T I M   s t a t e * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   T I M   H a l l   S e n s o r   i n t e r f a c e 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   D i s a b l e   t h e   T I M   P e r i p h e r a l   C l o c k   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     i f   ( h t i m - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k   = =   N U L L ) 
     { 
         h t i m - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M E x _ H a l l S e n s o r _ M s p D e I n i t ; 
     } 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * / 
     h t i m - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   * / 
     H A L _ T I M E x _ H a l l S e n s o r _ M s p D e I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ; 
 
     / *   C h a n g e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
 
     / *   C h a n g e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E S E T ; 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   H a l l   S e n s o r   M S P . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   T I M   H a l l   S e n s o r   M S P . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M E x _ H a l l S e n s o r _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M E x _ H a l l S e n s o r _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   H a l l   S e n s o r   I n t e r f a c e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l s   s t a t e   * / 
     i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   1 
     ( i n   t h e   H a l l   S e n s o r   I n t e r f a c e   t h e   t h r e e   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1 , 
     T I M _ C H A N N E L _ 2   a n d   T I M _ C H A N N E L _ 3 )   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   H a l l   s e n s o r   I n t e r f a c e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l s   1 ,   2   a n d   3 
     ( i n   t h e   H a l l   S e n s o r   I n t e r f a c e   t h e   t h r e e   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1 , 
     T I M _ C H A N N E L _ 2   a n d   T I M _ C H A N N E L _ 3 )   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   H a l l   S e n s o r   I n t e r f a c e   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l s   s t a t e   * / 
     i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   c a p t u r e   c o m p a r e   I n t e r r u p t s   1   e v e n t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
 
     / *   E n a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   1 
     ( i n   t h e   H a l l   S e n s o r   I n t e r f a c e   t h e   t h r e e   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1 , 
     T I M _ C H A N N E L _ 2   a n d   T I M _ C H A N N E L _ 3 )   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   H a l l   S e n s o r   I n t e r f a c e   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   1 
     ( i n   t h e   H a l l   S e n s o r   I n t e r f a c e   t h e   t h r e e   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1 , 
     T I M _ C H A N N E L _ 2   a n d   T I M _ C H A N N E L _ 3 )   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   I n t e r r u p t s   e v e n t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   H a l l   S e n s o r   I n t e r f a c e   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     p D a t a   T h e   d e s t i n a t i o n   B u f f e r   a d d r e s s . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   T I M   p e r i p h e r a l   t o   m e m o r y . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( ( c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( ( c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                       & &   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         i f   ( ( p D a t a   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   E n a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   1 
     ( i n   t h e   H a l l   S e n s o r   I n t e r f a c e   t h e   t h r e e   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1 , 
     T I M _ C H A N N E L _ 2   a n d   T I M _ C H A N N E L _ 3 )   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   S e t   t h e   D M A   I n p u t   C a p t u r e   1   C a l l b a c k s   * / 
     h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
     h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
     / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
     h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
     / *   E n a b l e   t h e   D M A   c h a n n e l   f o r   C a p t u r e   1 * / 
     i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 ,   ( u i n t 3 2 _ t ) p D a t a ,   L e n g t h )   ! =   H A L _ O K ) 
     { 
         / *   R e t u r n   e r r o r   s t a t u s   * / 
         r e t u r n   H A L _ E R R O R ; 
     } 
     / *   E n a b l e   t h e   c a p t u r e   c o m p a r e   1   I n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   H a l l   S e n s o r   I n t e r f a c e   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ H A L L _ S E N S O R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   1 
     ( i n   t h e   H a l l   S e n s o r   I n t e r f a c e   t h e   t h r e e   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1 , 
     T I M _ C H A N N E L _ 2   a n d   T I M _ C H A N N E L _ 3 )   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
 
 
     / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   I n t e r r u p t s   1   e v e n t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
 
     ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   E x t e n d e d   T i m e r   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   f u n c t i o n s 
     *     @ b r i e f       T i m e r   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                             # # # # #   T i m e r   C o m p l e m e n t a r y   O u t p u t   C o m p a r e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   O u t p u t   C o m p a r e / P W M . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   O u t p u t   C o m p a r e / P W M . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   O u t p u t   C o m p a r e / P W M   a n d   e n a b l e   i n t e r r u p t s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   O u t p u t   C o m p a r e / P W M   a n d   d i s a b l e   i n t e r r u p t s . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   O u t p u t   C o m p a r e / P W M   a n d   e n a b l e   D M A   t r a n s f e r s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   O u t p u t   C o m p a r e / P W M   a n d   d i s a b l e   D M A   t r a n s f e r s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   o n   t h e   c o m p l e m e n t a r y 
     *                   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   N   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   o n   t h e   c o m p l e m e n t a r y 
     *                   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   N   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e 
     *                   o n   t h e   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   O C   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   E n a b l e   t h e   T I M   O u t p u t   C o m p a r e   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   E n a b l e   t h e   T I M   O u t p u t   C o m p a r e   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   E n a b l e   t h e   T I M   O u t p u t   C o m p a r e   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   T I M   B r e a k   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ B R E A K ) ; 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   N   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e 
     *                   o n   t h e   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p c c e r ; 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   O u t p u t   C o m p a r e   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   O u t p u t   C o m p a r e   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   O u t p u t   C o m p a r e   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   N   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   T I M   B r e a k   i n t e r r u p t   ( o n l y   i f   n o   m o r e   c h a n n e l   i s   a c t i v e )   * / 
     t m p c c e r   =   h t i m - > I n s t a n c e - > C C E R ; 
     i f   ( ( t m p c c e r   &   ( T I M _ C C E R _ C C 1 N E   |   T I M _ C C E R _ C C 2 N E   |   T I M _ C C E R _ C C 3 N E ) )   = =   ( u i n t 3 2 _ t ) R E S E T ) 
     { 
         _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ B R E A K ) ; 
     } 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e 
     *                   o n   t h e   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ p a r a m     p D a t a   T h e   s o u r c e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   T I M   p e r i p h e r a l 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         i f   ( ( p D a t a   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e N C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r C C x N   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   O u t p u t   C o m p a r e   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e N C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r C C x N   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 2 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   O u t p u t   C o m p a r e   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e N C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r C C x N   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 3 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   O u t p u t   C o m p a r e   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   N   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e 
     *                   o n   t h e   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O C N _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   O u t p u t   C o m p a r e   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   O u t p u t   C o m p a r e   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   O u t p u t   C o m p a r e   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   N   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   E x t e n d e d   T i m e r   C o m p l e m e n t a r y   P W M   f u n c t i o n s 
     *   @ b r i e f         T i m e r   C o m p l e m e n t a r y   P W M   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                   # # # # #   T i m e r   C o m p l e m e n t a r y   P W M   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   P W M . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   P W M . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   P W M   a n d   e n a b l e   i n t e r r u p t s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   P W M   a n d   d i s a b l e   i n t e r r u p t s . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   P W M   a n d   e n a b l e   D M A   t r a n s f e r s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   P W M   a n d   d i s a b l e   D M A   t r a n s f e r s . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   I n p u t   C a p t u r e   m e a s u r e m e n t . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   I n p u t   C a p t u r e . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   I n p u t   C a p t u r e   a n d   e n a b l e   i n t e r r u p t s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   I n p u t   C a p t u r e   a n d   d i s a b l e   i n t e r r u p t s . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   I n p u t   C a p t u r e   a n d   e n a b l e   D M A   t r a n s f e r s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   I n p u t   C a p t u r e   a n d   d i s a b l e   D M A   t r a n s f e r s . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   O n e   P u l s e   g e n e r a t i o n . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   O n e   P u l s e . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   O n e   P u l s e   a n d   e n a b l e   i n t e r r u p t s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   O n e   P u l s e   a n d   d i s a b l e   i n t e r r u p t s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   P W M   s i g n a l   g e n e r a t i o n   o n   t h e   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   c o m p l e m e n t a r y   P W M   o u t p u t     * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   P W M   s i g n a l   g e n e r a t i o n   o n   t h e   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   D i s a b l e   t h e   c o m p l e m e n t a r y   P W M   o u t p u t     * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   P W M   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e   o n   t h e 
     *                   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   T I M   B r e a k   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ B R E A K ) ; 
 
     / *   E n a b l e   t h e   c o m p l e m e n t a r y   P W M   o u t p u t     * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   P W M   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e   o n   t h e 
     *                   c o m p l e m e n t a r y   o u t p u t . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   c o m p l e m e n t a r y   P W M   o u t p u t     * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   T I M   B r e a k   i n t e r r u p t   ( o n l y   i f   n o   m o r e   c h a n n e l   i s   a c t i v e )   * / 
     t m p c c e r   =   h t i m - > I n s t a n c e - > C C E R ; 
     i f   ( ( t m p c c e r   &   ( T I M _ C C E R _ C C 1 N E   |   T I M _ C C E R _ C C 2 N E   |   T I M _ C C E R _ C C 3 N E ) )   = =   ( u i n t 3 2 _ t ) R E S E T ) 
     { 
         _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ B R E A K ) ; 
     } 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   P W M   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e   o n   t h e 
     *                   c o m p l e m e n t a r y   o u t p u t 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ p a r a m     p D a t a   T h e   s o u r c e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   T I M   p e r i p h e r a l 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         i f   ( ( p D a t a   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e N C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r C C x N   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e N C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r C C x N   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 2 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e N C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r C C x N   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 3 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   c o m p l e m e n t a r y   P W M   o u t p u t     * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   P W M   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e   o n   t h e   c o m p l e m e n t a r y 
     *                   o u t p u t 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ P W M N _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   c o m p l e m e n t a r y   P W M   o u t p u t   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   E x t e n d e d   T i m e r   C o m p l e m e n t a r y   O n e   P u l s e   f u n c t i o n s 
     *   @ b r i e f         T i m e r   C o m p l e m e n t a r y   O n e   P u l s e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                 # # # # #   T i m e r   C o m p l e m e n t a r y   O n e   P u l s e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   O n e   P u l s e   g e n e r a t i o n . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   O n e   P u l s e . 
         ( + )   S t a r t   t h e   C o m p l e m e n t a r y   O n e   P u l s e   a n d   e n a b l e   i n t e r r u p t s . 
         ( + )   S t o p   t h e   C o m p l e m e n t a r y   O n e   P u l s e   a n d   d i s a b l e   i n t e r r u p t s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n   o n   t h e   c o m p l e m e n t a r y 
     *                   o u t p u t . 
     *   @ n o t e   O u t p u t C h a n n e l   m u s t   m a t c h   t h e   p u l s e   o u t p u t   c h a n n e l   c h o s e n   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   p u l s e   o u t p u t   c h a n n e l   t o   e n a b l e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     u i n t 3 2 _ t   i n p u t _ c h a n n e l   =   ( O u t p u t C h a n n e l   = =   T I M _ C H A N N E L _ 1 )   ?   T I M _ C H A N N E L _ 2   :   T I M _ C H A N N E L _ 1 ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l s   s t a t e   * / 
     i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   c o m p l e m e n t a r y   O n e   P u l s e   o u t p u t   c h a n n e l   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   i n p u t _ c h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n   o n   t h e   c o m p l e m e n t a r y 
     *                   o u t p u t . 
     *   @ n o t e   O u t p u t C h a n n e l   m u s t   m a t c h   t h e   p u l s e   o u t p u t   c h a n n e l   c h o s e n   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   p u l s e   o u t p u t   c h a n n e l   t o   d i s a b l e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     u i n t 3 2 _ t   i n p u t _ c h a n n e l   =   ( O u t p u t C h a n n e l   = =   T I M _ C H A N N E L _ 1 )   ?   T I M _ C H A N N E L _ 2   :   T I M _ C H A N N E L _ 1 ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ) ) ; 
 
     / *   D i s a b l e   t h e   c o m p l e m e n t a r y   O n e   P u l s e   o u t p u t   c h a n n e l   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   i n p u t _ c h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M     c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e   o n   t h e 
     *                   c o m p l e m e n t a r y   c h a n n e l . 
     *   @ n o t e   O u t p u t C h a n n e l   m u s t   m a t c h   t h e   p u l s e   o u t p u t   c h a n n e l   c h o s e n   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   p u l s e   o u t p u t   c h a n n e l   t o   e n a b l e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     u i n t 3 2 _ t   i n p u t _ c h a n n e l   =   ( O u t p u t C h a n n e l   = =   T I M _ C H A N N E L _ 1 )   ?   T I M _ C H A N N E L _ 2   :   T I M _ C H A N N E L _ 1 ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l s   s t a t e   * / 
     i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
 
     / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
 
     / *   E n a b l e   t h e   c o m p l e m e n t a r y   O n e   P u l s e   o u t p u t   c h a n n e l   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ,   T I M _ C C x N _ E N A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   i n p u t _ c h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e   o n   t h e 
     *                   c o m p l e m e n t a r y   c h a n n e l . 
     *   @ n o t e   O u t p u t C h a n n e l   m u s t   m a t c h   t h e   p u l s e   o u t p u t   c h a n n e l   c h o s e n   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   p u l s e   o u t p u t   c h a n n e l   t o   d i s a b l e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ O n e P u l s e N _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     u i n t 3 2 _ t   i n p u t _ c h a n n e l   =   ( O u t p u t C h a n n e l   = =   T I M _ C H A N N E L _ 1 )   ?   T I M _ C H A N N E L _ 2   :   T I M _ C H A N N E L _ 1 ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ) ) ; 
 
     / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
 
     / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
 
     / *   D i s a b l e   t h e   c o m p l e m e n t a r y   O n e   P u l s e   o u t p u t   c h a n n e l   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x N C h a n n e l C m d ( h t i m - > I n s t a n c e ,   O u t p u t C h a n n e l ,   T I M _ C C x N _ D I S A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   i n p u t _ c h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
     _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M     c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5   E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     *   @ b r i e f         P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                         # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
             ( + )   C o n f i g u r e   t h e   c o m m u t a t i o n   e v e n t   i n   c a s e   o f   u s e   o f   t h e   H a l l   s e n s o r   i n t e r f a c e . 
             ( + )   C o n f i g u r e   O u t p u t   c h a n n e l s   f o r   O C   a n d   P W M   m o d e . 
 
             ( + )   C o n f i g u r e   C o m p l e m e n t a r y   c h a n n e l s ,   b r e a k   f e a t u r e s   a n d   d e a d   t i m e . 
             ( + )   C o n f i g u r e   M a s t e r   s y n c h r o n i z a t i o n . 
             ( + )   C o n f i g u r e   t i m e r   r e m a p p i n g   c a p a b i l i t i e s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   T I M   c o m m u t a t i o n   e v e n t   s e q u e n c e . 
     *   @ n o t e     T h i s   f u n c t i o n   i s   m a n d a t o r y   t o   u s e   t h e   c o m m u t a t i o n   e v e n t   i n   o r d e r   t o 
     *                 u p d a t e   t h e   c o n f i g u r a t i o n   a t   e a c h   c o m m u t a t i o n   d e t e c t i o n   o n   t h e   T R G I   i n p u t   o f   t h e   T i m e r , 
     *                 t h e   t y p i c a l   u s e   o f   t h i s   f e a t u r e   i s   w i t h   t h e   u s e   o f   a n o t h e r   T i m e r ( i n t e r f a c e   T i m e r ) 
     *                 c o n f i g u r e d   i n   H a l l   s e n s o r   i n t e r f a c e ,   t h i s   i n t e r f a c e   T i m e r   w i l l   g e n e r a t e   t h e 
     *                 c o m m u t a t i o n   a t   i t s   T R G O   o u t p u t   ( c o n n e c t e d   t o   T i m e r   u s e d   i n   t h i s   f u n c t i o n )   e a c h   t i m e 
     *                 t h e   T I 1   o f   t h e   I n t e r f a c e   T i m e r   d e t e c t   a   c o m m u t a t i o n   a t   i t s   i n p u t   T I 1 . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     I n p u t T r i g g e r   t h e   I n t e r n a l   t r i g g e r   c o r r e s p o n d i n g   t o   t h e   T i m e r   I n t e r f a c i n g   w i t h   t h e   H a l l   s e n s o r 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ T S _ I T R 0 :   I n t e r n a l   t r i g g e r   0   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 1 :   I n t e r n a l   t r i g g e r   1   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 2 :   I n t e r n a l   t r i g g e r   2   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 3 :   I n t e r n a l   t r i g g e r   3   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ N O N E :   N o   t r i g g e r   i s   n e e d e d 
     *   @ p a r a m     C o m m u t a t i o n S o u r c e   t h e   C o m m u t a t i o n   E v e n t   s o u r c e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C O M M U T A T I O N _ T R G I :   C o m m u t a t i o n   s o u r c e   i s   t h e   T R G I   o f   t h e   I n t e r f a c e   T i m e r 
     *                         @ a r g   T I M _ C O M M U T A T I O N _ S O F T W A R E :     C o m m u t a t i o n   s o u r c e   i s   s e t   b y   s o f t w a r e   u s i n g   t h e   C O M G   b i t 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g C o m m u t E v e n t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t     I n p u t T r i g g e r , 
                                                                                             u i n t 3 2 _ t     C o m m u t a t i o n S o u r c e ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C O M M U T A T I O N _ E V E N T _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I N T E R N A L _ T R I G G E R E V E N T _ S E L E C T I O N ( I n p u t T r i g g e r ) ) ; 
 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     i f   ( ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 0 )   | |   ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 1 )   | | 
             ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 2 )   | |   ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 3 ) ) 
     { 
         / *   S e l e c t   t h e   I n p u t   t r i g g e r   * / 
         h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ T S ; 
         h t i m - > I n s t a n c e - > S M C R   | =   I n p u t T r i g g e r ; 
     } 
 
     / *   S e l e c t   t h e   C a p t u r e   C o m p a r e   p r e l o a d   f e a t u r e   * / 
     h t i m - > I n s t a n c e - > C R 2   | =   T I M _ C R 2 _ C C P C ; 
     / *   S e l e c t   t h e   C o m m u t a t i o n   e v e n t   s o u r c e   * / 
     h t i m - > I n s t a n c e - > C R 2   & =   ~ T I M _ C R 2 _ C C U S ; 
     h t i m - > I n s t a n c e - > C R 2   | =   C o m m u t a t i o n S o u r c e ; 
 
     / *   D i s a b l e   C o m m u t a t i o n   I n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C O M ) ; 
 
     / *   D i s a b l e   C o m m u t a t i o n   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C O M ) ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   T I M   c o m m u t a t i o n   e v e n t   s e q u e n c e   w i t h   i n t e r r u p t . 
     *   @ n o t e     T h i s   f u n c t i o n   i s   m a n d a t o r y   t o   u s e   t h e   c o m m u t a t i o n   e v e n t   i n   o r d e r   t o 
     *                 u p d a t e   t h e   c o n f i g u r a t i o n   a t   e a c h   c o m m u t a t i o n   d e t e c t i o n   o n   t h e   T R G I   i n p u t   o f   t h e   T i m e r , 
     *                 t h e   t y p i c a l   u s e   o f   t h i s   f e a t u r e   i s   w i t h   t h e   u s e   o f   a n o t h e r   T i m e r ( i n t e r f a c e   T i m e r ) 
     *                 c o n f i g u r e d   i n   H a l l   s e n s o r   i n t e r f a c e ,   t h i s   i n t e r f a c e   T i m e r   w i l l   g e n e r a t e   t h e 
     *                 c o m m u t a t i o n   a t   i t s   T R G O   o u t p u t   ( c o n n e c t e d   t o   T i m e r   u s e d   i n   t h i s   f u n c t i o n )   e a c h   t i m e 
     *                 t h e   T I 1   o f   t h e   I n t e r f a c e   T i m e r   d e t e c t   a   c o m m u t a t i o n   a t   i t s   i n p u t   T I 1 . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     I n p u t T r i g g e r   t h e   I n t e r n a l   t r i g g e r   c o r r e s p o n d i n g   t o   t h e   T i m e r   I n t e r f a c i n g   w i t h   t h e   H a l l   s e n s o r 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ T S _ I T R 0 :   I n t e r n a l   t r i g g e r   0   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 1 :   I n t e r n a l   t r i g g e r   1   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 2 :   I n t e r n a l   t r i g g e r   2   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 3 :   I n t e r n a l   t r i g g e r   3   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ N O N E :   N o   t r i g g e r   i s   n e e d e d 
     *   @ p a r a m     C o m m u t a t i o n S o u r c e   t h e   C o m m u t a t i o n   E v e n t   s o u r c e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C O M M U T A T I O N _ T R G I :   C o m m u t a t i o n   s o u r c e   i s   t h e   T R G I   o f   t h e   I n t e r f a c e   T i m e r 
     *                         @ a r g   T I M _ C O M M U T A T I O N _ S O F T W A R E :     C o m m u t a t i o n   s o u r c e   i s   s e t   b y   s o f t w a r e   u s i n g   t h e   C O M G   b i t 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g C o m m u t E v e n t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t     I n p u t T r i g g e r , 
                                                                                                   u i n t 3 2 _ t     C o m m u t a t i o n S o u r c e ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C O M M U T A T I O N _ E V E N T _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I N T E R N A L _ T R I G G E R E V E N T _ S E L E C T I O N ( I n p u t T r i g g e r ) ) ; 
 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     i f   ( ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 0 )   | |   ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 1 )   | | 
             ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 2 )   | |   ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 3 ) ) 
     { 
         / *   S e l e c t   t h e   I n p u t   t r i g g e r   * / 
         h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ T S ; 
         h t i m - > I n s t a n c e - > S M C R   | =   I n p u t T r i g g e r ; 
     } 
 
     / *   S e l e c t   t h e   C a p t u r e   C o m p a r e   p r e l o a d   f e a t u r e   * / 
     h t i m - > I n s t a n c e - > C R 2   | =   T I M _ C R 2 _ C C P C ; 
     / *   S e l e c t   t h e   C o m m u t a t i o n   e v e n t   s o u r c e   * / 
     h t i m - > I n s t a n c e - > C R 2   & =   ~ T I M _ C R 2 _ C C U S ; 
     h t i m - > I n s t a n c e - > C R 2   | =   C o m m u t a t i o n S o u r c e ; 
 
     / *   D i s a b l e   C o m m u t a t i o n   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C O M ) ; 
 
     / *   E n a b l e   t h e   C o m m u t a t i o n   I n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C O M ) ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   T I M   c o m m u t a t i o n   e v e n t   s e q u e n c e   w i t h   D M A . 
     *   @ n o t e     T h i s   f u n c t i o n   i s   m a n d a t o r y   t o   u s e   t h e   c o m m u t a t i o n   e v e n t   i n   o r d e r   t o 
     *                 u p d a t e   t h e   c o n f i g u r a t i o n   a t   e a c h   c o m m u t a t i o n   d e t e c t i o n   o n   t h e   T R G I   i n p u t   o f   t h e   T i m e r , 
     *                 t h e   t y p i c a l   u s e   o f   t h i s   f e a t u r e   i s   w i t h   t h e   u s e   o f   a n o t h e r   T i m e r ( i n t e r f a c e   T i m e r ) 
     *                 c o n f i g u r e d   i n   H a l l   s e n s o r   i n t e r f a c e ,   t h i s   i n t e r f a c e   T i m e r   w i l l   g e n e r a t e   t h e 
     *                 c o m m u t a t i o n   a t   i t s   T R G O   o u t p u t   ( c o n n e c t e d   t o   T i m e r   u s e d   i n   t h i s   f u n c t i o n )   e a c h   t i m e 
     *                 t h e   T I 1   o f   t h e   I n t e r f a c e   T i m e r   d e t e c t   a   c o m m u t a t i o n   a t   i t s   i n p u t   T I 1 . 
     *   @ n o t e     T h e   u s e r   s h o u l d   c o n f i g u r e   t h e   D M A   i n   h i s   o w n   s o f t w a r e ,   i n   T h i s   f u n c t i o n   o n l y   t h e   C O M D E   b i t   i s   s e t 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     I n p u t T r i g g e r   t h e   I n t e r n a l   t r i g g e r   c o r r e s p o n d i n g   t o   t h e   T i m e r   I n t e r f a c i n g   w i t h   t h e   H a l l   s e n s o r 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ T S _ I T R 0 :   I n t e r n a l   t r i g g e r   0   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 1 :   I n t e r n a l   t r i g g e r   1   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 2 :   I n t e r n a l   t r i g g e r   2   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ I T R 3 :   I n t e r n a l   t r i g g e r   3   s e l e c t e d 
     *                         @ a r g   T I M _ T S _ N O N E :   N o   t r i g g e r   i s   n e e d e d 
     *   @ p a r a m     C o m m u t a t i o n S o u r c e   t h e   C o m m u t a t i o n   E v e n t   s o u r c e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C O M M U T A T I O N _ T R G I :   C o m m u t a t i o n   s o u r c e   i s   t h e   T R G I   o f   t h e   I n t e r f a c e   T i m e r 
     *                         @ a r g   T I M _ C O M M U T A T I O N _ S O F T W A R E :     C o m m u t a t i o n   s o u r c e   i s   s e t   b y   s o f t w a r e   u s i n g   t h e   C O M G   b i t 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g C o m m u t E v e n t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t     I n p u t T r i g g e r , 
                                                                                                     u i n t 3 2 _ t     C o m m u t a t i o n S o u r c e ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C O M M U T A T I O N _ E V E N T _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I N T E R N A L _ T R I G G E R E V E N T _ S E L E C T I O N ( I n p u t T r i g g e r ) ) ; 
 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     i f   ( ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 0 )   | |   ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 1 )   | | 
             ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 2 )   | |   ( I n p u t T r i g g e r   = =   T I M _ T S _ I T R 3 ) ) 
     { 
         / *   S e l e c t   t h e   I n p u t   t r i g g e r   * / 
         h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ T S ; 
         h t i m - > I n s t a n c e - > S M C R   | =   I n p u t T r i g g e r ; 
     } 
 
     / *   S e l e c t   t h e   C a p t u r e   C o m p a r e   p r e l o a d   f e a t u r e   * / 
     h t i m - > I n s t a n c e - > C R 2   | =   T I M _ C R 2 _ C C P C ; 
     / *   S e l e c t   t h e   C o m m u t a t i o n   e v e n t   s o u r c e   * / 
     h t i m - > I n s t a n c e - > C R 2   & =   ~ T I M _ C R 2 _ C C U S ; 
     h t i m - > I n s t a n c e - > C R 2   | =   C o m m u t a t i o n S o u r c e ; 
 
     / *   E n a b l e   t h e   C o m m u t a t i o n   D M A   R e q u e s t   * / 
     / *   S e t   t h e   D M A   C o m m u t a t i o n   C a l l b a c k   * / 
     h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r C p l t C a l l b a c k   =   T I M E x _ D M A C o m m u t a t i o n C p l t ; 
     h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M E x _ D M A C o m m u t a t i o n H a l f C p l t ; 
     / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
     h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r ; 
 
     / *   D i s a b l e   C o m m u t a t i o n   I n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C O M ) ; 
 
     / *   E n a b l e   t h e   C o m m u t a t i o n   D M A   R e q u e s t   * / 
     _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C O M ) ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e s   t h e   T I M   i n   m a s t e r   m o d e . 
     *   @ p a r a m     h t i m   T I M   h a n d l e . 
     *   @ p a r a m     s M a s t e r C o n f i g   p o i n t e r   t o   a   T I M _ M a s t e r C o n f i g T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   s e l e c t e d   t r i g g e r   o u t p u t   ( T R G O )   a n d   t h e   M a s t e r / S l a v e 
     *                   m o d e . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ M a s t e r C o n f i g S y n c h r o n i z a t i o n ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                                                 T I M _ M a s t e r C o n f i g T y p e D e f   * s M a s t e r C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p c r 2 ; 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ M A S T E R _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ T R G O _ S O U R C E ( s M a s t e r C o n f i g - > M a s t e r O u t p u t T r i g g e r ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ M S M _ S T A T E ( s M a s t e r C o n f i g - > M a s t e r S l a v e M o d e ) ) ; 
 
     / *   C h e c k   i n p u t   s t a t e   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     / *   C h a n g e   t h e   h a n d l e r   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * / 
     t m p c r 2   =   h t i m - > I n s t a n c e - > C R 2 ; 
 
     / *   G e t   t h e   T I M x   S M C R   r e g i s t e r   v a l u e   * / 
     t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R ; 
 
     / *   R e s e t   t h e   M M S   B i t s   * / 
     t m p c r 2   & =   ~ T I M _ C R 2 _ M M S ; 
     / *   S e l e c t   t h e   T R G O   s o u r c e   * / 
     t m p c r 2   | =     s M a s t e r C o n f i g - > M a s t e r O u t p u t T r i g g e r ; 
 
     / *   U p d a t e   T I M x   C R 2   * / 
     h t i m - > I n s t a n c e - > C R 2   =   t m p c r 2 ; 
 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         / *   R e s e t   t h e   M S M   B i t   * / 
         t m p s m c r   & =   ~ T I M _ S M C R _ M S M ; 
         / *   S e t   m a s t e r   m o d e   * / 
         t m p s m c r   | =   s M a s t e r C o n f i g - > M a s t e r S l a v e M o d e ; 
 
         / *   U p d a t e   T I M x   S M C R   * / 
         h t i m - > I n s t a n c e - > S M C R   =   t m p s m c r ; 
     } 
 
     / *   C h a n g e   t h e   h t i m   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e s   t h e   B r e a k   f e a t u r e ,   d e a d   t i m e ,   L o c k   l e v e l ,   O S S I / O S S R   S t a t e 
     *                   a n d   t h e   A O E ( a u t o m a t i c   o u t p u t   e n a b l e ) . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     s B r e a k D e a d T i m e C o n f i g   p o i n t e r   t o   a   T I M _ C o n f i g B r e a k D e a d C o n f i g T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   B D T R   R e g i s t e r   c o n f i g u r a t i o n     i n f o r m a t i o n   f o r   t h e   T I M   p e r i p h e r a l . 
     *   @ n o t e       I n t e r r u p t s   c a n   b e   g e n e r a t e d   w h e n   a n   a c t i v e   l e v e l   i s   d e t e c t e d   o n   t h e 
     *                   b r e a k   i n p u t ,   t h e   b r e a k   2   i n p u t   o r   t h e   s y s t e m   b r e a k   i n p u t .   B r e a k 
     *                   i n t e r r u p t   c a n   b e   e n a b l e d   b y   c a l l i n g   t h e   @ r e f   _ _ H A L _ T I M _ E N A B L E _ I T   m a c r o . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ C o n f i g B r e a k D e a d T i m e ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                                 T I M _ B r e a k D e a d T i m e C o n f i g T y p e D e f   * s B r e a k D e a d T i m e C o n f i g ) 
 { 
     / *   K e e p   t h i s   v a r i a b l e   i n i t i a l i z e d   t o   0   a s   i t   i s   u s e d   t o   c o n f i g u r e   B D T R   r e g i s t e r   * / 
     u i n t 3 2 _ t   t m p b d t r   =   0 U ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ O S S R _ S T A T E ( s B r e a k D e a d T i m e C o n f i g - > O f f S t a t e R u n M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ O S S I _ S T A T E ( s B r e a k D e a d T i m e C o n f i g - > O f f S t a t e I D L E M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ L O C K _ L E V E L ( s B r e a k D e a d T i m e C o n f i g - > L o c k L e v e l ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D E A D T I M E ( s B r e a k D e a d T i m e C o n f i g - > D e a d T i m e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ B R E A K _ S T A T E ( s B r e a k D e a d T i m e C o n f i g - > B r e a k S t a t e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ B R E A K _ P O L A R I T Y ( s B r e a k D e a d T i m e C o n f i g - > B r e a k P o l a r i t y ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O M A T I C _ O U T P U T _ S T A T E ( s B r e a k D e a d T i m e C o n f i g - > A u t o m a t i c O u t p u t ) ) ; 
 
     / *   C h e c k   i n p u t   s t a t e   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     / *   S e t   t h e   L o c k   l e v e l ,   t h e   B r e a k   e n a b l e   B i t   a n d   t h e   P o l a r i t y ,   t h e   O S S R   S t a t e , 
           t h e   O S S I   S t a t e ,   t h e   d e a d   t i m e   v a l u e   a n d   t h e   A u t o m a t i c   O u t p u t   E n a b l e   B i t   * / 
 
     / *   S e t   t h e   B D T R   b i t s   * / 
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ D T G ,   s B r e a k D e a d T i m e C o n f i g - > D e a d T i m e ) ; 
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ L O C K ,   s B r e a k D e a d T i m e C o n f i g - > L o c k L e v e l ) ; 
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ O S S I ,   s B r e a k D e a d T i m e C o n f i g - > O f f S t a t e I D L E M o d e ) ; 
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ O S S R ,   s B r e a k D e a d T i m e C o n f i g - > O f f S t a t e R u n M o d e ) ; 
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ B K E ,   s B r e a k D e a d T i m e C o n f i g - > B r e a k S t a t e ) ; 
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ B K P ,   s B r e a k D e a d T i m e C o n f i g - > B r e a k P o l a r i t y ) ; 
     M O D I F Y _ R E G ( t m p b d t r ,   T I M _ B D T R _ A O E ,   s B r e a k D e a d T i m e C o n f i g - > A u t o m a t i c O u t p u t ) ; 
 
 
     / *   S e t   T I M x _ B D T R   * / 
     h t i m - > I n s t a n c e - > B D T R   =   t m p b d t r ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e s   t h e   T I M x   R e m a p p i n g   i n p u t   c a p a b i l i t i e s . 
     *   @ p a r a m     h t i m   T I M   h a n d l e . 
     *   @ p a r a m     R e m a p   s p e c i f i e s   t h e   T I M   r e m a p p i n g   s o u r c e . 
     * 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M E x _ R e m a p C o n f i g ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   R e m a p ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
     U N U S E D ( R e m a p ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 6   E x t e n d e d   C a l l b a c k s   f u n c t i o n s 
     *   @ b r i e f         E x t e n d e d   C a l l b a c k s   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                         # # # # #   E x t e n d e d   C a l l b a c k s   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   E x t e n d e d   T I M   c a l l b a c k   f u n c t i o n s : 
         ( + )   T i m e r   C o m m u t a t i o n   c a l l b a c k 
         ( + )   T i m e r   B r e a k   c a l l b a c k 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     H a l l   c o m m u t a t i o n   c h a n g e d   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M E x _ C o m m u t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M E x _ C o m m u t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 / * * 
     *   @ b r i e f     H a l l   c o m m u t a t i o n   c h a n g e d   h a l f   c o m p l e t e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M E x _ C o m m u t H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M E x _ C o m m u t H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     H a l l   B r e a k   d e t e c t i o n   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M E x _ B r e a k C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M E x _ B r e a k C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 7   E x t e n d e d   P e r i p h e r a l   S t a t e   f u n c t i o n s 
     *   @ b r i e f         E x t e n d e d   P e r i p h e r a l   S t a t e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                 # # # # #   E x t e n d e d   P e r i p h e r a l   S t a t e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   p e r i p h e r a l 
         a n d   t h e   d a t a   f l o w . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   H a l l   S e n s o r   i n t e r f a c e   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   H a l l   S e n s o r   h a n d l e 
     *   @ r e t v a l   H A L   s t a t e 
     * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M E x _ H a l l S e n s o r _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > S t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   a c t u a l   s t a t e   o f   t h e   T I M   c o m p l e m e n t a r y   c h a n n e l . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l N   T I M   C o m p l e m e n t a r y   c h a n n e l 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3 
     *   @ r e t v a l   T I M   C o m p l e m e n t a r y   c h a n n e l   s t a t e 
     * / 
 H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   H A L _ T I M E x _ G e t C h a n n e l N S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ,     u i n t 3 2 _ t   C h a n n e l N ) 
 { 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ s t a t e ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X N _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l N ) ) ; 
 
     c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l N ) ; 
 
     r e t u r n   c h a n n e l _ s t a t e ; 
 } 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   T I M E x _ P r i v a t e _ F u n c t i o n s   T I M E x   P r i v a t e   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     T I M   D M A   C o m m u t a t i o n   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M E x _ D M A C o m m u t a t i o n C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     / *   C h a n g e   t h e   h t i m   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > C o m m u t a t i o n C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M E x _ C o m m u t C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   C o m m u t a t i o n   h a l f   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M E x _ D M A C o m m u t a t i o n H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     / *   C h a n g e   t h e   h t i m   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > C o m m u t a t i o n H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M E x _ C o m m u t H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 } 
 
 
 / * * 
     *   @ b r i e f     T I M   D M A   D e l a y   P u l s e   c o m p l e t e   c a l l b a c k   ( c o m p l e m e n t a r y   c h a n n e l ) . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ D M A D e l a y P u l s e N C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 3 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 4 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 4 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   e r r o r   c a l l b a c k   ( c o m p l e m e n t a r y   c h a n n e l ) 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ D M A E r r o r C C x N ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 3 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > E r r o r C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ E r r o r C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
 } 
 
 / * * 
     *   @ b r i e f     E n a b l e s   o r   d i s a b l e s   t h e   T I M   C a p t u r e   C o m p a r e   C h a n n e l   x N . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     C h a n n e l   s p e c i f i e s   t h e   T I M   C h a n n e l 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3 
     *   @ p a r a m     C h a n n e l N S t a t e   s p e c i f i e s   t h e   T I M   C h a n n e l   C C x N E   b i t   n e w   s t a t e . 
     *                     T h i s   p a r a m e t e r   c a n   b e :   T I M _ C C x N _ E N A B L E   o r   T I M _ C C x N _ D i s a b l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ C C x N C h a n n e l C m d ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   C h a n n e l N S t a t e ) 
 { 
     u i n t 3 2 _ t   t m p ; 
 
     t m p   =   T I M _ C C E R _ C C 1 N E   < <   ( C h a n n e l   &   0 x 1 F U ) ;   / *   0 x 1 F U   =   3 1   b i t s   m a x   s h i f t   * / 
 
     / *   R e s e t   t h e   C C x N E   B i t   * / 
     T I M x - > C C E R   & =     ~ t m p ; 
 
     / *   S e t   o r   r e s e t   t h e   C C x N E   B i t   * / 
     T I M x - > C C E R   | =   ( u i n t 3 2 _ t ) ( C h a n n e l N S t a t e   < <   ( C h a n n e l   &   0 x 1 F U ) ) ;   / *   0 x 1 F U   =   3 1   b i t s   m a x   s h i f t   * / 
 } 
 / * * 
     *   @ } 
     * / 
 
 # e n d i f   / *   H A L _ T I M _ M O D U L E _ E N A B L E D   * / 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 