??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ h c d . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H C D   H A L   m o d u l e   d r i v e r .  
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
     [ . . ]  
         ( # ) D e c l a r e   a   H C D _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e ,   f o r   e x a m p l e :  
               H C D _ H a n d l e T y p e D e f     h h c d ;  
  
         ( # ) F i l l   p a r a m e t e r s   o f   I n i t   s t r u c t u r e   i n   H C D   h a n d l e  
  
         ( # ) C a l l   H A L _ H C D _ I n i t ( )   A P I   t o   i n i t i a l i z e   t h e   H C D   p e r i p h e r a l   ( C o r e ,   H o s t   c o r e ,   . . . )  
  
         ( # ) I n i t i a l i z e   t h e   H C D   l o w   l e v e l   r e s o u r c e s   t h r o u g h   t h e   H A L _ H C D _ M s p I n i t ( )   A P I :  
                 ( # # )   E n a b l e   t h e   H C D / U S B   L o w   L e v e l   i n t e r f a c e   c l o c k   u s i n g   t h e   f o l l o w i n g   m a c r o s  
                           ( + + + )   _ _ H A L _ R C C _ U S B _ O T G _ F S _ C L K _ E N A B L E ( ) ;  
                 ( # # )   I n i t i a l i z e   t h e   r e l a t e d   G P I O   c l o c k s  
                 ( # # )   C o n f i g u r e   H C D   p i n - o u t  
                 ( # # )   C o n f i g u r e   H C D   N V I C   i n t e r r u p t  
  
         ( # ) A s s o c i a t e   t h e   U p p e r   U S B   H o s t   s t a c k   t o   t h e   H A L   H C D   D r i v e r :  
                 ( # # )   h h c d . p D a t a   =   p h o s t ;  
  
         ( # ) E n a b l e   H C D   t r a n s m i s s i o n   a n d   r e c e p t i o n :  
                 ( # # )   H A L _ H C D _ S t a r t ( ) ;  
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
 # i f d e f   H A L _ H C D _ M O D U L E _ E N A B L E D  
 # i f   d e f i n e d   ( U S B _ O T G _ F S )  
  
 / * *   @ d e f g r o u p   H C D   H C D  
     *   @ b r i e f   H C D   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H C D _ P r i v a t e _ F u n c t i o n s   H C D   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   v o i d   H C D _ H C _ I N _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ) ;  
 s t a t i c   v o i d   H C D _ H C _ O U T _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ) ;  
 s t a t i c   v o i d   H C D _ R X Q L V L _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 s t a t i c   v o i d   H C D _ P o r t _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s   H C D   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                     # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   h o s t   d r i v e r .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x ;  
  
     / *   C h e c k   t h e   H C D   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h h c d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ H C D _ A L L _ I N S T A N C E ( h h c d - > I n s t a n c e ) ) ;  
  
     U S B x   =   h h c d - > I n s t a n c e ;  
  
     i f   ( h h c d - > S t a t e   = =   H A L _ H C D _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h h c d - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
         h h c d - > S O F C a l l b a c k   =   H A L _ H C D _ S O F _ C a l l b a c k ;  
         h h c d - > C o n n e c t C a l l b a c k   =   H A L _ H C D _ C o n n e c t _ C a l l b a c k ;  
         h h c d - > D i s c o n n e c t C a l l b a c k   =   H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k ;  
         h h c d - > P o r t E n a b l e d C a l l b a c k   =   H A L _ H C D _ P o r t E n a b l e d _ C a l l b a c k ;  
         h h c d - > P o r t D i s a b l e d C a l l b a c k   =   H A L _ H C D _ P o r t D i s a b l e d _ C a l l b a c k ;  
         h h c d - > H C _ N o t i f y U R B C h a n g e C a l l b a c k   =   H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ;  
  
         i f   ( h h c d - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h h c d - > M s p I n i t C a l l b a c k   =   H A L _ H C D _ M s p I n i t ;  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h h c d - > M s p I n i t C a l l b a c k ( h h c d ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C . . .   * /  
         H A L _ H C D _ M s p I n i t ( h h c d ) ;  
 # e n d i f   / *   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S )   * /  
     }  
  
     h h c d - > S t a t e   =   H A L _ H C D _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   D M A   m o d e   f o r   F S   i n s t a n c e   * /  
     i f   ( ( U S B x - > C I D   &   ( 0 x 1 U   < <   8 ) )   = =   0 U )  
     {  
         h h c d - > I n i t . d m a _ e n a b l e   =   0 U ;  
     }  
  
     / *   D i s a b l e   t h e   I n t e r r u p t s   * /  
     _ _ H A L _ H C D _ D I S A B L E ( h h c d ) ;  
  
     / *   I n i t   t h e   C o r e   ( c o m m o n   i n i t . )   * /  
     ( v o i d ) U S B _ C o r e I n i t ( h h c d - > I n s t a n c e ,   h h c d - > I n i t ) ;  
  
     / *   F o r c e   H o s t   M o d e * /  
     ( v o i d ) U S B _ S e t C u r r e n t M o d e ( h h c d - > I n s t a n c e ,   U S B _ H O S T _ M O D E ) ;  
  
     / *   I n i t   H o s t   * /  
     ( v o i d ) U S B _ H o s t I n i t ( h h c d - > I n s t a n c e ,   h h c d - > I n i t ) ;  
  
     h h c d - > S t a t e   =   H A L _ H C D _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   a   h o s t   c h a n n e l .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h _ n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ p a r a m     e p n u m   E n d p o i n t   n u m b e r .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ p a r a m     d e v _ a d d r e s s   C u r r e n t   d e v i c e   a d d r e s s  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o   2 5 5  
     *   @ p a r a m     s p e e d   C u r r e n t   d e v i c e   s p e e d .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         H C D _ D E V I C E _ S P E E D _ F U L L :   F u l l   s p e e d   m o d e ,  
     *                         H C D _ D E V I C E _ S P E E D _ L O W :   L o w   s p e e d   m o d e  
     *   @ p a r a m     e p _ t y p e   E n d p o i n t   T y p e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         E P _ T Y P E _ C T R L :   C o n t r o l   t y p e ,  
     *                         E P _ T Y P E _ I S O C :   I s o c h r o n o u s   t y p e ,  
     *                         E P _ T Y P E _ B U L K :   B u l k   t y p e ,  
     *                         E P _ T Y P E _ I N T R :   I n t e r r u p t   t y p e  
     *   @ p a r a m     m p s   M a x   P a c k e t   S i z e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   0   t o 3 2 K  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ H C _ I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                     u i n t 8 _ t   c h _ n u m ,  
                                                                     u i n t 8 _ t   e p n u m ,  
                                                                     u i n t 8 _ t   d e v _ a d d r e s s ,  
                                                                     u i n t 8 _ t   s p e e d ,  
                                                                     u i n t 8 _ t   e p _ t y p e ,  
                                                                     u i n t 1 6 _ t   m p s )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s ;  
  
     _ _ H A L _ L O C K ( h h c d ) ;  
     h h c d - > h c [ c h _ n u m ] . d o _ p i n g   =   0 U ;  
     h h c d - > h c [ c h _ n u m ] . d e v _ a d d r   =   d e v _ a d d r e s s ;  
     h h c d - > h c [ c h _ n u m ] . m a x _ p a c k e t   =   m p s ;  
     h h c d - > h c [ c h _ n u m ] . c h _ n u m   =   c h _ n u m ;  
     h h c d - > h c [ c h _ n u m ] . e p _ t y p e   =   e p _ t y p e ;  
     h h c d - > h c [ c h _ n u m ] . e p _ n u m   =   e p n u m   &   0 x 7 F U ;  
  
     i f   ( ( e p n u m   &   0 x 8 0 U )   = =   0 x 8 0 U )  
     {  
         h h c d - > h c [ c h _ n u m ] . e p _ i s _ i n   =   1 U ;  
     }  
     e l s e  
     {  
         h h c d - > h c [ c h _ n u m ] . e p _ i s _ i n   =   0 U ;  
     }  
  
     h h c d - > h c [ c h _ n u m ] . s p e e d   =   s p e e d ;  
  
     s t a t u s   =     U S B _ H C _ I n i t ( h h c d - > I n s t a n c e ,  
                                                 c h _ n u m ,  
                                                 e p n u m ,  
                                                 d e v _ a d d r e s s ,  
                                                 s p e e d ,  
                                                 e p _ t y p e ,  
                                                 m p s ) ;  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     H a l t   a   h o s t   c h a n n e l .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h _ n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ H C _ H a l t ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h _ n u m )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     _ _ H A L _ L O C K ( h h c d ) ;  
     ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   h o s t   d r i v e r .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ D e I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   C h e c k   t h e   H C D   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h h c d   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     h h c d - > S t a t e   =   H A L _ H C D _ S T A T E _ B U S Y ;  
  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
     i f   ( h h c d - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h h c d - > M s p D e I n i t C a l l b a c k   =   H A L _ H C D _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t     * /  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h h c d - > M s p D e I n i t C a l l b a c k ( h h c d ) ;  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   C L O C K ,   N V I C . * /  
     H A L _ H C D _ M s p D e I n i t ( h h c d ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
     _ _ H A L _ H C D _ D I S A B L E ( h h c d ) ;  
  
     h h c d - > S t a t e   =   H A L _ H C D _ S T A T E _ R E S E T ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   H C D   M S P .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d     H A L _ H C D _ M s p I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   H C D   M S P .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d     H A L _ H C D _ M s p D e I n i t ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f       H C D   I O   o p e r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
   [ . . ]   T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   U S B   H o s t   D a t a  
         T r a n s f e r  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S u b m i t   a   n e w   U R B   f o r   p r o c e s s i n g .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h _ n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ p a r a m     d i r e c t i o n   C h a n n e l   n u m b e r .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                       0   :   O u t p u t   /   1   :   I n p u t  
     *   @ p a r a m     e p _ t y p e   E n d p o i n t   T y p e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         E P _ T Y P E _ C T R L :   C o n t r o l   t y p e /  
     *                         E P _ T Y P E _ I S O C :   I s o c h r o n o u s   t y p e /  
     *                         E P _ T Y P E _ B U L K :   B u l k   t y p e /  
     *                         E P _ T Y P E _ I N T R :   I n t e r r u p t   t y p e /  
     *   @ p a r a m     t o k e n   E n d p o i n t   T y p e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         0 :   H C _ P I D _ S E T U P   /   1 :   H C _ P I D _ D A T A 1  
     *   @ p a r a m     p b u f f   p o i n t e r   t o   U R B   d a t a  
     *   @ p a r a m     l e n g t h   L e n g t h   o f   U R B   d a t a  
     *   @ p a r a m     d o _ p i n g   a c t i v a t e   d o   p i n g   p r o t o c o l   ( f o r   h i g h   s p e e d   o n l y ) .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                       0   :   d o   p i n g   i n a c t i v e   /   1   :   d o   p i n g   a c t i v e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ H C _ S u b m i t R e q u e s t ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                                       u i n t 8 _ t   c h _ n u m ,  
                                                                                       u i n t 8 _ t   d i r e c t i o n ,  
                                                                                       u i n t 8 _ t   e p _ t y p e ,  
                                                                                       u i n t 8 _ t   t o k e n ,  
                                                                                       u i n t 8 _ t   * p b u f f ,  
                                                                                       u i n t 1 6 _ t   l e n g t h ,  
                                                                                       u i n t 8 _ t   d o _ p i n g )  
 {  
     h h c d - > h c [ c h _ n u m ] . e p _ i s _ i n   =   d i r e c t i o n ;  
     h h c d - > h c [ c h _ n u m ] . e p _ t y p e     =   e p _ t y p e ;  
  
     i f   ( t o k e n   = =   0 U )  
     {  
         h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ S E T U P ;  
         h h c d - > h c [ c h _ n u m ] . d o _ p i n g   =   d o _ p i n g ;  
     }  
     e l s e  
     {  
         h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 1 ;  
     }  
  
     / *   M a n a g e   D a t a   T o g g l e   * /  
     s w i t c h   ( e p _ t y p e )  
     {  
         c a s e   E P _ T Y P E _ C T R L :  
             i f   ( ( t o k e n   = =   1 U )   & &   ( d i r e c t i o n   = =   0 U ) )   / * s e n d   d a t a   * /  
             {  
                 i f   ( l e n g t h   = =   0 U )  
                 {  
                     / *   F o r   S t a t u s   O U T   s t a g e ,   L e n g t h = = 0 ,   S t a t u s   O u t   P I D   =   1   * /  
                     h h c d - > h c [ c h _ n u m ] . t o g g l e _ o u t   =   1 U ;  
                 }  
  
                 / *   S e t   t h e   D a t a   T o g g l e   b i t   a s   p e r   t h e   F l a g   * /  
                 i f   ( h h c d - > h c [ c h _ n u m ] . t o g g l e _ o u t   = =   0 U )  
                 {  
                     / *   P u t   t h e   P I D   0   * /  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 0 ;  
                 }  
                 e l s e  
                 {  
                     / *   P u t   t h e   P I D   1   * /  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 1 ;  
                 }  
             }  
             b r e a k ;  
  
         c a s e   E P _ T Y P E _ B U L K :  
             i f   ( d i r e c t i o n   = =   0 U )  
             {  
                 / *   S e t   t h e   D a t a   T o g g l e   b i t   a s   p e r   t h e   F l a g   * /  
                 i f   ( h h c d - > h c [ c h _ n u m ] . t o g g l e _ o u t   = =   0 U )  
                 {  
                     / *   P u t   t h e   P I D   0   * /  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 0 ;  
                 }  
                 e l s e  
                 {  
                     / *   P u t   t h e   P I D   1   * /  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 1 ;  
                 }  
             }  
             e l s e  
             {  
                 i f   ( h h c d - > h c [ c h _ n u m ] . t o g g l e _ i n   = =   0 U )  
                 {  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 0 ;  
                 }  
                 e l s e  
                 {  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 1 ;  
                 }  
             }  
  
             b r e a k ;  
         c a s e   E P _ T Y P E _ I N T R :  
             i f   ( d i r e c t i o n   = =   0 U )  
             {  
                 / *   S e t   t h e   D a t a   T o g g l e   b i t   a s   p e r   t h e   F l a g   * /  
                 i f   ( h h c d - > h c [ c h _ n u m ] . t o g g l e _ o u t   = =   0 U )  
                 {  
                     / *   P u t   t h e   P I D   0   * /  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 0 ;  
                 }  
                 e l s e  
                 {  
                     / *   P u t   t h e   P I D   1   * /  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 1 ;  
                 }  
             }  
             e l s e  
             {  
                 i f   ( h h c d - > h c [ c h _ n u m ] . t o g g l e _ i n   = =   0 U )  
                 {  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 0 ;  
                 }  
                 e l s e  
                 {  
                     h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 1 ;  
                 }  
             }  
             b r e a k ;  
  
         c a s e   E P _ T Y P E _ I S O C :  
             h h c d - > h c [ c h _ n u m ] . d a t a _ p i d   =   H C _ P I D _ D A T A 0 ;  
             b r e a k ;  
  
         d e f a u l t :  
             b r e a k ;  
     }  
  
     h h c d - > h c [ c h _ n u m ] . x f e r _ b u f f   =   p b u f f ;  
     h h c d - > h c [ c h _ n u m ] . x f e r _ l e n     =   l e n g t h ;  
     h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ I D L E ;  
     h h c d - > h c [ c h _ n u m ] . x f e r _ c o u n t   =   0 U ;  
     h h c d - > h c [ c h _ n u m ] . c h _ n u m   =   c h _ n u m ;  
     h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ I D L E ;  
  
     r e t u r n   U S B _ H C _ S t a r t X f e r ( h h c d - > I n s t a n c e ,   & h h c d - > h c [ c h _ n u m ] ) ;  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   H C D   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ H C D _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h h c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   i ;  
     u i n t 3 2 _ t   i n t e r r u p t ;  
  
     / *   E n s u r e   t h a t   w e   a r e   i n   d e v i c e   m o d e   * /  
     i f   ( U S B _ G e t M o d e ( h h c d - > I n s t a n c e )   = =   U S B _ O T G _ M O D E _ H O S T )  
     {  
         / *   A v o i d   s p u r i o u s   i n t e r r u p t   * /  
         i f   ( _ _ H A L _ H C D _ I S _ I N V A L I D _ I N T E R R U P T ( h h c d ) )  
         {  
             r e t u r n ;  
         }  
  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ P X F R _ I N C O M P I S O O U T ) )  
         {  
             / *   I n c o r r e c t   m o d e ,   a c k n o w l e d g e   t h e   i n t e r r u p t   * /  
             _ _ H A L _ H C D _ C L E A R _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ P X F R _ I N C O M P I S O O U T ) ;  
         }  
  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ I I S O I X F R ) )  
         {  
             / *   I n c o r r e c t   m o d e ,   a c k n o w l e d g e   t h e   i n t e r r u p t   * /  
             _ _ H A L _ H C D _ C L E A R _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ I I S O I X F R ) ;  
         }  
  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ P T X F E ) )  
         {  
             / *   I n c o r r e c t   m o d e ,   a c k n o w l e d g e   t h e   i n t e r r u p t   * /  
             _ _ H A L _ H C D _ C L E A R _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ P T X F E ) ;  
         }  
  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ M M I S ) )  
         {  
             / *   I n c o r r e c t   m o d e ,   a c k n o w l e d g e   t h e   i n t e r r u p t   * /  
             _ _ H A L _ H C D _ C L E A R _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ M M I S ) ;  
         }  
  
         / *   H a n d l e   H o s t   D i s c o n n e c t   I n t e r r u p t s   * /  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ D I S C I N T ) )  
         {  
             _ _ H A L _ H C D _ C L E A R _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ D I S C I N T ) ;  
  
             i f   ( ( U S B x _ H P R T 0   &   U S B _ O T G _ H P R T _ P C S T S )   = =   0 U )  
             {  
                 / *   H a n d l e   H o s t   P o r t   D i s c o n n e c t   I n t e r r u p t   * /  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
                 h h c d - > D i s c o n n e c t C a l l b a c k ( h h c d ) ;  
 # e l s e  
                 H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k ( h h c d ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
                 ( v o i d ) U S B _ I n i t F S L S P C l k S e l ( h h c d - > I n s t a n c e ,   H C F G _ 4 8 _ M H Z ) ;  
             }  
         }  
  
         / *   H a n d l e   H o s t   P o r t   I n t e r r u p t s   * /  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ H P R T I N T ) )  
         {  
             H C D _ P o r t _ I R Q H a n d l e r ( h h c d ) ;  
         }  
  
         / *   H a n d l e   H o s t   S O F   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ S O F ) )  
         {  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h h c d - > S O F C a l l b a c k ( h h c d ) ;  
 # e l s e  
             H A L _ H C D _ S O F _ C a l l b a c k ( h h c d ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
             _ _ H A L _ H C D _ C L E A R _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ S O F ) ;  
         }  
  
         / *   H a n d l e   R x   Q u e u e   L e v e l   I n t e r r u p t s   * /  
         i f   ( ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ R X F L V L ) )   ! =   0 U )  
         {  
             U S B _ M A S K _ I N T E R R U P T ( h h c d - > I n s t a n c e ,   U S B _ O T G _ G I N T S T S _ R X F L V L ) ;  
  
             H C D _ R X Q L V L _ I R Q H a n d l e r ( h h c d ) ;  
  
             U S B _ U N M A S K _ I N T E R R U P T ( h h c d - > I n s t a n c e ,   U S B _ O T G _ G I N T S T S _ R X F L V L ) ;  
         }  
  
         / *   H a n d l e   H o s t   c h a n n e l   I n t e r r u p t   * /  
         i f   ( _ _ H A L _ H C D _ G E T _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ H C I N T ) )  
         {  
             i n t e r r u p t   =   U S B _ H C _ R e a d I n t e r r u p t ( h h c d - > I n s t a n c e ) ;  
             f o r   ( i   =   0 U ;   i   <   h h c d - > I n i t . H o s t _ c h a n n e l s ;   i + + )  
             {  
                 i f   ( ( i n t e r r u p t   &   ( 1 U L   < <   ( i   &   0 x F U ) ) )   ! =   0 U )  
                 {  
                     i f   ( ( U S B x _ H C ( i ) - > H C C H A R   &   U S B _ O T G _ H C C H A R _ E P D I R )   = =   U S B _ O T G _ H C C H A R _ E P D I R )  
                     {  
                         H C D _ H C _ I N _ I R Q H a n d l e r ( h h c d ,   ( u i n t 8 _ t ) i ) ;  
                     }  
                     e l s e  
                     {  
                         H C D _ H C _ O U T _ I R Q H a n d l e r ( h h c d ,   ( u i n t 8 _ t ) i ) ;  
                     }  
                 }  
             }  
             _ _ H A L _ H C D _ C L E A R _ F L A G ( h h c d ,   U S B _ O T G _ G I N T S T S _ H C I N T ) ;  
         }  
     }  
 }  
  
  
 / * *  
     *   @ b r i e f     H a n d l e s   H C D   W a k e u p   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ H C D _ W K U P _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     U N U S E D ( h h c d ) ;  
 }  
  
  
 / * *  
     *   @ b r i e f     S O F   c a l l b a c k .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ H C D _ S O F _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ S O F _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   C o n n e c t i o n   E v e n t   c a l l b a c k .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ H C D _ C o n n e c t _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ C o n n e c t _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D i s c o n n e c t i o n   E v e n t   c a l l b a c k .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     P o r t   E n a b l e d     E v e n t   c a l l b a c k .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ H C D _ P o r t E n a b l e d _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     P o r t   D i s a b l e d     E v e n t   c a l l b a c k .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ H C D _ P o r t D i s a b l e d _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     N o t i f y   U R B   s t a t e   c h a n g e   c a l l b a c k .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ p a r a m     u r b _ s t a t e :  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         U R B _ I D L E /  
     *                         U R B _ D O N E /  
     *                         U R B _ N O T R E A D Y /  
     *                         U R B _ N Y E T /  
     *                         U R B _ E R R O R /  
     *                         U R B _ S T A L L /  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m ,   H C D _ U R B S t a t e T y p e D e f   u r b _ s t a t e )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h h c d ) ;  
     U N U S E D ( c h n u m ) ;  
     U N U S E D ( u r b _ s t a t e ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   U S B   H C D   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h h c d   U S B   H C D   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ H C D _ S O F _ C B _ I D   U S B   H C D   S O F   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ C O N N E C T _ C B _ I D   U S B   H C D   C o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ D I S C O N N E C T _ C B _ I D   O T G   H C D   D i s c o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ P O R T _ E N A B L E D _ C B _ I D   U S B   H C D   P o r t   E n a b l e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ P O R T _ D I S A B L E D _ C B _ I D   U S B   H C D   P o r t   D i s a b l e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ M S P I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ R e g i s t e r C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                                       H A L _ H C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,  
                                                                                       p H C D _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h h c d ) ;  
  
     i f   ( h h c d - > S t a t e   = =   H A L _ H C D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ H C D _ S O F _ C B _ I D   :  
                 h h c d - > S O F C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ C O N N E C T _ C B _ I D   :  
                 h h c d - > C o n n e c t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ D I S C O N N E C T _ C B _ I D   :  
                 h h c d - > D i s c o n n e c t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ P O R T _ E N A B L E D _ C B _ I D   :  
                 h h c d - > P o r t E n a b l e d C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ P O R T _ D I S A B L E D _ C B _ I D   :  
                 h h c d - > P o r t D i s a b l e d C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ M S P I N I T _ C B _ I D   :  
                 h h c d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ M S P D E I N I T _ C B _ I D   :  
                 h h c d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h h c d - > S t a t e   = =   H A L _ H C D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ H C D _ M S P I N I T _ C B _ I D   :  
                 h h c d - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ M S P D E I N I T _ C B _ I D   :  
                 h h c d - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   U S B   H C D   C a l l b a c k  
     *                   U S B   H C D   c a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h h c d   U S B   H C D   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ H C D _ S O F _ C B _ I D   U S B   H C D   S O F   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ C O N N E C T _ C B _ I D   U S B   H C D   C o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ D I S C O N N E C T _ C B _ I D   O T G   H C D   D i s c o n n e c t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ P O R T _ E N A B L E D _ C B _ I D   U S B   H C D   P o r t   E n a b l e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ P O R T _ D I S A B L E D _ C B _ I D   U S B   H C D   P o r t   D i s a b l e d   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ M S P I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ H C D _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ U n R e g i s t e r C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,   H A L _ H C D _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h h c d ) ;  
  
     / *   S e t u p   L e g a c y   w e a k   C a l l b a c k s     * /  
     i f   ( h h c d - > S t a t e   = =   H A L _ H C D _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ H C D _ S O F _ C B _ I D   :  
                 h h c d - > S O F C a l l b a c k   =   H A L _ H C D _ S O F _ C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ C O N N E C T _ C B _ I D   :  
                 h h c d - > C o n n e c t C a l l b a c k   =   H A L _ H C D _ C o n n e c t _ C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ D I S C O N N E C T _ C B _ I D   :  
                 h h c d - > D i s c o n n e c t C a l l b a c k   =   H A L _ H C D _ D i s c o n n e c t _ C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ P O R T _ E N A B L E D _ C B _ I D   :  
                 h h c d - > P o r t E n a b l e d C a l l b a c k   =   H A L _ H C D _ P o r t E n a b l e d _ C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ P O R T _ D I S A B L E D _ C B _ I D   :  
                 h h c d - > P o r t D i s a b l e d C a l l b a c k   =   H A L _ H C D _ P o r t D i s a b l e d _ C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ M S P I N I T _ C B _ I D   :  
                 h h c d - > M s p I n i t C a l l b a c k   =   H A L _ H C D _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ M S P D E I N I T _ C B _ I D   :  
                 h h c d - > M s p D e I n i t C a l l b a c k   =   H A L _ H C D _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h h c d - > S t a t e   = =   H A L _ H C D _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ H C D _ M S P I N I T _ C B _ I D   :  
                 h h c d - > M s p I n i t C a l l b a c k   =   H A L _ H C D _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ H C D _ M S P D E I N I T _ C B _ I D   :  
                 h h c d - > M s p D e I n i t C a l l b a c k   =   H A L _ H C D _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   U S B   H C D   H o s t   C h a n n e l   N o t i f y   U R B   C h a n g e   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   U S B   H C D   H o s t   C h a n n e l   N o t i f y   U R B   C h a n g e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ R e g i s t e r H C _ N o t i f y U R B C h a n g e C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d ,  
                                                                                                                           p H C D _ H C _ N o t i f y U R B C h a n g e C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h h c d ) ;  
  
     i f   ( h h c d - > S t a t e   = =   H A L _ H C D _ S T A T E _ R E A D Y )  
     {  
         h h c d - > H C _ N o t i f y U R B C h a n g e C a l l b a c k   =   p C a l l b a c k ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   t h e   U S B   H C D   H o s t   C h a n n e l   N o t i f y   U R B   C h a n g e   C a l l b a c k  
     *                   U S B   H C D   H o s t   C h a n n e l   N o t i f y   U R B   C h a n g e   C a l l b a c k   i s   r e d i r e c t e d  
     *                   t o   t h e   w e a k   H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ U n R e g i s t e r H C _ N o t i f y U R B C h a n g e C a l l b a c k ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h h c d ) ;  
  
     i f   ( h h c d - > S t a t e   = =   H A L _ H C D _ S T A T E _ R E A D Y )  
     {  
         h h c d - > H C _ N o t i f y U R B C h a n g e C a l l b a c k   =   H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ;   / *   L e g a c y   w e a k   D a t a O u t S t a g e C a l l b a c k     * /  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h h c d - > E r r o r C o d e   | =   H A L _ H C D _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       M a n a g e m e n t   f u n c t i o n s  
     *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   H C D   d a t a  
         t r a n s f e r s .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S t a r t   t h e   h o s t   d r i v e r .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ S t a r t ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     _ _ H A L _ L O C K ( h h c d ) ;  
     / *   E n a b l e   p o r t   p o w e r   * /  
     ( v o i d ) U S B _ D r i v e V b u s ( h h c d - > I n s t a n c e ,   1 U ) ;  
  
     / *   E n a b l e   g l o b a l   i n t e r r u p t   * /  
     _ _ H A L _ H C D _ E N A B L E ( h h c d ) ;  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   t h e   h o s t   d r i v e r .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ S t o p ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     _ _ H A L _ L O C K ( h h c d ) ;  
     ( v o i d ) U S B _ S t o p H o s t ( h h c d - > I n s t a n c e ) ;  
     _ _ H A L _ U N L O C K ( h h c d ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s e t   t h e   h o s t   p o r t .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ H C D _ R e s e t P o r t ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     r e t u r n   ( U S B _ R e s e t P o r t ( h h c d - > I n s t a n c e ) ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H C D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
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
     *   @ b r i e f     R e t u r n   t h e   H C D   h a n d l e   s t a t e .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H C D _ S t a t e T y p e D e f   H A L _ H C D _ G e t S t a t e ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     r e t u r n   h h c d - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n     U R B   s t a t e   f o r   a   c h a n n e l .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   U R B   s t a t e .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         U R B _ I D L E /  
     *                         U R B _ D O N E /  
     *                         U R B _ N O T R E A D Y /  
     *                         U R B _ N Y E T /  
     *                         U R B _ E R R O R /  
     *                         U R B _ S T A L L  
     * /  
 H C D _ U R B S t a t e T y p e D e f   H A L _ H C D _ H C _ G e t U R B S t a t e ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m )  
 {  
     r e t u r n   h h c d - > h c [ c h n u m ] . u r b _ s t a t e ;  
 }  
  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   l a s t   h o s t   t r a n s f e r   s i z e .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   l a s t   t r a n s f e r   s i z e   i n   b y t e  
     * /  
 u i n t 3 2 _ t   H A L _ H C D _ H C _ G e t X f e r C o u n t ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m )  
 {  
     r e t u r n   h h c d - > h c [ c h n u m ] . x f e r _ c o u n t ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   H o s t   C h a n n e l   s t a t e .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   H o s t   c h a n n e l   s t a t e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e s e   v a l u e s :  
     *                         H C _ I D L E /  
     *                         H C _ X F R C /  
     *                         H C _ H A L T E D /  
     *                         H C _ N Y E T /  
     *                         H C _ N A K /  
     *                         H C _ S T A L L /  
     *                         H C _ X A C T E R R /  
     *                         H C _ B B L E R R /  
     *                         H C _ D A T A T G L E R R  
     * /  
 H C D _ H C S t a t e T y p e D e f     H A L _ H C D _ H C _ G e t S t a t e ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m )  
 {  
     r e t u r n   h h c d - > h c [ c h n u m ] . s t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   c u r r e n t   H o s t   f r a m e   n u m b e r .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   C u r r e n t   H o s t   f r a m e   n u m b e r  
     * /  
 u i n t 3 2 _ t   H A L _ H C D _ G e t C u r r e n t F r a m e ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     r e t u r n   ( U S B _ G e t C u r r e n t F r a m e ( h h c d - > I n s t a n c e ) ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   H o s t   e n u m e r a t i o n   s p e e d .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   E n u m e r a t i o n   s p e e d  
     * /  
 u i n t 3 2 _ t   H A L _ H C D _ G e t C u r r e n t S p e e d ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     r e t u r n   ( U S B _ G e t H o s t S p e e d ( h h c d - > I n s t a n c e ) ) ;  
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
 / * *   @ a d d t o g r o u p   H C D _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f     H a n d l e   H o s t   C h a n n e l   I N   i n t e r r u p t   r e q u e s t s .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   n o n e  
     * /  
 s t a t i c   v o i d   H C D _ H C _ I N _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h h c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   c h _ n u m   =   ( u i n t 3 2 _ t ) c h n u m ;  
  
     u i n t 3 2 _ t   t m p r e g ;  
  
     i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ A H B E R R )   = =   U S B _ O T G _ H C I N T _ A H B E R R )  
     {  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ A H B E R R ) ;  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ B B E R R )   = =   U S B _ O T G _ H C I N T _ B B E R R )  
     {  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ B B E R R ) ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ B B L E R R ;  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ A C K )   = =   U S B _ O T G _ H C I N T _ A C K )  
     {  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ A C K ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ S T A L L )   = =   U S B _ O T G _ H C I N T _ S T A L L )  
     {  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ S T A L L ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N A K ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ S T A L L ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ D T E R R )   = =   U S B _ O T G _ H C I N T _ D T E R R )  
     {  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ D A T A T G L E R R ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N A K ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ D T E R R ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ T X E R R )   = =   U S B _ O T G _ H C I N T _ T X E R R )  
     {  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ X A C T E R R ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ T X E R R ) ;  
     }  
     e l s e  
     {  
         / *   . . .   * /  
     }  
  
     i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ F R M O R )   = =   U S B _ O T G _ H C I N T _ F R M O R )  
     {  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ F R M O R ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ X F R C )   = =   U S B _ O T G _ H C I N T _ X F R C )  
     {  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ X F R C ;  
         h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ X F R C ) ;  
  
         i f   ( ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ C T R L )   | |  
                 ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ B U L K ) )  
         {  
             _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
             ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
             _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N A K ) ;  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ I N T R )  
         {  
             U S B x _ H C ( c h _ n u m ) - > H C C H A R   | =   U S B _ O T G _ H C C H A R _ O D D F R M ;  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ D O N E ;  
  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h h c d - > H C _ N o t i f y U R B C h a n g e C a l l b a c k ( h h c d ,   ( u i n t 8 _ t ) c h _ n u m ,   h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e ) ;  
 # e l s e  
             H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( h h c d ,   ( u i n t 8 _ t ) c h _ n u m ,   h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ I S O C )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ D O N E ;  
             h h c d - > h c [ c h _ n u m ] . t o g g l e _ i n   ^ =   1 U ;  
  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h h c d - > H C _ N o t i f y U R B C h a n g e C a l l b a c k ( h h c d ,   ( u i n t 8 _ t ) c h _ n u m ,   h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e ) ;  
 # e l s e  
             H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( h h c d ,   ( u i n t 8 _ t ) c h _ n u m ,   h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         e l s e  
         {  
             / *   . . .   * /  
         }  
  
         i f   ( h h c d - > I n i t . d m a _ e n a b l e   = =   1 U )  
         {  
             i f   ( ( ( h h c d - > h c [ c h _ n u m ] . X f e r S i z e   /   h h c d - > h c [ c h _ n u m ] . m a x _ p a c k e t )   &   1 U )   ! =   0 U )  
             {  
                 h h c d - > h c [ c h _ n u m ] . t o g g l e _ i n   ^ =   1 U ;  
             }  
         }  
         e l s e  
         {  
             h h c d - > h c [ c h _ n u m ] . t o g g l e _ i n   ^ =   1 U ;  
         }  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ C H H )   = =   U S B _ O T G _ H C I N T _ C H H )  
     {  
         _ _ H A L _ H C D _ M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
  
         i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ X F R C )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ D O N E ;  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ S T A L L )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ S T A L L ;  
         }  
         e l s e   i f   ( ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ X A C T E R R )   | |  
                           ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ D A T A T G L E R R ) )  
         {  
             h h c d - > h c [ c h _ n u m ] . E r r C n t + + ;  
             i f   ( h h c d - > h c [ c h _ n u m ] . E r r C n t   >   2 U )  
             {  
                 h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
                 h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ E R R O R ;  
             }  
             e l s e  
             {  
                 h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ N O T R E A D Y ;  
  
                 / *   r e - a c t i v a t e   t h e   c h a n n e l   * /  
                 t m p r e g   =   U S B x _ H C ( c h _ n u m ) - > H C C H A R ;  
                 t m p r e g   & =   ~ U S B _ O T G _ H C C H A R _ C H D I S ;  
                 t m p r e g   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
                 U S B x _ H C ( c h _ n u m ) - > H C C H A R   =   t m p r e g ;  
             }  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ N A K )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e     =   U R B _ N O T R E A D Y ;  
  
             / *   r e - a c t i v a t e   t h e   c h a n n e l   * /  
             t m p r e g   =   U S B x _ H C ( c h _ n u m ) - > H C C H A R ;  
             t m p r e g   & =   ~ U S B _ O T G _ H C C H A R _ C H D I S ;  
             t m p r e g   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
             U S B x _ H C ( c h _ n u m ) - > H C C H A R   =   t m p r e g ;  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ B B L E R R )  
         {  
             h h c d - > h c [ c h _ n u m ] . E r r C n t + + ;  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ E R R O R ;  
         }  
         e l s e  
         {  
             / *   . . .   * /  
         }  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ C H H ) ;  
         H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( h h c d ,   ( u i n t 8 _ t ) c h _ n u m ,   h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ N A K )   = =   U S B _ O T G _ H C I N T _ N A K )  
     {  
         i f   ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ I N T R )  
         {  
             h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
             _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
             ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         }  
         e l s e   i f   ( ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ C T R L )   | |  
                           ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ B U L K ) )  
         {  
             h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
             h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ N A K ;  
             _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
             ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         }  
         e l s e  
         {  
             / *   . . .   * /  
         }  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N A K ) ;  
     }  
     e l s e  
     {  
         / *   . . .   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   H o s t   C h a n n e l   O U T   i n t e r r u p t   r e q u e s t s .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ p a r a m     c h n u m   C h a n n e l   n u m b e r .  
     *                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   f r o m   1   t o   1 5  
     *   @ r e t v a l   n o n e  
     * /  
 s t a t i c   v o i d   H C D _ H C _ O U T _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d ,   u i n t 8 _ t   c h n u m )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h h c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   c h _ n u m   =   ( u i n t 3 2 _ t ) c h n u m ;  
     u i n t 3 2 _ t   t m p r e g ;  
     u i n t 3 2 _ t   n u m _ p a c k e t s ;  
  
     i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ A H B E R R )   = =   U S B _ O T G _ H C I N T _ A H B E R R )  
     {  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ A H B E R R ) ;  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ A C K )   = =   U S B _ O T G _ H C I N T _ A C K )  
     {  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ A C K ) ;  
  
         i f   ( h h c d - > h c [ c h _ n u m ] . d o _ p i n g   = =   1 U )  
         {  
             h h c d - > h c [ c h _ n u m ] . d o _ p i n g   =   0 U ;  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e     =   U R B _ N O T R E A D Y ;  
             _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
             ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         }  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ F R M O R )   = =   U S B _ O T G _ H C I N T _ F R M O R )  
     {  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ F R M O R ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ X F R C )   = =   U S B _ O T G _ H C I N T _ X F R C )  
     {  
         h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
  
         / *   t r a n s a c t i o n   c o m p l e t e d   w i t h   N Y E T   s t a t e ,   u p d a t e   d o   p i n g   s t a t e   * /  
         i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ N Y E T )   = =   U S B _ O T G _ H C I N T _ N Y E T )  
         {  
             h h c d - > h c [ c h _ n u m ] . d o _ p i n g   =   1 U ;  
             _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N Y E T ) ;  
         }  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ X F R C ) ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ X F R C ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ N Y E T )   = =   U S B _ O T G _ H C I N T _ N Y E T )  
     {  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ N Y E T ;  
         h h c d - > h c [ c h _ n u m ] . d o _ p i n g   =   1 U ;  
         h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N Y E T ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ S T A L L )   = =   U S B _ O T G _ H C I N T _ S T A L L )  
     {  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ S T A L L ) ;  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ S T A L L ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ N A K )   = =   U S B _ O T G _ H C I N T _ N A K )  
     {  
         h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ N A K ;  
  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N A K ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ T X E R R )   = =   U S B _ O T G _ H C I N T _ T X E R R )  
     {  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ X A C T E R R ;  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ T X E R R ) ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ D T E R R )   = =   U S B _ O T G _ H C I N T _ D T E R R )  
     {  
         _ _ H A L _ H C D _ U N M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
         ( v o i d ) U S B _ H C _ H a l t ( h h c d - > I n s t a n c e ,   ( u i n t 8 _ t ) c h _ n u m ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ N A K ) ;  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ D T E R R ) ;  
         h h c d - > h c [ c h _ n u m ] . s t a t e   =   H C _ D A T A T G L E R R ;  
     }  
     e l s e   i f   ( ( U S B x _ H C ( c h _ n u m ) - > H C I N T   &   U S B _ O T G _ H C I N T _ C H H )   = =   U S B _ O T G _ H C I N T _ C H H )  
     {  
         _ _ H A L _ H C D _ M A S K _ H A L T _ H C _ I N T ( c h _ n u m ) ;  
  
         i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ X F R C )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e     =   U R B _ D O N E ;  
             i f   ( ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ B U L K )   | |  
                     ( h h c d - > h c [ c h _ n u m ] . e p _ t y p e   = =   E P _ T Y P E _ I N T R ) )  
             {  
                 i f   ( h h c d - > I n i t . d m a _ e n a b l e   = =   0 U )  
                 {  
                     h h c d - > h c [ c h _ n u m ] . t o g g l e _ o u t   ^ =   1 U ;  
                 }  
  
                 i f   ( ( h h c d - > I n i t . d m a _ e n a b l e   = =   1 U )   & &   ( h h c d - > h c [ c h _ n u m ] . x f e r _ l e n   >   0 U ) )  
                 {  
                     n u m _ p a c k e t s   =   ( h h c d - > h c [ c h _ n u m ] . x f e r _ l e n   +   h h c d - > h c [ c h _ n u m ] . m a x _ p a c k e t   -   1 U )   /   h h c d - > h c [ c h _ n u m ] . m a x _ p a c k e t ;  
  
                     i f   ( ( n u m _ p a c k e t s   &   1 U )   ! =   0 U )  
                     {  
                         h h c d - > h c [ c h _ n u m ] . t o g g l e _ o u t   ^ =   1 U ;  
                     }  
                 }  
             }  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ N A K )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ N O T R E A D Y ;  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ N Y E T )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e     =   U R B _ N O T R E A D Y ;  
         }  
         e l s e   i f   ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ S T A L L )  
         {  
             h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e     =   U R B _ S T A L L ;  
         }  
         e l s e   i f   ( ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ X A C T E R R )   | |  
                           ( h h c d - > h c [ c h _ n u m ] . s t a t e   = =   H C _ D A T A T G L E R R ) )  
         {  
             h h c d - > h c [ c h _ n u m ] . E r r C n t + + ;  
             i f   ( h h c d - > h c [ c h _ n u m ] . E r r C n t   >   2 U )  
             {  
                 h h c d - > h c [ c h _ n u m ] . E r r C n t   =   0 U ;  
                 h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ E R R O R ;  
             }  
             e l s e  
             {  
                 h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ N O T R E A D Y ;  
  
                 / *   r e - a c t i v a t e   t h e   c h a n n e l     * /  
                 t m p r e g   =   U S B x _ H C ( c h _ n u m ) - > H C C H A R ;  
                 t m p r e g   & =   ~ U S B _ O T G _ H C C H A R _ C H D I S ;  
                 t m p r e g   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
                 U S B x _ H C ( c h _ n u m ) - > H C C H A R   =   t m p r e g ;  
             }  
         }  
         e l s e  
         {  
             / *   . . .   * /  
         }  
  
         _ _ H A L _ H C D _ C L E A R _ H C _ I N T ( c h _ n u m ,   U S B _ O T G _ H C I N T _ C H H ) ;  
         H A L _ H C D _ H C _ N o t i f y U R B C h a n g e _ C a l l b a c k ( h h c d ,   ( u i n t 8 _ t ) c h _ n u m ,   h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e ) ;  
     }  
     e l s e  
     {  
         / *   . . .   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   R x   Q u e u e   L e v e l   i n t e r r u p t   r e q u e s t s .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   n o n e  
     * /  
 s t a t i c   v o i d   H C D _ R X Q L V L _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h h c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     u i n t 3 2 _ t   p k t s t s ;  
     u i n t 3 2 _ t   p k t c n t ;  
     u i n t 3 2 _ t   G r x s t s p R e g ;  
     u i n t 3 2 _ t   x f e r S i z e P k t C n t ;  
     u i n t 3 2 _ t   t m p r e g ;  
     u i n t 3 2 _ t   c h _ n u m ;  
  
     G r x s t s p R e g   =   h h c d - > I n s t a n c e - > G R X S T S P ;  
     c h _ n u m   =   G r x s t s p R e g   &   U S B _ O T G _ G R X S T S P _ E P N U M ;  
     p k t s t s   =   ( G r x s t s p R e g   &   U S B _ O T G _ G R X S T S P _ P K T S T S )   > >   1 7 ;  
     p k t c n t   =   ( G r x s t s p R e g   &   U S B _ O T G _ G R X S T S P _ B C N T )   > >   4 ;  
  
     s w i t c h   ( p k t s t s )  
     {  
         c a s e   G R X S T S _ P K T S T S _ I N :  
             / *   R e a d   t h e   d a t a   i n t o   t h e   h o s t   b u f f e r .   * /  
             i f   ( ( p k t c n t   >   0 U )   & &   ( h h c d - > h c [ c h _ n u m ] . x f e r _ b u f f   ! =   ( v o i d   * ) 0 ) )  
             {  
                 i f   ( ( h h c d - > h c [ c h _ n u m ] . x f e r _ c o u n t   +   p k t c n t )   < =   h h c d - > h c [ c h _ n u m ] . x f e r _ l e n )  
                 {  
                     ( v o i d ) U S B _ R e a d P a c k e t ( h h c d - > I n s t a n c e ,  
                                                               h h c d - > h c [ c h _ n u m ] . x f e r _ b u f f ,   ( u i n t 1 6 _ t ) p k t c n t ) ;  
  
                     / *   m a n a g e   m u l t i p l e   X f e r   * /  
                     h h c d - > h c [ c h _ n u m ] . x f e r _ b u f f   + =   p k t c n t ;  
                     h h c d - > h c [ c h _ n u m ] . x f e r _ c o u n t   + =   p k t c n t ;  
  
                     / *   g e t   t r a n s f e r   s i z e   p a c k e t   c o u n t   * /  
                     x f e r S i z e P k t C n t   =   ( U S B x _ H C ( c h _ n u m ) - > H C T S I Z   &   U S B _ O T G _ H C T S I Z _ P K T C N T )   > >   1 9 ;  
  
                     i f   ( ( h h c d - > h c [ c h _ n u m ] . m a x _ p a c k e t   = =   p k t c n t )   & &   ( x f e r S i z e P k t C n t   >   0 U ) )  
                     {  
                         / *   r e - a c t i v a t e   t h e   c h a n n e l   w h e n   m o r e   p a c k e t s   a r e   e x p e c t e d   * /  
                         t m p r e g   =   U S B x _ H C ( c h _ n u m ) - > H C C H A R ;  
                         t m p r e g   & =   ~ U S B _ O T G _ H C C H A R _ C H D I S ;  
                         t m p r e g   | =   U S B _ O T G _ H C C H A R _ C H E N A ;  
                         U S B x _ H C ( c h _ n u m ) - > H C C H A R   =   t m p r e g ;  
                         h h c d - > h c [ c h _ n u m ] . t o g g l e _ i n   ^ =   1 U ;  
                     }  
                 }  
                 e l s e  
                 {  
                     h h c d - > h c [ c h _ n u m ] . u r b _ s t a t e   =   U R B _ E R R O R ;  
                 }  
             }  
             b r e a k ;  
  
         c a s e   G R X S T S _ P K T S T S _ D A T A _ T O G G L E _ E R R :  
             b r e a k ;  
  
         c a s e   G R X S T S _ P K T S T S _ I N _ X F E R _ C O M P :  
         c a s e   G R X S T S _ P K T S T S _ C H _ H A L T E D :  
         d e f a u l t :  
             b r e a k ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     H a n d l e   H o s t   P o r t   i n t e r r u p t   r e q u e s t s .  
     *   @ p a r a m     h h c d   H C D   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   H C D _ P o r t _ I R Q H a n d l e r ( H C D _ H a n d l e T y p e D e f   * h h c d )  
 {  
     U S B _ O T G _ G l o b a l T y p e D e f   * U S B x   =   h h c d - > I n s t a n c e ;  
     u i n t 3 2 _ t   U S B x _ B A S E   =   ( u i n t 3 2 _ t ) U S B x ;  
     _ _ I O   u i n t 3 2 _ t   h p r t 0 ;  
     _ _ I O   u i n t 3 2 _ t   h p r t 0 _ d u p ;  
  
     / *   H a n d l e   H o s t   P o r t   I n t e r r u p t s   * /  
     h p r t 0   =   U S B x _ H P R T 0 ;  
     h p r t 0 _ d u p   =   U S B x _ H P R T 0 ;  
  
     h p r t 0 _ d u p   & =   ~ ( U S B _ O T G _ H P R T _ P E N A   |   U S B _ O T G _ H P R T _ P C D E T   |   \  
                                   U S B _ O T G _ H P R T _ P E N C H N G   |   U S B _ O T G _ H P R T _ P O C C H N G ) ;  
  
     / *   C h e c k   w h e t h e r   P o r t   C o n n e c t   d e t e c t e d   * /  
     i f   ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P C D E T )   = =   U S B _ O T G _ H P R T _ P C D E T )  
     {  
         i f   ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P C S T S )   = =   U S B _ O T G _ H P R T _ P C S T S )  
         {  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h h c d - > C o n n e c t C a l l b a c k ( h h c d ) ;  
 # e l s e  
             H A L _ H C D _ C o n n e c t _ C a l l b a c k ( h h c d ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         h p r t 0 _ d u p   | =   U S B _ O T G _ H P R T _ P C D E T ;  
     }  
  
     / *   C h e c k   w h e t h e r   P o r t   E n a b l e   C h a n g e d   * /  
     i f   ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P E N C H N G )   = =   U S B _ O T G _ H P R T _ P E N C H N G )  
     {  
         h p r t 0 _ d u p   | =   U S B _ O T G _ H P R T _ P E N C H N G ;  
  
         i f   ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P E N A )   = =   U S B _ O T G _ H P R T _ P E N A )  
         {  
             i f   ( h h c d - > I n i t . p h y _ i t f a c e     = =   U S B _ O T G _ E M B E D D E D _ P H Y )  
             {  
                 i f   ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P S P D )   = =   ( H P R T 0 _ P R T S P D _ L O W _ S P E E D   < <   1 7 ) )  
                 {  
                     ( v o i d ) U S B _ I n i t F S L S P C l k S e l ( h h c d - > I n s t a n c e ,   H C F G _ 6 _ M H Z ) ;  
                 }  
                 e l s e  
                 {  
                     ( v o i d ) U S B _ I n i t F S L S P C l k S e l ( h h c d - > I n s t a n c e ,   H C F G _ 4 8 _ M H Z ) ;  
                 }  
             }  
             e l s e  
             {  
                 i f   ( h h c d - > I n i t . s p e e d   = =   H C D _ S P E E D _ F U L L )  
                 {  
                     U S B x _ H O S T - > H F I R   =   6 0 0 0 0 U ;  
                 }  
             }  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h h c d - > P o r t E n a b l e d C a l l b a c k ( h h c d ) ;  
 # e l s e  
             H A L _ H C D _ P o r t E n a b l e d _ C a l l b a c k ( h h c d ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
  
         }  
         e l s e  
         {  
 # i f   ( U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   = =   1 U )  
             h h c d - > P o r t D i s a b l e d C a l l b a c k ( h h c d ) ;  
 # e l s e  
             H A L _ H C D _ P o r t D i s a b l e d _ C a l l b a c k ( h h c d ) ;  
 # e n d i f   / *   U S E _ H A L _ H C D _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
  
     / *   C h e c k   f o r   a n   o v e r c u r r e n t   * /  
     i f   ( ( h p r t 0   &   U S B _ O T G _ H P R T _ P O C C H N G )   = =   U S B _ O T G _ H P R T _ P O C C H N G )  
     {  
         h p r t 0 _ d u p   | =   U S B _ O T G _ H P R T _ P O C C H N G ;  
     }  
  
     / *   C l e a r   P o r t   I n t e r r u p t s   * /  
     U S B x _ H P R T 0   =   h p r t 0 _ d u p ;  
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
 # e n d i f   / *   d e f i n e d   ( U S B _ O T G _ F S )   * /  
 # e n d i f   / *   H A L _ H C D _ M O D U L E _ E N A B L E D   * /  
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