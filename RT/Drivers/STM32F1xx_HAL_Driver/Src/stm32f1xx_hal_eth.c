??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ e t h . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       E T H   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   E t h e r n e t   ( E T H )   p e r i p h e r a l :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( # ) D e c l a r e   a   E T H _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e ,   f o r   e x a m p l e :  
                   E T H _ H a n d l e T y p e D e f     h e t h ;  
  
             ( # ) F i l l   p a r a m e t e r s   o f   I n i t   s t r u c t u r e   i n   h e t h   h a n d l e  
  
             ( # ) C a l l   H A L _ E T H _ I n i t ( )   A P I   t o   i n i t i a l i z e   t h e   E t h e r n e t   p e r i p h e r a l   ( M A C ,   D M A ,   . . . )  
  
             ( # ) I n i t i a l i z e   t h e   E T H   l o w   l e v e l   r e s o u r c e s   t h r o u g h   t h e   H A L _ E T H _ M s p I n i t ( )   A P I :  
                     ( # # )   E n a b l e   t h e   E t h e r n e t   i n t e r f a c e   c l o c k   u s i n g  
                               ( + + + )   _ _ H A L _ R C C _ E T H M A C _ C L K _ E N A B L E ( ) ;  
                               ( + + + )   _ _ H A L _ R C C _ E T H M A C T X _ C L K _ E N A B L E ( ) ;  
                               ( + + + )   _ _ H A L _ R C C _ E T H M A C R X _ C L K _ E N A B L E ( ) ;  
  
                     ( # # )   I n i t i a l i z e   t h e   r e l a t e d   G P I O   c l o c k s  
                     ( # # )   C o n f i g u r e   E t h e r n e t   p i n - o u t  
                     ( # # )   C o n f i g u r e   E t h e r n e t   N V I C   i n t e r r u p t   ( I T   m o d e )  
  
             ( # ) I n i t i a l i z e   E t h e r n e t   D M A   D e s c r i p t o r s   i n   c h a i n   m o d e   a n d   p o i n t   t o   a l l o c a t e d   b u f f e r s :  
                     ( # # )   H A L _ E T H _ D M A T x D e s c L i s t I n i t ( ) ;   f o r   T r a n s m i s s i o n   p r o c e s s  
                     ( # # )   H A L _ E T H _ D M A R x D e s c L i s t I n i t ( ) ;   f o r   R e c e p t i o n   p r o c e s s  
  
             ( # ) E n a b l e   M A C   a n d   D M A   t r a n s m i s s i o n   a n d   r e c e p t i o n :  
                     ( # # )   H A L _ E T H _ S t a r t ( ) ;  
  
             ( # ) P r e p a r e   E T H   D M A   T X   D e s c r i p t o r s   a n d   g i v e   t h e   h a n d   t o   E T H   D M A   t o   t r a n s f e r  
                   t h e   f r a m e   t o   M A C   T X   F I F O :  
                   ( # # )   H A L _ E T H _ T r a n s m i t F r a m e ( ) ;  
  
             ( # ) P o l l   f o r   a   r e c e i v e d   f r a m e   i n   E T H   R X   D M A   D e s c r i p t o r s   a n d   g e t   r e c e i v e d  
                   f r a m e   p a r a m e t e r s  
                   ( # # )   H A L _ E T H _ G e t R e c e i v e d F r a m e ( ) ;   ( s h o u l d   b e   c a l l e d   i n t o   a n   i n f i n i t e   l o o p )  
  
             ( # )   G e t   a   r e c e i v e d   f r a m e   w h e n   a n   E T H   R X   i n t e r r u p t   o c c u r s :  
                   ( # # )   H A L _ E T H _ G e t R e c e i v e d F r a m e _ I T ( ) ;   ( c a l l e d   i n   I T   m o d e   o n l y )  
  
             ( # )   C o m m u n i c a t e   w i t h   e x t e r n a l   P H Y   d e v i c e :  
                   ( # # )   R e a d   a   s p e c i f i c   r e g i s t e r   f r o m   t h e   P H Y  
                             H A L _ E T H _ R e a d P H Y R e g i s t e r ( ) ;  
                   ( # # )   W r i t e   d a t a   t o   a   s p e c i f i c   R H Y   r e g i s t e r :  
                             H A L _ E T H _ W r i t e P H Y R e g i s t e r ( ) ;  
  
             ( # )   C o n f i g u r e   t h e   E t h e r n e t   M A C   a f t e r   E T H   p e r i p h e r a l   i n i t i a l i z a t i o n  
                     H A L _ E T H _ C o n f i g M A C ( ) ;   a l l   M A C   p a r a m e t e r s   s h o u l d   b e   f i l l e d .  
  
             ( # )   C o n f i g u r e   t h e   E t h e r n e t   D M A   a f t e r   E T H   p e r i p h e r a l   i n i t i a l i z a t i o n  
                     H A L _ E T H _ C o n f i g D M A ( ) ;   a l l   D M A   p a r a m e t e r s   s h o u l d   b e   f i l l e d .  
  
             - @ -   T h e   P T P   p r o t o c o l   a n d   t h e   D M A   d e s c r i p t o r s   r i n g   m o d e   a r e   n o t   s u p p o r t e d  
                     i n   t h i s   d r i v e r  
 * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
     T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
     a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
     U s e   F u n c t i o n   @ r e f   H A L _ E T H _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a n   i n t e r r u p t   c a l l b a c k .  
  
     F u n c t i o n   @ r e f   H A L _ E T H _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x C p l t C a l l b a c k       :   T x   C o m p l e t e   C a l l b a c k .  
         ( + )   R x C p l t C a l l b a c k       :   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   D M A E r r o r C a l l b a c k   :   D M A   E r r o r   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k     :   M s p I n i t   C a l l b a c k .  
         ( + )   M s p D e I n i t C a l l b a c k :   M s p D e I n i t   C a l l b a c k .  
  
     T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
     a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
     U s e   f u n c t i o n   @ r e f   H A L _ E T H _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
     w e a k   f u n c t i o n .  
     @ r e f   H A L _ E T H _ U n R e g i s t e r C a l l b a c k   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
     a n d   t h e   C a l l b a c k   I D .  
     T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x C p l t C a l l b a c k       :   T x   C o m p l e t e   C a l l b a c k .  
         ( + )   R x C p l t C a l l b a c k       :   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   D M A E r r o r C a l l b a c k   :   D M A   E r r o r   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k     :   M s p I n i t   C a l l b a c k .  
         ( + )   M s p D e I n i t C a l l b a c k :   M s p D e I n i t   C a l l b a c k .  
  
     B y   d e f a u l t ,   a f t e r   t h e   H A L _ E T H _ I n i t   a n d   w h e n   t h e   s t a t e   i s   H A L _ E T H _ S T A T E _ R E S E T  
     a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s :  
     e x a m p l e s   @ r e f   H A L _ E T H _ T x C p l t C a l l b a c k ( ) ,   @ r e f   H A L _ E T H _ R x C p l t C a l l b a c k ( ) .  
     E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e  
     r e s e t   t o   t h e   l e g a c y   w e a k   f u n c t i o n   i n   t h e   H A L _ E T H _ I n i t /   @ r e f   H A L _ E T H _ D e I n i t   o n l y   w h e n  
     t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
     i f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   H A L _ E T H _ I n i t /   @ r e f   H A L _ E T H _ D e I n i t  
     k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
     C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ E T H _ S T A T E _ R E A D Y   s t a t e   o n l y .  
     E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
     i n   H A L _ E T H _ S T A T E _ R E A D Y   o r   H A L _ E T H _ S T A T E _ R E S E T   s t a t e ,  
     t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
     I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
     u s i n g   @ r e f   H A L _ E T H _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ E T H _ D e I n i t  
     o r   H A L _ E T H _ I n i t   f u n c t i o n .  
  
     W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
     n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e   a n d   a l l   c a l l b a c k s  
     a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s .  
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
 / * *   @ d e f g r o u p   E T H   E T H  
     *   @ b r i e f   E T H   H A L   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ E T H _ M O D U L E _ E N A B L E D  
  
 # i f   d e f i n e d   ( E T H )  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E T H _ P r i v a t e _ C o n s t a n t s   E T H   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 # d e f i n e   E T H _ T I M E O U T _ S W R E S E T                               5 0 0 U  
 # d e f i n e   E T H _ T I M E O U T _ L I N K E D _ S T A T E                     5 0 0 0 U  
 # d e f i n e   E T H _ T I M E O U T _ A U T O N E G O _ C O M P L E T E D         5 0 0 0 U  
  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   E T H _ P r i v a t e _ F u n c t i o n s   E T H   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   v o i d   E T H _ M A C D M A C o n f i g ( E T H _ H a n d l e T y p e D e f   * h e t h ,   u i n t 3 2 _ t   e r r ) ;  
 s t a t i c   v o i d   E T H _ M A C A d d r e s s C o n f i g ( E T H _ H a n d l e T y p e D e f   * h e t h ,   u i n t 3 2 _ t   M a c A d d r ,   u i n t 8 _ t   * A d d r ) ;  
 s t a t i c   v o i d   E T H _ M A C R e c e p t i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ M A C R e c e p t i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ M A C T r a n s m i s s i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ M A C T r a n s m i s s i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ D M A T r a n s m i s s i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ D M A T r a n s m i s s i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ D M A R e c e p t i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ D M A R e c e p t i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ F l u s h T r a n s m i t F I F O ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 s t a t i c   v o i d   E T H _ D e l a y ( u i n t 3 2 _ t   m d e l a y ) ;  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 s t a t i c   v o i d   E T H _ I n i t C a l l b a c k s T o D e f a u l t ( E T H _ H a n d l e T y p e D e f   * h e t h ) ;  
 # e n d i f   / *   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   E T H _ E x p o r t e d _ F u n c t i o n s   E T H   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   E T H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f       I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   E t h e r n e t   p e r i p h e r a l  
             ( + )   D e - i n i t i a l i z e   t h e   E t h e r n e t   p e r i p h e r a l  
  
     @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   E t h e r n e t   M A C   a n d   D M A   a c c o r d i n g   t o   d e f a u l t  
     *                   p a r a m e t e r s .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ I n i t ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     u i n t 3 2 _ t   t m p r e g 1   =   0 U ,   p h y r e g   =   0 U ;  
     u i n t 3 2 _ t   h c l k   =   6 0 0 0 0 0 0 0 U ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
     u i n t 3 2 _ t   e r r   =   E T H _ S U C C E S S ;  
  
     / *   C h e c k   t h e   E T H   p e r i p h e r a l   s t a t e   * /  
     i f   ( h e t h   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E T H _ A U T O N E G O T I A T I O N ( h e t h - > I n i t . A u t o N e g o t i a t i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ R X _ M O D E ( h e t h - > I n i t . R x M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ C H E C K S U M _ M O D E ( h e t h - > I n i t . C h e c k s u m M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ M E D I A _ I N T E R F A C E ( h e t h - > I n i t . M e d i a I n t e r f a c e ) ) ;  
  
     i f   ( h e t h - > S t a t e   = =   H A L _ E T H _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h e t h - > L o c k   =   H A L _ U N L O C K E D ;  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         E T H _ I n i t C a l l b a c k s T o D e f a u l t ( h e t h ) ;  
  
         i f   ( h e t h - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C .   * /  
             h e t h - > M s p I n i t C a l l b a c k   =   H A L _ E T H _ M s p I n i t ;  
         }  
         h e t h - > M s p I n i t C a l l b a c k ( h e t h ) ;  
  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C .   * /  
         H A L _ E T H _ M s p I n i t ( h e t h ) ;  
 # e n d i f   / *   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     / *   S e l e c t   M I I   o r   R M I I   M o d e * /  
     A F I O - > M A P R   & =   ~ ( A F I O _ M A P R _ M I I _ R M I I _ S E L ) ;  
     A F I O - > M A P R   | =   ( u i n t 3 2 _ t ) h e t h - > I n i t . M e d i a I n t e r f a c e ;  
  
     / *   E t h e r n e t   S o f t w a r e   r e s e t   * /  
     / *   S e t   t h e   S W R   b i t :   r e s e t s   a l l   M A C   s u b s y s t e m   i n t e r n a l   r e g i s t e r s   a n d   l o g i c   * /  
     / *   A f t e r   r e s e t   a l l   t h e   r e g i s t e r s   h o l d s   t h e i r   r e s p e c t i v e   r e s e t   v a l u e s   * /  
     ( h e t h - > I n s t a n c e ) - > D M A B M R   | =   E T H _ D M A B M R _ S R ;  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   W a i t   f o r   s o f t w a r e   r e s e t   * /  
     w h i l e   ( ( ( h e t h - > I n s t a n c e ) - > D M A B M R   &   E T H _ D M A B M R _ S R )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   E T H _ T I M E O U T _ S W R E S E T )  
         {  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ T I M E O U T ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h e t h ) ;  
  
             / *   N o t e :   T h e   S W R   i s   n o t   p e r f o r m e d   i f   t h e   E T H _ R X _ C L K   o r   t h e   E T H _ T X _ C L K   a r e  
                   n o t   a v a i l a b l e ,   p l e a s e   c h e c k   y o u r   e x t e r n a l   P H Y   o r   t h e   I O   c o n f i g u r a t i o n   * /  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
     }  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   M A C   I n i t i a l i z a t i o n   - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   G e t   t h e   E T H E R N E T   M A C M I I A R   v a l u e   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C M I I A R ;  
     / *   C l e a r   C S R   C l o c k   R a n g e   C R [ 2 : 0 ]   b i t s   * /  
     t m p r e g 1   & =   E T H _ M A C M I I A R _ C R _ M A S K ;  
  
     / *   G e t   h c l k   f r e q u e n c y   v a l u e   * /  
     h c l k   =   H A L _ R C C _ G e t H C L K F r e q ( ) ;  
  
     / *   S e t   C R   b i t s   d e p e n d i n g   o n   h c l k   v a l u e   * /  
     i f   ( ( h c l k   > =   2 0 0 0 0 0 0 0 U )   & &   ( h c l k   <   3 5 0 0 0 0 0 0 U ) )  
     {  
         / *   C S R   C l o c k   R a n g e   b e t w e e n   2 0 - 3 5   M H z   * /  
         t m p r e g 1   | =   ( u i n t 3 2 _ t ) E T H _ M A C M I I A R _ C R _ D I V 1 6 ;  
     }  
     e l s e   i f   ( ( h c l k   > =   3 5 0 0 0 0 0 0 U )   & &   ( h c l k   <   6 0 0 0 0 0 0 0 U ) )  
     {  
         / *   C S R   C l o c k   R a n g e   b e t w e e n   3 5 - 6 0   M H z   * /  
         t m p r e g 1   | =   ( u i n t 3 2 _ t ) E T H _ M A C M I I A R _ C R _ D I V 2 6 ;  
     }  
     e l s e  
     {  
         / *   C S R   C l o c k   R a n g e   b e t w e e n   6 0 - 7 2   M H z   * /  
         t m p r e g 1   | =   ( u i n t 3 2 _ t ) E T H _ M A C M I I A R _ C R _ D I V 4 2 ;  
     }  
  
     / *   W r i t e   t o   E T H E R N E T   M A C   M I I A R :   C o n f i g u r e   t h e   E T H E R N E T   C S R   C l o c k   R a n g e   * /  
     ( h e t h - > I n s t a n c e ) - > M A C M I I A R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
     / * - - - - - - - - - - - - - - - - - - - -   P H Y   i n i t i a l i z a t i o n   a n d   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - * /  
     / *   P u t   t h e   P H Y   i n   r e s e t   m o d e   * /  
     i f   ( ( H A L _ E T H _ W r i t e P H Y R e g i s t e r ( h e t h ,   P H Y _ B C R ,   P H Y _ R E S E T ) )   ! =   H A L _ O K )  
     {  
         / *   I n   c a s e   o f   w r i t e   t i m e o u t   * /  
         e r r   =   E T H _ E R R O R ;  
  
         / *   C o n f i g   M A C   a n d   D M A   * /  
         E T H _ M A C D M A C o n f i g ( h e t h ,   e r r ) ;  
  
         / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   R E A D Y   * /  
         h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
         / *   R e t u r n   H A L _ E R R O R   * /  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   D e l a y   t o   a s s u r e   P H Y   r e s e t   * /  
     H A L _ D e l a y ( P H Y _ R E S E T _ D E L A Y ) ;  
  
     i f   ( ( h e t h - > I n i t ) . A u t o N e g o t i a t i o n   ! =   E T H _ A U T O N E G O T I A T I O N _ D I S A B L E )  
     {  
         / *   G e t   t i c k   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         / *   W e   w a i t   f o r   l i n k e d   s t a t u s   * /  
         d o  
         {  
             H A L _ E T H _ R e a d P H Y R e g i s t e r ( h e t h ,   P H Y _ B S R ,   & p h y r e g ) ;  
  
             / *   C h e c k   f o r   t h e   T i m e o u t   * /  
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   E T H _ T I M E O U T _ L I N K E D _ S T A T E )  
             {  
                 / *   I n   c a s e   o f   w r i t e   t i m e o u t   * /  
                 e r r   =   E T H _ E R R O R ;  
  
                 / *   C o n f i g   M A C   a n d   D M A   * /  
                 E T H _ M A C D M A C o n f i g ( h e t h ,   e r r ) ;  
  
                 h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h e t h ) ;  
  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
         w h i l e   ( ( ( p h y r e g   &   P H Y _ L I N K E D _ S T A T U S )   ! =   P H Y _ L I N K E D _ S T A T U S ) ) ;  
  
  
         / *   E n a b l e   A u t o - N e g o t i a t i o n   * /  
         i f   ( ( H A L _ E T H _ W r i t e P H Y R e g i s t e r ( h e t h ,   P H Y _ B C R ,   P H Y _ A U T O N E G O T I A T I O N ) )   ! =   H A L _ O K )  
         {  
             / *   I n   c a s e   o f   w r i t e   t i m e o u t   * /  
             e r r   =   E T H _ E R R O R ;  
  
             / *   C o n f i g   M A C   a n d   D M A   * /  
             E T H _ M A C D M A C o n f i g ( h e t h ,   e r r ) ;  
  
             / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   R E A D Y   * /  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
             / *   R e t u r n   H A L _ E R R O R   * /  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   G e t   t i c k   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         / *   W a i t   u n t i l   t h e   a u t o - n e g o t i a t i o n   w i l l   b e   c o m p l e t e d   * /  
         d o  
         {  
             H A L _ E T H _ R e a d P H Y R e g i s t e r ( h e t h ,   P H Y _ B S R ,   & p h y r e g ) ;  
  
             / *   C h e c k   f o r   t h e   T i m e o u t   * /  
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   E T H _ T I M E O U T _ A U T O N E G O _ C O M P L E T E D )  
             {  
                 / *   I n   c a s e   o f   w r i t e   t i m e o u t   * /  
                 e r r   =   E T H _ E R R O R ;  
  
                 / *   C o n f i g   M A C   a n d   D M A   * /  
                 E T H _ M A C D M A C o n f i g ( h e t h ,   e r r ) ;  
  
                 h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h e t h ) ;  
  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
  
         }  
         w h i l e   ( ( ( p h y r e g   &   P H Y _ A U T O N E G O _ C O M P L E T E )   ! =   P H Y _ A U T O N E G O _ C O M P L E T E ) ) ;  
  
         / *   R e a d   t h e   r e s u l t   o f   t h e   a u t o - n e g o t i a t i o n   * /  
         i f   ( ( H A L _ E T H _ R e a d P H Y R e g i s t e r ( h e t h ,   P H Y _ S R ,   & p h y r e g ) )   ! =   H A L _ O K )  
         {  
             / *   I n   c a s e   o f   w r i t e   t i m e o u t   * /  
             e r r   =   E T H _ E R R O R ;  
  
             / *   C o n f i g   M A C   a n d   D M A   * /  
             E T H _ M A C D M A C o n f i g ( h e t h ,   e r r ) ;  
  
             / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   R E A D Y   * /  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
             / *   R e t u r n   H A L _ E R R O R   * /  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   C o n f i g u r e   t h e   M A C   w i t h   t h e   D u p l e x   M o d e   f i x e d   b y   t h e   a u t o - n e g o t i a t i o n   p r o c e s s   * /  
         i f   ( ( p h y r e g   &   P H Y _ D U P L E X _ S T A T U S )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
         {  
             / *   S e t   E t h e r n e t   d u p l e x   m o d e   t o   F u l l - d u p l e x   f o l l o w i n g   t h e   a u t o - n e g o t i a t i o n   * /  
             ( h e t h - > I n i t ) . D u p l e x M o d e   =   E T H _ M O D E _ F U L L D U P L E X ;  
         }  
         e l s e  
         {  
             / *   S e t   E t h e r n e t   d u p l e x   m o d e   t o   H a l f - d u p l e x   f o l l o w i n g   t h e   a u t o - n e g o t i a t i o n   * /  
             ( h e t h - > I n i t ) . D u p l e x M o d e   =   E T H _ M O D E _ H A L F D U P L E X ;  
         }  
         / *   C o n f i g u r e   t h e   M A C   w i t h   t h e   s p e e d   f i x e d   b y   t h e   a u t o - n e g o t i a t i o n   p r o c e s s   * /  
         i f   ( ( p h y r e g   &   P H Y _ S P E E D _ S T A T U S )   = =   P H Y _ S P E E D _ S T A T U S )  
         {  
             / *   S e t   E t h e r n e t   s p e e d   t o   1 0 M   f o l l o w i n g   t h e   a u t o - n e g o t i a t i o n   * /  
             ( h e t h - > I n i t ) . S p e e d   =   E T H _ S P E E D _ 1 0 M ;  
         }  
         e l s e  
         {  
             / *   S e t   E t h e r n e t   s p e e d   t o   1 0 0 M   f o l l o w i n g   t h e   a u t o - n e g o t i a t i o n   * /  
             ( h e t h - > I n i t ) . S p e e d   =   E T H _ S P E E D _ 1 0 0 M ;  
         }  
     }  
     e l s e   / *   A u t o N e g o t i a t i o n   D i s a b l e   * /  
     {  
         / *   C h e c k   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ E T H _ S P E E D ( h e t h - > I n i t . S p e e d ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ D U P L E X _ M O D E ( h e t h - > I n i t . D u p l e x M o d e ) ) ;  
  
         / *   S e t   M A C   S p e e d   a n d   D u p l e x   M o d e   * /  
         i f   ( H A L _ E T H _ W r i t e P H Y R e g i s t e r ( h e t h ,   P H Y _ B C R ,   ( ( u i n t 1 6 _ t ) ( ( h e t h - > I n i t ) . D u p l e x M o d e   > >   3 U )   |  
                                                                                                   ( u i n t 1 6 _ t ) ( ( h e t h - > I n i t ) . S p e e d   > >   1 U ) ) )   ! =   H A L _ O K )  
         {  
             / *   I n   c a s e   o f   w r i t e   t i m e o u t   * /  
             e r r   =   E T H _ E R R O R ;  
  
             / *   C o n f i g   M A C   a n d   D M A   * /  
             E T H _ M A C D M A C o n f i g ( h e t h ,   e r r ) ;  
  
             / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   R E A D Y   * /  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
             / *   R e t u r n   H A L _ E R R O R   * /  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   D e l a y   t o   a s s u r e   P H Y   c o n f i g u r a t i o n   * /  
         H A L _ D e l a y ( P H Y _ C O N F I G _ D E L A Y ) ;  
     }  
  
     / *   C o n f i g   M A C   a n d   D M A   * /  
     E T H _ M A C D M A C o n f i g ( h e t h ,   e r r ) ;  
  
     / *   S e t   E T H   H A L   S t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e - I n i t i a l i z e s   t h e   E T H   p e r i p h e r a l .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ D e I n i t ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h e t h - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h e t h - > M s p D e I n i t C a l l b a c k   =   H A L _ E T H _ M s p D e I n i t ;  
     }  
     / *   D e - I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C .   * /  
     h e t h - > M s p D e I n i t C a l l b a c k ( h e t h ) ;  
 # e l s e  
     / *   D e - I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C .   * /  
     H A L _ E T H _ M s p D e I n i t ( h e t h ) ;  
 # e n d i f  
  
     / *   S e t   E T H   H A L   s t a t e   t o   D i s a b l e d   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   D M A   T x   d e s c r i p t o r s   i n   c h a i n   m o d e .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     D M A T x D e s c T a b :   P o i n t e r   t o   t h e   f i r s t   T x   d e s c   l i s t  
     *   @ p a r a m     T x B u f f :   P o i n t e r   t o   t h e   f i r s t   T x B u f f e r   l i s t  
     *   @ p a r a m     T x B u f f C o u n t :   N u m b e r   o f   t h e   u s e d   T x   d e s c   i n   t h e   l i s t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ D M A T x D e s c L i s t I n i t ( E T H _ H a n d l e T y p e D e f   * h e t h ,   E T H _ D M A D e s c T y p e D e f   * D M A T x D e s c T a b ,   u i n t 8 _ t   * T x B u f f ,   u i n t 3 2 _ t   T x B u f f C o u n t )  
 {  
     u i n t 3 2 _ t   i   =   0 U ;  
     E T H _ D M A D e s c T y p e D e f   * d m a t x d e s c ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     / *   S e t   t h e   D M A T x D e s c T o S e t   p o i n t e r   w i t h   t h e   f i r s t   o n e   o f   t h e   D M A T x D e s c T a b   l i s t   * /  
     h e t h - > T x D e s c   =   D M A T x D e s c T a b ;  
  
     / *   F i l l   e a c h   D M A T x D e s c   d e s c r i p t o r   w i t h   t h e   r i g h t   v a l u e s   * /  
     f o r   ( i   =   0 U ;   i   <   T x B u f f C o u n t ;   i + + )  
     {  
         / *   G e t   t h e   p o i n t e r   o n   t h e   i t h   m e m b e r   o f   t h e   T x   D e s c   l i s t   * /  
         d m a t x d e s c   =   D M A T x D e s c T a b   +   i ;  
  
         / *   S e t   S e c o n d   A d d r e s s   C h a i n e d   b i t   * /  
         d m a t x d e s c - > S t a t u s   =   E T H _ D M A T X D E S C _ T C H ;  
  
         / *   S e t   B u f f e r 1   a d d r e s s   p o i n t e r   * /  
         d m a t x d e s c - > B u f f e r 1 A d d r   =   ( u i n t 3 2 _ t ) ( & T x B u f f [ i   *   E T H _ T X _ B U F _ S I Z E ] ) ;  
  
         i f   ( ( h e t h - > I n i t ) . C h e c k s u m M o d e   = =   E T H _ C H E C K S U M _ B Y _ H A R D W A R E )  
         {  
             / *   S e t   t h e   D M A   T x   d e s c r i p t o r s   c h e c k s u m   i n s e r t i o n   * /  
             d m a t x d e s c - > S t a t u s   | =   E T H _ D M A T X D E S C _ C H E C K S U M T C P U D P I C M P F U L L ;  
         }  
  
         / *   I n i t i a l i z e   t h e   n e x t   d e s c r i p t o r   w i t h   t h e   N e x t   D e s c r i p t o r   P o l l i n g   E n a b l e   * /  
         i f   ( i   <   ( T x B u f f C o u n t   -   1 U ) )  
         {  
             / *   S e t   n e x t   d e s c r i p t o r   a d d r e s s   r e g i s t e r   w i t h   n e x t   d e s c r i p t o r   b a s e   a d d r e s s   * /  
             d m a t x d e s c - > B u f f e r 2 N e x t D e s c A d d r   =   ( u i n t 3 2 _ t ) ( D M A T x D e s c T a b   +   i   +   1 U ) ;  
         }  
         e l s e  
         {  
             / *   F o r   l a s t   d e s c r i p t o r ,   s e t   n e x t   d e s c r i p t o r   a d d r e s s   r e g i s t e r   e q u a l   t o   t h e   f i r s t   d e s c r i p t o r   b a s e   a d d r e s s   * /  
             d m a t x d e s c - > B u f f e r 2 N e x t D e s c A d d r   =   ( u i n t 3 2 _ t )   D M A T x D e s c T a b ;  
         }  
     }  
  
     / *   S e t   T r a n s m i t   D e s c r i p t o r   L i s t   A d d r e s s   R e g i s t e r   * /  
     ( h e t h - > I n s t a n c e ) - > D M A T D L A R   =   ( u i n t 3 2 _ t )   D M A T x D e s c T a b ;  
  
     / *   S e t   E T H   H A L   S t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   D M A   R x   d e s c r i p t o r s   i n   c h a i n   m o d e .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     D M A R x D e s c T a b :   P o i n t e r   t o   t h e   f i r s t   R x   d e s c   l i s t  
     *   @ p a r a m     R x B u f f :   P o i n t e r   t o   t h e   f i r s t   R x B u f f e r   l i s t  
     *   @ p a r a m     R x B u f f C o u n t :   N u m b e r   o f   t h e   u s e d   R x   d e s c   i n   t h e   l i s t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ D M A R x D e s c L i s t I n i t ( E T H _ H a n d l e T y p e D e f   * h e t h ,   E T H _ D M A D e s c T y p e D e f   * D M A R x D e s c T a b ,   u i n t 8 _ t   * R x B u f f ,   u i n t 3 2 _ t   R x B u f f C o u n t )  
 {  
     u i n t 3 2 _ t   i   =   0 U ;  
     E T H _ D M A D e s c T y p e D e f   * D M A R x D e s c ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     / *   S e t   t h e   E t h e r n e t   R x D e s c   p o i n t e r   w i t h   t h e   f i r s t   o n e   o f   t h e   D M A R x D e s c T a b   l i s t   * /  
     h e t h - > R x D e s c   =   D M A R x D e s c T a b ;  
  
     / *   F i l l   e a c h   D M A R x D e s c   d e s c r i p t o r   w i t h   t h e   r i g h t   v a l u e s   * /  
     f o r   ( i   =   0 U ;   i   <   R x B u f f C o u n t ;   i + + )  
     {  
         / *   G e t   t h e   p o i n t e r   o n   t h e   i t h   m e m b e r   o f   t h e   R x   D e s c   l i s t   * /  
         D M A R x D e s c   =   D M A R x D e s c T a b   +   i ;  
  
         / *   S e t   O w n   b i t   o f   t h e   R x   d e s c r i p t o r   S t a t u s   * /  
         D M A R x D e s c - > S t a t u s   =   E T H _ D M A R X D E S C _ O W N ;  
  
         / *   S e t   B u f f e r 1   s i z e   a n d   S e c o n d   A d d r e s s   C h a i n e d   b i t   * /  
         D M A R x D e s c - > C o n t r o l B u f f e r S i z e   =   E T H _ D M A R X D E S C _ R C H   |   E T H _ R X _ B U F _ S I Z E ;  
  
         / *   S e t   B u f f e r 1   a d d r e s s   p o i n t e r   * /  
         D M A R x D e s c - > B u f f e r 1 A d d r   =   ( u i n t 3 2 _ t ) ( & R x B u f f [ i   *   E T H _ R X _ B U F _ S I Z E ] ) ;  
  
         i f   ( ( h e t h - > I n i t ) . R x M o d e   = =   E T H _ R X I N T E R R U P T _ M O D E )  
         {  
             / *   E n a b l e   E t h e r n e t   D M A   R x   D e s c r i p t o r   i n t e r r u p t   * /  
             D M A R x D e s c - > C o n t r o l B u f f e r S i z e   & =   ~ E T H _ D M A R X D E S C _ D I C ;  
         }  
  
         / *   I n i t i a l i z e   t h e   n e x t   d e s c r i p t o r   w i t h   t h e   N e x t   D e s c r i p t o r   P o l l i n g   E n a b l e   * /  
         i f   ( i   <   ( R x B u f f C o u n t   -   1 U ) )  
         {  
             / *   S e t   n e x t   d e s c r i p t o r   a d d r e s s   r e g i s t e r   w i t h   n e x t   d e s c r i p t o r   b a s e   a d d r e s s   * /  
             D M A R x D e s c - > B u f f e r 2 N e x t D e s c A d d r   =   ( u i n t 3 2 _ t ) ( D M A R x D e s c T a b   +   i   +   1 U ) ;  
         }  
         e l s e  
         {  
             / *   F o r   l a s t   d e s c r i p t o r ,   s e t   n e x t   d e s c r i p t o r   a d d r e s s   r e g i s t e r   e q u a l   t o   t h e   f i r s t   d e s c r i p t o r   b a s e   a d d r e s s   * /  
             D M A R x D e s c - > B u f f e r 2 N e x t D e s c A d d r   =   ( u i n t 3 2 _ t ) ( D M A R x D e s c T a b ) ;  
         }  
     }  
  
     / *   S e t   R e c e i v e   D e s c r i p t o r   L i s t   A d d r e s s   R e g i s t e r   * /  
     ( h e t h - > I n s t a n c e ) - > D M A R D L A R   =   ( u i n t 3 2 _ t )   D M A R x D e s c T a b ;  
  
     / *   S e t   E T H   H A L   S t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   E T H   M S P .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ E T H _ M s p I n i t ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h e t h ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
     t h e   H A L _ E T H _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
     * /  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   E T H   M S P .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ E T H _ M s p D e I n i t ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h e t h ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
     t h e   H A L _ E T H _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
     * /  
 }  
  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   E T H   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h e t h   e t h   h a n d l e  
     *   @ p a r a m   C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ E T H _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ D M A _ E R R O R _ C B _ I D       D M A   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ M S P I N I T _ C B _ I D           M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ M S P D E I N I T _ C B _ I D       M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m   p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ R e g i s t e r C a l l b a c k ( E T H _ H a n d l e T y p e D e f   * h e t h ,   H A L _ E T H _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p E T H _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     i f   ( h e t h - > S t a t e   = =   H A L _ E T H _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ E T H _ T X _ C O M P L E T E _ C B _ I D   :  
                 h e t h - > T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ R X _ C O M P L E T E _ C B _ I D   :  
                 h e t h - > R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ D M A _ E R R O R _ C B _ I D   :  
                 h e t h - > D M A E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ M S P I N I T _ C B _ I D   :  
                 h e t h - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ M S P D E I N I T _ C B _ I D   :  
                 h e t h - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h e t h - > S t a t e   = =   H A L _ E T H _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ E T H _ M S P I N I T _ C B _ I D   :  
                 h e t h - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ M S P D E I N I T _ C B _ I D   :  
                 h e t h - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   E T H   C a l l b a c k  
     *                   E T H   c a l l a b c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h e t h   e t h   h a n d l e  
     *   @ p a r a m   C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ E T H _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ D M A _ E R R O R _ C B _ I D             D M A   E r r o r   C a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ M S P I N I T _ C B _ I D           M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ E T H _ M S P D E I N I T _ C B _ I D       M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ U n R e g i s t e r C a l l b a c k ( E T H _ H a n d l e T y p e D e f   * h e t h ,   H A L _ E T H _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     i f   ( h e t h - > S t a t e   = =   H A L _ E T H _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ E T H _ T X _ C O M P L E T E _ C B _ I D   :  
                 h e t h - > T x C p l t C a l l b a c k   =   H A L _ E T H _ T x C p l t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ R X _ C O M P L E T E _ C B _ I D   :  
                 h e t h - > R x C p l t C a l l b a c k   =   H A L _ E T H _ R x C p l t C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ D M A _ E R R O R _ C B _ I D   :  
                 h e t h - > D M A E r r o r C a l l b a c k   =   H A L _ E T H _ E r r o r C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ M S P I N I T _ C B _ I D   :  
                 h e t h - > M s p I n i t C a l l b a c k   =   H A L _ E T H _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ M S P D E I N I T _ C B _ I D   :  
                 h e t h - > M s p D e I n i t C a l l b a c k   =   H A L _ E T H _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h e t h - > S t a t e   = =   H A L _ E T H _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ E T H _ M S P I N I T _ C B _ I D   :  
                 h e t h - > M s p I n i t C a l l b a c k   =   H A L _ E T H _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ E T H _ M S P D E I N I T _ C B _ I D   :  
                 h e t h - > M s p D e I n i t C a l l b a c k   =   H A L _ E T H _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   E T H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f       D a t a   t r a n s f e r s   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                     # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
                 ( + )   T r a n s m i t   a   f r a m e  
                         H A L _ E T H _ T r a n s m i t F r a m e ( ) ;  
                 ( + )   R e c e i v e   a   f r a m e  
                         H A L _ E T H _ G e t R e c e i v e d F r a m e ( ) ;  
                         H A L _ E T H _ G e t R e c e i v e d F r a m e _ I T ( ) ;  
                 ( + )   R e a d   f r o m   a n   E x t e r n a l   P H Y   r e g i s t e r  
                         H A L _ E T H _ R e a d P H Y R e g i s t e r ( ) ;  
                 ( + )   W r i t e   t o   a n   E x t e r n a l   P H Y   r e g i s t e r  
                         H A L _ E T H _ W r i t e P H Y R e g i s t e r ( ) ;  
  
     @ e n d v e r b a t i m  
  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S e n d s   a n   E t h e r n e t   f r a m e .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     F r a m e L e n g t h :   A m o u n t   o f   d a t a   t o   b e   s e n t  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ T r a n s m i t F r a m e ( E T H _ H a n d l e T y p e D e f   * h e t h ,   u i n t 3 2 _ t   F r a m e L e n g t h )  
 {  
     u i n t 3 2 _ t   b u f c o u n t   =   0 U ,   s i z e   =   0 U ,   i   =   0 U ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     i f   ( F r a m e L e n g t h   = =   0 U )  
     {  
         / *   S e t   E T H   H A L   s t a t e   t o   R E A D Y   * /  
         h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h e t h ) ;  
  
         r e t u r n     H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   i f   t h e   d e s c r i p t o r   i s   o w n e d   b y   t h e   E T H E R N E T   D M A   ( w h e n   s e t )   o r   C P U   ( w h e n   r e s e t )   * /  
     i f   ( ( ( h e t h - > T x D e s c ) - > S t a t u s   &   E T H _ D M A T X D E S C _ O W N )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         / *   O W N   b i t   s e t   * /  
         h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y _ T X ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h e t h ) ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   G e t   t h e   n u m b e r   o f   n e e d e d   T x   b u f f e r s   f o r   t h e   c u r r e n t   f r a m e   * /  
     i f   ( F r a m e L e n g t h   >   E T H _ T X _ B U F _ S I Z E )  
     {  
         b u f c o u n t   =   F r a m e L e n g t h   /   E T H _ T X _ B U F _ S I Z E ;  
         i f   ( F r a m e L e n g t h   %   E T H _ T X _ B U F _ S I Z E )  
         {  
             b u f c o u n t + + ;  
         }  
     }  
     e l s e  
     {  
         b u f c o u n t   =   1 U ;  
     }  
     i f   ( b u f c o u n t   = =   1 U )  
     {  
         / *   S e t   L A S T   a n d   F I R S T   s e g m e n t   * /  
         h e t h - > T x D e s c - > S t a t u s   | =   E T H _ D M A T X D E S C _ F S   |   E T H _ D M A T X D E S C _ L S ;  
         / *   S e t   f r a m e   s i z e   * /  
         h e t h - > T x D e s c - > C o n t r o l B u f f e r S i z e   =   ( F r a m e L e n g t h   &   E T H _ D M A T X D E S C _ T B S 1 ) ;  
         / *   S e t   O w n   b i t   o f   t h e   T x   d e s c r i p t o r   S t a t u s :   g i v e s   t h e   b u f f e r   b a c k   t o   E T H E R N E T   D M A   * /  
         h e t h - > T x D e s c - > S t a t u s   | =   E T H _ D M A T X D E S C _ O W N ;  
         / *   P o i n t   t o   n e x t   d e s c r i p t o r   * /  
         h e t h - > T x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( h e t h - > T x D e s c - > B u f f e r 2 N e x t D e s c A d d r ) ;  
     }  
     e l s e  
     {  
         f o r   ( i   =   0 U ;   i   <   b u f c o u n t ;   i + + )  
         {  
             / *   C l e a r   F I R S T   a n d   L A S T   s e g m e n t   b i t s   * /  
             h e t h - > T x D e s c - > S t a t u s   & =   ~ ( E T H _ D M A T X D E S C _ F S   |   E T H _ D M A T X D E S C _ L S ) ;  
  
             i f   ( i   = =   0 U )  
             {  
                 / *   S e t t i n g   t h e   f i r s t   s e g m e n t   b i t   * /  
                 h e t h - > T x D e s c - > S t a t u s   | =   E T H _ D M A T X D E S C _ F S ;  
             }  
  
             / *   P r o g r a m   s i z e   * /  
             h e t h - > T x D e s c - > C o n t r o l B u f f e r S i z e   =   ( E T H _ T X _ B U F _ S I Z E   &   E T H _ D M A T X D E S C _ T B S 1 ) ;  
  
             i f   ( i   = =   ( b u f c o u n t   -   1 U ) )  
             {  
                 / *   S e t t i n g   t h e   l a s t   s e g m e n t   b i t   * /  
                 h e t h - > T x D e s c - > S t a t u s   | =   E T H _ D M A T X D E S C _ L S ;  
                 s i z e   =   F r a m e L e n g t h   -   ( b u f c o u n t   -   1 U )   *   E T H _ T X _ B U F _ S I Z E ;  
                 h e t h - > T x D e s c - > C o n t r o l B u f f e r S i z e   =   ( s i z e   &   E T H _ D M A T X D E S C _ T B S 1 ) ;  
             }  
  
             / *   S e t   O w n   b i t   o f   t h e   T x   d e s c r i p t o r   S t a t u s :   g i v e s   t h e   b u f f e r   b a c k   t o   E T H E R N E T   D M A   * /  
             h e t h - > T x D e s c - > S t a t u s   | =   E T H _ D M A T X D E S C _ O W N ;  
             / *   p o i n t   t o   n e x t   d e s c r i p t o r   * /  
             h e t h - > T x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( h e t h - > T x D e s c - > B u f f e r 2 N e x t D e s c A d d r ) ;  
         }  
     }  
  
     / *   W h e n   T x   B u f f e r   u n a v a i l a b l e   f l a g   i s   s e t :   c l e a r   i t   a n d   r e s u m e   t r a n s m i s s i o n   * /  
     i f   ( ( ( h e t h - > I n s t a n c e ) - > D M A S R   &   E T H _ D M A S R _ T B U S )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         / *   C l e a r   T B U S   E T H E R N E T   D M A   f l a g   * /  
         ( h e t h - > I n s t a n c e ) - > D M A S R   =   E T H _ D M A S R _ T B U S ;  
         / *   R e s u m e   D M A   t r a n s m i s s i o n * /  
         ( h e t h - > I n s t a n c e ) - > D M A T P D R   =   0 U ;  
     }  
  
     / *   S e t   E T H   H A L   S t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k s   f o r   r e c e i v e d   f r a m e s .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ G e t R e c e i v e d F r a m e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     u i n t 3 2 _ t   f r a m e l e n g t h   =   0 U ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   C h e c k   t h e   E T H   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     / *   C h e c k   i f   s e g m e n t   i s   n o t   o w n e d   b y   D M A   * /  
     / *   ( ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ O W N )   = =   ( u i n t 3 2 _ t ) R E S E T )   & &   ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ L S )   ! =   ( u i n t 3 2 _ t ) R E S E T ) )   * /  
     i f   ( ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ O W N )   = =   ( u i n t 3 2 _ t ) R E S E T ) )  
     {  
         / *   C h e c k   i f   l a s t   s e g m e n t   * /  
         i f   ( ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ L S )   ! =   ( u i n t 3 2 _ t ) R E S E T ) )  
         {  
             / *   i n c r e m e n t   s e g m e n t   c o u n t   * /  
             ( h e t h - > R x F r a m e I n f o s ) . S e g C o u n t + + ;  
  
             / *   C h e c k   i f   l a s t   s e g m e n t   i s   f i r s t   s e g m e n t :   o n e   s e g m e n t   c o n t a i n s   t h e   f r a m e   * /  
             i f   ( ( h e t h - > R x F r a m e I n f o s ) . S e g C o u n t   = =   1 U )  
             {  
                 ( h e t h - > R x F r a m e I n f o s ) . F S R x D e s c   =   h e t h - > R x D e s c ;  
             }  
  
             h e t h - > R x F r a m e I n f o s . L S R x D e s c   =   h e t h - > R x D e s c ;  
  
             / *   G e t   t h e   F r a m e   L e n g t h   o f   t h e   r e c e i v e d   p a c k e t :   s u b s t r u c t   4   b y t e s   o f   t h e   C R C   * /  
             f r a m e l e n g t h   =   ( ( ( h e t h - > R x D e s c ) - > S t a t u s   &   E T H _ D M A R X D E S C _ F L )   > >   E T H _ D M A R X D E S C _ F R A M E L E N G T H S H I F T )   -   4 U ;  
             h e t h - > R x F r a m e I n f o s . l e n g t h   =   f r a m e l e n g t h ;  
  
             / *   G e t   t h e   a d d r e s s   o f   t h e   b u f f e r   s t a r t   a d d r e s s   * /  
             h e t h - > R x F r a m e I n f o s . b u f f e r   =   ( ( h e t h - > R x F r a m e I n f o s ) . F S R x D e s c ) - > B u f f e r 1 A d d r ;  
             / *   p o i n t   t o   n e x t   d e s c r i p t o r   * /  
             h e t h - > R x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( ( h e t h - > R x D e s c ) - > B u f f e r 2 N e x t D e s c A d d r ) ;  
  
             / *   S e t   H A L   S t a t e   t o   R e a d y   * /  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h e t h ) ;  
  
             / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
             r e t u r n   H A L _ O K ;  
         }  
         / *   C h e c k   i f   f i r s t   s e g m e n t   * /  
         e l s e   i f   ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ F S )   ! =   ( u i n t 3 2 _ t ) R E S E T )  
         {  
             ( h e t h - > R x F r a m e I n f o s ) . F S R x D e s c   =   h e t h - > R x D e s c ;  
             ( h e t h - > R x F r a m e I n f o s ) . L S R x D e s c   =   N U L L ;  
             ( h e t h - > R x F r a m e I n f o s ) . S e g C o u n t   =   1 U ;  
             / *   P o i n t   t o   n e x t   d e s c r i p t o r   * /  
             h e t h - > R x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( h e t h - > R x D e s c - > B u f f e r 2 N e x t D e s c A d d r ) ;  
         }  
         / *   C h e c k   i f   i n t e r m e d i a t e   s e g m e n t   * /  
         e l s e  
         {  
             ( h e t h - > R x F r a m e I n f o s ) . S e g C o u n t + + ;  
             / *   P o i n t   t o   n e x t   d e s c r i p t o r   * /  
             h e t h - > R x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( h e t h - > R x D e s c - > B u f f e r 2 N e x t D e s c A d d r ) ;  
         }  
     }  
  
     / *   S e t   E T H   H A L   S t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ E R R O R ;  
 }  
  
 / * *  
     *   @ b r i e f     G e t s   t h e   R e c e i v e d   f r a m e   i n   i n t e r r u p t   m o d e .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ G e t R e c e i v e d F r a m e _ I T ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     u i n t 3 2 _ t   d e s c r i p t o r s c a n c o u n t e r   =   0 U ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   E T H   H A L   S t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     / *   S c a n   d e s c r i p t o r s   o w n e d   b y   C P U   * /  
     w h i l e   ( ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ O W N )   = =   ( u i n t 3 2 _ t ) R E S E T )   & &   ( d e s c r i p t o r s c a n c o u n t e r   <   E T H _ R X B U F N B ) )  
     {  
         / *   J u s t   f o r   s e c u r i t y   * /  
         d e s c r i p t o r s c a n c o u n t e r + + ;  
  
         / *   C h e c k   i f   f i r s t   s e g m e n t   i n   f r a m e   * /  
         / *   ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ F S )   ! =   ( u i n t 3 2 _ t ) R E S E T )   & &   ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ L S )   = =   ( u i n t 3 2 _ t ) R E S E T ) )   * /  
         i f   ( ( h e t h - > R x D e s c - > S t a t u s   &   ( E T H _ D M A R X D E S C _ F S   |   E T H _ D M A R X D E S C _ L S ) )   = =   ( u i n t 3 2 _ t ) E T H _ D M A R X D E S C _ F S )  
         {  
             h e t h - > R x F r a m e I n f o s . F S R x D e s c   =   h e t h - > R x D e s c ;  
             h e t h - > R x F r a m e I n f o s . S e g C o u n t   =   1 U ;  
             / *   P o i n t   t o   n e x t   d e s c r i p t o r   * /  
             h e t h - > R x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( h e t h - > R x D e s c - > B u f f e r 2 N e x t D e s c A d d r ) ;  
         }  
         / *   C h e c k   i f   i n t e r m e d i a t e   s e g m e n t   * /  
         / *   ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ L S )   = =   ( u i n t 3 2 _ t ) R E S E T ) & &   ( ( h e t h - > R x D e s c - > S t a t u s   &   E T H _ D M A R X D E S C _ F S )   = =   ( u i n t 3 2 _ t ) R E S E T ) )   * /  
         e l s e   i f   ( ( h e t h - > R x D e s c - > S t a t u s   &   ( E T H _ D M A R X D E S C _ L S   |   E T H _ D M A R X D E S C _ F S ) )   = =   ( u i n t 3 2 _ t ) R E S E T )  
         {  
             / *   I n c r e m e n t   s e g m e n t   c o u n t   * /  
             ( h e t h - > R x F r a m e I n f o s . S e g C o u n t ) + + ;  
             / *   P o i n t   t o   n e x t   d e s c r i p t o r   * /  
             h e t h - > R x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( h e t h - > R x D e s c - > B u f f e r 2 N e x t D e s c A d d r ) ;  
         }  
         / *   S h o u l d   b e   l a s t   s e g m e n t   * /  
         e l s e  
         {  
             / *   L a s t   s e g m e n t   * /  
             h e t h - > R x F r a m e I n f o s . L S R x D e s c   =   h e t h - > R x D e s c ;  
  
             / *   I n c r e m e n t   s e g m e n t   c o u n t   * /  
             ( h e t h - > R x F r a m e I n f o s . S e g C o u n t ) + + ;  
  
             / *   C h e c k   i f   l a s t   s e g m e n t   i s   f i r s t   s e g m e n t :   o n e   s e g m e n t   c o n t a i n s   t h e   f r a m e   * /  
             i f   ( ( h e t h - > R x F r a m e I n f o s . S e g C o u n t )   = =   1 U )  
             {  
                 h e t h - > R x F r a m e I n f o s . F S R x D e s c   =   h e t h - > R x D e s c ;  
             }  
  
             / *   G e t   t h e   F r a m e   L e n g t h   o f   t h e   r e c e i v e d   p a c k e t :   s u b s t r u c t   4   b y t e s   o f   t h e   C R C   * /  
             h e t h - > R x F r a m e I n f o s . l e n g t h   =   ( ( ( h e t h - > R x D e s c ) - > S t a t u s   &   E T H _ D M A R X D E S C _ F L )   > >   E T H _ D M A R X D E S C _ F R A M E L E N G T H S H I F T )   -   4 U ;  
  
             / *   G e t   t h e   a d d r e s s   o f   t h e   b u f f e r   s t a r t   a d d r e s s   * /  
             h e t h - > R x F r a m e I n f o s . b u f f e r   =   ( ( h e t h - > R x F r a m e I n f o s ) . F S R x D e s c ) - > B u f f e r 1 A d d r ;  
  
             / *   P o i n t   t o   n e x t   d e s c r i p t o r   * /  
             h e t h - > R x D e s c   =   ( E T H _ D M A D e s c T y p e D e f   * ) ( h e t h - > R x D e s c - > B u f f e r 2 N e x t D e s c A d d r ) ;  
  
             / *   S e t   H A L   S t a t e   t o   R e a d y   * /  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h e t h ) ;  
  
             / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
             r e t u r n   H A L _ O K ;  
         }  
     }  
  
     / *   S e t   H A L   S t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ E R R O R ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   E T H   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 v o i d   H A L _ E T H _ I R Q H a n d l e r ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   F r a m e   r e c e i v e d   * /  
     i f   ( _ _ H A L _ E T H _ D M A _ G E T _ F L A G ( h e t h ,   E T H _ D M A _ F L A G _ R ) )  
     {  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / * C a l l   r e g i s t e r e d   R e c e i v e   c o m p l e t e   c a l l b a c k * /  
         h e t h - > R x C p l t C a l l b a c k ( h e t h ) ;  
 # e l s e  
         / *   R e c e i v e   c o m p l e t e   c a l l b a c k   * /  
         H A L _ E T H _ R x C p l t C a l l b a c k ( h e t h ) ;  
 # e n d i f   / *   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   * /  
  
         / *   C l e a r   t h e   E t h   D M A   R x   I T   p e n d i n g   b i t s   * /  
         _ _ H A L _ E T H _ D M A _ C L E A R _ I T ( h e t h ,   E T H _ D M A _ I T _ R ) ;  
  
         / *   S e t   H A L   S t a t e   t o   R e a d y   * /  
         h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     }  
     / *   F r a m e   t r a n s m i t t e d   * /  
     e l s e   i f   ( _ _ H A L _ E T H _ D M A _ G E T _ F L A G ( h e t h ,   E T H _ D M A _ F L A G _ T ) )  
     {  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *     C a l l   r e s g i s t e r e d   T r a n s f e r   c o m p l e t e   c a l l b a c k * /  
         h e t h - > T x C p l t C a l l b a c k ( h e t h ) ;  
 # e l s e  
         / *   T r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         H A L _ E T H _ T x C p l t C a l l b a c k ( h e t h ) ;  
 # e n d i f   / *   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   * /  
  
         / *   C l e a r   t h e   E t h   D M A   T x   I T   p e n d i n g   b i t s   * /  
         _ _ H A L _ E T H _ D M A _ C L E A R _ I T ( h e t h ,   E T H _ D M A _ I T _ T ) ;  
  
         / *   S e t   H A L   S t a t e   t o   R e a d y   * /  
         h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h e t h ) ;  
     }  
  
     / *   C l e a r   t h e   i n t e r r u p t   f l a g s   * /  
     _ _ H A L _ E T H _ D M A _ C L E A R _ I T ( h e t h ,   E T H _ D M A _ I T _ N I S ) ;  
  
     / *   E T H   D M A   E r r o r   * /  
     i f   ( _ _ H A L _ E T H _ D M A _ G E T _ F L A G ( h e t h ,   E T H _ D M A _ F L A G _ A I S ) )  
     {  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h e t h - > D M A E r r o r C a l l b a c k ( h e t h ) ;  
 # e l s e  
         / *   E t h e r n e t   E r r o r   c a l l b a c k   * /  
         H A L _ E T H _ E r r o r C a l l b a c k ( h e t h ) ;  
 # e n d i f   / *   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   * /  
  
         / *   C l e a r   t h e   i n t e r r u p t   f l a g s   * /  
         _ _ H A L _ E T H _ D M A _ C L E A R _ I T ( h e t h ,   E T H _ D M A _ F L A G _ A I S ) ;  
  
         / *   S e t   H A L   S t a t e   t o   R e a d y   * /  
         h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h e t h ) ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ E T H _ T x C p l t C a l l b a c k ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h e t h ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
     t h e   H A L _ E T H _ T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
     * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ E T H _ R x C p l t C a l l b a c k ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h e t h ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
     t h e   H A L _ E T H _ T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
     * /  
 }  
  
 / * *  
     *   @ b r i e f     E t h e r n e t   t r a n s f e r   e r r o r   c a l l b a c k s  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ E T H _ E r r o r C a l l b a c k ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h e t h ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
     t h e   H A L _ E T H _ T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
     * /  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   a   P H Y   r e g i s t e r  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m   P H Y R e g :   P H Y   r e g i s t e r   a d d r e s s ,   i s   t h e   i n d e x   o f   o n e   o f   t h e   3 2   P H Y   r e g i s t e r .  
     *                                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                                       P H Y _ B C R :   T r a n s c e i v e r   B a s i c   C o n t r o l   R e g i s t e r ,  
     *                                       P H Y _ B S R :   T r a n s c e i v e r   B a s i c   S t a t u s   R e g i s t e r .  
     *                                       M o r e   P H Y   r e g i s t e r   c o u l d   b e   r e a d   d e p e n d i n g   o n   t h e   u s e d   P H Y  
     *   @ p a r a m   R e g V a l u e :   P H Y   r e g i s t e r   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ R e a d P H Y R e g i s t e r ( E T H _ H a n d l e T y p e D e f   * h e t h ,   u i n t 1 6 _ t   P H Y R e g ,   u i n t 3 2 _ t   * R e g V a l u e )  
 {  
     u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E T H _ P H Y _ A D D R E S S ( h e t h - > I n i t . P h y A d d r e s s ) ) ;  
  
     / *   C h e c k   t h e   E T H   p e r i p h e r a l   s t a t e   * /  
     i f   ( h e t h - > S t a t e   = =   H A L _ E T H _ S T A T E _ B U S Y _ R D )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     / *   S e t   E T H   H A L   S t a t e   t o   B U S Y _ R D   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y _ R D ;  
  
     / *   G e t   t h e   E T H E R N E T   M A C M I I A R   v a l u e   * /  
     t m p r e g 1   =   h e t h - > I n s t a n c e - > M A C M I I A R ;  
  
     / *   K e e p   o n l y   t h e   C S R   C l o c k   R a n g e   C R [ 2 : 0 ]   b i t s   v a l u e   * /  
     t m p r e g 1   & =   ~ E T H _ M A C M I I A R _ C R _ M A S K ;  
  
     / *   P r e p a r e   t h e   M I I   a d d r e s s   r e g i s t e r   v a l u e   * /  
     t m p r e g 1   | =   ( ( ( u i n t 3 2 _ t ) h e t h - > I n i t . P h y A d d r e s s   < <   1 1 U )   &   E T H _ M A C M I I A R _ P A ) ;   / *   S e t   t h e   P H Y   d e v i c e   a d d r e s s       * /  
     t m p r e g 1   | =   ( ( ( u i n t 3 2 _ t ) P H Y R e g   < <   6 U )   &   E T H _ M A C M I I A R _ M R ) ;                                 / *   S e t   t h e   P H Y   r e g i s t e r   a d d r e s s   * /  
     t m p r e g 1   & =   ~ E T H _ M A C M I I A R _ M W ;                                                                                         / *   S e t   t h e   r e a d   m o d e                         * /  
     t m p r e g 1   | =   E T H _ M A C M I I A R _ M B ;                                                                                           / *   S e t   t h e   M I I   B u s y   b i t                   * /  
  
     / *   W r i t e   t h e   r e s u l t   v a l u e   i n t o   t h e   M I I   A d d r e s s   r e g i s t e r   * /  
     h e t h - > I n s t a n c e - > M A C M I I A R   =   t m p r e g 1 ;  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   f o r   t h e   B u s y   f l a g   * /  
     w h i l e   ( ( t m p r e g 1   &   E T H _ M A C M I I A R _ M B )   = =   E T H _ M A C M I I A R _ M B )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P H Y _ R E A D _ T O )  
         {  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h e t h ) ;  
  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
  
         t m p r e g 1   =   h e t h - > I n s t a n c e - > M A C M I I A R ;  
     }  
  
     / *   G e t   M A C M I I D R   v a l u e   * /  
     * R e g V a l u e   =   ( u i n t 1 6 _ t ) ( h e t h - > I n s t a n c e - > M A C M I I D R ) ;  
  
     / *   S e t   E T H   H A L   S t a t e   t o   R E A D Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   t o   a   P H Y   r e g i s t e r .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     P H Y R e g :   P H Y   r e g i s t e r   a d d r e s s ,   i s   t h e   i n d e x   o f   o n e   o f   t h e   3 2   P H Y   r e g i s t e r .  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                           P H Y _ B C R :   T r a n s c e i v e r   C o n t r o l   R e g i s t e r .  
     *                           M o r e   P H Y   r e g i s t e r   c o u l d   b e   w r i t t e n   d e p e n d i n g   o n   t h e   u s e d   P H Y  
     *   @ p a r a m     R e g V a l u e :   t h e   v a l u e   t o   w r i t e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ W r i t e P H Y R e g i s t e r ( E T H _ H a n d l e T y p e D e f   * h e t h ,   u i n t 1 6 _ t   P H Y R e g ,   u i n t 3 2 _ t   R e g V a l u e )  
 {  
     u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E T H _ P H Y _ A D D R E S S ( h e t h - > I n i t . P h y A d d r e s s ) ) ;  
  
     / *   C h e c k   t h e   E T H   p e r i p h e r a l   s t a t e   * /  
     i f   ( h e t h - > S t a t e   = =   H A L _ E T H _ S T A T E _ B U S Y _ W R )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     / *   S e t   E T H   H A L   S t a t e   t o   B U S Y _ W R   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y _ W R ;  
  
     / *   G e t   t h e   E T H E R N E T   M A C M I I A R   v a l u e   * /  
     t m p r e g 1   =   h e t h - > I n s t a n c e - > M A C M I I A R ;  
  
     / *   K e e p   o n l y   t h e   C S R   C l o c k   R a n g e   C R [ 2 : 0 ]   b i t s   v a l u e   * /  
     t m p r e g 1   & =   ~ E T H _ M A C M I I A R _ C R _ M A S K ;  
  
     / *   P r e p a r e   t h e   M I I   r e g i s t e r   a d d r e s s   v a l u e   * /  
     t m p r e g 1   | =   ( ( ( u i n t 3 2 _ t ) h e t h - > I n i t . P h y A d d r e s s   < <   1 1 U )   &   E T H _ M A C M I I A R _ P A ) ;   / *   S e t   t h e   P H Y   d e v i c e   a d d r e s s   * /  
     t m p r e g 1   | =   ( ( ( u i n t 3 2 _ t ) P H Y R e g   < <   6 U )   &   E T H _ M A C M I I A R _ M R ) ;                             / *   S e t   t h e   P H Y   r e g i s t e r   a d d r e s s   * /  
     t m p r e g 1   | =   E T H _ M A C M I I A R _ M W ;                                                                                       / *   S e t   t h e   w r i t e   m o d e   * /  
     t m p r e g 1   | =   E T H _ M A C M I I A R _ M B ;                                                                                       / *   S e t   t h e   M I I   B u s y   b i t   * /  
  
     / *   G i v e   t h e   v a l u e   t o   t h e   M I I   d a t a   r e g i s t e r   * /  
     h e t h - > I n s t a n c e - > M A C M I I D R   =   ( u i n t 1 6 _ t ) R e g V a l u e ;  
  
     / *   W r i t e   t h e   r e s u l t   v a l u e   i n t o   t h e   M I I   A d d r e s s   r e g i s t e r   * /  
     h e t h - > I n s t a n c e - > M A C M I I A R   =   t m p r e g 1 ;  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   C h e c k   f o r   t h e   B u s y   f l a g   * /  
     w h i l e   ( ( t m p r e g 1   &   E T H _ M A C M I I A R _ M B )   = =   E T H _ M A C M I I A R _ M B )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P H Y _ W R I T E _ T O )  
         {  
             h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
             / *   P r o c e s s   U n l o c k e d   * /  
             _ _ H A L _ U N L O C K ( h e t h ) ;  
  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
  
         t m p r e g 1   =   h e t h - > I n s t a n c e - > M A C M I I A R ;  
     }  
  
     / *   S e t   E T H   H A L   S t a t e   t o   R E A D Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   E T H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
   *     @ b r i e f         P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
   *  
 @ v e r b a t i m  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                     # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
             ( + )   E n a b l e   M A C   a n d   D M A   t r a n s m i s s i o n   a n d   r e c e p t i o n .  
                     H A L _ E T H _ S t a r t ( ) ;  
             ( + )   D i s a b l e   M A C   a n d   D M A   t r a n s m i s s i o n   a n d   r e c e p t i o n .  
                     H A L _ E T H _ S t o p ( ) ;  
             ( + )   S e t   t h e   M A C   c o n f i g u r a t i o n   i n   r u n t i m e   m o d e  
                     H A L _ E T H _ C o n f i g M A C ( ) ;  
             ( + )   S e t   t h e   D M A   c o n f i g u r a t i o n   i n   r u n t i m e   m o d e  
                     H A L _ E T H _ C o n f i g D M A ( ) ;  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
   *   @ b r i e f     E n a b l e s   E t h e r n e t   M A C   a n d   D M A   r e c e p t i o n / t r a n s m i s s i o n  
   *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
   *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
   *   @ r e t v a l   H A L   s t a t u s  
   * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ S t a r t ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     / *   E n a b l e   t r a n s m i t   s t a t e   m a c h i n e   o f   t h e   M A C   f o r   t r a n s m i s s i o n   o n   t h e   M I I   * /  
     E T H _ M A C T r a n s m i s s i o n E n a b l e ( h e t h ) ;  
  
     / *   E n a b l e   r e c e i v e   s t a t e   m a c h i n e   o f   t h e   M A C   f o r   r e c e p t i o n   f r o m   t h e   M I I   * /  
     E T H _ M A C R e c e p t i o n E n a b l e ( h e t h ) ;  
  
     / *   F l u s h   T r a n s m i t   F I F O   * /  
     E T H _ F l u s h T r a n s m i t F I F O ( h e t h ) ;  
  
     / *   S t a r t   D M A   t r a n s m i s s i o n   * /  
     E T H _ D M A T r a n s m i s s i o n E n a b l e ( h e t h ) ;  
  
     / *   S t a r t   D M A   r e c e p t i o n   * /  
     E T H _ D M A R e c e p t i o n E n a b l e ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   s t a t e   t o   R E A D Y * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p   E t h e r n e t   M A C   a n d   D M A   r e c e p t i o n / t r a n s m i s s i o n  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ S t o p ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     / *   S t o p   D M A   t r a n s m i s s i o n   * /  
     E T H _ D M A T r a n s m i s s i o n D i s a b l e ( h e t h ) ;  
  
     / *   S t o p   D M A   r e c e p t i o n   * /  
     E T H _ D M A R e c e p t i o n D i s a b l e ( h e t h ) ;  
  
     / *   D i s a b l e   r e c e i v e   s t a t e   m a c h i n e   o f   t h e   M A C   f o r   r e c e p t i o n   f r o m   t h e   M I I   * /  
     E T H _ M A C R e c e p t i o n D i s a b l e ( h e t h ) ;  
  
     / *   F l u s h   T r a n s m i t   F I F O   * /  
     E T H _ F l u s h T r a n s m i t F I F O ( h e t h ) ;  
  
     / *   D i s a b l e   t r a n s m i t   s t a t e   m a c h i n e   o f   t h e   M A C   f o r   t r a n s m i s s i o n   o n   t h e   M I I   * /  
     E T H _ M A C T r a n s m i s s i o n D i s a b l e ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   s t a t e * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   E T H   M A C   C o n f i g u r a t i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     m a c c o n f :   M A C   C o n f i g u r a t i o n   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ C o n f i g M A C ( E T H _ H a n d l e T y p e D e f   * h e t h ,   E T H _ M A C I n i t T y p e D e f   * m a c c o n f )  
 {  
     u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     a s s e r t _ p a r a m ( I S _ E T H _ S P E E D ( h e t h - > I n i t . S p e e d ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ D U P L E X _ M O D E ( h e t h - > I n i t . D u p l e x M o d e ) ) ;  
  
     i f   ( m a c c o n f   ! =   N U L L )  
     {  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ E T H _ W A T C H D O G ( m a c c o n f - > W a t c h d o g ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ J A B B E R ( m a c c o n f - > J a b b e r ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ I N T E R _ F R A M E _ G A P ( m a c c o n f - > I n t e r F r a m e G a p ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ C A R R I E R _ S E N S E ( m a c c o n f - > C a r r i e r S e n s e ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ R E C E I V E _ O W N ( m a c c o n f - > R e c e i v e O w n ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ L O O P B A C K _ M O D E ( m a c c o n f - > L o o p b a c k M o d e ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ C H E C K S U M _ O F F L O A D ( m a c c o n f - > C h e c k s u m O f f l o a d ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ R E T R Y _ T R A N S M I S S I O N ( m a c c o n f - > R e t r y T r a n s m i s s i o n ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ A U T O M A T I C _ P A D C R C _ S T R I P ( m a c c o n f - > A u t o m a t i c P a d C R C S t r i p ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ B A C K O F F _ L I M I T ( m a c c o n f - > B a c k O f f L i m i t ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ D E F E R R A L _ C H E C K ( m a c c o n f - > D e f e r r a l C h e c k ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ R E C E I V E _ A L L ( m a c c o n f - > R e c e i v e A l l ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ S O U R C E _ A D D R _ F I L T E R ( m a c c o n f - > S o u r c e A d d r F i l t e r ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ C O N T R O L _ F R A M E S ( m a c c o n f - > P a s s C o n t r o l F r a m e s ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ B R O A D C A S T _ F R A M E S _ R E C E P T I O N ( m a c c o n f - > B r o a d c a s t F r a m e s R e c e p t i o n ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ D E S T I N A T I O N _ A D D R _ F I L T E R ( m a c c o n f - > D e s t i n a t i o n A d d r F i l t e r ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ P R O M I S C U O U S _ M O D E ( m a c c o n f - > P r o m i s c u o u s M o d e ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ M U L T I C A S T _ F R A M E S _ F I L T E R ( m a c c o n f - > M u l t i c a s t F r a m e s F i l t e r ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ U N I C A S T _ F R A M E S _ F I L T E R ( m a c c o n f - > U n i c a s t F r a m e s F i l t e r ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ P A U S E _ T I M E ( m a c c o n f - > P a u s e T i m e ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ Z E R O Q U A N T A _ P A U S E ( m a c c o n f - > Z e r o Q u a n t a P a u s e ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ P A U S E _ L O W _ T H R E S H O L D ( m a c c o n f - > P a u s e L o w T h r e s h o l d ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ U N I C A S T _ P A U S E _ F R A M E _ D E T E C T ( m a c c o n f - > U n i c a s t P a u s e F r a m e D e t e c t ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ R E C E I V E _ F L O W C O N T R O L ( m a c c o n f - > R e c e i v e F l o w C o n t r o l ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ T R A N S M I T _ F L O W C O N T R O L ( m a c c o n f - > T r a n s m i t F l o w C o n t r o l ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ V L A N _ T A G _ C O M P A R I S O N ( m a c c o n f - > V L A N T a g C o m p a r i s o n ) ) ;  
         a s s e r t _ p a r a m ( I S _ E T H _ V L A N _ T A G _ I D E N T I F I E R ( m a c c o n f - > V L A N T a g I d e n t i f i e r ) ) ;  
  
         / * - - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C C R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
         / *   G e t   t h e   E T H E R N E T   M A C C R   v a l u e   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
         / *   C l e a r   W D ,   P C E ,   P S ,   T E   a n d   R E   b i t s   * /  
         t m p r e g 1   & =   E T H _ M A C C R _ C L E A R _ M A S K ;  
  
         t m p r e g 1   | =   ( u i n t 3 2 _ t ) ( m a c c o n f - > W a t c h d o g   |  
                                                     m a c c o n f - > J a b b e r   |  
                                                     m a c c o n f - > I n t e r F r a m e G a p   |  
                                                     m a c c o n f - > C a r r i e r S e n s e   |  
                                                     ( h e t h - > I n i t ) . S p e e d   |  
                                                     m a c c o n f - > R e c e i v e O w n   |  
                                                     m a c c o n f - > L o o p b a c k M o d e   |  
                                                     ( h e t h - > I n i t ) . D u p l e x M o d e   |  
                                                     m a c c o n f - > C h e c k s u m O f f l o a d   |  
                                                     m a c c o n f - > R e t r y T r a n s m i s s i o n   |  
                                                     m a c c o n f - > A u t o m a t i c P a d C R C S t r i p   |  
                                                     m a c c o n f - > B a c k O f f L i m i t   |  
                                                     m a c c o n f - > D e f e r r a l C h e c k ) ;  
  
         / *   W r i t e   t o   E T H E R N E T   M A C C R   * /  
         ( h e t h - > I n s t a n c e ) - > M A C C R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
         / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t   :  
         a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
         H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
         ( h e t h - > I n s t a n c e ) - > M A C C R   =   t m p r e g 1 ;  
  
         / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C F F R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
         / *   W r i t e   t o   E T H E R N E T   M A C F F R   * /  
         ( h e t h - > I n s t a n c e ) - > M A C F F R   =   ( u i n t 3 2 _ t ) ( m a c c o n f - > R e c e i v e A l l   |  
                                                                                     m a c c o n f - > S o u r c e A d d r F i l t e r   |  
                                                                                     m a c c o n f - > P a s s C o n t r o l F r a m e s   |  
                                                                                     m a c c o n f - > B r o a d c a s t F r a m e s R e c e p t i o n   |  
                                                                                     m a c c o n f - > D e s t i n a t i o n A d d r F i l t e r   |  
                                                                                     m a c c o n f - > P r o m i s c u o u s M o d e   |  
                                                                                     m a c c o n f - > M u l t i c a s t F r a m e s F i l t e r   |  
                                                                                     m a c c o n f - > U n i c a s t F r a m e s F i l t e r ) ;  
  
         / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t   :  
         a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C F F R ;  
         H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
         ( h e t h - > I n s t a n c e ) - > M A C F F R   =   t m p r e g 1 ;  
  
         / * - - - - - - - - - - - - - - -   E T H E R N E T   M A C H T H R   a n d   M A C H T L R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - * /  
         / *   W r i t e   t o   E T H E R N E T   M A C H T H R   * /  
         ( h e t h - > I n s t a n c e ) - > M A C H T H R   =   ( u i n t 3 2 _ t ) m a c c o n f - > H a s h T a b l e H i g h ;  
  
         / *   W r i t e   t o   E T H E R N E T   M A C H T L R   * /  
         ( h e t h - > I n s t a n c e ) - > M A C H T L R   =   ( u i n t 3 2 _ t ) m a c c o n f - > H a s h T a b l e L o w ;  
         / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C F C R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
  
         / *   G e t   t h e   E T H E R N E T   M A C F C R   v a l u e   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C F C R ;  
         / *   C l e a r   x x   b i t s   * /  
         t m p r e g 1   & =   E T H _ M A C F C R _ C L E A R _ M A S K ;  
  
         t m p r e g 1   | =   ( u i n t 3 2 _ t ) ( ( m a c c o n f - > P a u s e T i m e   < <   1 6 U )   |  
                                                     m a c c o n f - > Z e r o Q u a n t a P a u s e   |  
                                                     m a c c o n f - > P a u s e L o w T h r e s h o l d   |  
                                                     m a c c o n f - > U n i c a s t P a u s e F r a m e D e t e c t   |  
                                                     m a c c o n f - > R e c e i v e F l o w C o n t r o l   |  
                                                     m a c c o n f - > T r a n s m i t F l o w C o n t r o l ) ;  
  
         / *   W r i t e   t o   E T H E R N E T   M A C F C R   * /  
         ( h e t h - > I n s t a n c e ) - > M A C F C R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
         / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t   :  
         a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C F C R ;  
         H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
         ( h e t h - > I n s t a n c e ) - > M A C F C R   =   t m p r e g 1 ;  
  
         / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C V L A N T R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - * /  
         ( h e t h - > I n s t a n c e ) - > M A C V L A N T R   =   ( u i n t 3 2 _ t ) ( m a c c o n f - > V L A N T a g C o m p a r i s o n   |  
                                                                                           m a c c o n f - > V L A N T a g I d e n t i f i e r ) ;  
  
         / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t   :  
         a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C V L A N T R ;  
         H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
         ( h e t h - > I n s t a n c e ) - > M A C V L A N T R   =   t m p r e g 1 ;  
     }  
     e l s e   / *   m a c c o n f   = =   N U L L   :   h e r e   w e   j u s t   c o n f i g u r e   S p e e d   a n d   D u p l e x   m o d e   * /  
     {  
         / * - - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C C R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
         / *   G e t   t h e   E T H E R N E T   M A C C R   v a l u e   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
  
         / *   C l e a r   F E S   a n d   D M   b i t s   * /  
         t m p r e g 1   & =   ~ ( 0 x 0 0 0 0 4 8 0 0 U ) ;  
  
         t m p r e g 1   | =   ( u i n t 3 2 _ t ) ( h e t h - > I n i t . S p e e d   |   h e t h - > I n i t . D u p l e x M o d e ) ;  
  
         / *   W r i t e   t o   E T H E R N E T   M A C C R   * /  
         ( h e t h - > I n s t a n c e ) - > M A C C R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
         / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
         a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
         t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
         H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
         ( h e t h - > I n s t a n c e ) - > M A C C R   =   t m p r e g 1 ;  
     }  
  
     / *   S e t   t h e   E T H   s t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t s   E T H   D M A   C o n f i g u r a t i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     d m a c o n f :   D M A   C o n f i g u r a t i o n   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ E T H _ C o n f i g D M A ( E T H _ H a n d l e T y p e D e f   * h e t h ,   E T H _ D M A I n i t T y p e D e f   * d m a c o n f )  
 {  
     u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h e t h ) ;  
  
     / *   S e t   t h e   E T H   p e r i p h e r a l   s t a t e   t o   B U S Y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ B U S Y ;  
  
     / *   C h e c k   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E T H _ D R O P _ T C P I P _ C H E C K S U M _ F R A M E ( d m a c o n f - > D r o p T C P I P C h e c k s u m E r r o r F r a m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ R E C E I V E _ S T O R E _ F O R W A R D ( d m a c o n f - > R e c e i v e S t o r e F o r w a r d ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ F L U S H _ R E C E I V E _ F R A M E ( d m a c o n f - > F l u s h R e c e i v e d F r a m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ T R A N S M I T _ S T O R E _ F O R W A R D ( d m a c o n f - > T r a n s m i t S t o r e F o r w a r d ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ T R A N S M I T _ T H R E S H O L D _ C O N T R O L ( d m a c o n f - > T r a n s m i t T h r e s h o l d C o n t r o l ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ F O R W A R D _ E R R O R _ F R A M E S ( d m a c o n f - > F o r w a r d E r r o r F r a m e s ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ F O R W A R D _ U N D E R S I Z E D _ G O O D _ F R A M E S ( d m a c o n f - > F o r w a r d U n d e r s i z e d G o o d F r a m e s ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ R E C E I V E _ T H R E S H O L D _ C O N T R O L ( d m a c o n f - > R e c e i v e T h r e s h o l d C o n t r o l ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ S E C O N D _ F R A M E _ O P E R A T E ( d m a c o n f - > S e c o n d F r a m e O p e r a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ A D D R E S S _ A L I G N E D _ B E A T S ( d m a c o n f - > A d d r e s s A l i g n e d B e a t s ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ F I X E D _ B U R S T ( d m a c o n f - > F i x e d B u r s t ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ R X D M A _ B U R S T _ L E N G T H ( d m a c o n f - > R x D M A B u r s t L e n g t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ T X D M A _ B U R S T _ L E N G T H ( d m a c o n f - > T x D M A B u r s t L e n g t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ D M A _ D E S C _ S K I P _ L E N G T H ( d m a c o n f - > D e s c r i p t o r S k i p L e n g t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ E T H _ D M A _ A R B I T R A T I O N _ R O U N D R O B I N _ R X T X ( d m a c o n f - > D M A A r b i t r a t i o n ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   D M A O M R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
     / *   G e t   t h e   E T H E R N E T   D M A O M R   v a l u e   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > D M A O M R ;  
     / *   C l e a r   x x   b i t s   * /  
     t m p r e g 1   & =   E T H _ D M A O M R _ C L E A R _ M A S K ;  
  
     t m p r e g 1   | =   ( u i n t 3 2 _ t ) ( d m a c o n f - > D r o p T C P I P C h e c k s u m E r r o r F r a m e   |  
                                                 d m a c o n f - > R e c e i v e S t o r e F o r w a r d   |  
                                                 d m a c o n f - > F l u s h R e c e i v e d F r a m e   |  
                                                 d m a c o n f - > T r a n s m i t S t o r e F o r w a r d   |  
                                                 d m a c o n f - > T r a n s m i t T h r e s h o l d C o n t r o l   |  
                                                 d m a c o n f - > F o r w a r d E r r o r F r a m e s   |  
                                                 d m a c o n f - > F o r w a r d U n d e r s i z e d G o o d F r a m e s   |  
                                                 d m a c o n f - > R e c e i v e T h r e s h o l d C o n t r o l   |  
                                                 d m a c o n f - > S e c o n d F r a m e O p e r a t e ) ;  
  
     / *   W r i t e   t o   E T H E R N E T   D M A O M R   * /  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
     a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > D M A O M R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   =   t m p r e g 1 ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   D M A B M R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
     ( h e t h - > I n s t a n c e ) - > D M A B M R   =   ( u i n t 3 2 _ t ) ( d m a c o n f - > A d d r e s s A l i g n e d B e a t s   |  
                                                                                 d m a c o n f - > F i x e d B u r s t   |  
                                                                                 d m a c o n f - > R x D M A B u r s t L e n g t h   |   / *   ! !   i f   4 x P B L   i s   s e l e c t e d   f o r   T x   o r   R x   i t   i s   a p p l i e d   f o r   t h e   o t h e r   * /  
                                                                                 d m a c o n f - > T x D M A B u r s t L e n g t h   |  
                                                                                 ( d m a c o n f - > D e s c r i p t o r S k i p L e n g t h   < <   2 U )   |  
                                                                                 d m a c o n f - > D M A A r b i t r a t i o n   |  
                                                                                 E T H _ D M A B M R _ U S P ) ;   / *   E n a b l e   u s e   o f   s e p a r a t e   P B L   f o r   R x   a n d   T x   * /  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > D M A B M R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > D M A B M R   =   t m p r e g 1 ;  
  
     / *   S e t   t h e   E T H   s t a t e   t o   R e a d y   * /  
     h e t h - > S t a t e   =   H A L _ E T H _ S T A T E _ R E A D Y ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h e t h ) ;  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   E T H _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                   # # # # #   P e r i p h e r a l   S t a t e   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
     T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   p e r i p h e r a l  
     a n d   t h e   d a t a   f l o w .  
               ( + )   G e t   t h e   E T H   h a n d l e   s t a t e :  
                       H A L _ E T H _ G e t S t a t e ( ) ;  
  
  
     @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   E T H   H A L   s t a t e  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ E T H _ S t a t e T y p e D e f   H A L _ E T H _ G e t S t a t e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   R e t u r n   E T H   s t a t e   * /  
     r e t u r n   h e t h - > S t a t e ;  
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
 / * *   @ a d d t o g r o u p   E T H _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   E t h e r n e t   M A C   a n d   D M A   w i t h   d e f a u l t   p a r a m e t e r s .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     e r r :   E t h e r n e t   I n i t   e r r o r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   v o i d   E T H _ M A C D M A C o n f i g ( E T H _ H a n d l e T y p e D e f   * h e t h ,   u i n t 3 2 _ t   e r r )  
 {  
     E T H _ M A C I n i t T y p e D e f   m a c i n i t ;  
     E T H _ D M A I n i t T y p e D e f   d m a i n i t ;  
     u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     i f   ( e r r   ! =   E T H _ S U C C E S S )   / *   A u t o - n e g o t i a t i o n   f a i l e d   * /  
     {  
         / *   S e t   E t h e r n e t   d u p l e x   m o d e   t o   F u l l - d u p l e x   * /  
         ( h e t h - > I n i t ) . D u p l e x M o d e   =   E T H _ M O D E _ F U L L D U P L E X ;  
  
         / *   S e t   E t h e r n e t   s p e e d   t o   1 0 0 M   * /  
         ( h e t h - > I n i t ) . S p e e d   =   E T H _ S P E E D _ 1 0 0 M ;  
     }  
  
     / *   E t h e r n e t   M A C   d e f a u l t   i n i t i a l i z a t i o n   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     m a c i n i t . W a t c h d o g   =   E T H _ W A T C H D O G _ E N A B L E ;  
     m a c i n i t . J a b b e r   =   E T H _ J A B B E R _ E N A B L E ;  
     m a c i n i t . I n t e r F r a m e G a p   =   E T H _ I N T E R F R A M E G A P _ 9 6 B I T ;  
     m a c i n i t . C a r r i e r S e n s e   =   E T H _ C A R R I E R S E N C E _ E N A B L E ;  
     m a c i n i t . R e c e i v e O w n   =   E T H _ R E C E I V E O W N _ E N A B L E ;  
     m a c i n i t . L o o p b a c k M o d e   =   E T H _ L O O P B A C K M O D E _ D I S A B L E ;  
     i f   ( h e t h - > I n i t . C h e c k s u m M o d e   = =   E T H _ C H E C K S U M _ B Y _ H A R D W A R E )  
     {  
         m a c i n i t . C h e c k s u m O f f l o a d   =   E T H _ C H E C K S U M O F F L A O D _ E N A B L E ;  
     }  
     e l s e  
     {  
         m a c i n i t . C h e c k s u m O f f l o a d   =   E T H _ C H E C K S U M O F F L A O D _ D I S A B L E ;  
     }  
     m a c i n i t . R e t r y T r a n s m i s s i o n   =   E T H _ R E T R Y T R A N S M I S S I O N _ D I S A B L E ;  
     m a c i n i t . A u t o m a t i c P a d C R C S t r i p   =   E T H _ A U T O M A T I C P A D C R C S T R I P _ D I S A B L E ;  
     m a c i n i t . B a c k O f f L i m i t   =   E T H _ B A C K O F F L I M I T _ 1 0 ;  
     m a c i n i t . D e f e r r a l C h e c k   =   E T H _ D E F F E R R A L C H E C K _ D I S A B L E ;  
     m a c i n i t . R e c e i v e A l l   =   E T H _ R E C E I V E A l l _ D I S A B L E ;  
     m a c i n i t . S o u r c e A d d r F i l t e r   =   E T H _ S O U R C E A D D R F I L T E R _ D I S A B L E ;  
     m a c i n i t . P a s s C o n t r o l F r a m e s   =   E T H _ P A S S C O N T R O L F R A M E S _ B L O C K A L L ;  
     m a c i n i t . B r o a d c a s t F r a m e s R e c e p t i o n   =   E T H _ B R O A D C A S T F R A M E S R E C E P T I O N _ E N A B L E ;  
     m a c i n i t . D e s t i n a t i o n A d d r F i l t e r   =   E T H _ D E S T I N A T I O N A D D R F I L T E R _ N O R M A L ;  
     m a c i n i t . P r o m i s c u o u s M o d e   =   E T H _ P R O M I S C U O U S _ M O D E _ D I S A B L E ;  
     m a c i n i t . M u l t i c a s t F r a m e s F i l t e r   =   E T H _ M U L T I C A S T F R A M E S F I L T E R _ P E R F E C T ;  
     m a c i n i t . U n i c a s t F r a m e s F i l t e r   =   E T H _ U N I C A S T F R A M E S F I L T E R _ P E R F E C T ;  
     m a c i n i t . H a s h T a b l e H i g h   =   0 x 0 U ;  
     m a c i n i t . H a s h T a b l e L o w   =   0 x 0 U ;  
     m a c i n i t . P a u s e T i m e   =   0 x 0 U ;  
     m a c i n i t . Z e r o Q u a n t a P a u s e   =   E T H _ Z E R O Q U A N T A P A U S E _ D I S A B L E ;  
     m a c i n i t . P a u s e L o w T h r e s h o l d   =   E T H _ P A U S E L O W T H R E S H O L D _ M I N U S 4 ;  
     m a c i n i t . U n i c a s t P a u s e F r a m e D e t e c t   =   E T H _ U N I C A S T P A U S E F R A M E D E T E C T _ D I S A B L E ;  
     m a c i n i t . R e c e i v e F l o w C o n t r o l   =   E T H _ R E C E I V E F L O W C O N T R O L _ D I S A B L E ;  
     m a c i n i t . T r a n s m i t F l o w C o n t r o l   =   E T H _ T R A N S M I T F L O W C O N T R O L _ D I S A B L E ;  
     m a c i n i t . V L A N T a g C o m p a r i s o n   =   E T H _ V L A N T A G C O M P A R I S O N _ 1 6 B I T ;  
     m a c i n i t . V L A N T a g I d e n t i f i e r   =   0 x 0 U ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C C R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
     / *   G e t   t h e   E T H E R N E T   M A C C R   v a l u e   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
     / *   C l e a r   W D ,   P C E ,   P S ,   T E   a n d   R E   b i t s   * /  
     t m p r e g 1   & =   E T H _ M A C C R _ C L E A R _ M A S K ;  
     / *   S e t   t h e   W D   b i t   a c c o r d i n g   t o   E T H   W a t c h d o g   v a l u e   * /  
     / *   S e t   t h e   J D :   b i t   a c c o r d i n g   t o   E T H   J a b b e r   v a l u e   * /  
     / *   S e t   t h e   I F G   b i t   a c c o r d i n g   t o   E T H   I n t e r F r a m e G a p   v a l u e   * /  
     / *   S e t   t h e   D C R S   b i t   a c c o r d i n g   t o   E T H   C a r r i e r S e n s e   v a l u e   * /  
     / *   S e t   t h e   F E S   b i t   a c c o r d i n g   t o   E T H   S p e e d   v a l u e   * /  
     / *   S e t   t h e   D O   b i t   a c c o r d i n g   t o   E T H   R e c e i v e O w n   v a l u e   * /  
     / *   S e t   t h e   L M   b i t   a c c o r d i n g   t o   E T H   L o o p b a c k M o d e   v a l u e   * /  
     / *   S e t   t h e   D M   b i t   a c c o r d i n g   t o   E T H   M o d e   v a l u e   * /  
     / *   S e t   t h e   I P C O   b i t   a c c o r d i n g   t o   E T H   C h e c k s u m O f f l o a d   v a l u e   * /  
     / *   S e t   t h e   D R   b i t   a c c o r d i n g   t o   E T H   R e t r y T r a n s m i s s i o n   v a l u e   * /  
     / *   S e t   t h e   A C S   b i t   a c c o r d i n g   t o   E T H   A u t o m a t i c P a d C R C S t r i p   v a l u e   * /  
     / *   S e t   t h e   B L   b i t   a c c o r d i n g   t o   E T H   B a c k O f f L i m i t   v a l u e   * /  
     / *   S e t   t h e   D C   b i t   a c c o r d i n g   t o   E T H   D e f e r r a l C h e c k   v a l u e   * /  
     t m p r e g 1   | =   ( u i n t 3 2 _ t ) ( m a c i n i t . W a t c h d o g   |  
                                                 m a c i n i t . J a b b e r   |  
                                                 m a c i n i t . I n t e r F r a m e G a p   |  
                                                 m a c i n i t . C a r r i e r S e n s e   |  
                                                 ( h e t h - > I n i t ) . S p e e d   |  
                                                 m a c i n i t . R e c e i v e O w n   |  
                                                 m a c i n i t . L o o p b a c k M o d e   |  
                                                 ( h e t h - > I n i t ) . D u p l e x M o d e   |  
                                                 m a c i n i t . C h e c k s u m O f f l o a d   |  
                                                 m a c i n i t . R e t r y T r a n s m i s s i o n   |  
                                                 m a c i n i t . A u t o m a t i c P a d C R C S t r i p   |  
                                                 m a c i n i t . B a c k O f f L i m i t   |  
                                                 m a c i n i t . D e f e r r a l C h e c k ) ;  
  
     / *   W r i t e   t o   E T H E R N E T   M A C C R   * /  
     ( h e t h - > I n s t a n c e ) - > M A C C R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C C R   =   t m p r e g 1 ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C F F R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - * /  
     / *   S e t   t h e   R A   b i t   a c c o r d i n g   t o   E T H   R e c e i v e A l l   v a l u e   * /  
     / *   S e t   t h e   S A F   a n d   S A I F   b i t s   a c c o r d i n g   t o   E T H   S o u r c e A d d r F i l t e r   v a l u e   * /  
     / *   S e t   t h e   P C F   b i t   a c c o r d i n g   t o   E T H   P a s s C o n t r o l F r a m e s   v a l u e   * /  
     / *   S e t   t h e   D B F   b i t   a c c o r d i n g   t o   E T H   B r o a d c a s t F r a m e s R e c e p t i o n   v a l u e   * /  
     / *   S e t   t h e   D A I F   b i t   a c c o r d i n g   t o   E T H   D e s t i n a t i o n A d d r F i l t e r   v a l u e   * /  
     / *   S e t   t h e   P R   b i t   a c c o r d i n g   t o   E T H   P r o m i s c u o u s M o d e   v a l u e   * /  
     / *   S e t   t h e   P M ,   H M C   a n d   H P F   b i t s   a c c o r d i n g   t o   E T H   M u l t i c a s t F r a m e s F i l t e r   v a l u e   * /  
     / *   S e t   t h e   H U C   a n d   H P F   b i t s   a c c o r d i n g   t o   E T H   U n i c a s t F r a m e s F i l t e r   v a l u e   * /  
     / *   W r i t e   t o   E T H E R N E T   M A C F F R   * /  
     ( h e t h - > I n s t a n c e ) - > M A C F F R   =   ( u i n t 3 2 _ t ) ( m a c i n i t . R e c e i v e A l l   |  
                                                                                 m a c i n i t . S o u r c e A d d r F i l t e r   |  
                                                                                 m a c i n i t . P a s s C o n t r o l F r a m e s   |  
                                                                                 m a c i n i t . B r o a d c a s t F r a m e s R e c e p t i o n   |  
                                                                                 m a c i n i t . D e s t i n a t i o n A d d r F i l t e r   |  
                                                                                 m a c i n i t . P r o m i s c u o u s M o d e   |  
                                                                                 m a c i n i t . M u l t i c a s t F r a m e s F i l t e r   |  
                                                                                 m a c i n i t . U n i c a s t F r a m e s F i l t e r ) ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C F F R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C F F R   =   t m p r e g 1 ;  
  
     / * - - - - - - - - - - - - - - -   E T H E R N E T   M A C H T H R   a n d   M A C H T L R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - * /  
     / *   W r i t e   t o   E T H E R N E T   M A C H T H R   * /  
     ( h e t h - > I n s t a n c e ) - > M A C H T H R   =   ( u i n t 3 2 _ t ) m a c i n i t . H a s h T a b l e H i g h ;  
  
     / *   W r i t e   t o   E T H E R N E T   M A C H T L R   * /  
     ( h e t h - > I n s t a n c e ) - > M A C H T L R   =   ( u i n t 3 2 _ t ) m a c i n i t . H a s h T a b l e L o w ;  
     / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C F C R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - * /  
  
     / *   G e t   t h e   E T H E R N E T   M A C F C R   v a l u e   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C F C R ;  
     / *   C l e a r   x x   b i t s   * /  
     t m p r e g 1   & =   E T H _ M A C F C R _ C L E A R _ M A S K ;  
  
     / *   S e t   t h e   P T   b i t   a c c o r d i n g   t o   E T H   P a u s e T i m e   v a l u e   * /  
     / *   S e t   t h e   D Z P Q   b i t   a c c o r d i n g   t o   E T H   Z e r o Q u a n t a P a u s e   v a l u e   * /  
     / *   S e t   t h e   P L T   b i t   a c c o r d i n g   t o   E T H   P a u s e L o w T h r e s h o l d   v a l u e   * /  
     / *   S e t   t h e   U P   b i t   a c c o r d i n g   t o   E T H   U n i c a s t P a u s e F r a m e D e t e c t   v a l u e   * /  
     / *   S e t   t h e   R F E   b i t   a c c o r d i n g   t o   E T H   R e c e i v e F l o w C o n t r o l   v a l u e   * /  
     / *   S e t   t h e   T F E   b i t   a c c o r d i n g   t o   E T H   T r a n s m i t F l o w C o n t r o l   v a l u e   * /  
     t m p r e g 1   | =   ( u i n t 3 2 _ t ) ( ( m a c i n i t . P a u s e T i m e   < <   1 6 U )   |  
                                                 m a c i n i t . Z e r o Q u a n t a P a u s e   |  
                                                 m a c i n i t . P a u s e L o w T h r e s h o l d   |  
                                                 m a c i n i t . U n i c a s t P a u s e F r a m e D e t e c t   |  
                                                 m a c i n i t . R e c e i v e F l o w C o n t r o l   |  
                                                 m a c i n i t . T r a n s m i t F l o w C o n t r o l ) ;  
  
     / *   W r i t e   t o   E T H E R N E T   M A C F C R   * /  
     ( h e t h - > I n s t a n c e ) - > M A C F C R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
     a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C F C R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C F C R   =   t m p r e g 1 ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   M A C V L A N T R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - * /  
     / *   S e t   t h e   E T V   b i t   a c c o r d i n g   t o   E T H   V L A N T a g C o m p a r i s o n   v a l u e   * /  
     / *   S e t   t h e   V L   b i t   a c c o r d i n g   t o   E T H   V L A N T a g I d e n t i f i e r   v a l u e   * /  
     ( h e t h - > I n s t a n c e ) - > M A C V L A N T R   =   ( u i n t 3 2 _ t ) ( m a c i n i t . V L A N T a g C o m p a r i s o n   |  
                                                                                       m a c i n i t . V L A N T a g I d e n t i f i e r ) ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C V L A N T R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C V L A N T R   =   t m p r e g 1 ;  
  
     / *   E t h e r n e t   D M A   d e f a u l t   i n i t i a l i z a t i o n   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     d m a i n i t . D r o p T C P I P C h e c k s u m E r r o r F r a m e   =   E T H _ D R O P T C P I P C H E C K S U M E R R O R F R A M E _ E N A B L E ;  
     d m a i n i t . R e c e i v e S t o r e F o r w a r d   =   E T H _ R E C E I V E S T O R E F O R W A R D _ E N A B L E ;  
     d m a i n i t . F l u s h R e c e i v e d F r a m e   =   E T H _ F L U S H R E C E I V E D F R A M E _ E N A B L E ;  
     d m a i n i t . T r a n s m i t S t o r e F o r w a r d   =   E T H _ T R A N S M I T S T O R E F O R W A R D _ E N A B L E ;  
     d m a i n i t . T r a n s m i t T h r e s h o l d C o n t r o l   =   E T H _ T R A N S M I T T H R E S H O L D C O N T R O L _ 6 4 B Y T E S ;  
     d m a i n i t . F o r w a r d E r r o r F r a m e s   =   E T H _ F O R W A R D E R R O R F R A M E S _ D I S A B L E ;  
     d m a i n i t . F o r w a r d U n d e r s i z e d G o o d F r a m e s   =   E T H _ F O R W A R D U N D E R S I Z E D G O O D F R A M E S _ D I S A B L E ;  
     d m a i n i t . R e c e i v e T h r e s h o l d C o n t r o l   =   E T H _ R E C E I V E D T H R E S H O L D C O N T R O L _ 6 4 B Y T E S ;  
     d m a i n i t . S e c o n d F r a m e O p e r a t e   =   E T H _ S E C O N D F R A M E O P E R A R T E _ E N A B L E ;  
     d m a i n i t . A d d r e s s A l i g n e d B e a t s   =   E T H _ A D D R E S S A L I G N E D B E A T S _ E N A B L E ;  
     d m a i n i t . F i x e d B u r s t   =   E T H _ F I X E D B U R S T _ E N A B L E ;  
     d m a i n i t . R x D M A B u r s t L e n g t h   =   E T H _ R X D M A B U R S T L E N G T H _ 3 2 B E A T ;  
     d m a i n i t . T x D M A B u r s t L e n g t h   =   E T H _ T X D M A B U R S T L E N G T H _ 3 2 B E A T ;  
     d m a i n i t . D e s c r i p t o r S k i p L e n g t h   =   0 x 0 U ;  
     d m a i n i t . D M A A r b i t r a t i o n   =   E T H _ D M A A R B I T R A T I O N _ R O U N D R O B I N _ R X T X _ 1 _ 1 ;  
  
     / *   G e t   t h e   E T H E R N E T   D M A O M R   v a l u e   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > D M A O M R ;  
     / *   C l e a r   x x   b i t s   * /  
     t m p r e g 1   & =   E T H _ D M A O M R _ C L E A R _ M A S K ;  
  
     / *   S e t   t h e   D T   b i t   a c c o r d i n g   t o   E T H   D r o p T C P I P C h e c k s u m E r r o r F r a m e   v a l u e   * /  
     / *   S e t   t h e   R S F   b i t   a c c o r d i n g   t o   E T H   R e c e i v e S t o r e F o r w a r d   v a l u e   * /  
     / *   S e t   t h e   D F F   b i t   a c c o r d i n g   t o   E T H   F l u s h R e c e i v e d F r a m e   v a l u e   * /  
     / *   S e t   t h e   T S F   b i t   a c c o r d i n g   t o   E T H   T r a n s m i t S t o r e F o r w a r d   v a l u e   * /  
     / *   S e t   t h e   T T C   b i t   a c c o r d i n g   t o   E T H   T r a n s m i t T h r e s h o l d C o n t r o l   v a l u e   * /  
     / *   S e t   t h e   F E F   b i t   a c c o r d i n g   t o   E T H   F o r w a r d E r r o r F r a m e s   v a l u e   * /  
     / *   S e t   t h e   F U F   b i t   a c c o r d i n g   t o   E T H   F o r w a r d U n d e r s i z e d G o o d F r a m e s   v a l u e   * /  
     / *   S e t   t h e   R T C   b i t   a c c o r d i n g   t o   E T H   R e c e i v e T h r e s h o l d C o n t r o l   v a l u e   * /  
     / *   S e t   t h e   O S F   b i t   a c c o r d i n g   t o   E T H   S e c o n d F r a m e O p e r a t e   v a l u e   * /  
     t m p r e g 1   | =   ( u i n t 3 2 _ t ) ( d m a i n i t . D r o p T C P I P C h e c k s u m E r r o r F r a m e   |  
                                                 d m a i n i t . R e c e i v e S t o r e F o r w a r d   |  
                                                 d m a i n i t . F l u s h R e c e i v e d F r a m e   |  
                                                 d m a i n i t . T r a n s m i t S t o r e F o r w a r d   |  
                                                 d m a i n i t . T r a n s m i t T h r e s h o l d C o n t r o l   |  
                                                 d m a i n i t . F o r w a r d E r r o r F r a m e s   |  
                                                 d m a i n i t . F o r w a r d U n d e r s i z e d G o o d F r a m e s   |  
                                                 d m a i n i t . R e c e i v e T h r e s h o l d C o n t r o l   |  
                                                 d m a i n i t . S e c o n d F r a m e O p e r a t e ) ;  
  
     / *   W r i t e   t o   E T H E R N E T   D M A O M R   * /  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   =   ( u i n t 3 2 _ t ) t m p r e g 1 ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > D M A O M R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   =   t m p r e g 1 ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - -   E T H E R N E T   D M A B M R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - * /  
     / *   S e t   t h e   A A L   b i t   a c c o r d i n g   t o   E T H   A d d r e s s A l i g n e d B e a t s   v a l u e   * /  
     / *   S e t   t h e   F B   b i t   a c c o r d i n g   t o   E T H   F i x e d B u r s t   v a l u e   * /  
     / *   S e t   t h e   R P B L   a n d   4 * P B L   b i t s   a c c o r d i n g   t o   E T H   R x D M A B u r s t L e n g t h   v a l u e   * /  
     / *   S e t   t h e   P B L   a n d   4 * P B L   b i t s   a c c o r d i n g   t o   E T H   T x D M A B u r s t L e n g t h   v a l u e   * /  
     / *   S e t   t h e   D S L   b i t   a c c o r d i n g   t o   E T H   D e s c i p t o r S k i p L e n g t h   v a l u e   * /  
     / *   S e t   t h e   P R   a n d   D A   b i t s   a c c o r d i n g   t o   E T H   D M A A r b i t r a t i o n   v a l u e   * /  
     ( h e t h - > I n s t a n c e ) - > D M A B M R   =   ( u i n t 3 2 _ t ) ( d m a i n i t . A d d r e s s A l i g n e d B e a t s   |  
                                                                                 d m a i n i t . F i x e d B u r s t   |  
                                                                                 d m a i n i t . R x D M A B u r s t L e n g t h   |         / *   ! !   i f   4 x P B L   i s   s e l e c t e d   f o r   T x   o r   R x   i t   i s   a p p l i e d   f o r   t h e   o t h e r   * /  
                                                                                 d m a i n i t . T x D M A B u r s t L e n g t h   |  
                                                                                 ( d m a i n i t . D e s c r i p t o r S k i p L e n g t h   < <   2 U )   |  
                                                                                 d m a i n i t . D M A A r b i t r a t i o n   |  
                                                                                 E T H _ D M A B M R _ U S P ) ;   / *   E n a b l e   u s e   o f   s e p a r a t e   P B L   f o r   R x   a n d   T x   * /  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > D M A B M R ;  
     H A L _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > D M A B M R   =   t m p r e g 1 ;  
  
     i f   ( ( h e t h - > I n i t ) . R x M o d e   = =   E T H _ R X I N T E R R U P T _ M O D E )  
     {  
         / *   E n a b l e   t h e   E t h e r n e t   R x   I n t e r r u p t   * /  
         _ _ H A L _ E T H _ D M A _ E N A B L E _ I T ( ( h e t h ) ,   E T H _ D M A _ I T _ N I S   |   E T H _ D M A _ I T _ R ) ;  
     }  
  
     / *   I n i t i a l i z e   M A C   a d d r e s s   i n   e t h e r n e t   M A C   * /  
     E T H _ M A C A d d r e s s C o n f i g ( h e t h ,   E T H _ M A C _ A D D R E S S 0 ,   h e t h - > I n i t . M A C A d d r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   s e l e c t e d   M A C   a d d r e s s .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ p a r a m     M a c A d d r :   T h e   M A C   a d d r e s s   t o   c o n f i g u r e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                           @ a r g   E T H _ M A C _ A d d r e s s 0 :   M A C   A d d r e s s 0  
     *                           @ a r g   E T H _ M A C _ A d d r e s s 1 :   M A C   A d d r e s s 1  
     *                           @ a r g   E T H _ M A C _ A d d r e s s 2 :   M A C   A d d r e s s 2  
     *                           @ a r g   E T H _ M A C _ A d d r e s s 3 :   M A C   A d d r e s s 3  
     *   @ p a r a m     A d d r :   P o i n t e r   t o   M A C   a d d r e s s   b u f f e r   d a t a   ( 6   b y t e s )  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   v o i d   E T H _ M A C A d d r e s s C o n f i g ( E T H _ H a n d l e T y p e D e f   * h e t h ,   u i n t 3 2 _ t   M a c A d d r ,   u i n t 8 _ t   * A d d r )  
 {  
     u i n t 3 2 _ t   t m p r e g 1 ;  
  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h e t h ) ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ E T H _ M A C _ A D D R E S S 0 1 2 3 ( M a c A d d r ) ) ;  
  
     / *   C a l c u l a t e   t h e   s e l e c t e d   M A C   a d d r e s s   h i g h   r e g i s t e r   * /  
     t m p r e g 1   =   ( ( u i n t 3 2 _ t ) A d d r [ 5 U ]   < <   8 U )   |   ( u i n t 3 2 _ t ) A d d r [ 4 U ] ;  
     / *   L o a d   t h e   s e l e c t e d   M A C   a d d r e s s   h i g h   r e g i s t e r   * /  
     ( * ( _ _ I O   u i n t 3 2 _ t   * ) ( ( u i n t 3 2 _ t ) ( E T H _ M A C _ A D D R _ H B A S E   +   M a c A d d r ) ) )   =   t m p r e g 1 ;  
     / *   C a l c u l a t e   t h e   s e l e c t e d   M A C   a d d r e s s   l o w   r e g i s t e r   * /  
     t m p r e g 1   =   ( ( u i n t 3 2 _ t ) A d d r [ 3 U ]   < <   2 4 U )   |   ( ( u i n t 3 2 _ t ) A d d r [ 2 U ]   < <   1 6 U )   |   ( ( u i n t 3 2 _ t ) A d d r [ 1 U ]   < <   8 U )   |   A d d r [ 0 U ] ;  
  
     / *   L o a d   t h e   s e l e c t e d   M A C   a d d r e s s   l o w   r e g i s t e r   * /  
     ( * ( _ _ I O   u i n t 3 2 _ t   * ) ( ( u i n t 3 2 _ t ) ( E T H _ M A C _ A D D R _ L B A S E   +   M a c A d d r ) ) )   =   t m p r e g 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   M A C   t r a n s m i s s i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ M A C T r a n s m i s s i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     / *   E n a b l e   t h e   M A C   t r a n s m i s s i o n   * /  
     ( h e t h - > I n s t a n c e ) - > M A C C R   | =   E T H _ M A C C R _ T E ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
     E T H _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C C R   =   t m p r e g 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   M A C   t r a n s m i s s i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ M A C T r a n s m i s s i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     / *   D i s a b l e   t h e   M A C   t r a n s m i s s i o n   * /  
     ( h e t h - > I n s t a n c e ) - > M A C C R   & =   ~ E T H _ M A C C R _ T E ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
     E T H _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C C R   =   t m p r e g 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   M A C   r e c e p t i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ M A C R e c e p t i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     / *   E n a b l e   t h e   M A C   r e c e p t i o n   * /  
     ( h e t h - > I n s t a n c e ) - > M A C C R   | =   E T H _ M A C C R _ R E ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
     E T H _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C C R   =   t m p r e g 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   M A C   r e c e p t i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ M A C R e c e p t i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     / *   D i s a b l e   t h e   M A C   r e c e p t i o n   * /  
     ( h e t h - > I n s t a n c e ) - > M A C C R   & =   ~ E T H _ M A C C R _ R E ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > M A C C R ;  
     E T H _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > M A C C R   =   t m p r e g 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   D M A   t r a n s m i s s i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ D M A T r a n s m i s s i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   E n a b l e   t h e   D M A   t r a n s m i s s i o n   * /  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   | =   E T H _ D M A O M R _ S T ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   D M A   t r a n s m i s s i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ D M A T r a n s m i s s i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   D i s a b l e   t h e   D M A   t r a n s m i s s i o n   * /  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   & =   ~ E T H _ D M A O M R _ S T ;  
 }  
  
 / * *  
     *   @ b r i e f     E n a b l e s   t h e   D M A   r e c e p t i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ D M A R e c e p t i o n E n a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   E n a b l e   t h e   D M A   r e c e p t i o n   * /  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   | =   E T H _ D M A O M R _ S R ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   t h e   D M A   r e c e p t i o n .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ D M A R e c e p t i o n D i s a b l e ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   D i s a b l e   t h e   D M A   r e c e p t i o n   * /  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   & =   ~ E T H _ D M A O M R _ S R ;  
 }  
  
 / * *  
     *   @ b r i e f     C l e a r s   t h e   E T H E R N E T   t r a n s m i t   F I F O .  
     *   @ p a r a m     h e t h :   p o i n t e r   t o   a   E T H _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   E T H E R N E T   m o d u l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ F l u s h T r a n s m i t F I F O ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g 1   =   0 U ;  
  
     / *   S e t   t h e   F l u s h   T r a n s m i t   F I F O   b i t   * /  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   | =   E T H _ D M A O M R _ F T F ;  
  
     / *   W a i t   u n t i l   t h e   w r i t e   o p e r a t i o n   w i l l   b e   t a k e n   i n t o   a c c o u n t :  
           a t   l e a s t   f o u r   T X _ C L K / R X _ C L K   c l o c k   c y c l e s   * /  
     t m p r e g 1   =   ( h e t h - > I n s t a n c e ) - > D M A O M R ;  
     E T H _ D e l a y ( E T H _ R E G _ W R I T E _ D E L A Y ) ;  
     ( h e t h - > I n s t a n c e ) - > D M A O M R   =   t m p r e g 1 ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   p r o v i d e s   d e l a y   ( i n   m i l l i s e c o n d s )   b a s e d   o n   C P U   c y c l e s   m e t h o d .  
     *   @ p a r a m     m d e l a y :   s p e c i f i e s   t h e   d e l a y   t i m e   l e n g t h ,   i n   m i l l i s e c o n d s .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   E T H _ D e l a y ( u i n t 3 2 _ t   m d e l a y )  
 {  
     _ _ I O   u i n t 3 2 _ t   D e l a y   =   m d e l a y   *   ( S y s t e m C o r e C l o c k   /   8 U   /   1 0 0 0 U ) ;  
     d o  
     {  
         _ _ N O P ( ) ;  
     }  
     w h i l e   ( D e l a y   - - ) ;  
 }  
  
 # i f   ( U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 s t a t i c   v o i d   E T H _ I n i t C a l l b a c k s T o D e f a u l t ( E T H _ H a n d l e T y p e D e f   * h e t h )  
 {  
     / *   I n i t   t h e   E T H   C a l l b a c k   s e t t i n g s   * /  
     h e t h - > T x C p l t C a l l b a c k               =   H A L _ E T H _ T x C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   T x C p l t C a l l b a c k       * /  
     h e t h - > R x C p l t C a l l b a c k               =   H A L _ E T H _ R x C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   R x C p l t C a l l b a c k       * /  
     h e t h - > D M A E r r o r C a l l b a c k           =   H A L _ E T H _ E r r o r C a l l b a c k ;     / *   L e g a c y   w e a k   D M A E r r o r C a l l b a c k   * /  
 }  
 # e n d i f   / *   U S E _ H A L _ E T H _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   E T H   * /  
  
 # e n d i f   / *   H A L _ E T H _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  