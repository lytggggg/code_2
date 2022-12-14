??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ p c d . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       P C D   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   U S B   P e r i p h e r a l   C o n t r o l l e r :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   P C D   H A L   d r i v e r   c a n   b e   u s e d   a s   f o l l o w s :  
  
           ( # )   D e c l a r e   a   P C D _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e ,   f o r   e x a m p l e :  
                   P C D _ H a n d l e T y p e D e f     h p c d ;  
  
           ( # )   F i l l   p a r a m e t e r s   o f   I n i t   s t r u c t u r e   i n   H C D   h a n d l e  
  
           ( # )   C a l l   H A L _ P C D _ I n i t ( )   A P I   t o   i n i t i a l i z e   t h e   P C D   p e r i p h e r a l   ( C o r e ,   D e v i c e   c o r e ,   . . . )  
  
           ( # )   I n i t i a l i z e   t h e   P C D   l o w   l e v e l   r e s o u r c e s   t h r o u g h   t h e   H A L _ P C D _ M s p I n i t ( )   A P I :  
                   ( # # )   E n a b l e   t h e   P C D / U S B   L o w   L e v e l   i n t e r f a c e   c l o c k   u s i n g  
                             ( + + + )   _ _ H A L _ R C C _ U S B _ C L K _ E N A B L E ( ) ;   F o r   U S B   D e v i c e   o n l y   F S   p e r i p h e r a l  
  
                   ( # # )   I n i t i a l i z e   t h e   r e l a t e d   G P I O   c l o c k s  
                   ( # # )   C o n f i g u r e   P C D   p i n - o u t  
                   ( # # )   C o n f i g u r e   P C D   N V I C   i n t e r r u p t  
  
           ( # ) A s s o c i a t e   t h e   U p p e r   U S B   d e v i c e   s t a c k   t o   t h e   H A L   P C D   D r i v e r :  
                   ( # # )   h p c d . p D a t a   =   p d e v ;  
  
           ( # ) E n a b l e   P C D   t r a n s m i s s i o n   a n d   r e c e p t i o n :  
                   ( # # )   H A L _ P C D _ S t a r t ( ) ;  
  
     @ e n d v e r b a t i m  
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
 / * *   @ d e f g r o u p   P C D   P C D  
     *   @ b r i e f   P C D   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ P C D _ M O D U L E _ E N A B L E D  
  
 # i f   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ P r i v a t e _ M a c r o s   P C D   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   P C D _ M I N ( a ,   b )     ( ( ( a )   <   ( b ) )   ?   ( a )   :   ( b ) )  
 # d e f i n e   P C D _ M A X ( a ,   b )     ( ( ( a )   >   ( b ) )   ?   ( a )   :   ( b ) )  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n s   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ P r i v a t e _ F u n c t i o n s   P C D   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ W r i t e E m p t y T x F i f o ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 3 2 _ t   e p n u m ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ E P _ O u t X f r C o m p l e t e _ i n t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 3 2 _ t   e p n u m ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ E P _ O u t S e t u p P a c k e t _ i n t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 3 2 _ t   e p n u m ) ;  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f   d e f i n e d   ( U S B )  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ E P _ I S R _ H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ D B _ T r a n s m i t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   P C D _ E P T y p e D e f   * e p ,   u i n t 1 6 _ t   w E P V a l ) ;  
 s t a t i c   u i n t 1 6 _ t   H A L _ P C D _ E P _ D B _ R e c e i v e ( P C D _ H a n d l e T y p e D e f   * h p c d ,   P C D _ E P T y p e D e f   * e p ,   u i n t 1 6 _ t   w E P V a l ) ;  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s   P C D   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   P C D   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   P C D _ I n i t T y p e D e f   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ;  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
     u i n t 8 _ t   i ;  
  
     / *   C h e c k   t h e   P C D   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h p c d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ P C D _ A L L _ I N S T A N C E ( h p c d - > I n s t a n c e ) ) ;  
  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
     U S B x   =   h p c d - > I n s t a n c e ;  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h p c d - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h p c d - > S O F C a l l b a c k   =   H A L _ P C D _ S O F C a l l b a c k ;  
         h p c d - > S e t u p S t a g e C a l l b a c k   =   H A L _ P C D _ S e t u p S t a g e C a l l b a c k ;  
         h p c d - > R e s e t C a l l b a c k   =   H A L _ P C D _ R e s e t C a l l b a c k ;  
         h p c d - > S u s p e n d C a l l b a c k   =   H A L _ P C D _ S u s p e n d C a l l b a c k ;  
         h p c d - > R e s u m e C a l l b a c k   =   H A L _ P C D _ R e s u m e C a l l b a c k ;  
         h p c d - > C o n n e c t C a l l b a c k   =   H A L _ P C D _ C o n n e c t C a l l b a c k ;  
         h p c d - > D i s c o n n e c t C a l l b a c k   =   H A L _ P C D _ D i s c o n n e c t C a l l b a c k ;  
         h p c d - > D a t a O u t S t a g e C a l l b a c k   =   H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ;  
         h p c d - > D a t a I n S t a g e C a l l b a c k   =   H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ;  
         h p c d - > I S O O U T I n c o m p l e t e C a l l b a c k   =   H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k ;  
         h p c d - > I S O I N I n c o m p l e t e C a l l b a c k   =   H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k ;  
  
         i f   ( h p c d - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h p c d - > M s p I n i t C a l l b a c k   =   H A L _ P C D _ M s p I n i t ;  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h p c d - > M s p I n i t C a l l b a c k ( h p c d ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C . . .   * /  
         H A L _ P C D _ M s p I n i t ( h p c d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S )   * /  
     }  
  
     h p c d - > S t a t e   =   H A L _ P C D _ S T A T E _ B U S Y ;  
  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
     / *   D i s a b l e   D M A   m o d e   f o r   F S   i n s t a n c e   * /  
     i f   ( ( U S B x - > C I D   &   ( 0 x 1 U   < <   8 ) )   = =   0 U )  
     {  
         h p c d - > I n i t . d m a _ e n a b l e   =   0 U ;  
     }  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
     / *   D i s a b l e   t h e   I n t e r r u p t s   * /  
     _ _ H A L _ P C D _ D I S A B L E ( h p c d ) ;  
  
     / * I n i t   t h e   C o r e   ( c o m m o n   i n i t . )   * /  
     i f   ( U S B _ C o r e I n i t ( h p c d - > I n s t a n c e ,   h p c d - > I n i t )   ! =   H A L _ O K )  
     {  
         h p c d - > S t a t e   =   H A L _ P C D _ S T A T E _ E R R O R ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   F o r c e   D e v i c e   M o d e * /  
     ( v o i d ) U S B _ S e t C u r r e n t M o d e ( h p c d - > I n s t a n c e ,   U S B _ D E V I C E _ M O D E ) ;  
  
     / *   I n i t   e n d p o i n t s   s t r u c t u r e s   * /  
     f o r   ( i   =   0 U ;   i   <   h p c d - > I n i t . d e v _ e n d p o i n t s ;   i + + )  
     {  
         / *   I n i t   e p   s t r u c t u r e   * /  
         h p c d - > I N _ e p [ i ] . i s _ i n   =   1 U ;  
         h p c d - > I N _ e p [ i ] . n u m   =   i ;  
         h p c d - > I N _ e p [ i ] . t x _ f i f o _ n u m   =   i ;  
         / *   C o n t r o l   u n t i l   e p   i s   a c t i v a t e d   * /  
         h p c d - > I N _ e p [ i ] . t y p e   =   E P _ T Y P E _ C T R L ;  
         h p c d - > I N _ e p [ i ] . m a x p a c k e t   =   0 U ;  
         h p c d - > I N _ e p [ i ] . x f e r _ b u f f   =   0 U ;  
         h p c d - > I N _ e p [ i ] . x f e r _ l e n   =   0 U ;  
     }  
  
     f o r   ( i   =   0 U ;   i   <   h p c d - > I n i t . d e v _ e n d p o i n t s ;   i + + )  
     {  
         h p c d - > O U T _ e p [ i ] . i s _ i n   =   0 U ;  
         h p c d - > O U T _ e p [ i ] . n u m   =   i ;  
         / *   C o n t r o l   u n t i l   e p   i s   a c t i v a t e d   * /  
         h p c d - > O U T _ e p [ i ] . t y p e   =   E P _ T Y P E _ C T R L ;  
         h p c d - > O U T _ e p [ i ] . m a x p a c k e t   =   0 U ;  
         h p c d - > O U T _ e p [ i ] . x f e r _ b u f f   =   0 U ;  
         h p c d - > O U T _ e p [ i ] . x f e r _ l e n   =   0 U ;  
     }  
  
     / *   I n i t   D e v i c e   * /  
     i f   ( U S B _ D e v I n i t ( h p c d - > I n s t a n c e ,   h p c d - > I n i t )   ! =   H A L _ O K )  
     {  
         h p c d - > S t a t e   =   H A L _ P C D _ S T A T E _ E R R O R ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     h p c d - > U S B _ A d d r e s s   =   0 U ;  
     h p c d - > S t a t e   =   H A L _ P C D _ S T A T E _ R E A D Y ;  
     ( v o i d ) U S B _ D e v D i s c o n n e c t ( h p c d - > I n s t a n c e ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   P C D   p e r i p h e r a l .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   C h e c k   t h e   P C D   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h p c d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     h p c d - > S t a t e   =   H A L _ P C D _ S T A T E _ B U S Y ;  
  
     / *   S t o p   D e v i c e   * /  
     i f   ( U S B _ S t o p D e v i c e ( h p c d - > I n s t a n c e )   ! =   H A L _ O K )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     i f   ( h p c d - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h p c d - > M s p D e I n i t C a l l b a c k   =   H A L _ P C D _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t     * /  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h p c d - > M s p D e I n i t C a l l b a c k ( h p c d ) ;  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   C L O C K ,   N V I C . * /  
     H A L _ P C D _ M s p D e I n i t ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h p c d - > S t a t e   =   H A L _ P C D _ S T A T E _ R E S E T ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   P C D   M S P .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ M s p I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   P C D   M S P .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ M s p D e I n i t ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   U S B   P C D   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   U S B   P C D   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ P C D _ S O F _ C B _ I D   U S B   P C D   S O F   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ S E T U P S T A G E _ C B _ I D   U S B   P C D   S e t u p   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ R E S E T _ C B _ I D   U S B   P C D   R e s e t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ S U S P E N D _ C B _ I D   U S B   P C D   S u s p e n d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ R E S U M E _ C B _ I D   U S B   P C D   R e s u m e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ C O N N E C T _ C B _ I D   U S B   P C D   C o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ D I S C O N N E C T _ C B _ I D   O T G   P C D   D i s c o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ M S P I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                       H A L _ P C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                       p P C D _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ P C D _ S O F _ C B _ I D   :  
                 h p c d - > S O F C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ S E T U P S T A G E _ C B _ I D   :  
                 h p c d - > S e t u p S t a g e C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ R E S E T _ C B _ I D   :  
                 h p c d - > R e s e t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ S U S P E N D _ C B _ I D   :  
                 h p c d - > S u s p e n d C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ R E S U M E _ C B _ I D   :  
                 h p c d - > R e s u m e C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ C O N N E C T _ C B _ I D   :  
                 h p c d - > C o n n e c t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ D I S C O N N E C T _ C B _ I D   :  
                 h p c d - > D i s c o n n e c t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ M S P I N I T _ C B _ I D   :  
                 h p c d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ M S P D E I N I T _ C B _ I D   :  
                 h p c d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ P C D _ M S P I N I T _ C B _ I D   :  
                 h p c d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ M S P D E I N I T _ C B _ I D   :  
                 h p c d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   U S B   P C D   C a l l b a c k  
     *                   U S B   P C D   c a l l a b c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   U S B   P C D   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ P C D _ S O F _ C B _ I D   U S B   P C D   S O F   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ S E T U P S T A G E _ C B _ I D   U S B   P C D   S e t u p   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ R E S E T _ C B _ I D   U S B   P C D   R e s e t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ S U S P E N D _ C B _ I D   U S B   P C D   S u s p e n d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ R E S U M E _ C B _ I D   U S B   P C D   R e s u m e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ C O N N E C T _ C B _ I D   U S B   P C D   C o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ D I S C O N N E C T _ C B _ I D   O T G   P C D   D i s c o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ M S P I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ P C D _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   H A L _ P C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     / *   S e t u p   L e g a c y   w e a k   C a l l b a c k s     * /  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ P C D _ S O F _ C B _ I D   :  
                 h p c d - > S O F C a l l b a c k   =   H A L _ P C D _ S O F C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ S E T U P S T A G E _ C B _ I D   :  
                 h p c d - > S e t u p S t a g e C a l l b a c k   =   H A L _ P C D _ S e t u p S t a g e C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ R E S E T _ C B _ I D   :  
                 h p c d - > R e s e t C a l l b a c k   =   H A L _ P C D _ R e s e t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ S U S P E N D _ C B _ I D   :  
                 h p c d - > S u s p e n d C a l l b a c k   =   H A L _ P C D _ S u s p e n d C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ R E S U M E _ C B _ I D   :  
                 h p c d - > R e s u m e C a l l b a c k   =   H A L _ P C D _ R e s u m e C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ C O N N E C T _ C B _ I D   :  
                 h p c d - > C o n n e c t C a l l b a c k   =   H A L _ P C D _ C o n n e c t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ D I S C O N N E C T _ C B _ I D   :  
                 h p c d - > D i s c o n n e c t C a l l b a c k   =   H A L _ P C D _ D i s c o n n e c t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ M S P I N I T _ C B _ I D   :  
                 h p c d - > M s p I n i t C a l l b a c k   =   H A L _ P C D _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ M S P D E I N I T _ C B _ I D   :  
                 h p c d - > M s p D e I n i t C a l l b a c k   =   H A L _ P C D _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ P C D _ M S P I N I T _ C B _ I D   :  
                 h p c d - > M s p I n i t C a l l b a c k   =   H A L _ P C D _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ P C D _ M S P D E I N I T _ C B _ I D   :  
                 h p c d - > M s p D e I n i t C a l l b a c k   =   H A L _ P C D _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   U S B   P C D   D a t a   O U T   S t a g e   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   U S B   P C D   D a t a   O U T   S t a g e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r D a t a O u t S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                               p P C D _ D a t a O u t S t a g e C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > D a t a O u t S t a g e C a l l b a c k   =   p C a l l b a c k ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   t h e   U S B   P C D   D a t a   O U T   S t a g e   C a l l b a c k  
     *                   U S B   P C D   D a t a   O U T   S t a g e   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r D a t a O u t S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > D a t a O u t S t a g e C a l l b a c k   =   H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ;   / *   L e g a c y   w e a k   D a t a O u t S t a g e C a l l b a c k     * /  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   U S B   P C D   D a t a   I N   S t a g e   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   U S B   P C D   D a t a   I N   S t a g e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r D a t a I n S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                             p P C D _ D a t a I n S t a g e C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > D a t a I n S t a g e C a l l b a c k   =   p C a l l b a c k ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   t h e   U S B   P C D   D a t a   I N   S t a g e   C a l l b a c k  
     *                   U S B   P C D   D a t a   O U T   S t a g e   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r D a t a I n S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > D a t a I n S t a g e C a l l b a c k   =   H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ;   / *   L e g a c y   w e a k   D a t a I n S t a g e C a l l b a c k     * /  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   U S B   P C D   I s o   O U T   i n c o m p l e t e   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   U S B   P C D   I s o   O U T   i n c o m p l e t e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r I s o O u t I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                               p P C D _ I s o O u t I n c p l t C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > I S O O U T I n c o m p l e t e C a l l b a c k   =   p C a l l b a c k ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   t h e   U S B   P C D   I s o   O U T   i n c o m p l e t e   C a l l b a c k  
     *                   U S B   P C D   I s o   O U T   i n c o m p l e t e   C a l l b a c k   i s   r e d i r e c t e d  
     *                   t o   t h e   w e a k   H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r I s o O u t I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > I S O O U T I n c o m p l e t e C a l l b a c k   =   H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k ;   / *   L e g a c y   w e a k   I S O O U T I n c o m p l e t e C a l l b a c k     * /  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   U S B   P C D   I s o   I N   i n c o m p l e t e   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   U S B   P C D   I s o   I N   i n c o m p l e t e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ R e g i s t e r I s o I n I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                             p P C D _ I s o I n I n c p l t C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > I S O I N I n c o m p l e t e C a l l b a c k   =   p C a l l b a c k ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   t h e   U S B   P C D   I s o   I N   i n c o m p l e t e   C a l l b a c k  
     *                   U S B   P C D   I s o   I N   i n c o m p l e t e   C a l l b a c k   i s   r e d i r e c t e d  
     *                   t o   t h e   w e a k   H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ U n R e g i s t e r I s o I n I n c p l t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( h p c d - > S t a t e   = =   H A L _ P C D _ S T A T E _ R E A D Y )  
     {  
         h p c d - > I S O I N I n c o m p l e t e C a l l b a c k   =   H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k ;   / *   L e g a c y   w e a k   I S O I N I n c o m p l e t e C a l l b a c k     * /  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h p c d - > E r r o r C o d e   | =   H A L _ P C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f       D a t a   t r a n s f e r s   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   P C D   d a t a  
         t r a n s f e r s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S t a r t   t h e   U S B   d e v i c e  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ S t a r t ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     _ _ H A L _ L O C K ( h p c d ) ;  
     _ _ H A L _ P C D _ E N A B L E ( h p c d ) ;  
  
 # i f   d e f i n e d   ( U S B )  
     H A L _ P C D E x _ S e t C o n n e c t i o n S t a t e ( h p c d ,   1 U ) ;  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
     ( v o i d ) U S B _ D e v C o n n e c t ( h p c d - > I n s t a n c e ) ;  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   t h e   U S B   d e v i c e .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ S t o p ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     _ _ H A L _ L O C K ( h p c d ) ;  
     _ _ H A L _ P C D _ D I S A B L E ( h p c d ) ;  
  
 # i f   d e f i n e d   ( U S B )  
     H A L _ P C D E x _ S e t C o n n e c t i o n S t a t e ( h p c d ,   0 U ) ;  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
     ( v o i d ) U S B _ D e v D i s c o n n e c t ( h p c d - > I n s t a n c e ) ;  
  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
     ( v o i d ) U S B _ F l u s h T x F i f o ( h p c d - > I n s t a n c e ,   0 x 1 0 U ) ;  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 / * *  
     *   @ b r i e f     H a n d l e s   P C D   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ P C D _ I R Q H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h p c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     U S B _ O T G _ E P T y p e D e f   * e p ;  
     u i n t 3 2 _ t   i ;  
     u i n t 3 2 _ t   e p _ i n t r ;  
     u i n t 3 2 _ t   e p i n t ;  
     u i n t 3 2 _ t   e p n u m ;  
     u i n t 3 2 _ t   f i f o e m p t y m s k ;  
     u i n t 3 2 _ t   t e m p ;  
  
     / *   e n s u r e   t h a t   w e   a r e   i n   d e v i c e   m o d e   * /  
     i f   ( U S B _ G e t M o d e ( h p c d - > I n s t a n c e )   = =   U S B _ O T G _ M O D E _ D E V I C E )  
     {  
         / *   a v o i d   s p u r i o u s   i n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ I S _ I N V A L I D _ I N T E R R U P T ( h p c d ) )  
         {  
             r e t u r n ;  
         }  
  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ M M I S ) )  
         {  
             / *   i n c o r r e c t   m o d e ,   a c k n o w l e d g e   t h e   i n t e r r u p t   * /  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ M M I S ) ;  
         }  
  
         / *   H a n d l e   R x Q L e v e l   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ R X F L V L ) )  
         {  
             U S B _ M A S K _ I N T E R R U P T ( h p c d - > I n s t a n c e ,   U S B _ O T G _ G I N T S T S _ R X F L V L ) ;  
  
             t e m p   =   U S B x - > G R X S T S P ;  
  
             e p   =   & h p c d - > O U T _ e p [ t e m p   &   U S B _ O T G _ G R X S T S P _ E P N U M ] ;  
  
             i f   ( ( ( t e m p   &   U S B _ O T G _ G R X S T S P _ P K T S T S )   > >   1 7 )   = =     S T S _ D A T A _ U P D T )  
             {  
                 i f   ( ( t e m p   &   U S B _ O T G _ G R X S T S P _ B C N T )   ! =   0 U )  
                 {  
                     ( v o i d ) U S B _ R e a d P a c k e t ( U S B x ,   e p - > x f e r _ b u f f ,  
                                                               ( u i n t 1 6 _ t ) ( ( t e m p   &   U S B _ O T G _ G R X S T S P _ B C N T )   > >   4 ) ) ;  
  
                     e p - > x f e r _ b u f f   + =   ( t e m p   &   U S B _ O T G _ G R X S T S P _ B C N T )   > >   4 ;  
                     e p - > x f e r _ c o u n t   + =   ( t e m p   &   U S B _ O T G _ G R X S T S P _ B C N T )   > >   4 ;  
                 }  
             }  
             e l s e   i f   ( ( ( t e m p   &   U S B _ O T G _ G R X S T S P _ P K T S T S )   > >   1 7 )   = =     S T S _ S E T U P _ U P D T )  
             {  
                 ( v o i d ) U S B _ R e a d P a c k e t ( U S B x ,   ( u i n t 8 _ t   * ) h p c d - > S e t u p ,   8 U ) ;  
                 e p - > x f e r _ c o u n t   + =   ( t e m p   &   U S B _ O T G _ G R X S T S P _ B C N T )   > >   4 ;  
             }  
             e l s e  
             {  
                 / *   . . .   * /  
             }  
             U S B _ U N M A S K _ I N T E R R U P T ( h p c d - > I n s t a n c e ,   U S B _ O T G _ G I N T S T S _ R X F L V L ) ;  
         }  
  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ O E P I N T ) )  
         {  
             e p n u m   =   0 U ;  
  
             / *   R e a d   i n   t h e   d e v i c e   i n t e r r u p t   b i t s   * /  
             e p _ i n t r   =   U S B _ R e a d D e v A l l O u t E p I n t e r r u p t ( h p c d - > I n s t a n c e ) ;  
  
             w h i l e   ( e p _ i n t r   ! =   0 U )  
             {  
                 i f   ( ( e p _ i n t r   &   0 x 1 U )   ! =   0 U )  
                 {  
                     e p i n t   =   U S B _ R e a d D e v O u t E P I n t e r r u p t ( h p c d - > I n s t a n c e ,   ( u i n t 8 _ t ) e p n u m ) ;  
  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D O E P I N T _ X F R C )   = =   U S B _ O T G _ D O E P I N T _ X F R C )  
                     {  
                         C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ X F R C ) ;  
                         ( v o i d ) P C D _ E P _ O u t X f r C o m p l e t e _ i n t ( h p c d ,   e p n u m ) ;  
                     }  
  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D O E P I N T _ S T U P )   = =   U S B _ O T G _ D O E P I N T _ S T U P )  
                     {  
                         C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ S T U P ) ;  
                         / *   C l a s s   B   s e t u p   p h a s e   d o n e   f o r   p r e v i o u s   d e c o d e d   s e t u p   * /  
                         ( v o i d ) P C D _ E P _ O u t S e t u p P a c k e t _ i n t ( h p c d ,   e p n u m ) ;  
                     }  
  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D O E P I N T _ O T E P D I S )   = =   U S B _ O T G _ D O E P I N T _ O T E P D I S )  
                     {  
                         C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ O T E P D I S ) ;  
                     }  
  
                     / *   C l e a r   S t a t u s   P h a s e   R e c e i v e d   i n t e r r u p t   * /  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D O E P I N T _ O T E P S P R )   = =   U S B _ O T G _ D O E P I N T _ O T E P S P R )  
                     {  
                         C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ O T E P S P R ) ;  
                     }  
  
                     / *   C l e a r   O U T   N A K   i n t e r r u p t   * /  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D O E P I N T _ N A K )   = =   U S B _ O T G _ D O E P I N T _ N A K )  
                     {  
                         C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ N A K ) ;  
                     }  
                 }  
                 e p n u m + + ;  
                 e p _ i n t r   > > =   1 U ;  
             }  
         }  
  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ I E P I N T ) )  
         {  
             / *   R e a d   i n   t h e   d e v i c e   i n t e r r u p t   b i t s   * /  
             e p _ i n t r   =   U S B _ R e a d D e v A l l I n E p I n t e r r u p t ( h p c d - > I n s t a n c e ) ;  
  
             e p n u m   =   0 U ;  
  
             w h i l e   ( e p _ i n t r   ! =   0 U )  
             {  
                 i f   ( ( e p _ i n t r   &   0 x 1 U )   ! =   0 U )   / *   I n   I T R   * /  
                 {  
                     e p i n t   =   U S B _ R e a d D e v I n E P I n t e r r u p t ( h p c d - > I n s t a n c e ,   ( u i n t 8 _ t ) e p n u m ) ;  
  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D I E P I N T _ X F R C )   = =   U S B _ O T G _ D I E P I N T _ X F R C )  
                     {  
                         f i f o e m p t y m s k   =   ( u i n t 3 2 _ t ) ( 0 x 1 U L   < <   ( e p n u m   &   E P _ A D D R _ M S K ) ) ;  
                         U S B x _ D E V I C E - > D I E P E M P M S K   & =   ~ f i f o e m p t y m s k ;  
  
                         C L E A R _ I N _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D I E P I N T _ X F R C ) ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                         h p c d - > D a t a I n S t a g e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e l s e  
                         H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
                     }  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D I E P I N T _ T O C )   = =   U S B _ O T G _ D I E P I N T _ T O C )  
                     {  
                         C L E A R _ I N _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D I E P I N T _ T O C ) ;  
                     }  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D I E P I N T _ I T T X F E )   = =   U S B _ O T G _ D I E P I N T _ I T T X F E )  
                     {  
                         C L E A R _ I N _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D I E P I N T _ I T T X F E ) ;  
                     }  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D I E P I N T _ I N E P N E )   = =   U S B _ O T G _ D I E P I N T _ I N E P N E )  
                     {  
                         C L E A R _ I N _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D I E P I N T _ I N E P N E ) ;  
                     }  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D I E P I N T _ E P D I S D )   = =   U S B _ O T G _ D I E P I N T _ E P D I S D )  
                     {  
                         C L E A R _ I N _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D I E P I N T _ E P D I S D ) ;  
                     }  
                     i f   ( ( e p i n t   &   U S B _ O T G _ D I E P I N T _ T X F E )   = =   U S B _ O T G _ D I E P I N T _ T X F E )  
                     {  
                         ( v o i d ) P C D _ W r i t e E m p t y T x F i f o ( h p c d ,   e p n u m ) ;  
                     }  
                 }  
                 e p n u m + + ;  
                 e p _ i n t r   > > =   1 U ;  
             }  
         }  
  
         / *   H a n d l e   R e s u m e   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ W K U I N T ) )  
         {  
             / *   C l e a r   t h e   R e m o t e   W a k e - u p   S i g n a l i n g   * /  
             U S B x _ D E V I C E - > D C T L   & =   ~ U S B _ O T G _ D C T L _ R W U S I G ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > R e s u m e C a l l b a c k ( h p c d ) ;  
 # e l s e  
             H A L _ P C D _ R e s u m e C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ W K U I N T ) ;  
         }  
  
         / *   H a n d l e   S u s p e n d   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ U S B S U S P ) )  
         {  
             i f   ( ( U S B x _ D E V I C E - > D S T S   &   U S B _ O T G _ D S T S _ S U S P S T S )   = =   U S B _ O T G _ D S T S _ S U S P S T S )  
             {  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h p c d - > S u s p e n d C a l l b a c k ( h p c d ) ;  
 # e l s e  
                 H A L _ P C D _ S u s p e n d C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ U S B S U S P ) ;  
         }  
         / *   H a n d l e   R e s e t   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ U S B R S T ) )  
         {  
             U S B x _ D E V I C E - > D C T L   & =   ~ U S B _ O T G _ D C T L _ R W U S I G ;  
             ( v o i d ) U S B _ F l u s h T x F i f o ( h p c d - > I n s t a n c e ,   0 x 1 0 U ) ;  
  
             f o r   ( i   =   0 U ;   i   <   h p c d - > I n i t . d e v _ e n d p o i n t s ;   i + + )  
             {  
                 U S B x _ I N E P ( i ) - > D I E P I N T   =   0 x F B 7 F U ;  
                 U S B x _ I N E P ( i ) - > D I E P C T L   & =   ~ U S B _ O T G _ D I E P C T L _ S T A L L ;  
                 U S B x _ I N E P ( i ) - > D I E P C T L   | =   U S B _ O T G _ D I E P C T L _ S N A K ;  
                 U S B x _ O U T E P ( i ) - > D O E P I N T   =   0 x F B 7 F U ;  
                 U S B x _ O U T E P ( i ) - > D O E P C T L   & =   ~ U S B _ O T G _ D O E P C T L _ S T A L L ;  
                 U S B x _ O U T E P ( i ) - > D O E P C T L   | =   U S B _ O T G _ D O E P C T L _ S N A K ;  
             }  
             U S B x _ D E V I C E - > D A I N T M S K   | =   0 x 1 0 0 0 1 U ;  
  
             i f   ( h p c d - > I n i t . u s e _ d e d i c a t e d _ e p 1   ! =   0 U )  
             {  
                 U S B x _ D E V I C E - > D O U T E P 1 M S K   | =   U S B _ O T G _ D O E P M S K _ S T U P M   |  
                                                                       U S B _ O T G _ D O E P M S K _ X F R C M   |  
                                                                       U S B _ O T G _ D O E P M S K _ E P D M ;  
  
                 U S B x _ D E V I C E - > D I N E P 1 M S K   | =   U S B _ O T G _ D I E P M S K _ T O M   |  
                                                                     U S B _ O T G _ D I E P M S K _ X F R C M   |  
                                                                     U S B _ O T G _ D I E P M S K _ E P D M ;  
             }  
             e l s e  
             {  
                 U S B x _ D E V I C E - > D O E P M S K   | =   U S B _ O T G _ D O E P M S K _ S T U P M   |  
                                                                 U S B _ O T G _ D O E P M S K _ X F R C M   |  
                                                                 U S B _ O T G _ D O E P M S K _ E P D M   |  
                                                                 U S B _ O T G _ D O E P M S K _ O T E P S P R M   |  
                                                                 U S B _ O T G _ D O E P M S K _ N A K M ;  
  
                 U S B x _ D E V I C E - > D I E P M S K   | =   U S B _ O T G _ D I E P M S K _ T O M   |  
                                                                 U S B _ O T G _ D I E P M S K _ X F R C M   |  
                                                                 U S B _ O T G _ D I E P M S K _ E P D M ;  
             }  
  
             / *   S e t   D e f a u l t   A d d r e s s   t o   0   * /  
             U S B x _ D E V I C E - > D C F G   & =   ~ U S B _ O T G _ D C F G _ D A D ;  
  
             / *   s e t u p   E P 0   t o   r e c e i v e   S E T U P   p a c k e t s   * /  
             ( v o i d ) U S B _ E P 0 _ O u t S t a r t ( h p c d - > I n s t a n c e ,   ( u i n t 8 _ t   * ) h p c d - > S e t u p ) ;  
  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ U S B R S T ) ;  
         }  
  
         / *   H a n d l e   E n u m e r a t i o n   d o n e   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ E N U M D N E ) )  
         {  
             ( v o i d ) U S B _ A c t i v a t e S e t u p ( h p c d - > I n s t a n c e ) ;  
             h p c d - > I n i t . s p e e d   =   U S B _ G e t D e v S p e e d ( h p c d - > I n s t a n c e ) ;  
  
             / *   S e t   U S B   T u r n a r o u n d   t i m e   * /  
             ( v o i d ) U S B _ S e t T u r n a r o u n d T i m e ( h p c d - > I n s t a n c e ,  
                                                                     H A L _ R C C _ G e t H C L K F r e q ( ) ,  
                                                                     ( u i n t 8 _ t ) h p c d - > I n i t . s p e e d ) ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > R e s e t C a l l b a c k ( h p c d ) ;  
 # e l s e  
             H A L _ P C D _ R e s e t C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ E N U M D N E ) ;  
         }  
  
         / *   H a n d l e   S O F   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ S O F ) )  
         {  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > S O F C a l l b a c k ( h p c d ) ;  
 # e l s e  
             H A L _ P C D _ S O F C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ S O F ) ;  
         }  
  
         / *   H a n d l e   I n c o m p l e t e   I S O   I N   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ I I S O I X F R ) )  
         {  
             / *   K e e p   a p p l i c a t i o n   c h e c k i n g   t h e   c o r r e s p o n d i n g   I s o   I N   e n d p o i n t  
             c a u s i n g   t h e   i n c o m p l e t e   I n t e r r u p t   * /  
             e p n u m   =   0 U ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > I S O I N I n c o m p l e t e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e l s e  
             H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ I I S O I X F R ) ;  
         }  
  
         / *   H a n d l e   I n c o m p l e t e   I S O   O U T   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ P X F R _ I N C O M P I S O O U T ) )  
         {  
             / *   K e e p   a p p l i c a t i o n   c h e c k i n g   t h e   c o r r e s p o n d i n g   I s o   O U T   e n d p o i n t  
             c a u s i n g   t h e   i n c o m p l e t e   I n t e r r u p t   * /  
             e p n u m   =   0 U ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > I S O O U T I n c o m p l e t e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e l s e  
             H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ P X F R _ I N C O M P I S O O U T ) ;  
         }  
  
         / *   H a n d l e   C o n n e c t i o n   e v e n t   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ S R Q I N T ) )  
         {  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > C o n n e c t C a l l b a c k ( h p c d ) ;  
 # e l s e  
             H A L _ P C D _ C o n n e c t C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ S R Q I N T ) ;  
         }  
  
         / *   H a n d l e   D i s c o n n e c t i o n   e v e n t   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ O T G _ G I N T S T S _ O T G I N T ) )  
         {  
             t e m p   =   h p c d - > I n s t a n c e - > G O T G I N T ;  
  
             i f   ( ( t e m p   &   U S B _ O T G _ G O T G I N T _ S E D E T )   = =   U S B _ O T G _ G O T G I N T _ S E D E T )  
             {  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h p c d - > D i s c o n n e c t C a l l b a c k ( h p c d ) ;  
 # e l s e  
                 H A L _ P C D _ D i s c o n n e c t C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
             }  
             h p c d - > I n s t a n c e - > G O T G I N T   | =   t e m p ;  
         }  
     }  
 }  
  
  
 / * *  
     *   @ b r i e f     H a n d l e s   P C D   W a k e u p   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ P C D _ W K U P _ I R Q H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   C l e a r   E X T I   p e n d i n g   B i t   * /  
     _ _ H A L _ U S B _ O T G _ F S _ W A K E U P _ E X T I _ C L E A R _ F L A G ( ) ;  
 }  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f   d e f i n e d   ( U S B )  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   P C D   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ P C D _ I R Q H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     u i n t 1 6 _ t   s t o r e _ e p [ 8 ] ;  
     u i n t 8 _ t   i ;  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ C T R ) )  
     {  
         / *   s e r v i c i n g   o f   t h e   e n d p o i n t   c o r r e c t   t r a n s f e r   i n t e r r u p t   * /  
         / *   c l e a r   o f   t h e   C T R   f l a g   i n t o   t h e   s u b   * /  
         ( v o i d ) P C D _ E P _ I S R _ H a n d l e r ( h p c d ) ;  
     }  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ R E S E T ) )  
     {  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ R E S E T ) ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h p c d - > R e s e t C a l l b a c k ( h p c d ) ;  
 # e l s e  
         H A L _ P C D _ R e s e t C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
         ( v o i d ) H A L _ P C D _ S e t A d d r e s s ( h p c d ,   0 U ) ;  
     }  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ P M A O V R ) )  
     {  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ P M A O V R ) ;  
     }  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ E R R ) )  
     {  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ E R R ) ;  
     }  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ W K U P ) )  
     {  
         h p c d - > I n s t a n c e - > C N T R   & =   ( u i n t 1 6 _ t )   ~ ( U S B _ C N T R _ L P _ M O D E ) ;  
         h p c d - > I n s t a n c e - > C N T R   & =   ( u i n t 1 6 _ t )   ~ ( U S B _ C N T R _ F S U S P ) ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h p c d - > R e s u m e C a l l b a c k ( h p c d ) ;  
 # e l s e  
         H A L _ P C D _ R e s u m e C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ W K U P ) ;  
     }  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ S U S P ) )  
     {  
         / *   W A :   T o   C l e a r   W a k e u p   f l a g   i f   r a i s e d   w i t h   s u s p e n d   s i g n a l   * /  
  
         / *   S t o r e   E n d p o i n t   r e g i s t e r   * /  
         f o r   ( i   =   0 U ;   i   <   8 U ;   i + + )  
         {  
             s t o r e _ e p [ i ]   =   P C D _ G E T _ E N D P O I N T ( h p c d - > I n s t a n c e ,   i ) ;  
         }  
  
         / *   F O R C E   R E S E T   * /  
         h p c d - > I n s t a n c e - > C N T R   | =   ( u i n t 1 6 _ t ) ( U S B _ C N T R _ F R E S ) ;  
  
         / *   C L E A R   R E S E T   * /  
         h p c d - > I n s t a n c e - > C N T R   & =   ( u i n t 1 6 _ t ) ( ~ U S B _ C N T R _ F R E S ) ;  
  
         / *   w a i t   f o r   r e s e t   f l a g   i n   I S T R   * /  
         w h i l e   ( ( h p c d - > I n s t a n c e - > I S T R   &   U S B _ I S T R _ R E S E T )   = =   0 U )  
         {  
         }  
  
         / *   C l e a r   R e s e t   F l a g   * /  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ R E S E T ) ;  
  
         / *   R e s t o r e   R e g i s t r e   * /  
         f o r   ( i   =   0 U ;   i   <   8 U ;   i + + )  
         {  
             P C D _ S E T _ E N D P O I N T ( h p c d - > I n s t a n c e ,   i ,   s t o r e _ e p [ i ] ) ;  
         }  
  
         / *   F o r c e   l o w - p o w e r   m o d e   i n   t h e   m a c r o c e l l   * /  
         h p c d - > I n s t a n c e - > C N T R   | =   ( u i n t 1 6 _ t ) U S B _ C N T R _ F S U S P ;  
  
         / *   c l e a r   o f   t h e   I S T R   b i t   m u s t   b e   d o n e   a f t e r   s e t t i n g   o f   C N T R _ F S U S P   * /  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ S U S P ) ;  
  
         h p c d - > I n s t a n c e - > C N T R   | =   ( u i n t 1 6 _ t ) U S B _ C N T R _ L P _ M O D E ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h p c d - > S u s p e n d C a l l b a c k ( h p c d ) ;  
 # e l s e  
         H A L _ P C D _ S u s p e n d C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ S O F ) )  
     {  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ S O F ) ;  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h p c d - > S O F C a l l b a c k ( h p c d ) ;  
 # e l s e  
         H A L _ P C D _ S O F C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     i f   ( _ _ H A L _ P C D _ G E T _ F L A G ( h p c d ,   U S B _ I S T R _ E S O F ) )  
     {  
         / *   c l e a r   E S O F   f l a g   i n   I S T R   * /  
         _ _ H A L _ P C D _ C L E A R _ F L A G ( h p c d ,   U S B _ I S T R _ E S O F ) ;  
     }  
 }  
  
  
 / * *  
     *   @ b r i e f     H a n d l e s   P C D   W a k e u p   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ P C D _ W K U P _ I R Q H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   C l e a r   E X T I   p e n d i n g   B i t   * /  
     _ _ H A L _ U S B _ W A K E U P _ E X T I _ C L E A R _ F L A G ( ) ;  
 }  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
 / * *  
     *   @ b r i e f     D a t a   O U T   s t a g e   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
     U N U S E D ( e p n u m ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D a t a   I N   s t a g e   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
     U N U S E D ( e p n u m ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ D a t a I n S t a g e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
 / * *  
     *   @ b r i e f     S e t u p   s t a g e   c a l l b a c k  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ S e t u p S t a g e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ S e t u p S t a g e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     U S B   S t a r t   O f   F r a m e   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ S O F C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ S O F C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     U S B   R e s e t   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ R e s e t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ R e s e t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S u s p e n d   e v e n t   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ S u s p e n d C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ S u s p e n d C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R e s u m e   e v e n t   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ R e s u m e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ R e s u m e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I n c o m p l e t e   I S O   O U T   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
     U N U S E D ( e p n u m ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ I S O O U T I n c o m p l e t e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I n c o m p l e t e   I S O   I N   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p n u m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
     U N U S E D ( e p n u m ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ I S O I N I n c o m p l e t e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     C o n n e c t i o n   e v e n t   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ C o n n e c t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ C o n n e c t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D i s c o n n e c t i o n   e v e n t   c a l l b a c k .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ P C D _ D i s c o n n e c t C a l l b a c k ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h p c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ P C D _ D i s c o n n e c t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   P C D   d a t a  
         t r a n s f e r s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n n e c t   t h e   U S B   d e v i c e  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e v C o n n e c t ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
 # i f   d e f i n e d   ( U S B )  
     H A L _ P C D E x _ S e t C o n n e c t i o n S t a t e ( h p c d ,   1 U ) ;  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
     ( v o i d ) U S B _ D e v C o n n e c t ( h p c d - > I n s t a n c e ) ;  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s c o n n e c t   t h e   U S B   d e v i c e .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e v D i s c o n n e c t ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
 # i f   d e f i n e d   ( U S B )  
     H A L _ P C D E x _ S e t C o n n e c t i o n S t a t e ( h p c d ,   0 U ) ;  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
     ( v o i d ) U S B _ D e v D i s c o n n e c t ( h p c d - > I n s t a n c e ) ;  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   U S B   D e v i c e   a d d r e s s .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     a d d r e s s   n e w   d e v i c e   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ S e t A d d r e s s ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   a d d r e s s )  
 {  
     _ _ H A L _ L O C K ( h p c d ) ;  
     h p c d - > U S B _ A d d r e s s   =   a d d r e s s ;  
     ( v o i d ) U S B _ S e t D e v A d d r e s s ( h p c d - > I n s t a n c e ,   a d d r e s s ) ;  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
 / * *  
     *   @ b r i e f     O p e n   a n d   c o n f i g u r e   a n   e n d p o i n t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ p a r a m     e p _ m p s   e n d p o i n t   m a x   p a c k e t   s i z e  
     *   @ p a r a m     e p _ t y p e   e n d p o i n t   t y p e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ O p e n ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ,  
                                                                     u i n t 1 6 _ t   e p _ m p s ,   u i n t 8 _ t   e p _ t y p e )  
 {  
     H A L _ S t a t u s T y p e D e f     r e t   =   H A L _ O K ;  
     P C D _ E P T y p e D e f   * e p ;  
  
     i f   ( ( e p _ a d d r   &   0 x 8 0 U )   = =   0 x 8 0 U )  
     {  
         e p   =   & h p c d - > I N _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
         e p - > i s _ i n   =   1 U ;  
     }  
     e l s e  
     {  
         e p   =   & h p c d - > O U T _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
         e p - > i s _ i n   =   0 U ;  
     }  
  
     e p - > n u m   =   e p _ a d d r   &   E P _ A D D R _ M S K ;  
     e p - > m a x p a c k e t   =   e p _ m p s ;  
     e p - > t y p e   =   e p _ t y p e ;  
  
     i f   ( e p - > i s _ i n   ! =   0 U )  
     {  
         / *   A s s i g n   a   T x   F I F O   * /  
         e p - > t x _ f i f o _ n u m   =   e p - > n u m ;  
     }  
     / *   S e t   i n i t i a l   d a t a   P I D .   * /  
     i f   ( e p _ t y p e   = =   E P _ T Y P E _ B U L K )  
     {  
         e p - > d a t a _ p i d _ s t a r t   =   0 U ;  
     }  
  
     _ _ H A L _ L O C K ( h p c d ) ;  
     ( v o i d ) U S B _ A c t i v a t e E n d p o i n t ( h p c d - > I n s t a n c e ,   e p ) ;  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   r e t ;  
 }  
  
 / * *  
     *   @ b r i e f     D e a c t i v a t e   a n   e n d p o i n t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ C l o s e ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r )  
 {  
     P C D _ E P T y p e D e f   * e p ;  
  
     i f   ( ( e p _ a d d r   &   0 x 8 0 U )   = =   0 x 8 0 U )  
     {  
         e p   =   & h p c d - > I N _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
         e p - > i s _ i n   =   1 U ;  
     }  
     e l s e  
     {  
         e p   =   & h p c d - > O U T _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
         e p - > i s _ i n   =   0 U ;  
     }  
     e p - > n u m       =   e p _ a d d r   &   E P _ A D D R _ M S K ;  
  
     _ _ H A L _ L O C K ( h p c d ) ;  
     ( v o i d ) U S B _ D e a c t i v a t e E n d p o i n t ( h p c d - > I n s t a n c e ,   e p ) ;  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     R e c e i v e   a n   a m o u n t   o f   d a t a .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ p a r a m     p B u f   p o i n t e r   t o   t h e   r e c e p t i o n   b u f f e r  
     *   @ p a r a m     l e n   a m o u n t   o f   d a t a   t o   b e   r e c e i v e d  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ R e c e i v e ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ,   u i n t 8 _ t   * p B u f ,   u i n t 3 2 _ t   l e n )  
 {  
     P C D _ E P T y p e D e f   * e p ;  
  
     e p   =   & h p c d - > O U T _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
  
     / * s e t u p   a n d   s t a r t   t h e   X f e r   * /  
     e p - > x f e r _ b u f f   =   p B u f ;  
     e p - > x f e r _ l e n   =   l e n ;  
     e p - > x f e r _ c o u n t   =   0 U ;  
     e p - > i s _ i n   =   0 U ;  
     e p - > n u m   =   e p _ a d d r   &   E P _ A D D R _ M S K ;  
  
     i f   ( ( e p _ a d d r   &   E P _ A D D R _ M S K )   = =   0 U )  
     {  
         ( v o i d ) U S B _ E P 0 S t a r t X f e r ( h p c d - > I n s t a n c e ,   e p ) ;  
     }  
     e l s e  
     {  
         ( v o i d ) U S B _ E P S t a r t X f e r ( h p c d - > I n s t a n c e ,   e p ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t   R e c e i v e d   D a t a   S i z e  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ r e t v a l   D a t a   S i z e  
     * /  
 u i n t 3 2 _ t   H A L _ P C D _ E P _ G e t R x C o u n t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r )  
 {  
     r e t u r n   h p c d - > O U T _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] . x f e r _ c o u n t ;  
 }  
 / * *  
     *   @ b r i e f     S e n d   a n   a m o u n t   o f   d a t a  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ p a r a m     p B u f   p o i n t e r   t o   t h e   t r a n s m i s s i o n   b u f f e r  
     *   @ p a r a m     l e n   a m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ T r a n s m i t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r ,   u i n t 8 _ t   * p B u f ,   u i n t 3 2 _ t   l e n )  
 {  
     P C D _ E P T y p e D e f   * e p ;  
  
     e p   =   & h p c d - > I N _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
  
     / * s e t u p   a n d   s t a r t   t h e   X f e r   * /  
     e p - > x f e r _ b u f f   =   p B u f ;  
     e p - > x f e r _ l e n   =   l e n ;  
 # i f   d e f i n e d   ( U S B )  
     e p - > x f e r _ f i l l _ d b   =   1 U ;  
     e p - > x f e r _ l e n _ d b   =   l e n ;  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
     e p - > x f e r _ c o u n t   =   0 U ;  
     e p - > i s _ i n   =   1 U ;  
     e p - > n u m   =   e p _ a d d r   &   E P _ A D D R _ M S K ;  
  
     i f   ( ( e p _ a d d r   &   E P _ A D D R _ M S K )   = =   0 U )  
     {  
         ( v o i d ) U S B _ E P 0 S t a r t X f e r ( h p c d - > I n s t a n c e ,   e p ) ;  
     }  
     e l s e  
     {  
         ( v o i d ) U S B _ E P S t a r t X f e r ( h p c d - > I n s t a n c e ,   e p ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   a   S T A L L   c o n d i t i o n   o v e r   a n   e n d p o i n t  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ S e t S t a l l ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r )  
 {  
     P C D _ E P T y p e D e f   * e p ;  
  
     i f   ( ( ( u i n t 3 2 _ t ) e p _ a d d r   &   E P _ A D D R _ M S K )   >   h p c d - > I n i t . d e v _ e n d p o i n t s )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( ( 0 x 8 0 U   &   e p _ a d d r )   = =   0 x 8 0 U )  
     {  
         e p   =   & h p c d - > I N _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
         e p - > i s _ i n   =   1 U ;  
     }  
     e l s e  
     {  
         e p   =   & h p c d - > O U T _ e p [ e p _ a d d r ] ;  
         e p - > i s _ i n   =   0 U ;  
     }  
  
     e p - > i s _ s t a l l   =   1 U ;  
     e p - > n u m   =   e p _ a d d r   &   E P _ A D D R _ M S K ;  
  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     ( v o i d ) U S B _ E P S e t S t a l l ( h p c d - > I n s t a n c e ,   e p ) ;  
  
     i f   ( ( e p _ a d d r   &   E P _ A D D R _ M S K )   = =   0 U )  
     {  
         ( v o i d ) U S B _ E P 0 _ O u t S t a r t ( h p c d - > I n s t a n c e ,   ( u i n t 8 _ t   * ) h p c d - > S e t u p ) ;  
     }  
  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r   a   S T A L L   c o n d i t i o n   o v e r   i n   a n   e n d p o i n t  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ C l r S t a l l ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r )  
 {  
     P C D _ E P T y p e D e f   * e p ;  
  
     i f   ( ( ( u i n t 3 2 _ t ) e p _ a d d r   &   0 x 0 F U )   >   h p c d - > I n i t . d e v _ e n d p o i n t s )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( ( 0 x 8 0 U   &   e p _ a d d r )   = =   0 x 8 0 U )  
     {  
         e p   =   & h p c d - > I N _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
         e p - > i s _ i n   =   1 U ;  
     }  
     e l s e  
     {  
         e p   =   & h p c d - > O U T _ e p [ e p _ a d d r   &   E P _ A D D R _ M S K ] ;  
         e p - > i s _ i n   =   0 U ;  
     }  
  
     e p - > i s _ s t a l l   =   0 U ;  
     e p - > n u m   =   e p _ a d d r   &   E P _ A D D R _ M S K ;  
  
     _ _ H A L _ L O C K ( h p c d ) ;  
     ( v o i d ) U S B _ E P C l e a r S t a l l ( h p c d - > I n s t a n c e ,   e p ) ;  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     F l u s h   a n   e n d p o i n t  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p _ a d d r   e n d p o i n t   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ F l u s h ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 8 _ t   e p _ a d d r )  
 {  
     _ _ H A L _ L O C K ( h p c d ) ;  
  
     i f   ( ( e p _ a d d r   &   0 x 8 0 U )   = =   0 x 8 0 U )  
     {  
         ( v o i d ) U S B _ F l u s h T x F i f o ( h p c d - > I n s t a n c e ,   ( u i n t 3 2 _ t ) e p _ a d d r   &   E P _ A D D R _ M S K ) ;  
     }  
     e l s e  
     {  
         ( v o i d ) U S B _ F l u s h R x F i f o ( h p c d - > I n s t a n c e ) ;  
     }  
  
     _ _ H A L _ U N L O C K ( h p c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A c t i v a t e   r e m o t e   w a k e u p   s i g n a l l i n g  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ A c t i v a t e R e m o t e W a k e u p ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     r e t u r n   ( U S B _ A c t i v a t e R e m o t e W a k e u p ( h p c d - > I n s t a n c e ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D e - a c t i v a t e   r e m o t e   w a k e u p   s i g n a l l i n g .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ P C D _ D e A c t i v a t e R e m o t e W a k e u p ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     r e t u r n   ( U S B _ D e A c t i v a t e R e m o t e W a k e u p ( h p c d - > I n s t a n c e ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   P C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   S t a t e   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   p e r i p h e r a l  
         a n d   t h e   d a t a   f l o w .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   P C D   h a n d l e   s t a t e .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 P C D _ S t a t e T y p e D e f   H A L _ P C D _ G e t S t a t e ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     r e t u r n   h p c d - > S t a t e ;  
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
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   P C D _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
 / * *  
     *   @ b r i e f     C h e c k   F I F O   f o r   t h e   n e x t   p a c k e t   t o   b e   l o a d e d .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ W r i t e E m p t y T x F i f o ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 3 2 _ t   e p n u m )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h p c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     U S B _ O T G _ E P T y p e D e f   * e p ;  
     u i n t 3 2 _ t   l e n ;  
     u i n t 3 2 _ t   l e n 3 2 b ;  
     u i n t 3 2 _ t   f i f o e m p t y m s k ;  
  
     e p   =   & h p c d - > I N _ e p [ e p n u m ] ;  
  
     i f   ( e p - > x f e r _ c o u n t   >   e p - > x f e r _ l e n )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     l e n   =   e p - > x f e r _ l e n   -   e p - > x f e r _ c o u n t ;  
  
     i f   ( l e n   >   e p - > m a x p a c k e t )  
     {  
         l e n   =   e p - > m a x p a c k e t ;  
     }  
  
     l e n 3 2 b   =   ( l e n   +   3 U )   /   4 U ;  
  
     w h i l e   ( ( ( U S B x _ I N E P ( e p n u m ) - > D T X F S T S   &   U S B _ O T G _ D T X F S T S _ I N E P T F S A V )   > =   l e n 3 2 b )   & &  
                   ( e p - > x f e r _ c o u n t   <   e p - > x f e r _ l e n )   & &   ( e p - > x f e r _ l e n   ! =   0 U ) )  
     {  
         / *   W r i t e   t h e   F I F O   * /  
         l e n   =   e p - > x f e r _ l e n   -   e p - > x f e r _ c o u n t ;  
  
         i f   ( l e n   >   e p - > m a x p a c k e t )  
         {  
             l e n   =   e p - > m a x p a c k e t ;  
         }  
         l e n 3 2 b   =   ( l e n   +   3 U )   /   4 U ;  
  
         ( v o i d ) U S B _ W r i t e P a c k e t ( U S B x ,   e p - > x f e r _ b u f f ,   ( u i n t 8 _ t ) e p n u m ,   ( u i n t 1 6 _ t ) l e n ) ;  
  
         e p - > x f e r _ b u f f     + =   l e n ;  
         e p - > x f e r _ c o u n t   + =   l e n ;  
     }  
  
     i f   ( e p - > x f e r _ l e n   < =   e p - > x f e r _ c o u n t )  
     {  
         f i f o e m p t y m s k   =   ( u i n t 3 2 _ t ) ( 0 x 1 U L   < <   ( e p n u m   &   E P _ A D D R _ M S K ) ) ;  
         U S B x _ D E V I C E - > D I E P E M P M S K   & =   ~ f i f o e m p t y m s k ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     p r o c e s s   E P   O U T   t r a n s f e r   c o m p l e t e   i n t e r r u p t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ E P _ O u t X f r C o m p l e t e _ i n t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 3 2 _ t   e p n u m )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h p c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   g S N P S i D   =   * ( _ _ I O   u i n t 3 2 _ t   * ) ( & U S B x - > C I D   +   0 x 1 U ) ;  
     u i n t 3 2 _ t   D o e p i n t R e g   =   U S B x _ O U T E P ( e p n u m ) - > D O E P I N T ;  
  
     i f   ( g S N P S i D   = =   U S B _ O T G _ C O R E _ I D _ 3 1 0 A )  
     {  
         / *   S t u p P k t R c v d   =   1   t h i s   i s   a   s e t u p   p a c k e t   * /  
         i f   ( ( D o e p i n t R e g   &   U S B _ O T G _ D O E P I N T _ S T P K T R X )   = =   U S B _ O T G _ D O E P I N T _ S T P K T R X )  
         {  
             C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ S T P K T R X ) ;  
         }  
         e l s e  
         {  
             i f   ( ( D o e p i n t R e g   &   U S B _ O T G _ D O E P I N T _ O T E P S P R )   = =   U S B _ O T G _ D O E P I N T _ O T E P S P R )  
             {  
                 C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ O T E P S P R ) ;  
             }  
  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > D a t a O u t S t a g e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e l s e  
             H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
     e l s e  
     {  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h p c d - > D a t a O u t S t a g e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e l s e  
         H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( h p c d ,   ( u i n t 8 _ t ) e p n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     p r o c e s s   E P   O U T   s e t u p   p a c k e t   r e c e i v e d   i n t e r r u p t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p n u m   e n d p o i n t   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ E P _ O u t S e t u p P a c k e t _ i n t ( P C D _ H a n d l e T y p e D e f   * h p c d ,   u i n t 3 2 _ t   e p n u m )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h p c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   g S N P S i D   =   * ( _ _ I O   u i n t 3 2 _ t   * ) ( & U S B x - > C I D   +   0 x 1 U ) ;  
     u i n t 3 2 _ t   D o e p i n t R e g   =   U S B x _ O U T E P ( e p n u m ) - > D O E P I N T ;  
  
     i f   ( ( g S N P S i D   >   U S B _ O T G _ C O R E _ I D _ 3 0 0 A )   & &  
             ( ( D o e p i n t R e g   &   U S B _ O T G _ D O E P I N T _ S T P K T R X )   = =   U S B _ O T G _ D O E P I N T _ S T P K T R X ) )  
     {  
         C L E A R _ O U T _ E P _ I N T R ( e p n u m ,   U S B _ O T G _ D O E P I N T _ S T P K T R X ) ;  
     }  
  
     / *   I n f o r m   t h e   u p p e r   l a y e r   t h a t   a   s e t u p   p a c k e t   i s   a v a i l a b l e   * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     h p c d - > S e t u p S t a g e C a l l b a c k ( h p c d ) ;  
 # e l s e  
     H A L _ P C D _ S e t u p S t a g e C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
     r e t u r n   H A L _ O K ;  
 }  
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
  
 # i f   d e f i n e d   ( U S B )  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   P C D   E n d p o i n t   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   P C D _ E P _ I S R _ H a n d l e r ( P C D _ H a n d l e T y p e D e f   * h p c d )  
 {  
     P C D _ E P T y p e D e f   * e p ;  
     u i n t 1 6 _ t   c o u n t ,   w I s t r ,   w E P V a l ,   T x B y t e N b r e ;  
     u i n t 8 _ t   e p i n d e x ;  
  
     / *   s t a y   i n   l o o p   w h i l e   p e n d i n g   i n t e r r u p t s   * /  
     w h i l e   ( ( h p c d - > I n s t a n c e - > I S T R   &   U S B _ I S T R _ C T R )   ! =   0 U )  
     {  
         w I s t r   =   h p c d - > I n s t a n c e - > I S T R ;  
  
         / *   e x t r a c t   h i g h e s t   p r i o r i t y   e n d p o i n t   n u m b e r   * /  
         e p i n d e x   =   ( u i n t 8 _ t ) ( w I s t r   &   U S B _ I S T R _ E P _ I D ) ;  
  
         i f   ( e p i n d e x   = =   0 U )  
         {  
             / *   D e c o d e   a n d   s e r v i c e   c o n t r o l   e n d p o i n t   i n t e r r u p t   * /  
  
             / *   D I R   b i t   =   o r i g i n   o f   t h e   i n t e r r u p t   * /  
             i f   ( ( w I s t r   &   U S B _ I S T R _ D I R )   = =   0 U )  
             {  
                 / *   D I R   =   0   * /  
  
                 / *   D I R   =   0   = >   I N     i n t   * /  
                 / *   D I R   =   0   i m p l i e s   t h a t   ( E P _ C T R _ T X   =   1 )   a l w a y s   * /  
                 P C D _ C L E A R _ T X _ E P _ C T R ( h p c d - > I n s t a n c e ,   P C D _ E N D P 0 ) ;  
                 e p   =   & h p c d - > I N _ e p [ 0 ] ;  
  
                 e p - > x f e r _ c o u n t   =   P C D _ G E T _ E P _ T X _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
                 e p - > x f e r _ b u f f   + =   e p - > x f e r _ c o u n t ;  
  
                 / *   T X   C O M P L E T E   * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h p c d - > D a t a I n S t a g e C a l l b a c k ( h p c d ,   0 U ) ;  
 # e l s e  
                 H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( h p c d ,   0 U ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
                 i f   ( ( h p c d - > U S B _ A d d r e s s   >   0 U )   & &   ( e p - > x f e r _ l e n   = =   0 U ) )  
                 {  
                     h p c d - > I n s t a n c e - > D A D D R   =   ( ( u i n t 1 6 _ t ) h p c d - > U S B _ A d d r e s s   |   U S B _ D A D D R _ E F ) ;  
                     h p c d - > U S B _ A d d r e s s   =   0 U ;  
                 }  
             }  
             e l s e  
             {  
                 / *   D I R   =   1   * /  
  
                 / *   D I R   =   1   &   C T R _ R X   = >   S E T U P   o r   O U T   i n t   * /  
                 / *   D I R   =   1   &   ( C T R _ T X   |   C T R _ R X )   = >   2   i n t   p e n d i n g   * /  
                 e p   =   & h p c d - > O U T _ e p [ 0 ] ;  
                 w E P V a l   =   P C D _ G E T _ E N D P O I N T ( h p c d - > I n s t a n c e ,   P C D _ E N D P 0 ) ;  
  
                 i f   ( ( w E P V a l   &   U S B _ E P _ S E T U P )   ! =   0 U )  
                 {  
                     / *   G e t   S E T U P   P a c k e t   * /  
                     e p - > x f e r _ c o u n t   =   P C D _ G E T _ E P _ R X _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
                     U S B _ R e a d P M A ( h p c d - > I n s t a n c e ,   ( u i n t 8 _ t   * ) h p c d - > S e t u p ,  
                                             e p - > p m a a d r e s s ,   ( u i n t 1 6 _ t ) e p - > x f e r _ c o u n t ) ;  
  
                     / *   S E T U P   b i t   k e p t   f r o z e n   w h i l e   C T R _ R X   =   1   * /  
                     P C D _ C L E A R _ R X _ E P _ C T R ( h p c d - > I n s t a n c e ,   P C D _ E N D P 0 ) ;  
  
                     / *   P r o c e s s   S E T U P   P a c k e t * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                     h p c d - > S e t u p S t a g e C a l l b a c k ( h p c d ) ;  
 # e l s e  
                     H A L _ P C D _ S e t u p S t a g e C a l l b a c k ( h p c d ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
                 e l s e   i f   ( ( w E P V a l   &   U S B _ E P _ C T R _ R X )   ! =   0 U )  
                 {  
                     P C D _ C L E A R _ R X _ E P _ C T R ( h p c d - > I n s t a n c e ,   P C D _ E N D P 0 ) ;  
  
                     / *   G e t   C o n t r o l   D a t a   O U T   P a c k e t   * /  
                     e p - > x f e r _ c o u n t   =   P C D _ G E T _ E P _ R X _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
                     i f   ( ( e p - > x f e r _ c o u n t   ! =   0 U )   & &   ( e p - > x f e r _ b u f f   ! =   0 U ) )  
                     {  
                         U S B _ R e a d P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,  
                                                 e p - > p m a a d r e s s ,   ( u i n t 1 6 _ t ) e p - > x f e r _ c o u n t ) ;  
  
                         e p - > x f e r _ b u f f   + =   e p - > x f e r _ c o u n t ;  
  
                         / *   P r o c e s s   C o n t r o l   D a t a   O U T   P a c k e t   * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                         h p c d - > D a t a O u t S t a g e C a l l b a c k ( h p c d ,   0 U ) ;  
 # e l s e  
                         H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( h p c d ,   0 U ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
                     }  
  
                     i f   ( ( P C D _ G E T _ E N D P O I N T ( h p c d - > I n s t a n c e ,   P C D _ E N D P 0 )   &   U S B _ E P _ S E T U P )   = =   0 U )  
                     {  
                         P C D _ S E T _ E P _ R X _ C N T ( h p c d - > I n s t a n c e ,   P C D _ E N D P 0 ,   e p - > m a x p a c k e t ) ;  
                         P C D _ S E T _ E P _ R X _ S T A T U S ( h p c d - > I n s t a n c e ,   P C D _ E N D P 0 ,   U S B _ E P _ R X _ V A L I D ) ;  
                     }  
                 }  
             }  
         }  
         e l s e  
         {  
             / *   D e c o d e   a n d   s e r v i c e   n o n   c o n t r o l   e n d p o i n t s   i n t e r r u p t   * /  
             / *   p r o c e s s   r e l a t e d   e n d p o i n t   r e g i s t e r   * /  
             w E P V a l   =   P C D _ G E T _ E N D P O I N T ( h p c d - > I n s t a n c e ,   e p i n d e x ) ;  
  
             i f   ( ( w E P V a l   &   U S B _ E P _ C T R _ R X )   ! =   0 U )  
             {  
                 / *   c l e a r   i n t   f l a g   * /  
                 P C D _ C L E A R _ R X _ E P _ C T R ( h p c d - > I n s t a n c e ,   e p i n d e x ) ;  
                 e p   =   & h p c d - > O U T _ e p [ e p i n d e x ] ;  
  
                 / *   O U T   S i n g l e   B u f f e r i n g   * /  
                 i f   ( e p - > d o u b l e b u f f e r   = =   0 U )  
                 {  
                     c o u n t   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ R X _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
                     i f   ( c o u n t   ! =   0 U )  
                     {  
                         U S B _ R e a d P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,   e p - > p m a a d r e s s ,   c o u n t ) ;  
                     }  
                 }  
                 e l s e  
                 {  
                     / *   m a n a g e   d o u b l e   b u f f e r   b u l k   o u t   * /  
                     i f   ( e p - > t y p e   = =   E P _ T Y P E _ B U L K )  
                     {  
                         c o u n t   =   H A L _ P C D _ E P _ D B _ R e c e i v e ( h p c d ,   e p ,   w E P V a l ) ;  
                     }  
                     e l s e   / *   m a n a g e   d o u b l e   b u f f e r   i s o   o u t   * /  
                     {  
                         / *   f r e e   E P   O U T   B u f f e r   * /  
                         P C D _ F r e e U s e r B u f f e r ( h p c d - > I n s t a n c e ,   e p - > n u m ,   0 U ) ;  
  
                         i f   ( ( P C D _ G E T _ E N D P O I N T ( h p c d - > I n s t a n c e ,   e p - > n u m )   &   U S B _ E P _ D T O G _ R X )   ! =   0 U )  
                         {  
                             / *   r e a d   f r o m   e n d p o i n t   B U F 0 A d d r   b u f f e r   * /  
                             c o u n t   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ D B U F 0 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
                             i f   ( c o u n t   ! =   0 U )  
                             {  
                                 U S B _ R e a d P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,   e p - > p m a a d d r 0 ,   c o u n t ) ;  
                             }  
                         }  
                         e l s e  
                         {  
                             / *   r e a d   f r o m   e n d p o i n t   B U F 1 A d d r   b u f f e r   * /  
                             c o u n t   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ D B U F 1 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
                             i f   ( c o u n t   ! =   0 U )  
                             {  
                                 U S B _ R e a d P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,   e p - > p m a a d d r 1 ,   c o u n t ) ;  
                             }  
                         }  
                     }  
                 }  
                 / *   m u l t i - p a c k e t   o n   t h e   N O N   c o n t r o l   O U T   e n d p o i n t   * /  
                 e p - > x f e r _ c o u n t   + =   c o u n t ;  
                 e p - > x f e r _ b u f f   + =   c o u n t ;  
  
                 i f   ( ( e p - > x f e r _ l e n   = =   0 U )   | |   ( c o u n t   <   e p - > m a x p a c k e t ) )  
                 {  
                     / *   R X   C O M P L E T E   * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                     h p c d - > D a t a O u t S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e l s e  
                     H A L _ P C D _ D a t a O u t S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
                 e l s e  
                 {  
                     ( v o i d )   U S B _ E P S t a r t X f e r ( h p c d - > I n s t a n c e ,   e p ) ;  
                 }  
  
             }  
  
             i f   ( ( w E P V a l   &   U S B _ E P _ C T R _ T X )   ! =   0 U )  
             {  
                 e p   =   & h p c d - > I N _ e p [ e p i n d e x ] ;  
  
                 / *   c l e a r   i n t   f l a g   * /  
                 P C D _ C L E A R _ T X _ E P _ C T R ( h p c d - > I n s t a n c e ,   e p i n d e x ) ;  
  
                 / *   M a n a g e   a l l   n o n   b u l k / i s o c   t r a n s a c t i o n   B u l k   S i n g l e   B u f f e r   T r a n s a c t i o n   * /  
                 i f   ( ( e p - > t y p e   = =   E P _ T Y P E _ I N T R )   | |   ( e p - > t y p e   = =   E P _ T Y P E _ C T R L )   | |  
                       ( ( e p - > t y p e   = =   E P _ T Y P E _ B U L K )   & &   ( ( w E P V a l   &   U S B _ E P _ K I N D )   = =   0 U ) ) )  
                 {  
                     / *   m u l t i - p a c k e t   o n   t h e   N O N   c o n t r o l   I N   e n d p o i n t   * /  
                     T x B y t e N b r e   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ T X _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
                     i f   ( e p - > x f e r _ l e n   >   T x B y t e N b r e )  
                     {  
                         e p - > x f e r _ l e n   - =   T x B y t e N b r e ;  
                     }  
                     e l s e  
                     {  
                         e p - > x f e r _ l e n   =   0 U ;  
                     }  
  
                     / *   Z e r o   L e n g t h   P a c k e t ?   * /  
                     i f   ( e p - > x f e r _ l e n   = =   0 U )  
                     {  
                         / *   T X   C O M P L E T E   * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                         h p c d - > D a t a I n S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e l s e  
                         H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
                     }  
                     e l s e  
                     {  
                         / *   T r a n s f e r   i s   n o t   y e t   D o n e   * /  
                         e p - > x f e r _ b u f f   + =   T x B y t e N b r e ;  
                         e p - > x f e r _ c o u n t   + =   T x B y t e N b r e ;  
                         ( v o i d ) U S B _ E P S t a r t X f e r ( h p c d - > I n s t a n c e ,   e p ) ;  
                     }  
                 }  
                 / *   D o u b l e   B u f f e r   I s o / b u l k   I N   ( b u l k   t r a n s f e r   L e n   >   E p _ M p s )   * /  
                 e l s e  
                 {  
                     ( v o i d ) H A L _ P C D _ E P _ D B _ T r a n s m i t ( h p c d ,   e p ,   w E P V a l ) ;  
                 }  
             }  
         }  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     M a n a g e   d o u b l e   b u f f e r   b u l k   o u t   t r a n s a c t i o n   f r o m   I S R  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p   c u r r e n t   e n d p o i n t   h a n d l e  
     *   @ p a r a m     w E P V a l   L a s t   s n a p s h o t   o f   E P R x   r e g i s t e r   v a l u e   t a k e n   i n   I S R  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   u i n t 1 6 _ t   H A L _ P C D _ E P _ D B _ R e c e i v e ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                             P C D _ E P T y p e D e f   * e p ,   u i n t 1 6 _ t   w E P V a l )  
 {  
     u i n t 1 6 _ t   c o u n t ;  
  
     / *   M a n a g e   B u f f e r 0   O U T   * /  
     i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ R X )   ! =   0 U )  
     {  
         / *   G e t   c o u n t   o f   r e c e i v e d   D a t a   o n   b u f f e r 0   * /  
         c o u n t   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ D B U F 0 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
         i f   ( e p - > x f e r _ l e n   > =   c o u n t )  
         {  
             e p - > x f e r _ l e n   - =   c o u n t ;  
         }  
         e l s e  
         {  
             e p - > x f e r _ l e n   =   0 U ;  
         }  
  
         i f   ( e p - > x f e r _ l e n   = =   0 U )  
         {  
             / *   s e t   N A K   t o   O U T   e n d p o i n t   s i n c e   d o u b l e   b u f f e r   i s   e n a b l e d   * /  
             P C D _ S E T _ E P _ R X _ S T A T U S ( h p c d - > I n s t a n c e ,   e p - > n u m ,   U S B _ E P _ R X _ N A K ) ;  
         }  
  
         / *   C h e c k   i f   B u f f e r 1   i s   i n   b l o c k e d   s a t e   w h i c h   r e q u i r e s   t o   t o g g l e   * /  
         i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ T X )   ! =   0 U )  
         {  
             P C D _ F r e e U s e r B u f f e r ( h p c d - > I n s t a n c e ,   e p - > n u m ,   0 U ) ;  
         }  
  
         i f   ( c o u n t   ! =   0 U )  
         {  
             U S B _ R e a d P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,   e p - > p m a a d d r 0 ,   c o u n t ) ;  
         }  
     }  
     / *   M a n a g e   B u f f e r   1   D T O G _ R X = 0   * /  
     e l s e  
     {  
         / *   G e t   c o u n t   o f   r e c e i v e d   d a t a   * /  
         c o u n t   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ D B U F 1 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
         i f   ( e p - > x f e r _ l e n   > =   c o u n t )  
         {  
             e p - > x f e r _ l e n   - =   c o u n t ;  
         }  
         e l s e  
         {  
             e p - > x f e r _ l e n   =   0 U ;  
         }  
  
         i f   ( e p - > x f e r _ l e n   = =   0 U )  
         {  
             / *   s e t   N A K   o n   t h e   c u r r e n t   e n d p o i n t   * /  
             P C D _ S E T _ E P _ R X _ S T A T U S ( h p c d - > I n s t a n c e ,   e p - > n u m ,   U S B _ E P _ R X _ N A K ) ;  
         }  
  
         / * N e e d   t o   F r e e U s e r   B u f f e r * /  
         i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ T X )   = =   0 U )  
         {  
             P C D _ F r e e U s e r B u f f e r ( h p c d - > I n s t a n c e ,   e p - > n u m ,   0 U ) ;  
         }  
  
         i f   ( c o u n t   ! =   0 U )  
         {  
             U S B _ R e a d P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,   e p - > p m a a d d r 1 ,   c o u n t ) ;  
         }  
     }  
  
     r e t u r n   c o u n t ;  
 }  
  
  
 / * *  
     *   @ b r i e f     M a n a g e   d o u b l e   b u f f e r   b u l k   I N   t r a n s a c t i o n   f r o m   I S R  
     *   @ p a r a m     h p c d   P C D   h a n d l e  
     *   @ p a r a m     e p   c u r r e n t   e n d p o i n t   h a n d l e  
     *   @ p a r a m     w E P V a l   L a s t   s n a p s h o t   o f   E P R x   r e g i s t e r   v a l u e   t a k e n   i n   I S R  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   H A L _ P C D _ E P _ D B _ T r a n s m i t ( P C D _ H a n d l e T y p e D e f   * h p c d ,  
                                                                                                 P C D _ E P T y p e D e f   * e p ,   u i n t 1 6 _ t   w E P V a l )  
 {  
     u i n t 3 2 _ t   l e n ;  
     u i n t 1 6 _ t   T x B y t e N b r e ;  
  
     / *   D a t a   B u f f e r 0   A C K   r e c e i v e d   * /  
     i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ T X )   ! =   0 U )  
     {  
         / *   m u l t i - p a c k e t   o n   t h e   N O N   c o n t r o l   I N   e n d p o i n t   * /  
         T x B y t e N b r e   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ D B U F 0 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
         i f   ( e p - > x f e r _ l e n   >   T x B y t e N b r e )  
         {  
             e p - > x f e r _ l e n   - =   T x B y t e N b r e ;  
         }  
         e l s e  
         {  
             e p - > x f e r _ l e n   =   0 U ;  
         }  
         / *   T r a n s f e r   i s   c o m p l e t e d   * /  
         i f   ( e p - > x f e r _ l e n   = =   0 U )  
         {  
             P C D _ S E T _ E P _ D B U F 0 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ,   e p - > i s _ i n ,   0 U ) ;  
             P C D _ S E T _ E P _ D B U F 1 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ,   e p - > i s _ i n ,   0 U ) ;  
  
             / *   T X   C O M P L E T E   * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > D a t a I n S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e l s e  
             H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ R X )   ! =   0 U )  
             {  
                 P C D _ F r e e U s e r B u f f e r ( h p c d - > I n s t a n c e ,   e p - > n u m ,   1 U ) ;  
             }  
         }  
         e l s e   / *   T r a n s f e r   i s   n o t   y e t   D o n e   * /  
         {  
             / *   n e e d   t o   F r e e   U S B   B u f f   * /  
             i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ R X )   ! =   0 U )  
             {  
                 P C D _ F r e e U s e r B u f f e r ( h p c d - > I n s t a n c e ,   e p - > n u m ,   1 U ) ;  
             }  
  
             / *   S t i l l   t h e r e   i s   d a t a   t o   F i l l   i n   t h e   n e x t   B u f f e r   * /  
             i f   ( e p - > x f e r _ f i l l _ d b   = =   1 U )  
             {  
                 e p - > x f e r _ b u f f   + =   T x B y t e N b r e ;  
                 e p - > x f e r _ c o u n t   + =   T x B y t e N b r e ;  
  
                 / *   C a l c u l a t e   t h e   l e n   o f   t h e   n e w   b u f f e r   t o   f i l l   * /  
                 i f   ( e p - > x f e r _ l e n _ d b   > =   e p - > m a x p a c k e t )  
                 {  
                     l e n   =   e p - > m a x p a c k e t ;  
                     e p - > x f e r _ l e n _ d b   - =   l e n ;  
                 }  
                 e l s e   i f   ( e p - > x f e r _ l e n _ d b   = =   0 U )  
                 {  
                     l e n   =   T x B y t e N b r e ;  
                     e p - > x f e r _ f i l l _ d b   =   0 U ;  
                 }  
                 e l s e  
                 {  
                     e p - > x f e r _ f i l l _ d b   =   0 U ;  
                     l e n   =   e p - > x f e r _ l e n _ d b ;  
                     e p - > x f e r _ l e n _ d b   =   0 U ;  
                 }  
  
                 / *   W r i t e   r e m a i n i n g   D a t a   t o   B u f f e r   * /  
                 / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a   b u f f e r 1   * /  
                 P C D _ S E T _ E P _ D B U F 0 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
  
                 / *   C o p y   u s e r   b u f f e r   t o   U S B   P M A   * /  
                 U S B _ W r i t e P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,     e p - > p m a a d d r 0 ,   ( u i n t 1 6 _ t ) l e n ) ;  
             }  
         }  
     }  
     e l s e   / *   D a t a   B u f f e r 1   A C K   r e c e i v e d   * /  
     {  
         / *   m u l t i - p a c k e t   o n   t h e   N O N   c o n t r o l   I N   e n d p o i n t   * /  
         T x B y t e N b r e   =   ( u i n t 1 6 _ t ) P C D _ G E T _ E P _ D B U F 1 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ) ;  
  
         i f   ( e p - > x f e r _ l e n   > =   T x B y t e N b r e )  
         {  
             e p - > x f e r _ l e n   - =   T x B y t e N b r e ;  
         }  
         e l s e  
         {  
             e p - > x f e r _ l e n   =   0 U ;  
         }  
  
         / *   T r a n s f e r   i s   c o m p l e t e d   * /  
         i f   ( e p - > x f e r _ l e n   = =   0 U )  
         {  
             P C D _ S E T _ E P _ D B U F 0 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ,   e p - > i s _ i n ,   0 U ) ;  
             P C D _ S E T _ E P _ D B U F 1 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ,   e p - > i s _ i n ,   0 U ) ;  
  
             / *   T X   C O M P L E T E   * /  
 # i f   ( U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h p c d - > D a t a I n S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e l s e  
             H A L _ P C D _ D a t a I n S t a g e C a l l b a c k ( h p c d ,   e p - > n u m ) ;  
 # e n d i f   / *   U S E _ H A L _ P C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             / *   n e e d   t o   F r e e   U S B   B u f f   * /  
             i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ R X )   = =   0 U )  
             {  
                 P C D _ F r e e U s e r B u f f e r ( h p c d - > I n s t a n c e ,   e p - > n u m ,   1 U ) ;  
             }  
         }  
         e l s e   / *   T r a n s f e r   i s   n o t   y e t   D o n e   * /  
         {  
             / *   n e e d   t o   F r e e   U S B   B u f f   * /  
             i f   ( ( w E P V a l   &   U S B _ E P _ D T O G _ R X )   = =   0 U )  
             {  
                 P C D _ F r e e U s e r B u f f e r ( h p c d - > I n s t a n c e ,   e p - > n u m ,   1 U ) ;  
             }  
  
             / *   S t i l l   t h e r e   i s   d a t a   t o   F i l l   i n   t h e   n e x t   B u f f e r   * /  
             i f   ( e p - > x f e r _ f i l l _ d b   = =   1 U )  
             {  
                 e p - > x f e r _ b u f f   + =   T x B y t e N b r e ;  
                 e p - > x f e r _ c o u n t   + =   T x B y t e N b r e ;  
  
                 / *   C a l c u l a t e   t h e   l e n   o f   t h e   n e w   b u f f e r   t o   f i l l   * /  
                 i f   ( e p - > x f e r _ l e n _ d b   > =   e p - > m a x p a c k e t )  
                 {  
                     l e n   =   e p - > m a x p a c k e t ;  
                     e p - > x f e r _ l e n _ d b   - =   l e n ;  
                 }  
                 e l s e   i f   ( e p - > x f e r _ l e n _ d b   = =   0 U )  
                 {  
                     l e n   =   T x B y t e N b r e ;  
                     e p - > x f e r _ f i l l _ d b   =   0 U ;  
                 }  
                 e l s e  
                 {  
                     l e n   =   e p - > x f e r _ l e n _ d b ;  
                     e p - > x f e r _ l e n _ d b   =   0 U ;  
                     e p - > x f e r _ f i l l _ d b   =   0 ;  
                 }  
  
                 / *   S e t   t h e   D o u b l e   b u f f e r   c o u n t e r   f o r   p m a b u f f e r 1   * /  
                 P C D _ S E T _ E P _ D B U F 1 _ C N T ( h p c d - > I n s t a n c e ,   e p - > n u m ,   e p - > i s _ i n ,   l e n ) ;  
  
                 / *   C o p y   t h e   u s e r   b u f f e r   t o   U S B   P M A   * /  
                 U S B _ W r i t e P M A ( h p c d - > I n s t a n c e ,   e p - > x f e r _ b u f f ,     e p - > p m a a d d r 1 ,   ( u i n t 1 6 _ t ) l e n ) ;  
             }  
         }  
     }  
  
     / * e n a b l e   e n d p o i n t   I N * /  
     P C D _ S E T _ E P _ T X _ S T A T U S ( h p c d - > I n s t a n c e ,   e p - > n u m ,   U S B _ E P _ T X _ V A L I D ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 # e n d i f   / *   d e f i n e d   ( U S B )   * /  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   d e f i n e d   ( U S B )   | |   d e f i n e d   ( U S B _ O T G _ F S )   * /  
 # e n d i f   / *   H A L _ P C D _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  