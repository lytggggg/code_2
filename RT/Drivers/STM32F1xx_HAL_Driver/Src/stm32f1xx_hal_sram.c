??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ s r a m . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       S R A M   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   a   g e n e r i c   f i r m w a r e   t o   d r i v e   S R A M   m e m o r i e s  
     *                     m o u n t e d   a s   e x t e r n a l   d e v i c e .  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                     # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   d r i v e r   i s   a   g e n e r i c   l a y e r e d   d r i v e r   w h i c h   c o n t a i n s   a   s e t   o f   A P I s   u s e d   t o  
         c o n t r o l   S R A M   m e m o r i e s .   I t   u s e s   t h e   F S M C   l a y e r   f u n c t i o n s   t o   i n t e r f a c e  
         w i t h   S R A M   d e v i c e s .  
         T h e   f o l l o w i n g   s e q u e n c e   s h o u l d   b e   f o l l o w e d   t o   c o n f i g u r e   t h e   F S M C   t o   i n t e r f a c e  
         w i t h   S R A M / P S R A M   m e m o r i e s :  
  
       ( # )   D e c l a r e   a   S R A M _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e ,   f o r   e x a m p l e :  
                     S R A M _ H a n d l e T y p e D e f     h s r a m ;   a n d :  
  
               ( + + )   F i l l   t h e   S R A M _ H a n d l e T y p e D e f   h a n d l e   " I n i t "   f i e l d   w i t h   t h e   a l l o w e d  
                         v a l u e s   o f   t h e   s t r u c t u r e   m e m b e r .  
  
               ( + + )   F i l l   t h e   S R A M _ H a n d l e T y p e D e f   h a n d l e   " I n s t a n c e "   f i e l d   w i t h   a   p r e d e f i n e d  
                         b a s e   r e g i s t e r   i n s t a n c e   f o r   N O R   o r   S R A M   d e v i c e  
  
               ( + + )   F i l l   t h e   S R A M _ H a n d l e T y p e D e f   h a n d l e   " E x t e n d e d "   f i e l d   w i t h   a   p r e d e f i n e d  
                         b a s e   r e g i s t e r   i n s t a n c e   f o r   N O R   o r   S R A M   e x t e n d e d   m o d e  
  
       ( # )   D e c l a r e   t w o   F S M C _ N O R S R A M _ T i m i n g T y p e D e f   s t r u c t u r e s ,   f o r   b o t h   n o r m a l   a n d   e x t e n d e d  
               m o d e   t i m i n g s ;   f o r   e x a m p l e :  
                     F S M C _ N O R S R A M _ T i m i n g T y p e D e f     T i m i n g   a n d   F S M C _ N O R S R A M _ T i m i n g T y p e D e f     E x T i m i n g ;  
             a n d   f i l l   i t s   f i e l d s   w i t h   t h e   a l l o w e d   v a l u e s   o f   t h e   s t r u c t u r e   m e m b e r .  
  
       ( # )   I n i t i a l i z e   t h e   S R A M   C o n t r o l l e r   b y   c a l l i n g   t h e   f u n c t i o n   H A L _ S R A M _ I n i t ( ) .   T h i s   f u n c t i o n  
               p e r f o r m s   t h e   f o l l o w i n g   s e q u e n c e :  
  
               ( # # )   M S P   h a r d w a r e   l a y e r   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n   H A L _ S R A M _ M s p I n i t ( )  
               ( # # )   C o n t r o l   r e g i s t e r   c o n f i g u r a t i o n   u s i n g   t h e   F S M C   N O R S R A M   i n t e r f a c e   f u n c t i o n  
                         F S M C _ N O R S R A M _ I n i t ( )  
               ( # # )   T i m i n g   r e g i s t e r   c o n f i g u r a t i o n   u s i n g   t h e   F S M C   N O R S R A M   i n t e r f a c e   f u n c t i o n  
                         F S M C _ N O R S R A M _ T i m i n g _ I n i t ( )  
               ( # # )   E x t e n d e d   m o d e   T i m i n g   r e g i s t e r   c o n f i g u r a t i o n   u s i n g   t h e   F S M C   N O R S R A M   i n t e r f a c e   f u n c t i o n  
                         F S M C _ N O R S R A M _ E x t e n d e d _ T i m i n g _ I n i t ( )  
               ( # # )   E n a b l e   t h e   S R A M   d e v i c e   u s i n g   t h e   m a c r o   _ _ F S M C _ N O R S R A M _ E N A B L E ( )  
  
       ( # )   A t   t h i s   s t a g e   y o u   c a n   p e r f o r m   r e a d / w r i t e   a c c e s s e s   f r o m / t o   t h e   m e m o r y   c o n n e c t e d  
               t o   t h e   N O R / S R A M   B a n k .   Y o u   c a n   p e r f o r m   e i t h e r   p o l l i n g   o r   D M A   t r a n s f e r   u s i n g   t h e  
               f o l l o w i n g   A P I s :  
               ( + + )   H A L _ S R A M _ R e a d ( ) / H A L _ S R A M _ W r i t e ( )   f o r   p o l l i n g   r e a d / w r i t e   a c c e s s  
               ( + + )   H A L _ S R A M _ R e a d _ D M A ( ) / H A L _ S R A M _ W r i t e _ D M A ( )   f o r   D M A   r e a d / w r i t e   t r a n s f e r  
  
       ( # )   Y o u   c a n   a l s o   c o n t r o l   t h e   S R A M   d e v i c e   b y   c a l l i n g   t h e   c o n t r o l   A P I s   H A L _ S R A M _ W r i t e O p e r a t i o n _ E n a b l e ( ) /  
               H A L _ S R A M _ W r i t e O p e r a t i o n _ D i s a b l e ( )   t o   r e s p e c t i v e l y   e n a b l e / d i s a b l e   t h e   S R A M   w r i t e   o p e r a t i o n  
  
       ( # )   Y o u   c a n   c o n t i n u o u s l y   m o n i t o r   t h e   S R A M   d e v i c e   H A L   s t a t e   b y   c a l l i n g   t h e   f u n c t i o n  
               H A L _ S R A M _ G e t S t a t e ( )  
  
               * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
             a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
             U s e   F u n c t i o n s   @ r e f   H A L _ S R A M _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k ,  
             i t   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   S R A M   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   S R A M   M s p D e I n i t .  
             T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
             a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
             U s e   f u n c t i o n   @ r e f   H A L _ S R A M _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
             w e a k   ( s u r c h a r g e d )   f u n c t i o n .   I t   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   S R A M   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   S R A M   M s p D e I n i t .  
             T h i s   f u n c t i o n )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e   a n d   t h e   C a l l b a c k   I D .  
  
             B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ S R A M _ I n i t   a n d   i f   t h e   s t a t e   i s   H A L _ S R A M _ S T A T E _ R E S E T  
             a l l   c a l l b a c k s   a r e   r e s e t   t o   t h e   c o r r e s p o n d i n g   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   c a l l b a c k s   t h a t   a r e   r e s p e c t i v e l y  
             r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ S R A M _ I n i t  
             a n d   @ r e f     H A L _ S R A M _ D e I n i t   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
             I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ S R A M _ I n i t   a n d   @ r e f   H A L _ S R A M _ D e I n i t  
             k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
             C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   R E A D Y   s t a t e   o n l y .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
             i n   R E A D Y   o r   R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d  
             d u r i n g   t h e   I n i t / D e I n i t .  
             I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
             u s i n g   @ r e f   H A L _ S R A M _ R e g i s t e r C a l l b a c k   b e f o r e   c a l l i n g   @ r e f   H A L _ S R A M _ D e I n i t  
             o r   @ r e f   H A L _ S R A M _ I n i t   f u n c t i o n .  
  
             W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
             n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t e r i n g   f e a t u r e   i s   n o t   a v a i l a b l e  
             a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
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
     *                                               o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 # i f   d e f i n e d ( F S M C _ B A N K 1 )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ S R A M _ M O D U L E _ E N A B L E D  
  
 / * *   @ d e f g r o u p   S R A M   S R A M  
     *   @ b r i e f   S R A M   d r i v e r   m o d u l e s  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 s t a t i c   v o i d   S R A M _ D M A C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S R A M _ D M A C p l t P r o t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   S R A M _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s   S R A M   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s .  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                       # # # # #   S R A M   I n i t i a l i z a t i o n   a n d   d e _ i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]     T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e / d e - i n i t i a l i z e  
                     t h e   S R A M   m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P e r f o r m s   t h e   S R A M   d e v i c e   i n i t i a l i z a t i o n   s e q u e n c e  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   S R A M   c o n t r o l   t i m i n g   s t r u c t u r e  
     *   @ p a r a m     E x t T i m i n g   P o i n t e r   t o   S R A M   e x t e n d e d   m o d e   t i m i n g   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * T i m i n g ,  
                                                                 F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * E x t T i m i n g )  
 {  
     / *   C h e c k   t h e   S R A M   h a n d l e   p a r a m e t e r   * /  
     i f   ( ( h s r a m   = =   N U L L )   | |   ( h s r a m - > I n i t . B u r s t A c c e s s M o d e   = =   F S M C _ B U R S T _ A C C E S S _ M O D E _ E N A B L E ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( h s r a m - > S t a t e   = =   H A L _ S R A M _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h s r a m - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         i f   ( h s r a m - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h s r a m - > M s p I n i t C a l l b a c k   =   H A L _ S R A M _ M s p I n i t ;  
         }  
         h s r a m - > D m a X f e r C p l t C a l l b a c k   =   H A L _ S R A M _ D M A _ X f e r C p l t C a l l b a c k ;  
         h s r a m - > D m a X f e r E r r o r C a l l b a c k   =   H A L _ S R A M _ D M A _ X f e r E r r o r C a l l b a c k ;  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h s r a m - > M s p I n i t C a l l b a c k ( h s r a m ) ;  
 # e l s e  
         / *   I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
         H A L _ S R A M _ M s p I n i t ( h s r a m ) ;  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     / *   I n i t i a l i z e   S R A M   c o n t r o l   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N O R S R A M _ I n i t ( h s r a m - > I n s t a n c e ,   & ( h s r a m - > I n i t ) ) ;  
  
     / *   I n i t i a l i z e   S R A M   t i m i n g   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N O R S R A M _ T i m i n g _ I n i t ( h s r a m - > I n s t a n c e ,   T i m i n g ,   h s r a m - > I n i t . N S B a n k ) ;  
  
     / *   I n i t i a l i z e   S R A M   e x t e n d e d   m o d e   t i m i n g   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N O R S R A M _ E x t e n d e d _ T i m i n g _ I n i t ( h s r a m - > E x t e n d e d ,   E x t T i m i n g ,   h s r a m - > I n i t . N S B a n k ,  
                                                                                   h s r a m - > I n i t . E x t e n d e d M o d e ) ;  
  
     / *   E n a b l e   t h e   N O R S R A M   d e v i c e   * /  
     _ _ F S M C _ N O R S R A M _ E N A B L E ( h s r a m - > I n s t a n c e ,   h s r a m - > I n i t . N S B a n k ) ;  
  
     / *   I n i t i a l i z e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m s   t h e   S R A M   d e v i c e   D e - i n i t i a l i z a t i o n   s e q u e n c e .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ D e I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m )  
 {  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h s r a m - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h s r a m - > M s p D e I n i t C a l l b a c k   =   H A L _ S R A M _ M s p D e I n i t ;  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h s r a m - > M s p D e I n i t C a l l b a c k ( h s r a m ) ;  
 # e l s e  
     / *   D e - I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
     H A L _ S R A M _ M s p D e I n i t ( h s r a m ) ;  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   * /  
  
     / *   C o n f i g u r e   t h e   S R A M   r e g i s t e r s   w i t h   t h e i r   r e s e t   v a l u e s   * /  
     ( v o i d ) F S M C _ N O R S R A M _ D e I n i t ( h s r a m - > I n s t a n c e ,   h s r a m - > E x t e n d e d ,   h s r a m - > I n i t . N S B a n k ) ;  
  
     / *   R e s e t   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s r a m ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S R A M   M S P   I n i t .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S R A M _ M s p I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s r a m ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S R A M _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     S R A M   M S P   D e I n i t .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S R A M _ M s p D e I n i t ( S R A M _ H a n d l e T y p e D e f   * h s r a m )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h s r a m ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S R A M _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S R A M _ D M A _ X f e r C p l t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d m a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S R A M _ D M A _ X f e r C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   t r a n s f e r   c o m p l e t e   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h d m a   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ S R A M _ D M A _ X f e r E r r o r C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h d m a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ S R A M _ D M A _ X f e r E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   O u t p u t   a n d   m e m o r y   c o n t r o l   f u n c t i o n s  
     *   @ b r i e f         I n p u t   O u t p u t   a n d   m e m o r y   c o n t r o l   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                     # # # # #   S R A M   I n p u t   a n d   O u t p u t   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   u s e   a n d   c o n t r o l   t h e   S R A M   m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d s   8 - b i t   b u f f e r   f r o m   S R A M   m e m o r y .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   r e a d   s t a r t   a d d r e s s  
     *   @ p a r a m     p D s t B u f f e r   P o i n t e r   t o   d e s t i n a t i o n   b u f f e r  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   r e a d   f r o m   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ 8 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 8 _ t   * p D s t B u f f e r ,  
                                                                       u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     u i n t 3 2 _ t   s i z e ;  
     _ _ I O   u i n t 8 _ t   * p s r a m a d d r e s s   =   ( u i n t 8 _ t   * ) p A d d r e s s ;  
     u i n t 8 _ t   * p d e s t b u f f   =   p D s t B u f f e r ;  
     H A L _ S R A M _ S t a t e T y p e D e f   s t a t e   =   h s r a m - > S t a t e ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   R e a d   d a t a   f r o m   m e m o r y   * /  
         f o r   ( s i z e   =   B u f f e r S i z e ;   s i z e   ! =   0 U ;   s i z e - - )  
         {  
             * p d e s t b u f f   =   * p s r a m a d d r e s s ;  
             p d e s t b u f f + + ;  
             p s r a m a d d r e s s + + ;  
         }  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   8 - b i t   b u f f e r   t o   S R A M   m e m o r y .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   w r i t e   s t a r t   a d d r e s s  
     *   @ p a r a m     p S r c B u f f e r   P o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   w r i t e   t o   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ 8 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 8 _ t   * p S r c B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     u i n t 3 2 _ t   s i z e ;  
     _ _ I O   u i n t 8 _ t   * p s r a m a d d r e s s   =   ( u i n t 8 _ t   * ) p A d d r e s s ;  
     u i n t 8 _ t   * p s r c b u f f   =   p S r c B u f f e r ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( h s r a m - > S t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   W r i t e   d a t a   t o   m e m o r y   * /  
         f o r   ( s i z e   =   B u f f e r S i z e ;   s i z e   ! =   0 U ;   s i z e - - )  
         {  
             * p s r a m a d d r e s s   =   * p s r c b u f f ;  
             p s r c b u f f + + ;  
             p s r a m a d d r e s s + + ;  
         }  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   1 6 - b i t   b u f f e r   f r o m   S R A M   m e m o r y .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   r e a d   s t a r t   a d d r e s s  
     *   @ p a r a m     p D s t B u f f e r   P o i n t e r   t o   d e s t i n a t i o n   b u f f e r  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   r e a d   f r o m   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ 1 6 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 1 6 _ t   * p D s t B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     u i n t 3 2 _ t   s i z e ;  
     _ _ I O   u i n t 3 2 _ t   * p s r a m a d d r e s s   =   p A d d r e s s ;  
     u i n t 1 6 _ t   * p d e s t b u f f   =   p D s t B u f f e r ;  
     u i n t 8 _ t   l i m i t ;  
     H A L _ S R A M _ S t a t e T y p e D e f   s t a t e   =   h s r a m - > S t a t e ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   C h e c k   i f   t h e   s i z e   i s   a   3 2 - b i t s   m u l t i p l e   * /  
         l i m i t   =   ( ( ( B u f f e r S i z e   %   2 U )   ! =   0 U )   ?   1 U   :   0 U ) ;  
  
         / *   R e a d   d a t a   f r o m   m e m o r y   * /  
         f o r   ( s i z e   =   B u f f e r S i z e ;   s i z e   ! =   l i m i t ;   s i z e   - =   2 U )  
         {  
             * p d e s t b u f f   =   ( u i n t 1 6 _ t ) ( ( * p s r a m a d d r e s s )   &   0 x 0 0 0 0 F F F F U ) ;  
             p d e s t b u f f + + ;  
             * p d e s t b u f f   =   ( u i n t 1 6 _ t ) ( ( ( * p s r a m a d d r e s s )   &   0 x F F F F 0 0 0 0 U )   > >   1 6 U ) ;  
             p d e s t b u f f + + ;  
             p s r a m a d d r e s s + + ;  
         }  
  
         / *   R e a d   l a s t   1 6 - b i t s   i f   s i z e   i s   n o t   3 2 - b i t s   m u l t i p l e   * /  
         i f   ( l i m i t   ! =   0 U )  
         {  
             * p d e s t b u f f   =   ( u i n t 1 6 _ t ) ( ( * p s r a m a d d r e s s )   &   0 x 0 0 0 0 F F F F U ) ;  
         }  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   1 6 - b i t   b u f f e r   t o   S R A M   m e m o r y .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   w r i t e   s t a r t   a d d r e s s  
     *   @ p a r a m     p S r c B u f f e r   P o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   w r i t e   t o   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ 1 6 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 1 6 _ t   * p S r c B u f f e r ,  
                                                                           u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     u i n t 3 2 _ t   s i z e ;  
     _ _ I O   u i n t 3 2 _ t   * p s r a m a d d r e s s   =   p A d d r e s s ;  
     u i n t 1 6 _ t   * p s r c b u f f   =   p S r c B u f f e r ;  
     u i n t 8 _ t   l i m i t ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( h s r a m - > S t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   C h e c k   i f   t h e   s i z e   i s   a   3 2 - b i t s   m u l t i p l e   * /  
         l i m i t   =   ( ( ( B u f f e r S i z e   %   2 U )   ! =   0 U )   ?   1 U   :   0 U ) ;  
  
         / *   W r i t e   d a t a   t o   m e m o r y   * /  
         f o r   ( s i z e   =   B u f f e r S i z e ;   s i z e   ! =   l i m i t ;   s i z e   - =   2 U )  
         {  
             * p s r a m a d d r e s s   =   ( u i n t 3 2 _ t ) ( * p s r c b u f f ) ;  
             p s r c b u f f + + ;  
             * p s r a m a d d r e s s   | =   ( ( u i n t 3 2 _ t ) ( * p s r c b u f f )   < <   1 6 U ) ;  
             p s r c b u f f + + ;  
             p s r a m a d d r e s s + + ;  
         }  
  
         / *   W r i t e   l a s t   1 6 - b i t s   i f   s i z e   i s   n o t   3 2 - b i t s   m u l t i p l e   * /  
         i f   ( l i m i t   ! =   0 U )  
         {  
             * p s r a m a d d r e s s   =   ( ( u i n t 3 2 _ t ) ( * p s r c b u f f )   &   0 x 0 0 0 0 F F F F U )   |   ( ( * p s r a m a d d r e s s )   &   0 x F F F F 0 0 0 0 U ) ;  
         }  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   3 2 - b i t   b u f f e r   f r o m   S R A M   m e m o r y .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   r e a d   s t a r t   a d d r e s s  
     *   @ p a r a m     p D s t B u f f e r   P o i n t e r   t o   d e s t i n a t i o n   b u f f e r  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   r e a d   f r o m   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ 3 2 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p D s t B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     u i n t 3 2 _ t   s i z e ;  
     _ _ I O   u i n t 3 2 _ t   * p s r a m a d d r e s s   =   p A d d r e s s ;  
     u i n t 3 2 _ t   * p d e s t b u f f   =   p D s t B u f f e r ;  
     H A L _ S R A M _ S t a t e T y p e D e f   s t a t e   =   h s r a m - > S t a t e ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   R e a d   d a t a   f r o m   m e m o r y   * /  
         f o r   ( s i z e   =   B u f f e r S i z e ;   s i z e   ! =   0 U ;   s i z e - - )  
         {  
             * p d e s t b u f f   =   * p s r a m a d d r e s s ;  
             p d e s t b u f f + + ;  
             p s r a m a d d r e s s + + ;  
         }  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   3 2 - b i t   b u f f e r   t o   S R A M   m e m o r y .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   w r i t e   s t a r t   a d d r e s s  
     *   @ p a r a m     p S r c B u f f e r   P o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   w r i t e   t o   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ 3 2 b ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p S r c B u f f e r ,  
                                                                           u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     u i n t 3 2 _ t   s i z e ;  
     _ _ I O   u i n t 3 2 _ t   * p s r a m a d d r e s s   =   p A d d r e s s ;  
     u i n t 3 2 _ t   * p s r c b u f f   =   p S r c B u f f e r ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( h s r a m - > S t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   W r i t e   d a t a   t o   m e m o r y   * /  
         f o r   ( s i z e   =   B u f f e r S i z e ;   s i z e   ! =   0 U ;   s i z e - - )  
         {  
             * p s r a m a d d r e s s   =   * p s r c b u f f ;  
             p s r c b u f f + + ;  
             p s r a m a d d r e s s + + ;  
         }  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   a   W o r d s   d a t a   f r o m   t h e   S R A M   m e m o r y   u s i n g   D M A   t r a n s f e r .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   r e a d   s t a r t   a d d r e s s  
     *   @ p a r a m     p D s t B u f f e r   P o i n t e r   t o   d e s t i n a t i o n   b u f f e r  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   r e a d   f r o m   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e a d _ D M A ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p D s t B u f f e r ,  
                                                                         u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s ;  
     H A L _ S R A M _ S t a t e T y p e D e f   s t a t e   =   h s r a m - > S t a t e ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   C o n f i g u r e   D M A   u s e r   c a l l b a c k s   * /  
         i f   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )  
         {  
             h s r a m - > h d m a - > X f e r C p l t C a l l b a c k   =   S R A M _ D M A C p l t ;  
         }  
         e l s e  
         {  
             h s r a m - > h d m a - > X f e r C p l t C a l l b a c k   =   S R A M _ D M A C p l t P r o t ;  
         }  
         h s r a m - > h d m a - > X f e r E r r o r C a l l b a c k   =   S R A M _ D M A E r r o r ;  
  
         / *   E n a b l e   t h e   D M A   S t r e a m   * /  
         s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h s r a m - > h d m a ,   ( u i n t 3 2 _ t ) p A d d r e s s ,   ( u i n t 3 2 _ t ) p D s t B u f f e r ,   ( u i n t 3 2 _ t ) B u f f e r S i z e ) ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   a   W o r d s   d a t a   b u f f e r   t o   S R A M   m e m o r y   u s i n g   D M A   t r a n s f e r .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   P o i n t e r   t o   w r i t e   s t a r t   a d d r e s s  
     *   @ p a r a m     p S r c B u f f e r   P o i n t e r   t o   s o u r c e   b u f f e r   t o   w r i t e  
     *   @ p a r a m     B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   w r i t e   t o   m e m o r y  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e _ D M A ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 3 2 _ t   * p S r c B u f f e r ,  
                                                                           u i n t 3 2 _ t   B u f f e r S i z e )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s ;  
  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( h s r a m - > S t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   C o n f i g u r e   D M A   u s e r   c a l l b a c k s   * /  
         h s r a m - > h d m a - > X f e r C p l t C a l l b a c k   =   S R A M _ D M A C p l t ;  
         h s r a m - > h d m a - > X f e r E r r o r C a l l b a c k   =   S R A M _ D M A E r r o r ;  
  
         / *   E n a b l e   t h e   D M A   S t r e a m   * /  
         s t a t u s   =   H A L _ D M A _ S t a r t _ I T ( h s r a m - > h d m a ,   ( u i n t 3 2 _ t ) p S r c B u f f e r ,   ( u i n t 3 2 _ t ) p A d d r e s s ,   ( u i n t 3 2 _ t ) B u f f e r S i z e ) ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         s t a t u s   =   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   S R A M   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h s r a m   :   S R A M   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ S R A M _ M S P _ I N I T _ C B _ I D               S R A M   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S R A M _ M S P _ D E I N I T _ C B _ I D           S R A M   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m   p C a l l b a c k   :   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e g i s t e r C a l l b a c k ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   H A L _ S R A M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                         p S R A M _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
     H A L _ S R A M _ S t a t e T y p e D e f   s t a t e ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h s r a m ) ;  
  
     s t a t e   =   h s r a m - > S t a t e ;  
     i f   ( ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E S E T )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ) )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ S R A M _ M S P _ I N I T _ C B _ I D   :  
                 h s r a m - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ S R A M _ M S P _ D E I N I T _ C B _ I D   :  
                 h s r a m - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s r a m ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   U s e r   S R A M   C a l l b a c k  
     *                   S R A M   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h s r a m   :   S R A M   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ S R A M _ M S P _ I N I T _ C B _ I D               S R A M   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S R A M _ M S P _ D E I N I T _ C B _ I D           S R A M   M s p D e I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S R A M _ D M A _ X F E R _ C P L T _ C B _ I D     S R A M   D M A   X f e r   C o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S R A M _ D M A _ X F E R _ E R R _ C B _ I D       S R A M   D M A   X f e r   E r r o r   c a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ U n R e g i s t e r C a l l b a c k ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   H A L _ S R A M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
     H A L _ S R A M _ S t a t e T y p e D e f   s t a t e ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h s r a m ) ;  
  
     s t a t e   =   h s r a m - > S t a t e ;  
     i f   ( ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ) )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ S R A M _ M S P _ I N I T _ C B _ I D   :  
                 h s r a m - > M s p I n i t C a l l b a c k   =   H A L _ S R A M _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ S R A M _ M S P _ D E I N I T _ C B _ I D   :  
                 h s r a m - > M s p D e I n i t C a l l b a c k   =   H A L _ S R A M _ M s p D e I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ S R A M _ D M A _ X F E R _ C P L T _ C B _ I D   :  
                 h s r a m - > D m a X f e r C p l t C a l l b a c k   =   H A L _ S R A M _ D M A _ X f e r C p l t C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ S R A M _ D M A _ X F E R _ E R R _ C B _ I D   :  
                 h s r a m - > D m a X f e r E r r o r C a l l b a c k   =   H A L _ S R A M _ D M A _ X f e r E r r o r C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ S R A M _ M S P _ I N I T _ C B _ I D   :  
                 h s r a m - > M s p I n i t C a l l b a c k   =   H A L _ S R A M _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ S R A M _ M S P _ D E I N I T _ C B _ I D   :  
                 h s r a m - > M s p D e I n i t C a l l b a c k   =   H A L _ S R A M _ M s p D e I n i t ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s r a m ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   S R A M   C a l l b a c k   f o r   D M A   t r a n s f e r s  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h s r a m   :   S R A M   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ S R A M _ D M A _ X F E R _ C P L T _ C B _ I D     S R A M   D M A   X f e r   C o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ S R A M _ D M A _ X F E R _ E R R _ C B _ I D       S R A M   D M A   X f e r   E r r o r   c a l l b a c k   I D  
     *   @ p a r a m   p C a l l b a c k   :   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ R e g i s t e r D m a C a l l b a c k ( S R A M _ H a n d l e T y p e D e f   * h s r a m ,   H A L _ S R A M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                               p S R A M _ D m a C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
     H A L _ S R A M _ S t a t e T y p e D e f   s t a t e ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h s r a m ) ;  
  
     s t a t e   =   h s r a m - > S t a t e ;  
     i f   ( ( s t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ) )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ S R A M _ D M A _ X F E R _ C P L T _ C B _ I D   :  
                 h s r a m - > D m a X f e r C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ S R A M _ D M A _ X F E R _ E R R _ C B _ I D   :  
                 h s r a m - > D m a X f e r E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             d e f a u l t   :  
                 / *   u p d a t e   r e t u r n   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   u p d a t e   r e t u r n   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h s r a m ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       C o n t r o l   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   S R A M   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   d y n a m i c a l l y  
         t h e   S R A M   i n t e r f a c e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e s   d y n a m i c a l l y   S R A M   w r i t e   o p e r a t i o n .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e O p e r a t i o n _ E n a b l e ( S R A M _ H a n d l e T y p e D e f   * h s r a m )  
 {  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( h s r a m - > S t a t e   = =   H A L _ S R A M _ S T A T E _ P R O T E C T E D )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   E n a b l e   w r i t e   o p e r a t i o n   * /  
         ( v o i d ) F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ E n a b l e ( h s r a m - > I n s t a n c e ,   h s r a m - > I n i t . N S B a n k ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   d y n a m i c a l l y   S R A M   w r i t e   o p e r a t i o n .  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ S R A M _ W r i t e O p e r a t i o n _ D i s a b l e ( S R A M _ H a n d l e T y p e D e f   * h s r a m )  
 {  
     / *   C h e c k   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     i f   ( h s r a m - > S t a t e   = =   H A L _ S R A M _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h s r a m ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ B U S Y ;  
  
         / *   D i s a b l e   w r i t e   o p e r a t i o n   * /  
         ( v o i d ) F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ D i s a b l e ( h s r a m - > I n s t a n c e ,   h s r a m - > I n i t . N S B a n k ) ;  
  
         / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
         h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h s r a m ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   S R A M   S t a t e   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   S R A M   c o n t r o l l e r  
         a n d   t h e   d a t a   f l o w .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   S R A M   c o n t r o l l e r   s t a t e  
     *   @ p a r a m     h s r a m   p o i n t e r   t o   a   S R A M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   S R A M   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ S R A M _ S t a t e T y p e D e f   H A L _ S R A M _ G e t S t a t e ( S R A M _ H a n d l e T y p e D e f   * h s r a m )  
 {  
     r e t u r n   h s r a m - > S t a t e ;  
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
     *   @ b r i e f     D M A   S R A M   p r o c e s s   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S R A M _ D M A C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S R A M _ H a n d l e T y p e D e f   * h s r a m   =   ( S R A M _ H a n d l e T y p e D e f   * ) ( h d m a - > P a r e n t ) ;  
  
     / *   D i s a b l e   t h e   D M A   c h a n n e l   * /  
     _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
  
     / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h s r a m - > D m a X f e r C p l t C a l l b a c k ( h d m a ) ;  
 # e l s e  
     H A L _ S R A M _ D M A _ X f e r C p l t C a l l b a c k ( h d m a ) ;  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S R A M   p r o c e s s   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S R A M _ D M A C p l t P r o t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S R A M _ H a n d l e T y p e D e f   * h s r a m   =   ( S R A M _ H a n d l e T y p e D e f   * ) ( h d m a - > P a r e n t ) ;  
  
     / *   D i s a b l e   t h e   D M A   c h a n n e l   * /  
     _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
  
     / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ P R O T E C T E D ;  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h s r a m - > D m a X f e r C p l t C a l l b a c k ( h d m a ) ;  
 # e l s e  
     H A L _ S R A M _ D M A _ X f e r C p l t C a l l b a c k ( h d m a ) ;  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   S R A M   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h d m a   :   D M A   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   S R A M _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     S R A M _ H a n d l e T y p e D e f   * h s r a m   =   ( S R A M _ H a n d l e T y p e D e f   * ) ( h d m a - > P a r e n t ) ;  
  
     / *   D i s a b l e   t h e   D M A   c h a n n e l   * /  
     _ _ H A L _ D M A _ D I S A B L E ( h d m a ) ;  
  
     / *   U p d a t e   t h e   S R A M   c o n t r o l l e r   s t a t e   * /  
     h s r a m - > S t a t e   =   H A L _ S R A M _ S T A T E _ E R R O R ;  
  
 # i f   ( U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     h s r a m - > D m a X f e r E r r o r C a l l b a c k ( h d m a ) ;  
 # e l s e  
     H A L _ S R A M _ D M A _ X f e r E r r o r C a l l b a c k ( h d m a ) ;  
 # e n d i f   / *   U S E _ H A L _ S R A M _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ S R A M _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   F S M C _ B A N K 1   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  