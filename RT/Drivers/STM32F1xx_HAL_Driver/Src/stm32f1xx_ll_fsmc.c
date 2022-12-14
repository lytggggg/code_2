??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ f s m c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       F S M C   L o w   L a y e r   H A L   m o d u l e   d r i v e r .  
     *  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   F l e x i b l e   M e m o r y   C o n t r o l l e r   ( F S M C )   p e r i p h e r a l   m e m o r i e s :  
     *                       +   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   F S M C   p e r i p h e r a l   f e a t u r e s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]   T h e   F l e x i b l e   m e m o r y   c o n t r o l l e r   ( F S M C )   i n c l u d e s   f o l l o w i n g   m e m o r y   c o n t r o l l e r s :  
               ( + )   T h e   N O R / P S R A M   m e m o r y   c o n t r o l l e r  
               ( + )   T h e   N A N D / P C   C a r d   m e m o r y   c o n t r o l l e r  
  
     [ . . ]   T h e   F S M C   f u n c t i o n a l   b l o c k   m a k e s   t h e   i n t e r f a c e   w i t h   s y n c h r o n o u s   a n d   a s y n c h r o n o u s   s t a t i c  
               m e m o r i e s   a n d   1 6 - b i t   P C   m e m o r y   c a r d s .   I t s   m a i n   p u r p o s e s   a r e :  
               ( + )   t o   t r a n s l a t e   A H B   t r a n s a c t i o n s   i n t o   t h e   a p p r o p r i a t e   e x t e r n a l   d e v i c e   p r o t o c o l  
               ( + )   t o   m e e t   t h e   a c c e s s   t i m e   r e q u i r e m e n t s   o f   t h e   e x t e r n a l   m e m o r y   d e v i c e s  
  
     [ . . ]   A l l   e x t e r n a l   m e m o r i e s   s h a r e   t h e   a d d r e s s e s ,   d a t a   a n d   c o n t r o l   s i g n a l s   w i t h   t h e   c o n t r o l l e r .  
               E a c h   e x t e r n a l   d e v i c e   i s   a c c e s s e d   b y   m e a n s   o f   a   u n i q u e   C h i p   S e l e c t .   T h e   F S M C   p e r f o r m s  
               o n l y   o n e   a c c e s s   a t   a   t i m e   t o   a n   e x t e r n a l   d e v i c e .  
               T h e   m a i n   f e a t u r e s   o f   t h e   F S M C   c o n t r o l l e r   a r e   t h e   f o l l o w i n g :  
                 ( + )   I n t e r f a c e   w i t h   s t a t i c - m e m o r y   m a p p e d   d e v i c e s   i n c l u d i n g :  
                       ( + + )   S t a t i c   r a n d o m   a c c e s s   m e m o r y   ( S R A M )  
                       ( + + )   R e a d - o n l y   m e m o r y   ( R O M )  
                       ( + + )   N O R   F l a s h   m e m o r y / O n e N A N D   F l a s h   m e m o r y  
                       ( + + )   P S R A M   ( 4   m e m o r y   b a n k s )  
                       ( + + )   1 6 - b i t   P C   C a r d   c o m p a t i b l e   d e v i c e s  
                       ( + + )   T w o   b a n k s   o f   N A N D   F l a s h   m e m o r y   w i t h   E C C   h a r d w a r e   t o   c h e c k   u p   t o   8   K b y t e s   o f  
                                 d a t a  
                 ( + )   I n d e p e n d e n t   C h i p   S e l e c t   c o n t r o l   f o r   e a c h   m e m o r y   b a n k  
                 ( + )   I n d e p e n d e n t   c o n f i g u r a t i o n   f o r   e a c h   m e m o r y   b a n k  
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
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
 # i f   d e f i n e d ( H A L _ N O R _ M O D U L E _ E N A B L E D )   | |   d e f i n e d ( H A L _ S R A M _ M O D U L E _ E N A B L E D )   | |   d e f i n e d ( H A L _ N A N D _ M O D U L E _ E N A B L E D )   | |   d e f i n e d ( H A L _ P C C A R D _ M O D U L E _ E N A B L E D )  
  
 / * *   @ d e f g r o u p   F S M C _ L L     F S M C   L o w   L a y e r  
     *   @ b r i e f   F S M C   d r i v e r   m o d u l e s  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   F S M C _ L L _ P r i v a t e _ C o n s t a n t s   F S M C   L o w   L a y e r   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - -   F S M C   r e g i s t e r s   b i t   m a s k   - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i f   d e f i n e d ( F S M C _ B A N K 1 )  
 / *   - - -   B C R   R e g i s t e r   - - - * /  
 / *   B C R   r e g i s t e r   c l e a r   m a s k   * /  
  
 / *   - - -   B T R   R e g i s t e r   - - - * /  
 / *   B T R   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   B T R _ C L E A R _ M A S K         ( ( u i n t 3 2 _ t ) ( F S M C _ B T R x _ A D D S E T   |   F S M C _ B T R x _ A D D H L D     | \  
                                                                             F S M C _ B T R x _ D A T A S T   |   F S M C _ B T R x _ B U S T U R N   | \  
                                                                             F S M C _ B T R x _ C L K D I V   |   F S M C _ B T R x _ D A T L A T     | \  
                                                                             F S M C _ B T R x _ A C C M O D ) )  
  
 / *   - - -   B W T R   R e g i s t e r   - - - * /  
 / *   B W T R   r e g i s t e r   c l e a r   m a s k   * /  
 # i f   d e f i n e d ( F S M C _ B W T R x _ B U S T U R N )  
 # d e f i n e   B W T R _ C L E A R _ M A S K       ( ( u i n t 3 2 _ t ) ( F S M C _ B W T R x _ A D D S E T   |   F S M C _ B W T R x _ A D D H L D     | \  
                                                                             F S M C _ B W T R x _ D A T A S T   |   F S M C _ B W T R x _ B U S T U R N   | \  
                                                                             F S M C _ B W T R x _ A C C M O D ) )  
 # e l s e  
 # d e f i n e   B W T R _ C L E A R _ M A S K       ( ( u i n t 3 2 _ t ) ( F S M C _ B W T R x _ A D D S E T   |   F S M C _ B W T R x _ A D D H L D   | \  
                                                                             F S M C _ B W T R x _ D A T A S T   |   F S M C _ B W T R x _ A C C M O D   | \  
                                                                             F S M C _ B W T R x _ C L K D I V   |   F S M C _ B W T R x _ D A T L A T ) )  
 # e n d i f   / *   F S M C _ B W T R x _ B U S T U R N   * /  
 # e n d i f   / *   F S M C _ B A N K 1   * /  
 # i f   d e f i n e d ( F S M C _ B A N K 3 )  
  
 / *   - - -   P C R   R e g i s t e r   - - - * /  
 / *   P C R   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   P C R _ C L E A R _ M A S K         ( ( u i n t 3 2 _ t ) ( F S M C _ P C R x _ P W A I T E N   |   F S M C _ P C R x _ P B K E N     |   \  
                                                                             F S M C _ P C R x _ P T Y P         |   F S M C _ P C R x _ P W I D       |   \  
                                                                             F S M C _ P C R x _ E C C E N       |   F S M C _ P C R x _ T C L R       |   \  
                                                                             F S M C _ P C R x _ T A R           |   F S M C _ P C R x _ E C C P S ) )  
 / *   - - -   P M E M   R e g i s t e r   - - - * /  
 / *   P M E M   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   P M E M _ C L E A R _ M A S K       ( ( u i n t 3 2 _ t ) ( F S M C _ P M E M x _ M E M S E T x     |   F S M C _ P M E M x _ M E M W A I T x   | \  
                                                                             F S M C _ P M E M x _ M E M H O L D x   |   F S M C _ P M E M x _ M E M H I Z x ) )  
  
 / *   - - -   P A T T   R e g i s t e r   - - - * /  
 / *   P A T T   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   P A T T _ C L E A R _ M A S K       ( ( u i n t 3 2 _ t ) ( F S M C _ P A T T x _ A T T S E T x     |   F S M C _ P A T T x _ A T T W A I T x   | \  
                                                                             F S M C _ P A T T x _ A T T H O L D x   |   F S M C _ P A T T x _ A T T H I Z x ) )  
  
 # e n d i f   / *   F S M C _ B A N K 3   * /  
 # i f   d e f i n e d ( F S M C _ B A N K 4 )  
 / *   - - -   P C R   R e g i s t e r   - - - * /  
 / *   P C R   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   P C R 4 _ C L E A R _ M A S K       ( ( u i n t 3 2 _ t ) ( F S M C _ P C R 4 _ P W A I T E N   |   F S M C _ P C R 4 _ P B K E N     |   \  
                                                                             F S M C _ P C R 4 _ P T Y P         |   F S M C _ P C R 4 _ P W I D       |   \  
                                                                             F S M C _ P C R 4 _ E C C E N       |   F S M C _ P C R 4 _ T C L R       |   \  
                                                                             F S M C _ P C R 4 _ T A R           |   F S M C _ P C R 4 _ E C C P S ) )  
 / *   - - -   P M E M   R e g i s t e r   - - - * /  
 / *   P M E M   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   P M E M 4 _ C L E A R _ M A S K     ( ( u i n t 3 2 _ t ) ( F S M C _ P M E M 4 _ M E M S E T 4     |   F S M C _ P M E M 4 _ M E M W A I T 4   | \  
                                                                             F S M C _ P M E M 4 _ M E M H O L D 4   |   F S M C _ P M E M 4 _ M E M H I Z 4 ) )  
  
 / *   - - -   P A T T   R e g i s t e r   - - - * /  
 / *   P A T T   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   P A T T 4 _ C L E A R _ M A S K     ( ( u i n t 3 2 _ t ) ( F S M C _ P A T T 4 _ A T T S E T 4     |   F S M C _ P A T T 4 _ A T T W A I T 4   | \  
                                                                             F S M C _ P A T T 4 _ A T T H O L D 4   |   F S M C _ P A T T 4 _ A T T H I Z 4 ) )  
  
 / *   - - -   P I O 4   R e g i s t e r   - - - * /  
 / *   P I O 4   r e g i s t e r   c l e a r   m a s k   * /  
 # d e f i n e   P I O 4 _ C L E A R _ M A S K       ( ( u i n t 3 2 _ t ) ( F S M C _ P I O 4 _ I O S E T 4     |   F S M C _ P I O 4 _ I O W A I T 4   |   \  
                                                                             F S M C _ P I O 4 _ I O H O L D 4   |   F S M C _ P I O 4 _ I O H I Z 4 ) )  
  
 # e n d i f   / *   F S M C _ B A N K 4   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   F S M C _ L L _ E x p o r t e d _ F u n c t i o n s   F S M C   L o w   L a y e r   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( F S M C _ B A N K 1 )  
  
 / * *   @ d e f g r o u p   F S M C _ L L _ E x p o r t e d _ F u n c t i o n s _ N O R S R A M   F S M C   L o w   L a y e r   N O R   S R A M   E x p o r t e d   F u n c t i o n s  
     *   @ b r i e f     N O R S R A M   C o n t r o l l e r   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                       # # # # #   H o w   t o   u s e   N O R S R A M   d e v i c e   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
     [ . . ]  
         T h i s   d r i v e r   c o n t a i n s   a   s e t   o f   A P I s   t o   i n t e r f a c e   w i t h   t h e   F S M C   N O R S R A M   b a n k s   i n   o r d e r  
         t o   r u n   t h e   N O R S R A M   e x t e r n a l   d e v i c e s .  
  
         ( + )   F S M C   N O R S R A M   b a n k   r e s e t   u s i n g   t h e   f u n c t i o n   F S M C _ N O R S R A M _ D e I n i t ( )  
         ( + )   F S M C   N O R S R A M   b a n k   c o n t r o l   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n   F S M C _ N O R S R A M _ I n i t ( )  
         ( + )   F S M C   N O R S R A M   b a n k   t i m i n g   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n   F S M C _ N O R S R A M _ T i m i n g _ I n i t ( )  
         ( + )   F S M C   N O R S R A M   b a n k   e x t e n d e d   t i m i n g   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n  
                 F S M C _ N O R S R A M _ E x t e n d e d _ T i m i n g _ I n i t ( )  
         ( + )   F S M C   N O R S R A M   b a n k   e n a b l e / d i s a b l e   w r i t e   o p e r a t i o n   u s i n g   t h e   f u n c t i o n s  
                 F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ E n a b l e ( ) / F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ D i s a b l e ( )  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   F S M C _ L L _ N O R S R A M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *   @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e _ i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   F S M C   N O R S R A M   i n t e r f a c e  
         ( + )   D e - i n i t i a l i z e   t h e   F S M C   N O R S R A M   i n t e r f a c e  
         ( + )   C o n f i g u r e   t h e   F S M C   c l o c k   a n d   a s s o c i a t e d   G P I O s  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   F S M C _ N O R S R A M   d e v i c e   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   c o n t r o l   p a r a m e t e r s   i n   t h e   F S M C _ N O R S R A M _ I n i t T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N O R S R A M   d e v i c e   i n s t a n c e  
     *   @ p a r a m     I n i t   P o i n t e r   t o   N O R S R A M   I n i t i a l i z a t i o n   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f     F S M C _ N O R S R A M _ I n i t ( F S M C _ N O R S R A M _ T y p e D e f   * D e v i c e ,  
                                                                         F S M C _ N O R S R A M _ I n i t T y p e D e f   * I n i t )  
 {  
     u i n t 3 2 _ t   f l a s h a c c e s s ;  
     u i n t 3 2 _ t   b t c r _ r e g ;  
     u i n t 3 2 _ t   m a s k ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ B A N K ( I n i t - > N S B a n k ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ M U X ( I n i t - > D a t a A d d r e s s M u x ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ M E M O R Y ( I n i t - > M e m o r y T y p e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ M E M O R Y _ W I D T H ( I n i t - > M e m o r y D a t a W i d t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ B U R S T M O D E ( I n i t - > B u r s t A c c e s s M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ P O L A R I T Y ( I n i t - > W a i t S i g n a l P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W R A P _ M O D E ( I n i t - > W r a p M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ S I G N A L _ A C T I V E ( I n i t - > W a i t S i g n a l A c t i v e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W R I T E _ O P E R A T I O N ( I n i t - > W r i t e O p e r a t i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T E _ S I G N A L ( I n i t - > W a i t S i g n a l ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ E X T E N D E D _ M O D E ( I n i t - > E x t e n d e d M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ A S Y N W A I T ( I n i t - > A s y n c h r o n o u s W a i t ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W R I T E _ B U R S T ( I n i t - > W r i t e B u r s t ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ P A G E S I Z E ( I n i t - > P a g e S i z e ) ) ;  
  
     / *   D i s a b l e   N O R S R A M   D e v i c e   * /  
     _ _ F S M C _ N O R S R A M _ D I S A B L E ( D e v i c e ,   I n i t - > N S B a n k ) ;  
  
     / *   S e t   N O R S R A M   d e v i c e   c o n t r o l   p a r a m e t e r s   * /  
     i f   ( I n i t - > M e m o r y T y p e   = =   F S M C _ M E M O R Y _ T Y P E _ N O R )  
     {  
         f l a s h a c c e s s   =   F S M C _ N O R S R A M _ F L A S H _ A C C E S S _ E N A B L E ;  
     }  
     e l s e  
     {  
         f l a s h a c c e s s   =   F S M C _ N O R S R A M _ F L A S H _ A C C E S S _ D I S A B L E ;  
     }  
  
     b t c r _ r e g   =   ( f l a s h a c c e s s                                       |   \  
                             I n i t - > D a t a A d d r e s s M u x                     |   \  
                             I n i t - > M e m o r y T y p e                             |   \  
                             I n i t - > M e m o r y D a t a W i d t h                   |   \  
                             I n i t - > B u r s t A c c e s s M o d e                   |   \  
                             I n i t - > W a i t S i g n a l P o l a r i t y             |   \  
                             I n i t - > W a i t S i g n a l A c t i v e                 |   \  
                             I n i t - > W r i t e O p e r a t i o n                     |   \  
                             I n i t - > W a i t S i g n a l                             |   \  
                             I n i t - > E x t e n d e d M o d e                         |   \  
                             I n i t - > A s y n c h r o n o u s W a i t                 |   \  
                             I n i t - > W r i t e B u r s t ) ;  
  
     b t c r _ r e g   | =   I n i t - > W r a p M o d e ;  
     b t c r _ r e g   | =   I n i t - > P a g e S i z e ;  
  
     m a s k   =   ( F S M C _ B C R x _ M B K E N                                 |  
                     F S M C _ B C R x _ M U X E N                                 |  
                     F S M C _ B C R x _ M T Y P                                   |  
                     F S M C _ B C R x _ M W I D                                   |  
                     F S M C _ B C R x _ F A C C E N                               |  
                     F S M C _ B C R x _ B U R S T E N                             |  
                     F S M C _ B C R x _ W A I T P O L                             |  
                     F S M C _ B C R x _ W A I T C F G                             |  
                     F S M C _ B C R x _ W R E N                                   |  
                     F S M C _ B C R x _ W A I T E N                               |  
                     F S M C _ B C R x _ E X T M O D                               |  
                     F S M C _ B C R x _ A S Y N C W A I T                         |  
                     F S M C _ B C R x _ C B U R S T R W ) ;  
  
     m a s k   | =   F S M C _ B C R x _ W R A P M O D ;  
     m a s k   | =   0 x 0 0 0 7 0 0 0 0 U ;   / *   C P S I Z E   t o   b e   d e f i n e d   i n   C M S I S   f i l e   * /  
  
     M O D I F Y _ R E G ( D e v i c e - > B T C R [ I n i t - > N S B a n k ] ,   m a s k ,   b t c r _ r e g ) ;  
  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e   t h e   F S M C _ N O R S R A M   p e r i p h e r a l  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N O R S R A M   d e v i c e   i n s t a n c e  
     *   @ p a r a m     E x D e v i c e   P o i n t e r   t o   N O R S R A M   e x t e n d e d   m o d e   d e v i c e   i n s t a n c e  
     *   @ p a r a m     B a n k   N O R S R A M   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N O R S R A M _ D e I n i t ( F S M C _ N O R S R A M _ T y p e D e f   * D e v i c e ,  
                                                                           F S M C _ N O R S R A M _ E X T E N D E D _ T y p e D e f   * E x D e v i c e ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ E X T E N D E D _ D E V I C E ( E x D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ B A N K ( B a n k ) ) ;  
  
     / *   D i s a b l e   t h e   F S M C _ N O R S R A M   d e v i c e   * /  
     _ _ F S M C _ N O R S R A M _ D I S A B L E ( D e v i c e ,   B a n k ) ;  
  
     / *   D e - i n i t i a l i z e   t h e   F S M C _ N O R S R A M   d e v i c e   * /  
     / *   F S M C _ N O R S R A M _ B A N K 1   * /  
     i f   ( B a n k   = =   F S M C _ N O R S R A M _ B A N K 1 )  
     {  
         D e v i c e - > B T C R [ B a n k ]   =   0 x 0 0 0 0 3 0 D B U ;  
     }  
     / *   F S M C _ N O R S R A M _ B A N K 2 ,   F S M C _ N O R S R A M _ B A N K 3   o r   F S M C _ N O R S R A M _ B A N K 4   * /  
     e l s e  
     {  
         D e v i c e - > B T C R [ B a n k ]   =   0 x 0 0 0 0 3 0 D 2 U ;  
     }  
  
     D e v i c e - > B T C R [ B a n k   +   1 U ]   =   0 x 0 F F F F F F F U ;  
     E x D e v i c e - > B W T R [ B a n k ]       =   0 x 0 F F F F F F F U ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   F S M C _ N O R S R A M   T i m i n g   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   F S M C _ N O R S R A M _ T i m i n g T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N O R S R A M   d e v i c e   i n s t a n c e  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   N O R S R A M   T i m i n g   s t r u c t u r e  
     *   @ p a r a m     B a n k   N O R S R A M   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N O R S R A M _ T i m i n g _ I n i t ( F S M C _ N O R S R A M _ T y p e D e f   * D e v i c e ,  
                                                                                     F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * T i m i n g ,   u i n t 3 2 _ t   B a n k )  
 {  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ A D D R E S S _ S E T U P _ T I M E ( T i m i n g - > A d d r e s s S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ A D D R E S S _ H O L D _ T I M E ( T i m i n g - > A d d r e s s H o l d T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ D A T A S E T U P _ T I M E ( T i m i n g - > D a t a S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ T U R N A R O U N D _ T I M E ( T i m i n g - > B u s T u r n A r o u n d D u r a t i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ C L K _ D I V ( T i m i n g - > C L K D i v i s i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ D A T A _ L A T E N C Y ( T i m i n g - > D a t a L a t e n c y ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ A C C E S S _ M O D E ( T i m i n g - > A c c e s s M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ B A N K ( B a n k ) ) ;  
  
     / *   S e t   F S M C _ N O R S R A M   d e v i c e   t i m i n g   p a r a m e t e r s   * /  
     M O D I F Y _ R E G ( D e v i c e - > B T C R [ B a n k   +   1 U ] ,   B T R _ C L E A R _ M A S K ,   ( T i m i n g - > A d d r e s s S e t u p T i m e                                                                     |  
                                                                                                               ( ( T i m i n g - > A d d r e s s H o l d T i m e )                 < <   F S M C _ B T R x _ A D D H L D _ P o s )     |  
                                                                                                               ( ( T i m i n g - > D a t a S e t u p T i m e )                     < <   F S M C _ B T R x _ D A T A S T _ P o s )     |  
                                                                                                               ( ( T i m i n g - > B u s T u r n A r o u n d D u r a t i o n )     < <   F S M C _ B T R x _ B U S T U R N _ P o s )   |  
                                                                                                               ( ( ( T i m i n g - > C L K D i v i s i o n )   -   1 U )           < <   F S M C _ B T R x _ C L K D I V _ P o s )     |  
                                                                                                               ( ( ( T i m i n g - > D a t a L a t e n c y )   -   2 U )           < <   F S M C _ B T R x _ D A T L A T _ P o s )     |  
                                                                                                               ( T i m i n g - > A c c e s s M o d e ) ) ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   F S M C _ N O R S R A M   E x t e n d e d   m o d e   T i m i n g   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   F S M C _ N O R S R A M _ T i m i n g T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N O R S R A M   d e v i c e   i n s t a n c e  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   N O R S R A M   T i m i n g   s t r u c t u r e  
     *   @ p a r a m     B a n k   N O R S R A M   b a n k   n u m b e r  
     *   @ p a r a m     E x t e n d e d M o d e   F S M C   E x t e n d e d   M o d e  
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                         @ a r g   F S M C _ E X T E N D E D _ M O D E _ D I S A B L E  
     *                         @ a r g   F S M C _ E X T E N D E D _ M O D E _ E N A B L E  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N O R S R A M _ E x t e n d e d _ T i m i n g _ I n i t ( F S M C _ N O R S R A M _ E X T E N D E D _ T y p e D e f   * D e v i c e ,  
                                                                                                       F S M C _ N O R S R A M _ T i m i n g T y p e D e f   * T i m i n g ,   u i n t 3 2 _ t   B a n k ,  
                                                                                                       u i n t 3 2 _ t   E x t e n d e d M o d e )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ E X T E N D E D _ M O D E ( E x t e n d e d M o d e ) ) ;  
  
     / *   S e t   N O R S R A M   d e v i c e   t i m i n g   r e g i s t e r   f o r   w r i t e   c o n f i g u r a t i o n ,   i f   e x t e n d e d   m o d e   i s   u s e d   * /  
     i f   ( E x t e n d e d M o d e   = =   F S M C _ E X T E N D E D _ M O D E _ E N A B L E )  
     {  
         / *   C h e c k   t h e   p a r a m e t e r s   * /  
         a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ E X T E N D E D _ D E V I C E ( D e v i c e ) ) ;  
         a s s e r t _ p a r a m ( I S _ F S M C _ A D D R E S S _ S E T U P _ T I M E ( T i m i n g - > A d d r e s s S e t u p T i m e ) ) ;  
         a s s e r t _ p a r a m ( I S _ F S M C _ A D D R E S S _ H O L D _ T I M E ( T i m i n g - > A d d r e s s H o l d T i m e ) ) ;  
         a s s e r t _ p a r a m ( I S _ F S M C _ D A T A S E T U P _ T I M E ( T i m i n g - > D a t a S e t u p T i m e ) ) ;  
 # i f   d e f i n e d ( F S M C _ B W T R x _ B U S T U R N )  
         a s s e r t _ p a r a m ( I S _ F S M C _ T U R N A R O U N D _ T I M E ( T i m i n g - > B u s T u r n A r o u n d D u r a t i o n ) ) ;  
 # e l s e  
         a s s e r t _ p a r a m ( I S _ F S M C _ C L K _ D I V ( T i m i n g - > C L K D i v i s i o n ) ) ;  
         a s s e r t _ p a r a m ( I S _ F S M C _ D A T A _ L A T E N C Y ( T i m i n g - > D a t a L a t e n c y ) ) ;  
 # e n d i f   / *   F S M C _ B W T R x _ B U S T U R N   * /  
         a s s e r t _ p a r a m ( I S _ F S M C _ A C C E S S _ M O D E ( T i m i n g - > A c c e s s M o d e ) ) ;  
         a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ B A N K ( B a n k ) ) ;  
  
         / *   S e t   N O R S R A M   d e v i c e   t i m i n g   r e g i s t e r   f o r   w r i t e   c o n f i g u r a t i o n ,   i f   e x t e n d e d   m o d e   i s   u s e d   * /  
 # i f   d e f i n e d ( F S M C _ B W T R x _ B U S T U R N )  
         M O D I F Y _ R E G ( D e v i c e - > B W T R [ B a n k ] ,   B W T R _ C L E A R _ M A S K ,   ( T i m i n g - > A d d r e s s S e t u p T i m e                                                                         |  
                                                                                                           ( ( T i m i n g - > A d d r e s s H o l d T i m e )                 < <   F S M C _ B W T R x _ A D D H L D _ P o s )     |  
                                                                                                           ( ( T i m i n g - > D a t a S e t u p T i m e )                     < <   F S M C _ B W T R x _ D A T A S T _ P o s )     |  
                                                                                                           T i m i n g - > A c c e s s M o d e                                                                                     |  
                                                                                                           ( ( T i m i n g - > B u s T u r n A r o u n d D u r a t i o n )     < <   F S M C _ B W T R x _ B U S T U R N _ P o s ) ) ) ;  
 # e l s e  
         M O D I F Y _ R E G ( D e v i c e - > B W T R [ B a n k ] ,   B W T R _ C L E A R _ M A S K ,   ( T i m i n g - > A d d r e s s S e t u p T i m e                                                                         |  
                                                                                                           ( ( T i m i n g - > A d d r e s s H o l d T i m e )                 < <   F S M C _ B W T R x _ A D D H L D _ P o s )     |  
                                                                                                           ( ( T i m i n g - > D a t a S e t u p T i m e )                     < <   F S M C _ B W T R x _ D A T A S T _ P o s )     |  
                                                                                                           T i m i n g - > A c c e s s M o d e                                                                                     |  
                                                                                                           ( ( ( T i m i n g - > C L K D i v i s i o n )   -   1 U )           < <   F S M C _ B W T R x _ C L K D I V _ P o s )     |  
                                                                                                           ( ( ( T i m i n g - > D a t a L a t e n c y )   -   2 U )           < <   F S M C _ B W T R x _ D A T L A T _ P o s ) ) ) ;  
 # e n d i f   / *   F S M C _ B W T R x _ B U S T U R N   * /  
     }  
     e l s e  
     {  
         D e v i c e - > B W T R [ B a n k ]   =   0 x 0 F F F F F F F U ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   F S M C _ L L _ N O R S R A M _ P r i v a t e _ F u n c t i o n s _ G r o u p 2  
     *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   F S M C _ N O R S R A M   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   d y n a m i c a l l y  
         t h e   F S M C   N O R S R A M   i n t e r f a c e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e s   d y n a m i c a l l y   F S M C _ N O R S R A M   w r i t e   o p e r a t i o n .  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N O R S R A M   d e v i c e   i n s t a n c e  
     *   @ p a r a m     B a n k   N O R S R A M   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ E n a b l e ( F S M C _ N O R S R A M _ T y p e D e f   * D e v i c e ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ B A N K ( B a n k ) ) ;  
  
     / *   E n a b l e   w r i t e   o p e r a t i o n   * /  
     S E T _ B I T ( D e v i c e - > B T C R [ B a n k ] ,   F S M C _ W R I T E _ O P E R A T I O N _ E N A B L E ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   d y n a m i c a l l y   F S M C _ N O R S R A M   w r i t e   o p e r a t i o n .  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N O R S R A M   d e v i c e   i n s t a n c e  
     *   @ p a r a m     B a n k   N O R S R A M   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N O R S R A M _ W r i t e O p e r a t i o n _ D i s a b l e ( F S M C _ N O R S R A M _ T y p e D e f   * D e v i c e ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N O R S R A M _ B A N K ( B a n k ) ) ;  
  
     / *   D i s a b l e   w r i t e   o p e r a t i o n   * /  
     C L E A R _ B I T ( D e v i c e - > B T C R [ B a n k ] ,   F S M C _ W R I T E _ O P E R A T I O N _ E N A B L E ) ;  
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
 # e n d i f   / *   F S M C _ B A N K 1   * /  
  
 # i f   d e f i n e d ( F S M C _ B A N K 3 )  
  
 / * *   @ d e f g r o u p   F S M C _ L L _ E x p o r t e d _ F u n c t i o n s _ N A N D   F S M C   L o w   L a y e r   N A N D   E x p o r t e d   F u n c t i o n s  
     *   @ b r i e f         N A N D   C o n t r o l l e r   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   H o w   t o   u s e   N A N D   d e v i c e   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   d r i v e r   c o n t a i n s   a   s e t   o f   A P I s   t o   i n t e r f a c e   w i t h   t h e   F S M C   N A N D   b a n k s   i n   o r d e r  
         t o   r u n   t h e   N A N D   e x t e r n a l   d e v i c e s .  
  
         ( + )   F S M C   N A N D   b a n k   r e s e t   u s i n g   t h e   f u n c t i o n   F S M C _ N A N D _ D e I n i t ( )  
         ( + )   F S M C   N A N D   b a n k   c o n t r o l   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n   F S M C _ N A N D _ I n i t ( )  
         ( + )   F S M C   N A N D   b a n k   c o m m o n   s p a c e   t i m i n g   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n  
                 F S M C _ N A N D _ C o m m o n S p a c e _ T i m i n g _ I n i t ( )  
         ( + )   F S M C   N A N D   b a n k   a t t r i b u t e   s p a c e   t i m i n g   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n  
                 F S M C _ N A N D _ A t t r i b u t e S p a c e _ T i m i n g _ I n i t ( )  
         ( + )   F S M C   N A N D   b a n k   e n a b l e / d i s a b l e   E C C   c o r r e c t i o n   f e a t u r e   u s i n g   t h e   f u n c t i o n s  
                 F S M C _ N A N D _ E C C _ E n a b l e ( ) / F S M C _ N A N D _ E C C _ D i s a b l e ( )  
         ( + )   F S M C   N A N D   b a n k   g e t   E C C   c o r r e c t i o n   c o d e   u s i n g   t h e   f u n c t i o n   F S M C _ N A N D _ G e t E C C ( )  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   F S M C _ L L _ N A N D _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e _ i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   F S M C   N A N D   i n t e r f a c e  
         ( + )   D e - i n i t i a l i z e   t h e   F S M C   N A N D   i n t e r f a c e  
         ( + )   C o n f i g u r e   t h e   F S M C   c l o c k   a n d   a s s o c i a t e d   G P I O s  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   F S M C _ N A N D   d e v i c e   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   c o n t r o l   p a r a m e t e r s   i n   t h e   F S M C _ N A N D _ H a n d l e T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N A N D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     I n i t   P o i n t e r   t o   N A N D   I n i t i a l i z a t i o n   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N A N D _ I n i t ( F S M C _ N A N D _ T y p e D e f   * D e v i c e ,   F S M C _ N A N D _ I n i t T y p e D e f   * I n i t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ B A N K ( I n i t - > N a n d B a n k ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ F E A T U R E ( I n i t - > W a i t f e a t u r e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ M E M O R Y _ W I D T H ( I n i t - > M e m o r y D a t a W i d t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ E C C _ S T A T E ( I n i t - > E c c C o m p u t a t i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ E C C P A G E _ S I Z E ( I n i t - > E C C P a g e S i z e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ T C L R _ T I M E ( I n i t - > T C L R S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ T A R _ T I M E ( I n i t - > T A R S e t u p T i m e ) ) ;  
  
     / *   S e t   N A N D   d e v i c e   c o n t r o l   p a r a m e t e r s   * /  
     i f   ( I n i t - > N a n d B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         / *   N A N D   b a n k   2   r e g i s t e r s   c o n f i g u r a t i o n   * /  
         M O D I F Y _ R E G ( D e v i c e - > P C R 2 ,   P C R _ C L E A R _ M A S K ,   ( I n i t - > W a i t f e a t u r e                                                                             |  
                                                                                             F S M C _ P C R _ M E M O R Y _ T Y P E _ N A N D                                                               |  
                                                                                             I n i t - > M e m o r y D a t a W i d t h                                                                     |  
                                                                                             I n i t - > E c c C o m p u t a t i o n                                                                       |  
                                                                                             I n i t - > E C C P a g e S i z e                                                                             |  
                                                                                             ( ( I n i t - > T C L R S e t u p T i m e )   < <   F S M C _ P C R x _ T C L R _ P o s )     |  
                                                                                             ( ( I n i t - > T A R S e t u p T i m e )     < <   F S M C _ P C R x _ T A R _ P o s ) ) ) ;  
     }  
     e l s e  
     {  
         / *   N A N D   b a n k   3   r e g i s t e r s   c o n f i g u r a t i o n   * /  
         M O D I F Y _ R E G ( D e v i c e - > P C R 3 ,   P C R _ C L E A R _ M A S K ,   ( I n i t - > W a i t f e a t u r e                                                                             |  
                                                                                             F S M C _ P C R _ M E M O R Y _ T Y P E _ N A N D                                                               |  
                                                                                             I n i t - > M e m o r y D a t a W i d t h                                                                     |  
                                                                                             I n i t - > E c c C o m p u t a t i o n                                                                       |  
                                                                                             I n i t - > E C C P a g e S i z e                                                                             |  
                                                                                             ( ( I n i t - > T C L R S e t u p T i m e )   < <   F S M C _ P C R x _ T C L R _ P o s )     |  
                                                                                             ( ( I n i t - > T A R S e t u p T i m e )     < <   F S M C _ P C R x _ T A R _ P o s ) ) ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   F S M C _ N A N D   C o m m o n   s p a c e   T i m i n g   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N A N D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   N A N D   t i m i n g   s t r u c t u r e  
     *   @ p a r a m     B a n k   N A N D   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N A N D _ C o m m o n S p a c e _ T i m i n g _ I n i t ( F S M C _ N A N D _ T y p e D e f   * D e v i c e ,  
                                                                                                       F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * T i m i n g ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ S E T U P _ T I M E ( T i m i n g - > S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ T I M E ( T i m i n g - > W a i t S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H O L D _ T I M E ( T i m i n g - > H o l d S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H I Z _ T I M E ( T i m i n g - > H i Z S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ B A N K ( B a n k ) ) ;  
  
     / *   S e t   F S M C _ N A N D   d e v i c e   t i m i n g   p a r a m e t e r s   * /  
     i f   ( B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         / *   N A N D   b a n k   2   r e g i s t e r s   c o n f i g u r a t i o n   * /  
         M O D I F Y _ R E G ( D e v i c e - > P M E M 2 ,   P M E M _ C L E A R _ M A S K ,   ( T i m i n g - > S e t u p T i m e                                                                                           |  
                                                                                                 ( ( T i m i n g - > W a i t S e t u p T i m e )   < <   F S M C _ P M E M x _ M E M W A I T x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H o l d S e t u p T i m e )   < <   F S M C _ P M E M x _ M E M H O L D x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H i Z S e t u p T i m e )     < <   F S M C _ P M E M x _ M E M H I Z x _ P o s ) ) ) ;  
     }  
     e l s e  
     {  
         / *   N A N D   b a n k   3   r e g i s t e r s   c o n f i g u r a t i o n   * /  
         M O D I F Y _ R E G ( D e v i c e - > P M E M 3 ,   P M E M _ C L E A R _ M A S K ,   ( T i m i n g - > S e t u p T i m e                                                                                           |  
                                                                                                 ( ( T i m i n g - > W a i t S e t u p T i m e )   < <   F S M C _ P M E M x _ M E M W A I T x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H o l d S e t u p T i m e )   < <   F S M C _ P M E M x _ M E M H O L D x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H i Z S e t u p T i m e )     < <   F S M C _ P M E M x _ M E M H I Z x _ P o s ) ) ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   F S M C _ N A N D   A t t r i b u t e   s p a c e   T i m i n g   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N A N D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   N A N D   t i m i n g   s t r u c t u r e  
     *   @ p a r a m     B a n k   N A N D   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N A N D _ A t t r i b u t e S p a c e _ T i m i n g _ I n i t ( F S M C _ N A N D _ T y p e D e f   * D e v i c e ,  
                                                                                                             F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * T i m i n g ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ S E T U P _ T I M E ( T i m i n g - > S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ T I M E ( T i m i n g - > W a i t S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H O L D _ T I M E ( T i m i n g - > H o l d S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H I Z _ T I M E ( T i m i n g - > H i Z S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ B A N K ( B a n k ) ) ;  
  
     / *   S e t   F S M C _ N A N D   d e v i c e   t i m i n g   p a r a m e t e r s   * /  
     i f   ( B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         / *   N A N D   b a n k   2   r e g i s t e r s   c o n f i g u r a t i o n   * /  
         M O D I F Y _ R E G ( D e v i c e - > P A T T 2 ,   P A T T _ C L E A R _ M A S K ,   ( T i m i n g - > S e t u p T i m e                                                                                           |  
                                                                                                 ( ( T i m i n g - > W a i t S e t u p T i m e )   < <   F S M C _ P A T T x _ A T T W A I T x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H o l d S e t u p T i m e )   < <   F S M C _ P A T T x _ A T T H O L D x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H i Z S e t u p T i m e )     < <   F S M C _ P A T T x _ A T T H I Z x _ P o s ) ) ) ;  
     }  
     e l s e  
     {  
         / *   N A N D   b a n k   3   r e g i s t e r s   c o n f i g u r a t i o n   * /  
         M O D I F Y _ R E G ( D e v i c e - > P A T T 3 ,   P A T T _ C L E A R _ M A S K ,   ( T i m i n g - > S e t u p T i m e                                                                                           |  
                                                                                                 ( ( T i m i n g - > W a i t S e t u p T i m e )   < <   F S M C _ P A T T x _ A T T W A I T x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H o l d S e t u p T i m e )   < <   F S M C _ P A T T x _ A T T H O L D x _ P o s )   |  
                                                                                                 ( ( T i m i n g - > H i Z S e t u p T i m e )     < <   F S M C _ P A T T x _ A T T H I Z x _ P o s ) ) ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   F S M C _ N A N D   d e v i c e  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N A N D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     B a n k   N A N D   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N A N D _ D e I n i t ( F S M C _ N A N D _ T y p e D e f   * D e v i c e ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ B A N K ( B a n k ) ) ;  
  
     / *   D i s a b l e   t h e   N A N D   B a n k   * /  
     _ _ F S M C _ N A N D _ D I S A B L E ( D e v i c e ,   B a n k ) ;  
  
     / *   D e - i n i t i a l i z e   t h e   N A N D   B a n k   * /  
     i f   ( B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         / *   S e t   t h e   F S M C _ N A N D _ B A N K 2   r e g i s t e r s   t o   t h e i r   r e s e t   v a l u e s   * /  
         W R I T E _ R E G ( D e v i c e - > P C R 2 ,     0 x 0 0 0 0 0 0 1 8 U ) ;  
         W R I T E _ R E G ( D e v i c e - > S R 2 ,       0 x 0 0 0 0 0 0 4 0 U ) ;  
         W R I T E _ R E G ( D e v i c e - > P M E M 2 ,   0 x F C F C F C F C U ) ;  
         W R I T E _ R E G ( D e v i c e - > P A T T 2 ,   0 x F C F C F C F C U ) ;  
     }  
     / *   F S M C _ B a n k 3 _ N A N D   * /  
     e l s e  
     {  
         / *   S e t   t h e   F S M C _ N A N D _ B A N K 3   r e g i s t e r s   t o   t h e i r   r e s e t   v a l u e s   * /  
         W R I T E _ R E G ( D e v i c e - > P C R 3 ,     0 x 0 0 0 0 0 0 1 8 U ) ;  
         W R I T E _ R E G ( D e v i c e - > S R 3 ,       0 x 0 0 0 0 0 0 4 0 U ) ;  
         W R I T E _ R E G ( D e v i c e - > P M E M 3 ,   0 x F C F C F C F C U ) ;  
         W R I T E _ R E G ( D e v i c e - > P A T T 3 ,   0 x F C F C F C F C U ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ F S M C _ N A N D _ G r o u p 2   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *     @ b r i e f       m a n a g e m e n t   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                               # # # # #   F S M C _ N A N D   C o n t r o l   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   d y n a m i c a l l y  
         t h e   F S M C   N A N D   i n t e r f a c e .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
  
 / * *  
     *   @ b r i e f     E n a b l e s   d y n a m i c a l l y   F S M C _ N A N D   E C C   f e a t u r e .  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N A N D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     B a n k   N A N D   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N A N D _ E C C _ E n a b l e ( F S M C _ N A N D _ T y p e D e f   * D e v i c e ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ B A N K ( B a n k ) ) ;  
  
     / *   E n a b l e   E C C   f e a t u r e   * /  
     i f   ( B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         S E T _ B I T ( D e v i c e - > P C R 2 ,   F S M C _ P C R x _ E C C E N ) ;  
     }  
     e l s e  
     {  
         S E T _ B I T ( D e v i c e - > P C R 3 ,   F S M C _ P C R x _ E C C E N ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   d y n a m i c a l l y   F S M C _ N A N D   E C C   f e a t u r e .  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N A N D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     B a n k   N A N D   b a n k   n u m b e r  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N A N D _ E C C _ D i s a b l e ( F S M C _ N A N D _ T y p e D e f   * D e v i c e ,   u i n t 3 2 _ t   B a n k )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ B A N K ( B a n k ) ) ;  
  
     / *   D i s a b l e   E C C   f e a t u r e   * /  
     i f   ( B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         C L E A R _ B I T ( D e v i c e - > P C R 2 ,   F S M C _ P C R x _ E C C E N ) ;  
     }  
     e l s e  
     {  
         C L E A R _ B I T ( D e v i c e - > P C R 3 ,   F S M C _ P C R x _ E C C E N ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e s   d y n a m i c a l l y   F S M C _ N A N D   E C C   f e a t u r e .  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   N A N D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     E C C v a l   P o i n t e r   t o   E C C   v a l u e  
     *   @ p a r a m     B a n k   N A N D   b a n k   n u m b e r  
     *   @ p a r a m     T i m e o u t   T i m e o u t   w a i t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ N A N D _ G e t E C C ( F S M C _ N A N D _ T y p e D e f   * D e v i c e ,   u i n t 3 2 _ t   * E C C v a l ,   u i n t 3 2 _ t   B a n k ,  
                                                                     u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ D E V I C E ( D e v i c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ N A N D _ B A N K ( B a n k ) ) ;  
  
     / *   G e t   t i c k   * /  
     t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
     / *   W a i t   u n t i l   F I F O   i s   e m p t y   * /  
     w h i l e   ( _ _ F S M C _ N A N D _ G E T _ F L A G ( D e v i c e ,   B a n k ,   F S M C _ F L A G _ F E M P T )   = =   R E S E T )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   T i m e o u t )   | |   ( T i m e o u t   = =   0 U ) )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
  
     i f   ( B a n k   = =   F S M C _ N A N D _ B A N K 2 )  
     {  
         / *   G e t   t h e   E C C R 2   r e g i s t e r   v a l u e   * /  
         * E C C v a l   =   ( u i n t 3 2 _ t ) D e v i c e - > E C C R 2 ;  
     }  
     e l s e  
     {  
         / *   G e t   t h e   E C C R 3   r e g i s t e r   v a l u e   * /  
         * E C C v a l   =   ( u i n t 3 2 _ t ) D e v i c e - > E C C R 3 ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   F S M C _ B A N K 3   * /  
  
 # i f   d e f i n e d ( F S M C _ B A N K 4 )  
  
 / * *   @ a d d t o g r o u p   F S M C _ L L _ P C C A R D  
     *   @ b r i e f         P C C A R D   C o n t r o l l e r   f u n c t i o n s  
     *  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                         # # # # #   H o w   t o   u s e   P C C A R D   d e v i c e   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   d r i v e r   c o n t a i n s   a   s e t   o f   A P I s   t o   i n t e r f a c e   w i t h   t h e   F S M C   P C C A R D   b a n k   i n   o r d e r  
         t o   r u n   t h e   P C C A R D / c o m p a c t   f l a s h   e x t e r n a l   d e v i c e s .  
  
         ( + )   F S M C   P C C A R D   b a n k   r e s e t   u s i n g   t h e   f u n c t i o n   F S M C _ P C C A R D _ D e I n i t ( )  
         ( + )   F S M C   P C C A R D   b a n k   c o n t r o l   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n   F S M C _ P C C A R D _ I n i t ( )  
         ( + )   F S M C   P C C A R D   b a n k   c o m m o n   s p a c e   t i m i n g   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n  
                 F S M C _ P C C A R D _ C o m m o n S p a c e _ T i m i n g _ I n i t ( )  
         ( + )   F S M C   P C C A R D   b a n k   a t t r i b u t e   s p a c e   t i m i n g   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n  
                 F S M C _ P C C A R D _ A t t r i b u t e S p a c e _ T i m i n g _ I n i t ( )  
         ( + )   F S M C   P C C A R D   b a n k   I O   s p a c e   t i m i n g   c o n f i g u r a t i o n   u s i n g   t h e   f u n c t i o n  
                 F S M C _ P C C A R D _ I O S p a c e _ T i m i n g _ I n i t ( )  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   F S M C _ L L _ P C C A R D _ P r i v a t e _ F u n c t i o n s _ G r o u p 1  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   d e _ i n i t i a l i z a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o :  
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   F S M C   P C C A R D   i n t e r f a c e  
         ( + )   D e - i n i t i a l i z e   t h e   F S M C   P C C A R D   i n t e r f a c e  
         ( + )   C o n f i g u r e   t h e   F S M C   c l o c k   a n d   a s s o c i a t e d   G P I O s  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   F S M C _ P C C A R D   d e v i c e   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   c o n t r o l   p a r a m e t e r s   i n   t h e   F S M C _ P C C A R D _ H a n d l e T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   P C C A R D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     I n i t   P o i n t e r   t o   P C C A R D   I n i t i a l i z a t i o n   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ P C C A R D _ I n i t ( F S M C _ P C C A R D _ T y p e D e f   * D e v i c e ,   F S M C _ P C C A R D _ I n i t T y p e D e f   * I n i t )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ P C C A R D _ D E V I C E ( D e v i c e ) ) ;  
 # i f   d e f i n e d ( F S M C _ B A N K 3 )  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ F E A T U R E ( I n i t - > W a i t f e a t u r e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ T C L R _ T I M E ( I n i t - > T C L R S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ T A R _ T I M E ( I n i t - > T A R S e t u p T i m e ) ) ;  
 # e n d i f   / *   F S M C _ B A N K 3   * /  
  
     / *   S e t   F S M C _ P C C A R D   d e v i c e   c o n t r o l   p a r a m e t e r s   * /  
     M O D I F Y _ R E G ( D e v i c e - > P C R 4 ,  
                           ( F S M C _ P C R x _ P T Y P                                                                                     |  
                             F S M C _ P C R x _ P W A I T E N                                                                               |  
                             F S M C _ P C R x _ P W I D                                                                                     |  
                             F S M C _ P C R x _ T C L R                                                                                     |  
                             F S M C _ P C R x _ T A R ) ,  
                           ( F S M C _ P C R _ M E M O R Y _ T Y P E _ P C C A R D                                                           |  
                             I n i t - > W a i t f e a t u r e                                                                             |  
                             F S M C _ N A N D _ P C C _ M E M _ B U S _ W I D T H _ 1 6                                                     |  
                             ( I n i t - > T C L R S e t u p T i m e   < <   F S M C _ P C R x _ T C L R _ P o s )       |  
                             ( I n i t - > T A R S e t u p T i m e     < <   F S M C _ P C R x _ T A R _ P o s ) ) ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   F S M C _ P C C A R D   C o m m o n   s p a c e   T i m i n g   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   P C C A R D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   P C C A R D   t i m i n g   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ P C C A R D _ C o m m o n S p a c e _ T i m i n g _ I n i t ( F S M C _ P C C A R D _ T y p e D e f   * D e v i c e ,  
                                                                                                                             F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * T i m i n g )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ P C C A R D _ D E V I C E ( D e v i c e ) ) ;  
 # i f   d e f i n e d ( F S M C _ B A N K 3 )  
     a s s e r t _ p a r a m ( I S _ F S M C _ S E T U P _ T I M E ( T i m i n g - > S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ T I M E ( T i m i n g - > W a i t S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H O L D _ T I M E ( T i m i n g - > H o l d S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H I Z _ T I M E ( T i m i n g - > H i Z S e t u p T i m e ) ) ;  
 # e n d i f   / *   F S M C _ B A N K 3   * /  
  
     / *   S e t   P C C A R D   t i m i n g   p a r a m e t e r s   * /  
     M O D I F Y _ R E G ( D e v i c e - > P M E M 4 ,   P M E M _ C L E A R _ M A S K ,  
                           ( T i m i n g - > S e t u p T i m e                                                                                             |  
                             ( ( T i m i n g - > W a i t S e t u p T i m e )   < <   F S M C _ P M E M x _ M E M W A I T x _ P o s )     |  
                             ( ( T i m i n g - > H o l d S e t u p T i m e )   < <   F S M C _ P M E M x _ M E M H O L D x _ P o s )     |  
                             ( ( T i m i n g - > H i Z S e t u p T i m e )     < <   F S M C _ P M E M x _ M E M H I Z x _ P o s ) ) ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   F S M C _ P C C A R D   A t t r i b u t e   s p a c e   T i m i n g   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   P C C A R D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   P C C A R D   t i m i n g   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ P C C A R D _ A t t r i b u t e S p a c e _ T i m i n g _ I n i t ( F S M C _ P C C A R D _ T y p e D e f   * D e v i c e ,  
                                                                                                                                   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * T i m i n g )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ P C C A R D _ D E V I C E ( D e v i c e ) ) ;  
 # i f   d e f i n e d ( F S M C _ B A N K 3 )  
     a s s e r t _ p a r a m ( I S _ F S M C _ S E T U P _ T I M E ( T i m i n g - > S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ T I M E ( T i m i n g - > W a i t S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H O L D _ T I M E ( T i m i n g - > H o l d S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H I Z _ T I M E ( T i m i n g - > H i Z S e t u p T i m e ) ) ;  
 # e n d i f   / *   F S M C _ B A N K 3   * /  
  
     / *   S e t   P C C A R D   t i m i n g   p a r a m e t e r s   * /  
     M O D I F Y _ R E G ( D e v i c e - > P A T T 4 ,   P A T T _ C L E A R _ M A S K ,  
                           ( T i m i n g - > S e t u p T i m e                                                                                             |  
                             ( ( T i m i n g - > W a i t S e t u p T i m e )   < <   F S M C _ P A T T x _ A T T W A I T x _ P o s )     |  
                             ( ( T i m i n g - > H o l d S e t u p T i m e )   < <   F S M C _ P A T T x _ A T T H O L D x _ P o s )     |  
                             ( ( T i m i n g - > H i Z S e t u p T i m e )     < <   F S M C _ P A T T x _ A T T H I Z x _ P o s ) ) ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   F S M C _ P C C A R D   I O   s p a c e   T i m i n g   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   P C C A R D   d e v i c e   i n s t a n c e  
     *   @ p a r a m     T i m i n g   P o i n t e r   t o   P C C A R D   t i m i n g   s t r u c t u r e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ P C C A R D _ I O S p a c e _ T i m i n g _ I n i t ( F S M C _ P C C A R D _ T y p e D e f   * D e v i c e ,  
                                                                                                                     F S M C _ N A N D _ P C C _ T i m i n g T y p e D e f   * T i m i n g )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ P C C A R D _ D E V I C E ( D e v i c e ) ) ;  
 # i f   d e f i n e d ( F S M C _ B A N K 3 )  
     a s s e r t _ p a r a m ( I S _ F S M C _ S E T U P _ T I M E ( T i m i n g - > S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ W A I T _ T I M E ( T i m i n g - > W a i t S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H O L D _ T I M E ( T i m i n g - > H o l d S e t u p T i m e ) ) ;  
     a s s e r t _ p a r a m ( I S _ F S M C _ H I Z _ T I M E ( T i m i n g - > H i Z S e t u p T i m e ) ) ;  
 # e n d i f   / *   F S M C _ B A N K 3   * /  
  
     / *   S e t   F S M C _ P C C A R D   d e v i c e   t i m i n g   p a r a m e t e r s   * /  
     M O D I F Y _ R E G ( D e v i c e - > P I O 4 ,   P I O 4 _ C L E A R _ M A S K ,  
                           ( T i m i n g - > S e t u p T i m e                                                                                       |  
                             ( T i m i n g - > W a i t S e t u p T i m e       < <   F S M C _ P I O 4 _ I O W A I T 4 _ P o s )   |  
                             ( T i m i n g - > H o l d S e t u p T i m e       < <   F S M C _ P I O 4 _ I O H O L D 4 _ P o s )   |  
                             ( T i m i n g - > H i Z S e t u p T i m e         < <   F S M C _ P I O 4 _ I O H I Z 4 _ P o s ) ) ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   F S M C _ P C C A R D   d e v i c e  
     *   @ p a r a m     D e v i c e   P o i n t e r   t o   P C C A R D   d e v i c e   i n s t a n c e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   F S M C _ P C C A R D _ D e I n i t ( F S M C _ P C C A R D _ T y p e D e f   * D e v i c e )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ F S M C _ P C C A R D _ D E V I C E ( D e v i c e ) ) ;  
  
     / *   D i s a b l e   t h e   F S M C _ P C C A R D   d e v i c e   * /  
     _ _ F S M C _ P C C A R D _ D I S A B L E ( D e v i c e ) ;  
  
     / *   D e - i n i t i a l i z e   t h e   F S M C _ P C C A R D   d e v i c e   * /  
     D e v i c e - > P C R 4         =   0 x 0 0 0 0 0 0 1 8 U ;  
     D e v i c e - > S R 4           =   0 x 0 0 0 0 0 0 4 0 U ;  
     D e v i c e - > P M E M 4       =   0 x F C F C F C F C U ;  
     D e v i c e - > P A T T 4       =   0 x F C F C F C F C U ;  
     D e v i c e - > P I O 4         =   0 x F C F C F C F C U ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ }  
     * /  
 # e n d i f   / *   F S M C _ B A N K 4   * /  
  
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
 / * *  
     *   @ }  
     * /  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  