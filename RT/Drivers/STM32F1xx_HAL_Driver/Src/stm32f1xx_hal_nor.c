??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ n o r . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       N O R   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   a   g e n e r i c   f i r m w a r e   t o   d r i v e   N O R   m e m o r i e s   m o u n t e d  
     *                     a s   e x t e r n a l   d e v i c e .  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                           # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h i s   d r i v e r   i s   a   g e n e r i c   l a y e r e d   d r i v e r   w h i c h   c o n t a i n s   a   s e t   o f   A P I s   u s e d   t o  
             c o n t r o l   N O R   f l a s h   m e m o r i e s .   I t   u s e s   t h e   F S M C   l a y e r   f u n c t i o n s   t o   i n t e r f a c e  
             w i t h   N O R   d e v i c e s .   T h i s   d r i v e r   i s   u s e d   a s   f o l l o w s :  
  
             ( + )   N O R   f l a s h   m e m o r y   c o n f i g u r a t i o n   s e q u e n c e   u s i n g   t h e   f u n c t i o n   H A L _ N O R _ I n i t ( )  
                     w i t h   c o n t r o l   a n d   t i m i n g   p a r a m e t e r s   f o r   b o t h   n o r m a l   a n d   e x t e n d e d   m o d e .  
  
             ( + )   R e a d   N O R   f l a s h   m e m o r y   m a n u f a c t u r e r   c o d e   a n d   d e v i c e   I D s   u s i n g   t h e   f u n c t i o n  
                     H A L _ N O R _ R e a d _ I D ( ) .   T h e   r e a d   i n f o r m a t i o n   i s   s t o r e d   i n   t h e   N O R _ I D _ T y p e D e f  
                     s t r u c t u r e   d e c l a r e d   b y   t h e   f u n c t i o n   c a l l e r .  
  
             ( + )   A c c e s s   N O R   f l a s h   m e m o r y   b y   r e a d / w r i t e   d a t a   u n i t   o p e r a t i o n s   u s i n g   t h e   f u n c t i o n s  
                     H A L _ N O R _ R e a d ( ) ,   H A L _ N O R _ P r o g r a m ( ) .  
  
             ( + )   P e r f o r m   N O R   f l a s h   e r a s e   b l o c k / c h i p   o p e r a t i o n s   u s i n g   t h e   f u n c t i o n s  
                     H A L _ N O R _ E r a s e _ B l o c k ( )   a n d   H A L _ N O R _ E r a s e _ C h i p ( ) .  
  
             ( + )   R e a d   t h e   N O R   f l a s h   C F I   ( c o m m o n   f l a s h   i n t e r f a c e )   I D s   u s i n g   t h e   f u n c t i o n  
                     H A L _ N O R _ R e a d _ C F I ( ) .   T h e   r e a d   i n f o r m a t i o n   i s   s t o r e d   i n   t h e   N O R _ C F I _ T y p e D e f  
                     s t r u c t u r e   d e c l a r e d   b y   t h e   f u n c t i o n   c a l l e r .  
  
             ( + )   Y o u   c a n   a l s o   c o n t r o l   t h e   N O R   d e v i c e   b y   c a l l i n g   t h e   c o n t r o l   A P I s   H A L _ N O R _ W r i t e O p e r a t i o n _ E n a b l e ( ) /  
                     H A L _ N O R _ W r i t e O p e r a t i o n _ D i s a b l e ( )   t o   r e s p e c t i v e l y   e n a b l e / d i s a b l e   t h e   N O R   w r i t e   o p e r a t i o n  
  
             ( + )   Y o u   c a n   m o n i t o r   t h e   N O R   d e v i c e   H A L   s t a t e   b y   c a l l i n g   t h e   f u n c t i o n  
                     H A L _ N O R _ G e t S t a t e ( )  
         [ . . ]  
           ( @ )   T h i s   d r i v e r   i s   a   s e t   o f   g e n e r i c   A P I s   w h i c h   h a n d l e   s t a n d a r d   N O R   f l a s h   o p e r a t i o n s .  
                   I f   a   N O R   f l a s h   d e v i c e   c o n t a i n s   d i f f e r e n t   o p e r a t i o n s   a n d / o r   i m p l e m e n t a t i o n s ,  
                   i t   s h o u l d   b e   i m p l e m e n t e d   s e p a r a t e l y .  
  
           * * *   N O R   H A L   d r i v e r   m a c r o s   l i s t   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   N O R   H A L   d r i v e r .  
  
             ( + )   N O R _ W R I T E   :   N O R   m e m o r y   w r i t e   d a t a   t o   s p e c i f i e d   a d d r e s s  
  
         * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
             a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
             U s e   F u n c t i o n s   @ r e f   H A L _ N O R _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k ,  
             i t   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   N O R   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   N O R   M s p D e I n i t .  
             T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
             a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
             U s e   f u n c t i o n   @ r e f   H A L _ N O R _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
             w e a k   ( s u r c h a r g e d )   f u n c t i o n .   I t   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
                 ( + )   M s p I n i t C a l l b a c k         :   N O R   M s p I n i t .  
                 ( + )   M s p D e I n i t C a l l b a c k     :   N O R   M s p D e I n i t .  
             T h i s   f u n c t i o n )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e   a n d   t h e   C a l l b a c k   I D .  
  
             B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ N O R _ I n i t   a n d   i f   t h e   s t a t e   i s   H A L _ N O R _ S T A T E _ R E S E T  
             a l l   c a l l b a c k s   a r e   r e s e t   t o   t h e   c o r r e s p o n d i n g   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   c a l l b a c k s   t h a t   a r e   r e s p e c t i v e l y  
             r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ N O R _ I n i t  
             a n d   @ r e f     H A L _ N O R _ D e I n i t   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
             I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ N O R _ I n i t   a n d   @ r e f   H A L _ N O R _ D e I n i t  
             k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
             C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   R E A D Y   s t a t e   o n l y .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
             i n   R E A D Y   o r   R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d  
             d u r i n g   t h e   I n i t / D e I n i t .  
             I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
             u s i n g   @ r e f   H A L _ N O R _ R e g i s t e r C a l l b a c k   b e f o r e   c a l l i n g   @ r e f   H A L _ N O R _ D e I n i t  
             o r   @ r e f   H A L _ N O R _ I n i t   f u n c t i o n .  
  
             W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
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
 # i f d e f   H A L _ N O R _ M O D U L E _ E N A B L E D  
  
 / * *   @ d e f g r o u p   N O R   N O R  
     *   @ b r i e f   N O R   d r i v e r   m o d u l e s  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   N O R _ P r i v a t e _ D e f i n e s   N O R   P r i v a t e   D e f i n e s  
     *   @ {  
     * /  
  
 / *   C o n s t a n t s   t o   d e f i n e   a d d r e s s   t o   s e t   t o   w r i t e   a   c o m m a n d   * /  
 # d e f i n e   N O R _ C M D _ A D D R E S S _ F I R S T                                   ( u i n t 1 6 _ t ) 0 x 0 5 5 5  
 # d e f i n e   N O R _ C M D _ A D D R E S S _ F I R S T _ C F I                           ( u i n t 1 6 _ t ) 0 x 0 0 5 5  
 # d e f i n e   N O R _ C M D _ A D D R E S S _ S E C O N D                                 ( u i n t 1 6 _ t ) 0 x 0 2 A A  
 # d e f i n e   N O R _ C M D _ A D D R E S S _ T H I R D                                   ( u i n t 1 6 _ t ) 0 x 0 5 5 5  
 # d e f i n e   N O R _ C M D _ A D D R E S S _ F O U R T H                                 ( u i n t 1 6 _ t ) 0 x 0 5 5 5  
 # d e f i n e   N O R _ C M D _ A D D R E S S _ F I F T H                                   ( u i n t 1 6 _ t ) 0 x 0 2 A A  
 # d e f i n e   N O R _ C M D _ A D D R E S S _ S I X T H                                   ( u i n t 1 6 _ t ) 0 x 0 5 5 5  
  
 / *   C o n s t a n t s   t o   d e f i n e   d a t a   t o   p r o g r a m   a   c o m m a n d   * /  
 # d e f i n e   N O R _ C M D _ D A T A _ R E A D _ R E S E T                               ( u i n t 1 6 _ t ) 0 x 0 0 F 0  
 # d e f i n e   N O R _ C M D _ D A T A _ F I R S T                                         ( u i n t 1 6 _ t ) 0 x 0 0 A A  
 # d e f i n e   N O R _ C M D _ D A T A _ S E C O N D                                       ( u i n t 1 6 _ t ) 0 x 0 0 5 5  
 # d e f i n e   N O R _ C M D _ D A T A _ A U T O _ S E L E C T                             ( u i n t 1 6 _ t ) 0 x 0 0 9 0  
 # d e f i n e   N O R _ C M D _ D A T A _ P R O G R A M                                     ( u i n t 1 6 _ t ) 0 x 0 0 A 0  
 # d e f i n e   N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ T H I R D       ( u i n t 1 6 _ t ) 0 x 0 0 8 0  
 # d e f i n e   N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ F O U R T H     ( u i n t 1 6 _ t ) 0 x 0 0 A A  
 # d e f i n e   N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ F I F T H       ( u i n t 1 6 _ t ) 0 x 0 0 5 5  
 # d e f i n e   N O R _ C M D _ D A T A _ C H I P _ E R A S E                               ( u i n t 1 6 _ t ) 0 x 0 0 1 0  
 # d e f i n e   N O R _ C M D _ D A T A _ C F I                                             ( u i n t 1 6 _ t ) 0 x 0 0 9 8  
  
 # d e f i n e   N O R _ C M D _ D A T A _ B U F F E R _ A N D _ P R O G                     ( u i n t 8 _ t ) 0 x 2 5  
 # d e f i n e   N O R _ C M D _ D A T A _ B U F F E R _ A N D _ P R O G _ C O N F I R M     ( u i n t 8 _ t ) 0 x 2 9  
 # d e f i n e   N O R _ C M D _ D A T A _ B L O C K _ E R A S E                             ( u i n t 8 _ t ) 0 x 3 0  
  
 # d e f i n e   N O R _ C M D _ R E A D _ A R R A Y                                         ( u i n t 1 6 _ t ) 0 x 0 0 F F  
 # d e f i n e   N O R _ C M D _ W O R D _ P R O G R A M                                     ( u i n t 1 6 _ t ) 0 x 0 0 4 0  
 # d e f i n e   N O R _ C M D _ B U F F E R E D _ P R O G R A M                             ( u i n t 1 6 _ t ) 0 x 0 0 E 8  
 # d e f i n e   N O R _ C M D _ C O N F I R M                                               ( u i n t 1 6 _ t ) 0 x 0 0 D 0  
 # d e f i n e   N O R _ C M D _ B L O C K _ E R A S E                                       ( u i n t 1 6 _ t ) 0 x 0 0 2 0  
 # d e f i n e   N O R _ C M D _ B L O C K _ U N L O C K                                     ( u i n t 1 6 _ t ) 0 x 0 0 6 0  
 # d e f i n e   N O R _ C M D _ R E A D _ S T A T U S _ R E G                               ( u i n t 1 6 _ t ) 0 x 0 0 7 0  
 # d e f i n e   N O R _ C M D _ C L E A R _ S T A T U S _ R E G                             ( u i n t 1 6 _ t ) 0 x 0 0 5 0  
  
 / *   M a s k   o n   N O R   S T A T U S   R E G I S T E R   * /  
 # d e f i n e   N O R _ M A S K _ S T A T U S _ D Q 4                                       ( u i n t 1 6 _ t ) 0 x 0 0 1 0  
 # d e f i n e   N O R _ M A S K _ S T A T U S _ D Q 5                                       ( u i n t 1 6 _ t ) 0 x 0 0 2 0  
 # d e f i n e   N O R _ M A S K _ S T A T U S _ D Q 6                                       ( u i n t 1 6 _ t ) 0 x 0 0 4 0  
 # d e f i n e   N O R _ M A S K _ S T A T U S _ D Q 7                                       ( u i n t 1 6 _ t ) 0 x 0 0 8 0  
  
 / *   A d d r e s s   o f   t h e   p r i m a r y   c o m m a n d   s e t   * /  
 # d e f i n e   N O R _ A D D R E S S _ C O M M A N D _ S E T                               ( u i n t 1 6 _ t ) 0 x 0 0 1 3  
  
 / *   C o m m a n d   s e t   c o d e   a s s i g n m e n t   ( d e f i n e d   i n   J E D E C   J E P 1 3 7 B   v e r s i o n   m a y   2 0 0 4 )   * /  
 # d e f i n e   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T               ( u i n t 1 6 _ t ) 0 x 0 0 0 1   / *   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T                       ( u i n t 1 6 _ t ) 0 x 0 0 0 2   / *   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ I N T E L _ S T A N D A R D _ C O M M A N D _ S E T                 ( u i n t 1 6 _ t ) 0 x 0 0 0 3   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ A M D _ F U J I T S U _ E X T _ C O M M A N D _ S E T               ( u i n t 1 6 _ t ) 0 x 0 0 0 4   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ W I N D B O N D _ S T A N D A R D _ C O M M A N D _ S E T           ( u i n t 1 6 _ t ) 0 x 0 0 0 6   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ M I T S U B I S H I _ S T A N D A R D _ C O M M A N D _ S E T       ( u i n t 1 6 _ t ) 0 x 0 1 0 0   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ M I T S U B I S H I _ E X T _ C O M M A N D _ S E T                 ( u i n t 1 6 _ t ) 0 x 0 1 0 1   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ P A G E _ W R I T E _ C O M M A N D _ S E T                         ( u i n t 1 6 _ t ) 0 x 0 1 0 2   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ I N T E L _ P E R F O R M A N C E _ C O M M A N D _ S E T           ( u i n t 1 6 _ t ) 0 x 0 2 0 0   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
 # d e f i n e   N O R _ I N T E L _ D A T A _ C O M M A N D _ S E T                         ( u i n t 1 6 _ t ) 0 x 0 2 1 0   / *   N o t   S u p p o r t e d   i n   t h i s   d r i v e r   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   N O R _ P r i v a t e _ V a r i a b l e s   N O R   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
  
 s t a t i c   u i n t 3 2 _ t   u w N O R M e m o r y D a t a W i d t h     =   N O R _ M E M O R Y _ 8 B ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   N O R _ E x p o r t e d _ F u n c t i o n s   N O R   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   N O R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                       # # # # #   N O R   I n i t i a l i z a t i o n   a n d   d e _ i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e / d e - i n i t i a l i z e  
         t h e   N O R   m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     P e r f o r m   t h e   N O R   m e m o r y   I n i t i a l i z a t i o n   s e q u e n c e  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     T i m i n g   p o i n t e r   t o   N O R   c o n t r o l   t i m i n g   s t r u c t u r e  
     *   @ p a r a m     E x t T i m i n g   p o i n t e r   t o   N O R   e x t e n d e d   m o d e   t i m i n g   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ I n i t ( N O R _ H a n d l e T y p e D e f   * h n o r ,   F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * T i m i n g ,  
                                                               F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * E x t T i m i n g )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
  
     / *   C h e c k   t h e   N O R   h a n d l e   p a r a m e t e r   * /  
     i f   ( h n o r   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h n o r - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         i f   ( h n o r - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h n o r - > M s p I n i t C a l l b a c k   =   H A L _ N O R _ M s p I n i t ;  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h n o r - > M s p I n i t C a l l b a c k ( h n o r ) ;  
 # e l s e  
         / *   I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
         H A L _ N O R _ M s p I n i t ( h n o r ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S )   * /  
     }  
  
     / *   I n i t i a l i z e   N O R   c o n t r o l   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N O R S R A M _ I n i t ( h n o r - > I n s t a n c e ,   & ( h n o r - > I n i t ) ) ;  
  
     / *   I n i t i a l i z e   N O R   t i m i n g   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N O R S R A M _ T i m i n g _ I n i t ( h n o r - > I n s t a n c e ,   T i m i n g ,   h n o r - > I n i t . N S B a n k ) ;  
  
     / *   I n i t i a l i z e   N O R   e x t e n d e d   m o d e   t i m i n g   I n t e r f a c e   * /  
     ( v o i d ) F S M C _ N O R S R A M _ E x t e n d e d _ T i m i n g _ I n i t ( h n o r - > E x t e n d e d ,   E x t T i m i n g ,   h n o r - > I n i t . N S B a n k ,   h n o r - > I n i t . E x t e n d e d M o d e ) ;  
  
     / *   E n a b l e   t h e   N O R S R A M   d e v i c e   * /  
     _ _ F S M C _ N O R S R A M _ E N A B L E ( h n o r - > I n s t a n c e ,   h n o r - > I n i t . N S B a n k ) ;  
  
     / *   I n i t i a l i z e   N O R   M e m o r y   D a t a   W i d t h * /  
     i f   ( h n o r - > I n i t . M e m o r y D a t a W i d t h   = =   F S M C _ N O R S R A M _ M E M _ B U S _ W I D T H _ 8 )  
     {  
         u w N O R M e m o r y D a t a W i d t h   =   N O R _ M E M O R Y _ 8 B ;  
     }  
     e l s e  
     {  
         u w N O R M e m o r y D a t a W i d t h   =   N O R _ M E M O R Y _ 1 6 B ;  
     }  
  
     / *   I n i t i a l i z e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ R E A D Y ;  
  
     / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
     i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
     {  
         d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
     }  
     e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
     {  
         d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
     }  
     e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
     {  
         d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
     }  
     e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
     {  
         d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
     }  
  
     / *   G e t   t h e   v a l u e   o f   t h e   c o m m a n d   s e t   * /  
     N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T _ C F I ) ,   N O R _ C M D _ D A T A _ C F I ) ;  
     h n o r - > C o m m a n d S e t   =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ A D D R E S S _ C O M M A N D _ S E T ) ;  
  
     r e t u r n   H A L _ N O R _ R e t u r n T o R e a d M o d e ( h n o r ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r f o r m   N O R   m e m o r y   D e - I n i t i a l i z a t i o n   s e q u e n c e  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ D e I n i t ( N O R _ H a n d l e T y p e D e f   * h n o r )  
 {  
 # i f   ( U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h n o r - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h n o r - > M s p D e I n i t C a l l b a c k   =   H A L _ N O R _ M s p D e I n i t ;  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h n o r - > M s p D e I n i t C a l l b a c k ( h n o r ) ;  
 # e l s e  
     / *   D e - I n i t i a l i z e   t h e   l o w   l e v e l   h a r d w a r e   ( M S P )   * /  
     H A L _ N O R _ M s p D e I n i t ( h n o r ) ;  
 # e n d i f   / *   ( U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S )   * /  
  
     / *   C o n f i g u r e   t h e   N O R   r e g i s t e r s   w i t h   t h e i r   r e s e t   v a l u e s   * /  
     ( v o i d ) F S M C _ N O R S R A M _ D e I n i t ( h n o r - > I n s t a n c e ,   h n o r - > E x t e n d e d ,   h n o r - > I n i t . N S B a n k ) ;  
  
     / *   R e s e t   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h n o r ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     N O R   M S P   I n i t  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ N O R _ M s p I n i t ( N O R _ H a n d l e T y p e D e f   * h n o r )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h n o r ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ N O R _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     N O R   M S P   D e I n i t  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ N O R _ M s p D e I n i t ( N O R _ H a n d l e T y p e D e f   * h n o r )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h n o r ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ N O R _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     N O R   M S P   W a i t   f o r   R e a d y / B u s y   s i g n a l  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     T i m e o u t   M a x i m u m   t i m e o u t   v a l u e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ N O R _ M s p W a i t ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h n o r ) ;  
     U N U S E D ( T i m e o u t ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   S h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ N O R _ M s p W a i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   N O R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   f u n c t i o n s  
     *   @ b r i e f         I n p u t   O u t p u t   a n d   m e m o r y   c o n t r o l   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                 # # # # #   N O R   I n p u t   a n d   O u t p u t   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o   u s e   a n d   c o n t r o l   t h e   N O R   m e m o r y  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e a d   N O R   f l a s h   I D s  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     p N O R _ I D     p o i n t e r   t o   N O R   I D   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ R e a d _ I D ( N O R _ H a n d l e T y p e D e f   * h n o r ,   N O R _ I D T y p e D e f   * p N O R _ I D )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ N O R _ S t a t e T y p e D e f   s t a t e ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     s t a t e   =   h n o r - > S t a t e ;  
     i f   ( s t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   S e n d   r e a d   I D   c o m m a n d   * /  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T ) ,   N O R _ C M D _ D A T A _ F I R S T ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S E C O N D ) ,   N O R _ C M D _ D A T A _ S E C O N D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ T H I R D ) ,   N O R _ C M D _ D A T A _ A U T O _ S E L E C T ) ;  
         }  
         e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( d e v i c e a d d r e s s ,   N O R _ C M D _ D A T A _ A U T O _ S E L E C T ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         i f   ( s t a t u s   ! =   H A L _ E R R O R )  
         {  
             / *   R e a d   t h e   N O R   I D s   * /  
             p N O R _ I D - > M a n u f a c t u r e r _ C o d e   =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   M C _ A D D R E S S ) ;  
             p N O R _ I D - > D e v i c e _ C o d e 1             =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,  
                                                                                                                                           D E V I C E _ C O D E 1 _ A D D R ) ;  
             p N O R _ I D - > D e v i c e _ C o d e 2             =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,  
                                                                                                                                           D E V I C E _ C O D E 2 _ A D D R ) ;  
             p N O R _ I D - > D e v i c e _ C o d e 3             =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,  
                                                                                                                                           D E V I C E _ C O D E 3 _ A D D R ) ;  
         }  
  
         / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   N O R   m e m o r y   t o   R e a d   m o d e .  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ R e t u r n T o R e a d M o d e ( N O R _ H a n d l e T y p e D e f   * h n o r )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ N O R _ S t a t e T y p e D e f   s t a t e ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     s t a t e   =   h n o r - > S t a t e ;  
     i f   ( s t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( d e v i c e a d d r e s s ,   N O R _ C M D _ D A T A _ R E A D _ R E S E T ) ;  
         }  
         e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( d e v i c e a d d r e s s ,   N O R _ C M D _ R E A D _ A R R A Y ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   d a t a   f r o m   N O R   m e m o r y  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   p o i n t e r   t o   D e v i c e   a d d r e s s  
     *   @ p a r a m     p D a t a     p o i n t e r   t o   r e a d   d a t a  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ R e a d ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 1 6 _ t   * p D a t a )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ N O R _ S t a t e T y p e D e f   s t a t e ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     s t a t e   =   h n o r - > S t a t e ;  
     i f   ( s t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   S e n d   r e a d   d a t a   c o m m a n d   * /  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T ) ,   N O R _ C M D _ D A T A _ F I R S T ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S E C O N D ) ,   N O R _ C M D _ D A T A _ S E C O N D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ T H I R D ) ,   N O R _ C M D _ D A T A _ R E A D _ R E S E T ) ;  
         }  
         e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( p A d d r e s s ,   N O R _ C M D _ R E A D _ A R R A Y ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         i f   ( s t a t u s   ! =   H A L _ E R R O R )  
         {  
             / *   R e a d   t h e   d a t a   * /  
             * p D a t a   =   ( u i n t 1 6 _ t ) ( * ( _ _ I O   u i n t 3 2 _ t   * ) p A d d r e s s ) ;  
         }  
  
         / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     P r o g r a m   d a t a   t o   N O R   m e m o r y  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     p A d d r e s s   D e v i c e   a d d r e s s  
     *   @ p a r a m     p D a t a     p o i n t e r   t o   t h e   d a t a   t o   w r i t e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ P r o g r a m ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   * p A d d r e s s ,   u i n t 1 6 _ t   * p D a t a )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   S e n d   p r o g r a m   d a t a   c o m m a n d   * /  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T ) ,   N O R _ C M D _ D A T A _ F I R S T ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S E C O N D ) ,   N O R _ C M D _ D A T A _ S E C O N D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ T H I R D ) ,   N O R _ C M D _ D A T A _ P R O G R A M ) ;  
         }  
         e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( p A d d r e s s ,   N O R _ C M D _ W O R D _ P R O G R A M ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         i f   ( s t a t u s   ! =   H A L _ E R R O R )  
         {  
             / *   W r i t e   t h e   d a t a   * /  
             N O R _ W R I T E ( p A d d r e s s ,   * p D a t a ) ;  
         }  
  
         / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d s   a   h a l f - w o r d   b u f f e r   f r o m   t h e   N O R   m e m o r y .  
     *   @ p a r a m     h n o r   p o i n t e r   t o   t h e   N O R   h a n d l e  
     *   @ p a r a m     u w A d d r e s s   N O R   m e m o r y   i n t e r n a l   a d d r e s s   t o   r e a d   f r o m .  
     *   @ p a r a m     p D a t a   p o i n t e r   t o   t h e   b u f f e r   t h a t   r e c e i v e s   t h e   d a t a   r e a d   f r o m   t h e  
     *                   N O R   m e m o r y .  
     *   @ p a r a m     u w B u f f e r S i z e     n u m b e r   o f   H a l f   w o r d   t o   r e a d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ R e a d B u f f e r ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   u w A d d r e s s ,   u i n t 1 6 _ t   * p D a t a ,  
                                                                           u i n t 3 2 _ t   u w B u f f e r S i z e )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     u i n t 3 2 _ t   s i z e   =   u w B u f f e r S i z e ;  
     u i n t 3 2 _ t   a d d r e s s   =   u w A d d r e s s ;  
     u i n t 1 6 _ t   * d a t a   =   p D a t a ;  
     H A L _ N O R _ S t a t e T y p e D e f   s t a t e ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     s t a t e   =   h n o r - > S t a t e ;  
     i f   ( s t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   S e n d   r e a d   d a t a   c o m m a n d   * /  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T ) ,   N O R _ C M D _ D A T A _ F I R S T ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S E C O N D ) ,   N O R _ C M D _ D A T A _ S E C O N D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ T H I R D ) ,   N O R _ C M D _ D A T A _ R E A D _ R E S E T ) ;  
         }  
         e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( d e v i c e a d d r e s s ,   N O R _ C M D _ R E A D _ A R R A Y ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         i f   ( s t a t u s   ! =   H A L _ E R R O R )  
         {  
             / *   R e a d   b u f f e r   * /  
             w h i l e   ( s i z e   >   0 U )  
             {  
                 * d a t a   =   * ( _ _ I O   u i n t 1 6 _ t   * ) a d d r e s s ;  
                 d a t a + + ;  
                 a d d r e s s   + =   2 U ;  
                 s i z e - - ;  
             }  
         }  
  
         / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     W r i t e s   a   h a l f - w o r d   b u f f e r   t o   t h e   N O R   m e m o r y .   T h i s   f u n c t i o n   m u s t   b e   u s e d  
                         o n l y   w i t h   S 2 9 G L 1 2 8 P   N O R   m e m o r y .  
     *   @ p a r a m     h n o r   p o i n t e r   t o   t h e   N O R   h a n d l e  
     *   @ p a r a m     u w A d d r e s s   N O R   m e m o r y   i n t e r n a l   s t a r t   w r i t e   a d d r e s s  
     *   @ p a r a m     p D a t a   p o i n t e r   t o   s o u r c e   d a t a   b u f f e r .  
     *   @ p a r a m     u w B u f f e r S i z e   S i z e   o f   t h e   b u f f e r   t o   w r i t e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ P r o g r a m B u f f e r ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   u w A d d r e s s ,   u i n t 1 6 _ t   * p D a t a ,  
                                                                                 u i n t 3 2 _ t   u w B u f f e r S i z e )  
 {  
     u i n t 1 6 _ t   * p _ c u r r e n t a d d r e s s ;  
     c o n s t   u i n t 1 6 _ t   * p _ e n d a d d r e s s ;  
     u i n t 1 6 _ t   * d a t a   =   p D a t a ;  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   I n i t i a l i z e   v a r i a b l e s   * /  
         p _ c u r r e n t a d d r e s s     =   ( u i n t 1 6 _ t   * ) ( d e v i c e a d d r e s s   +   u w A d d r e s s ) ;  
         p _ e n d a d d r e s s             =   ( u i n t 1 6 _ t   * ) ( d e v i c e a d d r e s s   +   u w A d d r e s s   +   ( 2 U   *   ( u w B u f f e r S i z e   -   1 U ) ) ) ;  
  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             / *   I s s u e   u n l o c k   c o m m a n d   s e q u e n c e   * /  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T ) ,   N O R _ C M D _ D A T A _ F I R S T ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S E C O N D ) ,   N O R _ C M D _ D A T A _ S E C O N D ) ;  
  
             / *   W r i t e   B u f f e r   L o a d   C o m m a n d   * /  
             N O R _ W R I T E ( ( d e v i c e a d d r e s s   +   u w A d d r e s s ) ,   N O R _ C M D _ D A T A _ B U F F E R _ A N D _ P R O G ) ;  
             N O R _ W R I T E ( ( d e v i c e a d d r e s s   +   u w A d d r e s s ) ,   ( u i n t 1 6 _ t ) ( u w B u f f e r S i z e   -   1 U ) ) ;  
         }  
         e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
         {  
             / *   W r i t e   B u f f e r   L o a d   C o m m a n d   * /  
             N O R _ W R I T E ( ( d e v i c e a d d r e s s   +   u w A d d r e s s ) ,   N O R _ C M D _ B U F F E R E D _ P R O G R A M ) ;  
             N O R _ W R I T E ( ( d e v i c e a d d r e s s   +   u w A d d r e s s ) ,   ( u i n t 1 6 _ t ) ( u w B u f f e r S i z e   -   1 U ) ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         i f   ( s t a t u s   ! =   H A L _ E R R O R )  
         {  
             / *   L o a d   D a t a   i n t o   N O R   B u f f e r   * /  
             w h i l e   ( p _ c u r r e n t a d d r e s s   < =   p _ e n d a d d r e s s )  
             {  
                 N O R _ W R I T E ( p _ c u r r e n t a d d r e s s ,   * d a t a ) ;  
  
                 d a t a + + ;  
                 p _ c u r r e n t a d d r e s s   + + ;  
             }  
  
             i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
             {  
                 N O R _ W R I T E ( ( d e v i c e a d d r e s s   +   u w A d d r e s s ) ,   N O R _ C M D _ D A T A _ B U F F E R _ A N D _ P R O G _ C O N F I R M ) ;  
             }  
             e l s e   / *   = >   h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T   * /  
             {  
                 N O R _ W R I T E ( ( d e v i c e a d d r e s s   +   u w A d d r e s s ) ,   N O R _ C M D _ C O N F I R M ) ;  
             }  
         }  
  
         / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
  
 }  
  
 / * *  
     *   @ b r i e f     E r a s e   t h e   s p e c i f i e d   b l o c k   o f   t h e   N O R   m e m o r y  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     B l o c k A d d r e s s     B l o c k   t o   e r a s e   a d d r e s s  
     *   @ p a r a m     A d d r e s s   D e v i c e   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ E r a s e _ B l o c k ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   B l o c k A d d r e s s ,   u i n t 3 2 _ t   A d d r e s s )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   S e n d   b l o c k   e r a s e   c o m m a n d   s e q u e n c e   * /  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T ) ,   N O R _ C M D _ D A T A _ F I R S T ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S E C O N D ) ,   N O R _ C M D _ D A T A _ S E C O N D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ T H I R D ) ,  
                                 N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ T H I R D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F O U R T H ) ,  
                                 N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ F O U R T H ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I F T H ) ,  
                                 N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ F I F T H ) ;  
             N O R _ W R I T E ( ( u i n t 3 2 _ t ) ( B l o c k A d d r e s s   +   A d d r e s s ) ,   N O R _ C M D _ D A T A _ B L O C K _ E R A S E ) ;  
         }  
         e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( ( B l o c k A d d r e s s   +   A d d r e s s ) ,   N O R _ C M D _ B L O C K _ U N L O C K ) ;  
             N O R _ W R I T E ( ( B l o c k A d d r e s s   +   A d d r e s s ) ,   N O R _ C M D _ C O N F I R M ) ;  
             N O R _ W R I T E ( ( B l o c k A d d r e s s   +   A d d r e s s ) ,   N O R _ C M D _ B L O C K _ E R A S E ) ;  
             N O R _ W R I T E ( ( B l o c k A d d r e s s   +   A d d r e s s ) ,   N O R _ C M D _ C O N F I R M ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   t h e   N O R   m e m o r y   s t a t u s   a n d   u p d a t e   t h e   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
  
 }  
  
 / * *  
     *   @ b r i e f     E r a s e   t h e   e n t i r e   N O R   c h i p .  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     A d d r e s s     D e v i c e   a d d r e s s  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ E r a s e _ C h i p ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   A d d r e s s )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
     U N U S E D ( A d d r e s s ) ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   S e n d   N O R   c h i p   e r a s e   c o m m a n d   s e q u e n c e   * /  
         i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
         {  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T ) ,   N O R _ C M D _ D A T A _ F I R S T ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S E C O N D ) ,   N O R _ C M D _ D A T A _ S E C O N D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ T H I R D ) ,  
                                 N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ T H I R D ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F O U R T H ) ,  
                                 N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ F O U R T H ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I F T H ) ,  
                                 N O R _ C M D _ D A T A _ C H I P _ B L O C K _ E R A S E _ F I F T H ) ;  
             N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ S I X T H ) ,   N O R _ C M D _ D A T A _ C H I P _ E R A S E ) ;  
         }  
         e l s e  
         {  
             / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
  
         / *   C h e c k   t h e   N O R   m e m o r y   s t a t u s   a n d   u p d a t e   t h e   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e a d   N O R   f l a s h   C F I   I D s  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     p N O R _ C F I     p o i n t e r   t o   N O R   C F I   I D s   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ R e a d _ C F I ( N O R _ H a n d l e T y p e D e f   * h n o r ,   N O R _ C F I T y p e D e f   * p N O R _ C F I )  
 {  
     u i n t 3 2 _ t   d e v i c e a d d r e s s ;  
     H A L _ N O R _ S t a t e T y p e D e f   s t a t e ;  
  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     s t a t e   =   h n o r - > S t a t e ;  
     i f   ( s t a t e   = =   H A L _ N O R _ S T A T E _ B U S Y )  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
     e l s e   i f   ( ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D ) )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   S e l e c t   t h e   N O R   d e v i c e   a d d r e s s   * /  
         i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 1 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 2 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 2 ;  
         }  
         e l s e   i f   ( h n o r - > I n i t . N S B a n k   = =   F S M C _ N O R S R A M _ B A N K 3 )  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 3 ;  
         }  
         e l s e   / *   F S M C _ N O R S R A M _ B A N K 4   * /  
         {  
             d e v i c e a d d r e s s   =   N O R _ M E M O R Y _ A D R E S S 4 ;  
         }  
  
         / *   S e n d   r e a d   C F I   q u e r y   c o m m a n d   * /  
         N O R _ W R I T E ( N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   N O R _ C M D _ A D D R E S S _ F I R S T _ C F I ) ,   N O R _ C M D _ D A T A _ C F I ) ;  
  
         / *   r e a d   t h e   N O R   C F I   i n f o r m a t i o n   * /  
         p N O R _ C F I - > C F I _ 1   =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   C F I 1 _ A D D R E S S ) ;  
         p N O R _ C F I - > C F I _ 2   =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   C F I 2 _ A D D R E S S ) ;  
         p N O R _ C F I - > C F I _ 3   =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   C F I 3 _ A D D R E S S ) ;  
         p N O R _ C F I - > C F I _ 4   =   * ( _ _ I O   u i n t 1 6 _ t   * )   N O R _ A D D R _ S H I F T ( d e v i c e a d d r e s s ,   u w N O R M e m o r y D a t a W i d t h ,   C F I 4 _ A D D R E S S ) ;  
  
         / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   s t a t e ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 # i f   ( U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   N O R   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h n o r   :   N O R   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ N O R _ M S P _ I N I T _ C B _ I D               N O R   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ N O R _ M S P _ D E I N I T _ C B _ I D           N O R   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m   p C a l l b a c k   :   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ R e g i s t e r C a l l b a c k ( N O R _ H a n d l e T y p e D e f   * h n o r ,   H A L _ N O R _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d ,  
                                                                                       p N O R _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
     H A L _ N O R _ S t a t e T y p e D e f   s t a t e ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h n o r ) ;  
  
     s t a t e   =   h n o r - > S t a t e ;  
     i f   ( ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E S E T )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D ) )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ N O R _ M S P _ I N I T _ C B _ I D   :  
                 h n o r - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
             c a s e   H A L _ N O R _ M S P _ D E I N I T _ C B _ I D   :  
                 h n o r - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
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
     _ _ H A L _ U N L O C K ( h n o r ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a   U s e r   N O R   C a l l b a c k  
     *                   N O R   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   ( s u r c h a r g e d )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h n o r   :   N O R   h a n d l e  
     *   @ p a r a m   C a l l b a c k I d   :   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ N O R _ M S P _ I N I T _ C B _ I D               N O R   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ N O R _ M S P _ D E I N I T _ C B _ I D           N O R   M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ U n R e g i s t e r C a l l b a c k ( N O R _ H a n d l e T y p e D e f   * h n o r ,   H A L _ N O R _ C a l l b a c k I D T y p e D e f   C a l l b a c k I d )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
     H A L _ N O R _ S t a t e T y p e D e f   s t a t e ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h n o r ) ;  
  
     s t a t e   =   h n o r - > S t a t e ;  
     i f   ( ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ R E S E T )   | |   ( s t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D ) )  
     {  
         s w i t c h   ( C a l l b a c k I d )  
         {  
             c a s e   H A L _ N O R _ M S P _ I N I T _ C B _ I D   :  
                 h n o r - > M s p I n i t C a l l b a c k   =   H A L _ N O R _ M s p I n i t ;  
                 b r e a k ;  
             c a s e   H A L _ N O R _ M S P _ D E I N I T _ C B _ I D   :  
                 h n o r - > M s p D e I n i t C a l l b a c k   =   H A L _ N O R _ M s p D e I n i t ;  
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
     _ _ H A L _ U N L O C K ( h n o r ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   ( U S E _ H A L _ N O R _ R E G I S T E R _ C A L L B A C K S )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   N O R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   N O R   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   N O R   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   d y n a m i c a l l y  
         t h e   N O R   i n t e r f a c e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e s   d y n a m i c a l l y   N O R   w r i t e   o p e r a t i o n .  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ W r i t e O p e r a t i o n _ E n a b l e ( N O R _ H a n d l e T y p e D e f   * h n o r )  
 {  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ P R O T E C T E D )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   E n a b l e   w r i t e   o p e r a t i o n   * /  
         ( v o i d ) F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ E n a b l e ( h n o r - > I n s t a n c e ,   h n o r - > I n i t . N S B a n k ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
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
     *   @ b r i e f     D i s a b l e s   d y n a m i c a l l y   N O R   w r i t e   o p e r a t i o n .  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ N O R _ W r i t e O p e r a t i o n _ D i s a b l e ( N O R _ H a n d l e T y p e D e f   * h n o r )  
 {  
     / *   C h e c k   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
     i f   ( h n o r - > S t a t e   = =   H A L _ N O R _ S T A T E _ R E A D Y )  
     {  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h n o r ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ B U S Y ;  
  
         / *   D i s a b l e   w r i t e   o p e r a t i o n   * /  
         ( v o i d ) F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ D i s a b l e ( h n o r - > I n s t a n c e ,   h n o r - > I n i t . N S B a n k ) ;  
  
         / *   U p d a t e   t h e   N O R   c o n t r o l l e r   s t a t e   * /  
         h n o r - > S t a t e   =   H A L _ N O R _ S T A T E _ P R O T E C T E D ;  
  
         / *   P r o c e s s   u n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h n o r ) ;  
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
 / * *   @ d e f g r o u p   N O R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   N O R   S t a t e   f u n c t i o n s  
     *     @ b r i e f       P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   N O R   S t a t e   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   N O R   c o n t r o l l e r  
         a n d   t h e   d a t a   f l o w .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     r e t u r n   t h e   N O R   c o n t r o l l e r   s t a t e  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ r e t v a l   N O R   c o n t r o l l e r   s t a t e  
     * /  
 H A L _ N O R _ S t a t e T y p e D e f   H A L _ N O R _ G e t S t a t e ( N O R _ H a n d l e T y p e D e f   * h n o r )  
 {  
     r e t u r n   h n o r - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   N O R   o p e r a t i o n   s t a t u s .  
     *   @ p a r a m     h n o r   p o i n t e r   t o   a   N O R _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   N O R   m o d u l e .  
     *   @ p a r a m     A d d r e s s   D e v i c e   a d d r e s s  
     *   @ p a r a m     T i m e o u t   N O R   p r o g r a m m i n g   T i m e o u t  
     *   @ r e t v a l   N O R _ S t a t u s   T h e   r e t u r n e d   v a l u e   c a n   b e :   H A L _ N O R _ S T A T U S _ S U C C E S S ,   H A L _ N O R _ S T A T U S _ E R R O R  
     *                   o r   H A L _ N O R _ S T A T U S _ T I M E O U T  
     * /  
 H A L _ N O R _ S t a t u s T y p e D e f   H A L _ N O R _ G e t S t a t u s ( N O R _ H a n d l e T y p e D e f   * h n o r ,   u i n t 3 2 _ t   A d d r e s s ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     H A L _ N O R _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ N O R _ S T A T U S _ O N G O I N G ;  
     u i n t 1 6 _ t   t m p s r 1 ;  
     u i n t 1 6 _ t   t m p s r 2 ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   P o l l   o n   N O R   m e m o r y   R e a d y / B u s y   s i g n a l   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     H A L _ N O R _ M s p W a i t ( h n o r ,   T i m e o u t ) ;  
  
     / *   G e t   t h e   N O R   m e m o r y   o p e r a t i o n   s t a t u s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ A M D _ F U J I T S U _ C O M M A N D _ S E T )  
     {  
         w h i l e   ( ( s t a t u s   ! =   H A L _ N O R _ S T A T U S _ S U C C E S S )   & &   ( s t a t u s   ! =   H A L _ N O R _ S T A T U S _ T I M E O U T ) )  
         {  
             / *   C h e c k   f o r   t h e   T i m e o u t   * /  
             i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
             {  
                 i f   ( ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
                 {  
                     s t a t u s   =   H A L _ N O R _ S T A T U S _ T I M E O U T ;  
                 }  
             }  
  
             / *   R e a d   N O R   s t a t u s   r e g i s t e r   ( D Q 6   a n d   D Q 5 )   * /  
             t m p s r 1   =   * ( _ _ I O   u i n t 1 6 _ t   * ) A d d r e s s ;  
             t m p s r 2   =   * ( _ _ I O   u i n t 1 6 _ t   * ) A d d r e s s ;  
  
             / *   I f   D Q 6   d i d   n o t   t o g g l e   b e t w e e n   t h e   t w o   r e a d s   t h e n   r e t u r n   H A L _ N O R _ S T A T U S _ S U C C E S S     * /  
             i f   ( ( t m p s r 1   &   N O R _ M A S K _ S T A T U S _ D Q 6 )   = =   ( t m p s r 2   &   N O R _ M A S K _ S T A T U S _ D Q 6 ) )  
             {  
                 r e t u r n   H A L _ N O R _ S T A T U S _ S U C C E S S   ;  
             }  
  
             i f   ( ( t m p s r 1   &   N O R _ M A S K _ S T A T U S _ D Q 5 )   = =   N O R _ M A S K _ S T A T U S _ D Q 5 )  
             {  
                 s t a t u s   =   H A L _ N O R _ S T A T U S _ O N G O I N G ;  
             }  
  
             t m p s r 1   =   * ( _ _ I O   u i n t 1 6 _ t   * ) A d d r e s s ;  
             t m p s r 2   =   * ( _ _ I O   u i n t 1 6 _ t   * ) A d d r e s s ;  
  
             / *   I f   D Q 6   d i d   n o t   t o g g l e   b e t w e e n   t h e   t w o   r e a d s   t h e n   r e t u r n   H A L _ N O R _ S T A T U S _ S U C C E S S     * /  
             i f   ( ( t m p s r 1   &   N O R _ M A S K _ S T A T U S _ D Q 6 )   = =   ( t m p s r 2   &   N O R _ M A S K _ S T A T U S _ D Q 6 ) )  
             {  
                 r e t u r n   H A L _ N O R _ S T A T U S _ S U C C E S S ;  
             }  
             i f   ( ( t m p s r 1   &   N O R _ M A S K _ S T A T U S _ D Q 5 )   = =   N O R _ M A S K _ S T A T U S _ D Q 5 )  
             {  
                 r e t u r n   H A L _ N O R _ S T A T U S _ E R R O R ;  
             }  
         }  
     }  
     e l s e   i f   ( h n o r - > C o m m a n d S e t   = =   N O R _ I N T E L _ S H A R P _ E X T _ C O M M A N D _ S E T )  
     {  
         d o  
         {  
             N O R _ W R I T E ( A d d r e s s ,   N O R _ C M D _ R E A D _ S T A T U S _ R E G ) ;  
             t m p s r 2   =   * ( _ _ I O   u i n t 1 6 _ t   * ) ( A d d r e s s ) ;  
  
             / *   C h e c k   f o r   t h e   T i m e o u t   * /  
             i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
             {  
                 i f   ( ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
                 {  
                     r e t u r n   H A L _ N O R _ S T A T U S _ T I M E O U T ;  
                 }  
             }  
         }   w h i l e   ( ( t m p s r 2   &   N O R _ M A S K _ S T A T U S _ D Q 7 )   = =   0 U ) ;  
  
         N O R _ W R I T E ( A d d r e s s ,   N O R _ C M D _ R E A D _ S T A T U S _ R E G ) ;  
         t m p s r 1   =   * ( _ _ I O   u i n t 1 6 _ t   * ) ( A d d r e s s ) ;  
         i f   ( ( t m p s r 1     &   ( N O R _ M A S K _ S T A T U S _ D Q 5   |   N O R _ M A S K _ S T A T U S _ D Q 4 ) )   ! =   0 U )  
         {  
             / *   C l e a r   t h e   S t a t u s   R e g i s t e r     * /  
             N O R _ W R I T E ( A d d r e s s ,   N O R _ C M D _ R E A D _ S T A T U S _ R E G ) ;  
             s t a t u s   =   H A L _ N O R _ S T A T U S _ E R R O R ;  
         }  
         e l s e  
         {  
             s t a t u s   =   H A L _ N O R _ S T A T U S _ S U C C E S S ;  
         }  
     }  
     e l s e  
     {  
         / *   P r i m a r y   c o m m a n d   s e t   n o t   s u p p o r t e d   b y   t h e   d r i v e r   * /  
         s t a t u s   =   H A L _ N O R _ S T A T U S _ E R R O R ;  
     }  
  
     / *   R e t u r n   t h e   o p e r a t i o n   s t a t u s   * /  
     r e t u r n   s t a t u s ;  
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
 # e n d i f   / *   H A L _ N O R _ M O D U L E _ E N A B L E D   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   F S M C _ B A N K 1   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  