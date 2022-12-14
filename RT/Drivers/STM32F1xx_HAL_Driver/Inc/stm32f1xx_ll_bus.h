??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ b u s . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   B U S   L L   m o d u l e .  
  
     @ v e r b a t i m  
                                             # # # # #   R C C   L i m i t a t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             A   d e l a y   b e t w e e n   a n   R C C   p e r i p h e r a l   c l o c k   e n a b l e   a n d   t h e   e f f e c t i v e   p e r i p h e r a l  
             e n a b l i n g   s h o u l d   b e   t a k e n   i n t o   a c c o u n t   i n   o r d e r   t o   m a n a g e   t h e   p e r i p h e r a l   r e a d / w r i t e  
             f r o m / t o   r e g i s t e r s .  
             ( + )   T h i s   d e l a y   d e p e n d s   o n   t h e   p e r i p h e r a l   m a p p i n g .  
                 ( + + )   A H B   &   A P B   p e r i p h e r a l s ,   1   d u m m y   r e a d   i s   n e c e s s a r y  
  
         [ . . ]  
             W o r k a r o u n d s :  
             ( # )   F o r   A H B   &   A P B   p e r i p h e r a l s ,   a   d u m m y   r e a d   t o   t h e   p e r i p h e r a l   r e g i s t e r   h a s   b e e n  
                     i n s e r t e d   i n   e a c h   L L _ { B U S } _ G R P { x } _ E n a b l e C l o c k ( )   f u n c t i o n .  
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
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ L L _ B U S _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ L L _ B U S _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d ( R C C )  
  
 / * *   @ d e f g r o u p   B U S _ L L   B U S  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f   d e f i n e d ( R C C _ A H B R S T R _ O T G F S R S T )   | |   d e f i n e d ( R C C _ A H B R S T R _ E T H M A C R S T )  
 # d e f i n e   R C C _ A H B R S T R _ S U P P O R T  
 # e n d i f   / *   R C C _ A H B R S T R _ O T G F S R S T   | |   R C C _ A H B R S T R _ E T H M A C R S T   * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   B U S _ L L _ E x p o r t e d _ C o n s t a n t s   B U S   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   B U S _ L L _ E C _ A H B 1 _ G R P 1 _ P E R I P H     A H B 1   G R P 1   P E R I P H  
     *   @ {  
     * /  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ A L L                         ( u i n t 3 2 _ t ) 0 x F F F F F F F F U  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ C R C                         R C C _ A H B E N R _ C R C E N  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 1                       R C C _ A H B E N R _ D M A 1 E N  
 # i f   d e f i n e d ( D M A 2 )  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 2                       R C C _ A H B E N R _ D M A 2 E N  
 # e n d i f   / * D M A 2 * /  
 # i f   d e f i n e d ( E T H )  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C                   R C C _ A H B E N R _ E T H M A C E N  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C R X               R C C _ A H B E N R _ E T H M A C R X E N  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C T X               R C C _ A H B E N R _ E T H M A C T X E N  
 # e n d i f   / * E T H * /  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F L A S H                     R C C _ A H B E N R _ F L I T F E N  
 # i f   d e f i n e d ( F S M C _ B a n k 1 )  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F S M C                       R C C _ A H B E N R _ F S M C E N  
 # e n d i f   / * F S M C _ B a n k 1 * /  
 # i f   d e f i n e d ( U S B _ O T G _ F S )  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ O T G F S                     R C C _ A H B E N R _ O T G F S E N  
 # e n d i f   / * U S B _ O T G _ F S * /  
 # i f   d e f i n e d ( S D I O )  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S D I O                       R C C _ A H B E N R _ S D I O E N  
 # e n d i f   / * S D I O * /  
 # d e f i n e   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S R A M                       R C C _ A H B E N R _ S R A M E N  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   B U S _ L L _ E C _ A P B 1 _ G R P 1 _ P E R I P H     A P B 1   G R P 1   P E R I P H  
     *   @ {  
     * /  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ A L L                         ( u i n t 3 2 _ t ) 0 x F F F F F F F F U  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ B K P                         R C C _ A P B 1 E N R _ B K P E N  
 # i f   d e f i n e d ( C A N 1 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 1                       R C C _ A P B 1 E N R _ C A N 1 E N  
 # e n d i f   / * C A N 1 * /  
 # i f   d e f i n e d ( C A N 2 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 2                       R C C _ A P B 1 E N R _ C A N 2 E N  
 # e n d i f   / * C A N 2 * /  
 # i f   d e f i n e d ( C E C )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C E C                         R C C _ A P B 1 E N R _ C E C E N  
 # e n d i f   / * C E C * /  
 # i f   d e f i n e d ( D A C )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ D A C 1                       R C C _ A P B 1 E N R _ D A C E N  
 # e n d i f   / * D A C * /  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 1                       R C C _ A P B 1 E N R _ I 2 C 1 E N  
 # i f   d e f i n e d ( I 2 C 2 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 2                       R C C _ A P B 1 E N R _ I 2 C 2 E N  
 # e n d i f   / * I 2 C 2 * /  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ P W R                         R C C _ A P B 1 E N R _ P W R E N  
 # i f   d e f i n e d ( S P I 2 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 2                       R C C _ A P B 1 E N R _ S P I 2 E N  
 # e n d i f   / * S P I 2 * /  
 # i f   d e f i n e d ( S P I 3 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 3                       R C C _ A P B 1 E N R _ S P I 3 E N  
 # e n d i f   / * S P I 3 * /  
 # i f   d e f i n e d ( T I M 1 2 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2                     R C C _ A P B 1 E N R _ T I M 1 2 E N  
 # e n d i f   / * T I M 1 2 * /  
 # i f   d e f i n e d ( T I M 1 3 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3                     R C C _ A P B 1 E N R _ T I M 1 3 E N  
 # e n d i f   / * T I M 1 3 * /  
 # i f   d e f i n e d ( T I M 1 4 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4                     R C C _ A P B 1 E N R _ T I M 1 4 E N  
 # e n d i f   / * T I M 1 4 * /  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2                       R C C _ A P B 1 E N R _ T I M 2 E N  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3                       R C C _ A P B 1 E N R _ T I M 3 E N  
 # i f   d e f i n e d ( T I M 4 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4                       R C C _ A P B 1 E N R _ T I M 4 E N  
 # e n d i f   / * T I M 4 * /  
 # i f   d e f i n e d ( T I M 5 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5                       R C C _ A P B 1 E N R _ T I M 5 E N  
 # e n d i f   / * T I M 5 * /  
 # i f   d e f i n e d ( T I M 6 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6                       R C C _ A P B 1 E N R _ T I M 6 E N  
 # e n d i f   / * T I M 6 * /  
 # i f   d e f i n e d ( T I M 7 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7                       R C C _ A P B 1 E N R _ T I M 7 E N  
 # e n d i f   / * T I M 7 * /  
 # i f   d e f i n e d ( U A R T 4 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4                     R C C _ A P B 1 E N R _ U A R T 4 E N  
 # e n d i f   / * U A R T 4 * /  
 # i f   d e f i n e d ( U A R T 5 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5                     R C C _ A P B 1 E N R _ U A R T 5 E N  
 # e n d i f   / * U A R T 5 * /  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2                   R C C _ A P B 1 E N R _ U S A R T 2 E N  
 # i f   d e f i n e d ( U S A R T 3 )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3                   R C C _ A P B 1 E N R _ U S A R T 3 E N  
 # e n d i f   / * U S A R T 3 * /  
 # i f   d e f i n e d ( U S B )  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S B                         R C C _ A P B 1 E N R _ U S B E N  
 # e n d i f   / * U S B * /  
 # d e f i n e   L L _ A P B 1 _ G R P 1 _ P E R I P H _ W W D G                       R C C _ A P B 1 E N R _ W W D G E N  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   B U S _ L L _ E C _ A P B 2 _ G R P 1 _ P E R I P H     A P B 2   G R P 1   P E R I P H  
     *   @ {  
     * /  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A L L                         ( u i n t 3 2 _ t ) 0 x F F F F F F F F U  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 1                       R C C _ A P B 2 E N R _ A D C 1 E N  
 # i f   d e f i n e d ( A D C 2 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 2                       R C C _ A P B 2 E N R _ A D C 2 E N  
 # e n d i f   / * A D C 2 * /  
 # i f   d e f i n e d ( A D C 3 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 3                       R C C _ A P B 2 E N R _ A D C 3 E N  
 # e n d i f   / * A D C 3 * /  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A F I O                       R C C _ A P B 2 E N R _ A F I O E N  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O A                     R C C _ A P B 2 E N R _ I O P A E N  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O B                     R C C _ A P B 2 E N R _ I O P B E N  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O C                     R C C _ A P B 2 E N R _ I O P C E N  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O D                     R C C _ A P B 2 E N R _ I O P D E N  
 # i f   d e f i n e d ( G P I O E )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O E                     R C C _ A P B 2 E N R _ I O P E E N  
 # e n d i f   / * G P I O E * /  
 # i f   d e f i n e d ( G P I O F )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O F                     R C C _ A P B 2 E N R _ I O P F E N  
 # e n d i f   / * G P I O F * /  
 # i f   d e f i n e d ( G P I O G )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O G                     R C C _ A P B 2 E N R _ I O P G E N  
 # e n d i f   / * G P I O G * /  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ S P I 1                       R C C _ A P B 2 E N R _ S P I 1 E N  
 # i f   d e f i n e d ( T I M 1 0 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0                     R C C _ A P B 2 E N R _ T I M 1 0 E N  
 # e n d i f   / * T I M 1 0 * /  
 # i f   d e f i n e d ( T I M 1 1 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1                     R C C _ A P B 2 E N R _ T I M 1 1 E N  
 # e n d i f   / * T I M 1 1 * /  
 # i f   d e f i n e d ( T I M 1 5 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5                     R C C _ A P B 2 E N R _ T I M 1 5 E N  
 # e n d i f   / * T I M 1 5 * /  
 # i f   d e f i n e d ( T I M 1 6 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6                     R C C _ A P B 2 E N R _ T I M 1 6 E N  
 # e n d i f   / * T I M 1 6 * /  
 # i f   d e f i n e d ( T I M 1 7 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7                     R C C _ A P B 2 E N R _ T I M 1 7 E N  
 # e n d i f   / * T I M 1 7 * /  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1                       R C C _ A P B 2 E N R _ T I M 1 E N  
 # i f   d e f i n e d ( T I M 8 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8                       R C C _ A P B 2 E N R _ T I M 8 E N  
 # e n d i f   / * T I M 8 * /  
 # i f   d e f i n e d ( T I M 9 )  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9                       R C C _ A P B 2 E N R _ T I M 9 E N  
 # e n d i f   / * T I M 9 * /  
 # d e f i n e   L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1                   R C C _ A P B 2 E N R _ U S A R T 1 E N  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   B U S _ L L _ E x p o r t e d _ F u n c t i o n s   B U S   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   B U S _ L L _ E F _ A H B 1   A H B 1  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   A H B 1   p e r i p h e r a l s   c l o c k .  
     *   @ r m t o l l   A H B E N R               C R C E N                   L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               D M A 1 E N                 L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               D M A 2 E N                 L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               E T H M A C E N             L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               E T H M A C R X E N         L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               E T H M A C T X E N         L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               F L I T F E N               L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               F S M C E N                 L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               O T G F S E N               L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               S D I O E N                 L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A H B E N R               S R A M E N                 L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ C R C  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 1  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C R X   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C T X   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F L A S H  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F S M C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ O T G F S   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S D I O   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S R A M  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A H B 1 _ G R P 1 _ E n a b l e C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     S E T _ B I T ( R C C - > A H B E N R ,   P e r i p h s ) ;  
     / *   D e l a y   a f t e r   a n   R C C   p e r i p h e r a l   c l o c k   e n a b l i n g   * /  
     t m p r e g   =   R E A D _ B I T ( R C C - > A H B E N R ,   P e r i p h s ) ;  
     ( v o i d ) t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   A H B 1   p e r i p h e r a l   c l o c k   i s   e n a b l e d   o r   n o t  
     *   @ r m t o l l   A H B E N R               C R C E N                   L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               D M A 1 E N                 L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               D M A 2 E N                 L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               E T H M A C E N             L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               E T H M A C R X E N         L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               E T H M A C T X E N         L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               F L I T F E N               L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               F S M C E N                 L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               O T G F S E N               L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               S D I O E N                 L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A H B E N R               S R A M E N                 L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ C R C  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 1  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C R X   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C T X   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F L A S H  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F S M C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ O T G F S   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S D I O   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S R A M  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   S t a t e   o f   P e r i p h s   ( 1   o r   0 ) .  
 * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A H B 1 _ G R P 1 _ I s E n a b l e d C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > A H B E N R ,   P e r i p h s )   = =   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   A H B 1   p e r i p h e r a l s   c l o c k .  
     *   @ r m t o l l   A H B E N R               C R C E N                   L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               D M A 1 E N                 L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               D M A 2 E N                 L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               E T H M A C E N             L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               E T H M A C R X E N         L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               E T H M A C T X E N         L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               F L I T F E N               L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               F S M C E N                 L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               O T G F S E N               L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               S D I O E N                 L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A H B E N R               S R A M E N                 L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ C R C  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 1  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ D M A 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C R X   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C T X   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F L A S H  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ F S M C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ O T G F S   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S D I O   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ S R A M  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A H B 1 _ G R P 1 _ D i s a b l e C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( R C C - > A H B E N R ,   P e r i p h s ) ;  
 }  
  
 # i f   d e f i n e d ( R C C _ A H B R S T R _ S U P P O R T )  
 / * *  
     *   @ b r i e f     F o r c e   A H B 1   p e r i p h e r a l s   r e s e t .  
     *   @ r m t o l l   A H B R S T R             E T H M A C R S T           L L _ A H B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A H B R S T R             O T G F S R S T             L L _ A H B 1 _ G R P 1 _ F o r c e R e s e t  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ A L L  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ O T G F S   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A H B 1 _ G R P 1 _ F o r c e R e s e t ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     S E T _ B I T ( R C C - > A H B R S T R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e l e a s e   A H B 1   p e r i p h e r a l s   r e s e t .  
     *   @ r m t o l l   A H B R S T R             E T H M A C R S T           L L _ A H B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A H B R S T R             O T G F S R S T             L L _ A H B 1 _ G R P 1 _ R e l e a s e R e s e t  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ A L L  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ E T H M A C   ( * )  
     *                   @ a r g   @ r e f   L L _ A H B 1 _ G R P 1 _ P E R I P H _ O T G F S   ( * )  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A H B 1 _ G R P 1 _ R e l e a s e R e s e t ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( R C C - > A H B R S T R ,   P e r i p h s ) ;  
 }  
 # e n d i f   / *   R C C _ A H B R S T R _ S U P P O R T   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   B U S _ L L _ E F _ A P B 1   A P B 1  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   A P B 1   p e r i p h e r a l s   c l o c k .  
     *   @ r m t o l l   A P B 1 E N R             B K P E N                   L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             C A N 1 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             C A N 2 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             C E C E N                   L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             D A C E N                   L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             I 2 C 1 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             I 2 C 2 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             P W R E N                   L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             S P I 2 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             S P I 3 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 2 E N               L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 3 E N               L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 4 E N               L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 2 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 3 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 4 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 5 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 6 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 7 E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             U A R T 4 E N               L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             U A R T 5 E N               L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             U S A R T 2 E N             L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             U S A R T 3 E N             L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             U S B E N                   L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 1 E N R             W W D G E N                 L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ B K P  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C E C   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ D A C 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 1  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ P W R  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S B   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ W W D G  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 1 _ G R P 1 _ E n a b l e C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     S E T _ B I T ( R C C - > A P B 1 E N R ,   P e r i p h s ) ;  
     / *   D e l a y   a f t e r   a n   R C C   p e r i p h e r a l   c l o c k   e n a b l i n g   * /  
     t m p r e g   =   R E A D _ B I T ( R C C - > A P B 1 E N R ,   P e r i p h s ) ;  
     ( v o i d ) t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   A P B 1   p e r i p h e r a l   c l o c k   i s   e n a b l e d   o r   n o t  
     *   @ r m t o l l   A P B 1 E N R             B K P E N                   L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             C A N 1 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             C A N 2 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             C E C E N                   L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             D A C E N                   L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             I 2 C 1 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             I 2 C 2 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             P W R E N                   L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             S P I 2 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             S P I 3 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 2 E N               L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 3 E N               L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 4 E N               L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 2 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 3 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 4 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 5 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 6 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             T I M 7 E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             U A R T 4 E N               L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             U A R T 5 E N               L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             U S A R T 2 E N             L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             U S A R T 3 E N             L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             U S B E N                   L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 1 E N R             W W D G E N                 L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ B K P  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C E C   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ D A C 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 1  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ P W R  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S B   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ W W D G  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   S t a t e   o f   P e r i p h s   ( 1   o r   0 ) .  
 * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A P B 1 _ G R P 1 _ I s E n a b l e d C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > A P B 1 E N R ,   P e r i p h s )   = =   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   A P B 1   p e r i p h e r a l s   c l o c k .  
     *   @ r m t o l l   A P B 1 E N R             B K P E N                   L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             C A N 1 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             C A N 2 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             C E C E N                   L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             D A C E N                   L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             I 2 C 1 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             I 2 C 2 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             P W R E N                   L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             S P I 2 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             S P I 3 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 2 E N               L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 3 E N               L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 1 4 E N               L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 2 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 3 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 4 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 5 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 6 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             T I M 7 E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             U A R T 4 E N               L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             U A R T 5 E N               L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             U S A R T 2 E N             L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             U S A R T 3 E N             L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             U S B E N                   L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 1 E N R             W W D G E N                 L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ B K P  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C E C   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ D A C 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 1  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ P W R  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S B   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ W W D G  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 1 _ G R P 1 _ D i s a b l e C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( R C C - > A P B 1 E N R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     F o r c e   A P B 1   p e r i p h e r a l s   r e s e t .  
     *   @ r m t o l l   A P B 1 R S T R           B K P R S T                 L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           C A N 1 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           C A N 2 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           C E C R S T                 L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           D A C R S T                 L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           I 2 C 1 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           I 2 C 2 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           P W R R S T                 L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           S P I 2 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           S P I 3 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 1 2 R S T             L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 1 3 R S T             L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 1 4 R S T             L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 2 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 3 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 4 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 5 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 6 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 7 R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           U A R T 4 R S T             L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           U A R T 5 R S T             L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           U S A R T 2 R S T           L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           U S A R T 3 R S T           L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           U S B R S T                 L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 1 R S T R           W W D G R S T               L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ A L L  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ B K P  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C E C   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ D A C 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 1  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ P W R  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S B   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ W W D G  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     S E T _ B I T ( R C C - > A P B 1 R S T R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e l e a s e   A P B 1   p e r i p h e r a l s   r e s e t .  
     *   @ r m t o l l   A P B 1 R S T R           B K P R S T                 L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           C A N 1 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           C A N 2 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           C E C R S T                 L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           D A C R S T                 L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           I 2 C 1 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           I 2 C 2 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           P W R R S T                 L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           S P I 2 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           S P I 3 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 1 2 R S T             L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 1 3 R S T             L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 1 4 R S T             L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 2 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 3 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 4 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 5 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 6 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           T I M 7 R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           U A R T 4 R S T             L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           U A R T 5 R S T             L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           U S A R T 2 R S T           L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           U S A R T 3 R S T           L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           U S B R S T                 L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 1 R S T R           W W D G R S T               L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ A L L  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ B K P  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C A N 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ C E C   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ D A C 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 1  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ I 2 C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ P W R  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ S P I 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 1 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 3  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ T I M 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S B   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 1 _ G R P 1 _ P E R I P H _ W W D G  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( R C C - > A P B 1 R S T R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   B U S _ L L _ E F _ A P B 2   A P B 2  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     E n a b l e   A P B 2   p e r i p h e r a l s   c l o c k .  
     *   @ r m t o l l   A P B 2 E N R             A D C 1 E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             A D C 2 E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             A D C 3 E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             A F I O E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P A E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P B E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P C E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P D E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P E E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P F E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P G E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             S P I 1 E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 0 E N               L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 1 E N               L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 5 E N               L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 6 E N               L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 7 E N               L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 8 E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 9 E N                 L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k \ n  
     *                   A P B 2 E N R             U S A R T 1 E N             L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A F I O  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O A  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O B  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O C  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O D  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O E   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O F   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O G   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ S P I 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 2 _ G R P 1 _ E n a b l e C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     _ _ I O   u i n t 3 2 _ t   t m p r e g ;  
     S E T _ B I T ( R C C - > A P B 2 E N R ,   P e r i p h s ) ;  
     / *   D e l a y   a f t e r   a n   R C C   p e r i p h e r a l   c l o c k   e n a b l i n g   * /  
     t m p r e g   =   R E A D _ B I T ( R C C - > A P B 2 E N R ,   P e r i p h s ) ;  
     ( v o i d ) t m p r e g ;  
 }  
  
 / * *  
     *   @ b r i e f     C h e c k   i f   A P B 2   p e r i p h e r a l   c l o c k   i s   e n a b l e d   o r   n o t  
     *   @ r m t o l l   A P B 2 E N R             A D C 1 E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             A D C 2 E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             A D C 3 E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             A F I O E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             I O P A E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             I O P B E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             I O P C E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             I O P D E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             I O P E E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             I O P F E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             I O P G E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             S P I 1 E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 0 E N               L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 1 E N               L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 5 E N               L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 6 E N               L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 7 E N               L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 8 E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             T I M 9 E N                 L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k \ n  
     *                   A P B 2 E N R             U S A R T 1 E N             L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A F I O  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O A  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O B  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O C  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O D  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O E   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O F   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O G   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ S P I 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   S t a t e   o f   P e r i p h s   ( 1   o r   0 ) .  
 * /  
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   L L _ A P B 2 _ G R P 1 _ I s E n a b l e d C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     r e t u r n   ( R E A D _ B I T ( R C C - > A P B 2 E N R ,   P e r i p h s )   = =   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     D i s a b l e   A P B 2   p e r i p h e r a l s   c l o c k .  
     *   @ r m t o l l   A P B 2 E N R             A D C 1 E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             A D C 2 E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             A D C 3 E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             A F I O E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P A E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P B E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P C E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P D E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P E E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P F E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             I O P G E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             S P I 1 E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 0 E N               L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 1 E N               L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 5 E N               L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 6 E N               L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 7 E N               L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 1 E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 8 E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             T I M 9 E N                 L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k \ n  
     *                   A P B 2 E N R             U S A R T 1 E N             L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A F I O  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O A  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O B  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O C  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O D  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O E   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O F   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O G   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ S P I 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 2 _ G R P 1 _ D i s a b l e C l o c k ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( R C C - > A P B 2 E N R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     F o r c e   A P B 2   p e r i p h e r a l s   r e s e t .  
     *   @ r m t o l l   A P B 2 R S T R           A D C 1 R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           A D C 2 R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           A D C 3 R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           A F I O R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           I O P A R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           I O P B R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           I O P C R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           I O P D R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           I O P E R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           I O P F R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           I O P G R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           S P I 1 R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 0 R S T             L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 1 R S T             L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 5 R S T             L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 6 R S T             L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 7 R S T             L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 8 R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 9 R S T               L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t \ n  
     *                   A P B 2 R S T R           U S A R T 1 R S T           L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A L L  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A F I O  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O A  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O B  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O C  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O D  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O E   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O F   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O G   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ S P I 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     S E T _ B I T ( R C C - > A P B 2 R S T R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e l e a s e   A P B 2   p e r i p h e r a l s   r e s e t .  
     *   @ r m t o l l   A P B 2 R S T R           A D C 1 R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           A D C 2 R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           A D C 3 R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           A F I O R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           I O P A R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           I O P B R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           I O P C R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           I O P D R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           I O P E R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           I O P F R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           I O P G R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           S P I 1 R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 0 R S T             L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 1 R S T             L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 5 R S T             L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 6 R S T             L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 7 R S T             L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 1 R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 8 R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           T I M 9 R S T               L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t \ n  
     *                   A P B 2 R S T R           U S A R T 1 R S T           L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t  
     *   @ p a r a m     P e r i p h s   T h i s   p a r a m e t e r   c a n   b e   a   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A L L  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 2   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A D C 3   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ A F I O  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O A  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O B  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O C  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O D  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O E   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O F   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ G P I O G   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ S P I 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 0   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 1   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 5   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 6   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1 7   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 1  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 8   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ T I M 9   ( * )  
     *                   @ a r g   @ r e f   L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1  
     *  
     *                   ( * )   v a l u e   n o t   d e f i n e d   i n   a l l   d e v i c e s .  
     *   @ r e t v a l   N o n e  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( u i n t 3 2 _ t   P e r i p h s )  
 {  
     C L E A R _ B I T ( R C C - > A P B 2 R S T R ,   P e r i p h s ) ;  
 }  
  
 / * *  
     *   @ }  
     * /  
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
 # e n d i f   / *   d e f i n e d ( R C C )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ L L _ B U S _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  