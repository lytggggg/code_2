??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ g p i o _ e x . h 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       H e a d e r   f i l e   o f   G P I O   H A L   E x t e n s i o n   m o d u l e . 
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
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i f n d e f   S T M 3 2 F 1 x x _ H A L _ G P I O _ E X _ H 
 # d e f i n e   S T M 3 2 F 1 x x _ H A L _ G P I O _ E X _ H 
 
 # i f d e f   _ _ c p l u s p l u s 
 e x t e r n   " C "   { 
 # e n d i f 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h " 
 
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   G P I O E x   G P I O E x 
     *   @ { 
     * / 
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   G P I O E x _ E x p o r t e d _ C o n s t a n t s   G P I O E x   E x p o r t e d   C o n s t a n t s 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   G P I O E x _ E V E N T O U T   E V E N T O U T   C o r t e x   C o n f i g u r a t i o n 
     *   @ b r i e f   T h i s   s e c t i o n   p r o p o s e   d e f i n i t i o n   t o   u s e   t h e   C o r t e x   E V E N T O U T   s i g n a l . 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   G P I O E x _ E V E N T O U T _ P I N   E V E N T O U T   P i n 
     *   @ { 
     * / 
 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 0     A F I O _ E V C R _ P I N _ P X 0   / * ! <   E V E N T O U T   o n   p i n   0   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 1     A F I O _ E V C R _ P I N _ P X 1   / * ! <   E V E N T O U T   o n   p i n   1   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 2     A F I O _ E V C R _ P I N _ P X 2   / * ! <   E V E N T O U T   o n   p i n   2   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 3     A F I O _ E V C R _ P I N _ P X 3   / * ! <   E V E N T O U T   o n   p i n   3   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 4     A F I O _ E V C R _ P I N _ P X 4   / * ! <   E V E N T O U T   o n   p i n   4   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 5     A F I O _ E V C R _ P I N _ P X 5   / * ! <   E V E N T O U T   o n   p i n   5   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 6     A F I O _ E V C R _ P I N _ P X 6   / * ! <   E V E N T O U T   o n   p i n   6   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 7     A F I O _ E V C R _ P I N _ P X 7   / * ! <   E V E N T O U T   o n   p i n   7   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 8     A F I O _ E V C R _ P I N _ P X 8   / * ! <   E V E N T O U T   o n   p i n   8   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 9     A F I O _ E V C R _ P I N _ P X 9   / * ! <   E V E N T O U T   o n   p i n   9   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 1 0   A F I O _ E V C R _ P I N _ P X 1 0   / * ! <   E V E N T O U T   o n   p i n   1 0   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 1 1   A F I O _ E V C R _ P I N _ P X 1 1   / * ! <   E V E N T O U T   o n   p i n   1 1   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 1 2   A F I O _ E V C R _ P I N _ P X 1 2   / * ! <   E V E N T O U T   o n   p i n   1 2   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 1 3   A F I O _ E V C R _ P I N _ P X 1 3   / * ! <   E V E N T O U T   o n   p i n   1 3   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 1 4   A F I O _ E V C R _ P I N _ P X 1 4   / * ! <   E V E N T O U T   o n   p i n   1 4   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P I N _ 1 5   A F I O _ E V C R _ P I N _ P X 1 5   / * ! <   E V E N T O U T   o n   p i n   1 5   * / 
 
 # d e f i n e   I S _ A F I O _ E V E N T O U T _ P I N ( _ _ P I N _ _ )   ( ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 0 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 1 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 2 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 3 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 4 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 5 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 6 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 7 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 8 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 9 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 1 0 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 1 1 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 1 2 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 1 3 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 1 4 )   | |   \ 
                                                                               ( ( _ _ P I N _ _ )   = =   A F I O _ E V E N T O U T _ P I N _ 1 5 ) ) 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   G P I O E x _ E V E N T O U T _ P O R T   E V E N T O U T   P o r t 
     *   @ { 
     * / 
 
 # d e f i n e   A F I O _ E V E N T O U T _ P O R T _ A   A F I O _ E V C R _ P O R T _ P A   / * ! <   E V E N T O U T   o n   p o r t   A   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P O R T _ B   A F I O _ E V C R _ P O R T _ P B   / * ! <   E V E N T O U T   o n   p o r t   B   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P O R T _ C   A F I O _ E V C R _ P O R T _ P C   / * ! <   E V E N T O U T   o n   p o r t   C   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P O R T _ D   A F I O _ E V C R _ P O R T _ P D   / * ! <   E V E N T O U T   o n   p o r t   D   * / 
 # d e f i n e   A F I O _ E V E N T O U T _ P O R T _ E   A F I O _ E V C R _ P O R T _ P E   / * ! <   E V E N T O U T   o n   p o r t   E   * / 
 
 # d e f i n e   I S _ A F I O _ E V E N T O U T _ P O R T ( _ _ P O R T _ _ )   ( ( ( _ _ P O R T _ _ )   = =   A F I O _ E V E N T O U T _ P O R T _ A )   | |   \ 
                                                                                   ( ( _ _ P O R T _ _ )   = =   A F I O _ E V E N T O U T _ P O R T _ B )   | |   \ 
                                                                                   ( ( _ _ P O R T _ _ )   = =   A F I O _ E V E N T O U T _ P O R T _ C )   | |   \ 
                                                                                   ( ( _ _ P O R T _ _ )   = =   A F I O _ E V E N T O U T _ P O R T _ D )   | |   \ 
                                                                                   ( ( _ _ P O R T _ _ )   = =   A F I O _ E V E N T O U T _ P O R T _ E ) ) 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   G P I O E x _ A F I O _ A F _ R E M A P P I N G   A l t e r n a t e   F u n c t i o n   R e m a p p i n g 
     *   @ b r i e f   T h i s   s e c t i o n   p r o p o s e   d e f i n i t i o n   t o   r e m a p   t h e   a l t e r n a t e   f u n c t i o n   t o   s o m e   o t h e r   p o r t / p i n s . 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   S P I 1   a l t e r n a t e   f u n c t i o n   N S S ,   S C K ,   M I S O   a n d   M O S I . 
     *   @ n o t e     E N A B L E :   R e m a p           ( N S S / P A 1 5 ,   S C K / P B 3 ,   M I S O / P B 4 ,   M O S I / P B 5 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S P I 1 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ S P I 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   S P I 1   a l t e r n a t e   f u n c t i o n   N S S ,   S C K ,   M I S O   a n d   M O S I . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( N S S / P A 4 ,     S C K / P A 5 ,   M I S O / P A 6 ,   M O S I / P A 7 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S P I 1 _ D I S A B L E ( )     A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ S P I 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   I 2 C 1   a l t e r n a t e   f u n c t i o n   S C L   a n d   S D A . 
     *   @ n o t e     E N A B L E :   R e m a p           ( S C L / P B 8 ,   S D A / P B 9 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ I 2 C 1 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ I 2 C 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   I 2 C 1   a l t e r n a t e   f u n c t i o n   S C L   a n d   S D A . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( S C L / P B 6 ,   S D A / P B 7 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ I 2 C 1 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ I 2 C 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   U S A R T 1   a l t e r n a t e   f u n c t i o n   T X   a n d   R X . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T X / P B 6 ,   R X / P B 7 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ U S A R T 1 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ U S A R T 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   U S A R T 1   a l t e r n a t e   f u n c t i o n   T X   a n d   R X . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T X / P A 9 ,   R X / P A 1 0 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ U S A R T 1 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ U S A R T 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   U S A R T 2   a l t e r n a t e   f u n c t i o n   C T S ,   R T S ,   C K ,   T X   a n d   R X . 
     *   @ n o t e     E N A B L E :   R e m a p           ( C T S / P D 3 ,   R T S / P D 4 ,   T X / P D 5 ,   R X / P D 6 ,   C K / P D 7 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ U S A R T 2 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ U S A R T 2 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   U S A R T 2   a l t e r n a t e   f u n c t i o n   C T S ,   R T S ,   C K ,   T X   a n d   R X . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( C T S / P A 0 ,   R T S / P A 1 ,   T X / P A 2 ,   R X / P A 3 ,   C K / P A 4 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ U S A R T 2 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ U S A R T 2 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   U S A R T 3   a l t e r n a t e   f u n c t i o n   C T S ,   R T S ,   C K ,   T X   a n d   R X . 
     *   @ n o t e     E N A B L E :   F u l l   r e m a p           ( T X / P D 8 ,     R X / P D 9 ,     C K / P D 1 0 ,   C T S / P D 1 1 ,   R T S / P D 1 2 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ U S A R T 3 _ E N A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ U S A R T 3 _ R E M A P _ F U L L R E M A P ,   A F I O _ M A P R _ U S A R T 3 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   U S A R T 3   a l t e r n a t e   f u n c t i o n   C T S ,   R T S ,   C K ,   T X   a n d   R X . 
     *   @ n o t e     P A R T I A L :   P a r t i a l   r e m a p   ( T X / P C 1 0 ,   R X / P C 1 1 ,   C K / P C 1 2 ,   C T S / P B 1 3 ,   R T S / P B 1 4 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ U S A R T 3 _ P A R T I A L ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ U S A R T 3 _ R E M A P _ P A R T I A L R E M A P ,   A F I O _ M A P R _ U S A R T 3 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   U S A R T 3   a l t e r n a t e   f u n c t i o n   C T S ,   R T S ,   C K ,   T X   a n d   R X . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p             ( T X / P B 1 0 ,   R X / P B 1 1 ,   C K / P B 1 2 ,   C T S / P B 1 3 ,   R T S / P B 1 4 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ U S A R T 3 _ D I S A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ U S A R T 3 _ R E M A P _ N O R E M A P ,   A F I O _ M A P R _ U S A R T 3 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 ,   1 N   t o   3 N ,   e x t e r n a l   t r i g g e r   ( E T R )   a n d   B r e a k   i n p u t   ( B K I N ) 
     *   @ n o t e     E N A B L E :   F u l l   r e m a p           ( E T R / P E 7 ,     C H 1 / P E 9 ,   C H 2 / P E 1 1 ,   C H 3 / P E 1 3 ,   C H 4 / P E 1 4 ,   B K I N / P E 1 5 ,   C H 1 N / P E 8 ,     C H 2 N / P E 1 0 ,   C H 3 N / P E 1 2 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 _ E N A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 1 _ R E M A P _ F U L L R E M A P ,   A F I O _ M A P R _ T I M 1 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 ,   1 N   t o   3 N ,   e x t e r n a l   t r i g g e r   ( E T R )   a n d   B r e a k   i n p u t   ( B K I N ) 
     *   @ n o t e     P A R T I A L :   P a r t i a l   r e m a p   ( E T R / P A 1 2 ,   C H 1 / P A 8 ,   C H 2 / P A 9 ,     C H 3 / P A 1 0 ,   C H 4 / P A 1 1 ,   B K I N / P A 6 ,     C H 1 N / P A 7 ,     C H 2 N / P B 0 ,     C H 3 N / P B 1 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 _ P A R T I A L ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 1 _ R E M A P _ P A R T I A L R E M A P ,   A F I O _ M A P R _ T I M 1 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 ,   1 N   t o   3 N ,   e x t e r n a l   t r i g g e r   ( E T R )   a n d   B r e a k   i n p u t   ( B K I N ) 
     *   @ n o t e     D I S A B L E :   N o   r e m a p             ( E T R / P A 1 2 ,   C H 1 / P A 8 ,   C H 2 / P A 9 ,     C H 3 / P A 1 0 ,   C H 4 / P A 1 1 ,   B K I N / P B 1 2 ,   C H 1 N / P B 1 3 ,   C H 2 N / P B 1 4 ,   C H 3 N / P B 1 5 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 _ D I S A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 1 _ R E M A P _ N O R E M A P ,   A F I O _ M A P R _ T I M 1 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 2   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4   a n d   e x t e r n a l   t r i g g e r   ( E T R ) 
     *   @ n o t e     E N A B L E :   F u l l   r e m a p               ( C H 1 / E T R / P A 1 5 ,   C H 2 / P B 3 ,   C H 3 / P B 1 0 ,   C H 4 / P B 1 1 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 2 _ E N A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 2 _ R E M A P _ F U L L R E M A P ,   A F I O _ M A P R _ T I M 2 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 2   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4   a n d   e x t e r n a l   t r i g g e r   ( E T R ) 
     *   @ n o t e     P A R T I A L _ 2 :   P a r t i a l   r e m a p   ( C H 1 / E T R / P A 0 ,     C H 2 / P A 1 ,   C H 3 / P B 1 0 ,   C H 4 / P B 1 1 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 2 _ P A R T I A L _ 2 ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 2 _ R E M A P _ P A R T I A L R E M A P 2 ,   A F I O _ M A P R _ T I M 2 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 2   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4   a n d   e x t e r n a l   t r i g g e r   ( E T R ) 
     *   @ n o t e     P A R T I A L _ 1 :   P a r t i a l   r e m a p   ( C H 1 / E T R / P A 1 5 ,   C H 2 / P B 3 ,   C H 3 / P A 2 ,     C H 4 / P A 3 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 2 _ P A R T I A L _ 1 ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 2 _ R E M A P _ P A R T I A L R E M A P 1 ,   A F I O _ M A P R _ T I M 2 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 2   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4   a n d   e x t e r n a l   t r i g g e r   ( E T R ) 
     *   @ n o t e     D I S A B L E :   N o   r e m a p                 ( C H 1 / E T R / P A 0 ,     C H 2 / P A 1 ,   C H 3 / P A 2 ,     C H 4 / P A 3 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 2 _ D I S A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 2 _ R E M A P _ N O R E M A P ,   A F I O _ M A P R _ T I M 2 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 3   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 
     *   @ n o t e     E N A B L E :   F u l l   r e m a p           ( C H 1 / P C 6 ,   C H 2 / P C 7 ,   C H 3 / P C 8 ,   C H 4 / P C 9 ) 
     *   @ n o t e     T I M 3 _ E T R   o n   P E 0   i s   n o t   r e - m a p p e d . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 3 _ E N A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 3 _ R E M A P _ F U L L R E M A P ,   A F I O _ M A P R _ T I M 3 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 3   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 
     *   @ n o t e     P A R T I A L :   P a r t i a l   r e m a p   ( C H 1 / P B 4 ,   C H 2 / P B 5 ,   C H 3 / P B 0 ,   C H 4 / P B 1 ) 
     *   @ n o t e     T I M 3 _ E T R   o n   P E 0   i s   n o t   r e - m a p p e d . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 3 _ P A R T I A L ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 3 _ R E M A P _ P A R T I A L R E M A P ,   A F I O _ M A P R _ T I M 3 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 3   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 
     *   @ n o t e     D I S A B L E :   N o   r e m a p             ( C H 1 / P A 6 ,   C H 2 / P A 7 ,   C H 3 / P B 0 ,   C H 4 / P B 1 ) 
     *   @ n o t e     T I M 3 _ E T R   o n   P E 0   i s   n o t   r e - m a p p e d . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 3 _ D I S A B L E ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ T I M 3 _ R E M A P _ N O R E M A P ,   A F I O _ M A P R _ T I M 3 _ R E M A P _ F U L L R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 4   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 . 
     *   @ n o t e     E N A B L E :   F u l l   r e m a p   ( T I M 4 _ C H 1 / P D 1 2 ,   T I M 4 _ C H 2 / P D 1 3 ,   T I M 4 _ C H 3 / P D 1 4 ,   T I M 4 _ C H 4 / P D 1 5 ) 
     *   @ n o t e     T I M 4 _ E T R   o n   P E 0   i s   n o t   r e - m a p p e d . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 4 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ T I M 4 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 4   a l t e r n a t e   f u n c t i o n   c h a n n e l s   1   t o   4 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p     ( T I M 4 _ C H 1 / P B 6 ,     T I M 4 _ C H 2 / P B 7 ,     T I M 4 _ C H 3 / P B 8 ,     T I M 4 _ C H 4 / P B 9 ) 
     *   @ n o t e     T I M 4 _ E T R   o n   P E 0   i s   n o t   r e - m a p p e d . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 4 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ T I M 4 _ R E M A P ) 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ C A N _ R E M A P _ R E M A P 1 ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   o r   d i s a b l e   t h e   r e m a p p i n g   o f   C A N   a l t e r n a t e   f u n c t i o n   C A N _ R X   a n d   C A N _ T X   i n   d e v i c e s   w i t h   a   s i n g l e   C A N   i n t e r f a c e . 
     *   @ n o t e     C A S E   1 :   C A N _ R X   m a p p e d   t o   P A 1 1 ,   C A N _ T X   m a p p e d   t o   P A 1 2 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ C A N 1 _ 1 ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ C A N _ R E M A P _ R E M A P 1 ,   A F I O _ M A P R _ C A N _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   o r   d i s a b l e   t h e   r e m a p p i n g   o f   C A N   a l t e r n a t e   f u n c t i o n   C A N _ R X   a n d   C A N _ T X   i n   d e v i c e s   w i t h   a   s i n g l e   C A N   i n t e r f a c e . 
     *   @ n o t e     C A S E   2 :   C A N _ R X   m a p p e d   t o   P B 8 ,     C A N _ T X   m a p p e d   t o   P B 9   ( n o t   a v a i l a b l e   o n   3 6 - p i n   p a c k a g e ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ C A N 1 _ 2 ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ C A N _ R E M A P _ R E M A P 2 ,   A F I O _ M A P R _ C A N _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   o r   d i s a b l e   t h e   r e m a p p i n g   o f   C A N   a l t e r n a t e   f u n c t i o n   C A N _ R X   a n d   C A N _ T X   i n   d e v i c e s   w i t h   a   s i n g l e   C A N   i n t e r f a c e . 
     *   @ n o t e     C A S E   3 :   C A N _ R X   m a p p e d   t o   P D 0 ,     C A N _ T X   m a p p e d   t o   P D 1 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ C A N 1 _ 3 ( )     A F I O _ R E M A P _ P A R T I A L ( A F I O _ M A P R _ C A N _ R E M A P _ R E M A P 3 ,   A F I O _ M A P R _ C A N _ R E M A P ) 
 
 # e n d i f 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   P D 0   a n d   P D 1 .   W h e n   t h e   H S E   o s c i l l a t o r   i s   n o t   u s e d 
     *                 ( a p p l i c a t i o n   r u n n i n g   o n   i n t e r n a l   8   M H z   R C )   P D 0   a n d   P D 1   c a n   b e   m a p p e d   o n   O S C _ I N   a n d 
     *                 O S C _ O U T .   T h i s   i s   a v a i l a b l e   o n l y   o n   3 6 ,   4 8   a n d   6 4   p i n s   p a c k a g e s   ( P D 0   a n d   P D 1   a r e   a v a i l a b l e 
     *                 o n   1 0 0 - p i n   a n d   1 4 4 - p i n   p a c k a g e s ,   n o   n e e d   f o r   r e m a p p i n g ) . 
     *   @ n o t e     E N A B L E :   P D 0   r e m a p p e d   o n   O S C _ I N ,   P D 1   r e m a p p e d   o n   O S C _ O U T . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ P D 0 1 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ P D 0 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   P D 0   a n d   P D 1 .   W h e n   t h e   H S E   o s c i l l a t o r   i s   n o t   u s e d 
     *                 ( a p p l i c a t i o n   r u n n i n g   o n   i n t e r n a l   8   M H z   R C )   P D 0   a n d   P D 1   c a n   b e   m a p p e d   o n   O S C _ I N   a n d 
     *                 O S C _ O U T .   T h i s   i s   a v a i l a b l e   o n l y   o n   3 6 ,   4 8   a n d   6 4   p i n s   p a c k a g e s   ( P D 0   a n d   P D 1   a r e   a v a i l a b l e 
     *                 o n   1 0 0 - p i n   a n d   1 4 4 - p i n   p a c k a g e s ,   n o   n e e d   f o r   r e m a p p i n g ) . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p p i n g   o f   P D 0   a n d   P D 1 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ P D 0 1 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ P D 0 1 _ R E M A P ) 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ T I M 5 C H 4 _ I R E M A P ) 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 5 C H 4 . 
     *   @ n o t e     E N A B L E :   L S I   i n t e r n a l   c l o c k   i s   c o n n e c t e d   t o   T I M 5 _ C H 4   i n p u t   f o r   c a l i b r a t i o n   p u r p o s e . 
     *   @ n o t e     T h i s   f u n c t i o n   i s   a v a i l a b l e   o n l y   i n   h i g h   d e n s i t y   v a l u e   l i n e   d e v i c e s . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 5 C H 4 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ T I M 5 C H 4 _ I R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 5 C H 4 . 
     *   @ n o t e     D I S A B L E :   T I M 5 _ C H 4   i s   c o n n e c t e d   t o   P A 3 
     *   @ n o t e     T h i s   f u n c t i o n   i s   a v a i l a b l e   o n l y   i n   h i g h   d e n s i t y   v a l u e   l i n e   d e v i c e s . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 5 C H 4 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ T I M 5 C H 4 _ I R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ E T H _ R E M A P ) 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   E t h e r n e t   M A C   c o n n e c t i o n s   w i t h   t h e   P H Y . 
     *   @ n o t e     E N A B L E :   R e m a p           ( R X _ D V - C R S _ D V / P D 8 ,   R X D 0 / P D 9 ,   R X D 1 / P D 1 0 ,   R X D 2 / P D 1 1 ,   R X D 3 / P D 1 2 ) 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ E T H _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ E T H _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   E t h e r n e t   M A C   c o n n e c t i o n s   w i t h   t h e   P H Y . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( R X _ D V - C R S _ D V / P A 7 ,   R X D 0 / P C 4 ,   R X D 1 / P C 5 ,     R X D 2 / P B 0 ,     R X D 3 / P B 1 ) 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ E T H _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ E T H _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ C A N 2 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   C A N 2   a l t e r n a t e   f u n c t i o n   C A N 2 _ R X   a n d   C A N 2 _ T X . 
     *   @ n o t e     E N A B L E :   R e m a p           ( C A N 2 _ R X / P B 5 ,     C A N 2 _ T X / P B 6 ) 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ C A N 2 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ C A N 2 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   C A N 2   a l t e r n a t e   f u n c t i o n   C A N 2 _ R X   a n d   C A N 2 _ T X . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( C A N 2 _ R X / P B 1 2 ,   C A N 2 _ T X / P B 1 3 ) 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ C A N 2 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ C A N 2 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ M I I _ R M I I _ S E L ) 
 / * * 
     *   @ b r i e f   C o n f i g u r e s   t h e   E t h e r n e t   M A C   i n t e r n a l l y   f o r   u s e   w i t h   a n   e x t e r n a l   M I I   o r   R M I I   P H Y . 
     *   @ n o t e     E T H _ R M I I :   C o n f i g u r e   E t h e r n e t   M A C   f o r   c o n n e c t i o n   w i t h   a n   R M I I   P H Y 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ E T H _ R M I I ( )   A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ M I I _ R M I I _ S E L ) 
 
 / * * 
     *   @ b r i e f   C o n f i g u r e s   t h e   E t h e r n e t   M A C   i n t e r n a l l y   f o r   u s e   w i t h   a n   e x t e r n a l   M I I   o r   R M I I   P H Y . 
     *   @ n o t e     E T H _ M I I :   C o n f i g u r e   E t h e r n e t   M A C   f o r   c o n n e c t i o n   w i t h   a n   M I I   P H Y 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ E T H _ M I I ( )     A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ M I I _ R M I I _ S E L ) 
 # e n d i f 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   A D C 1 _ E T R G I N J   ( A D C   1   E x t e r n a l   t r i g g e r   i n j e c t e d   c o n v e r s i o n ) . 
     *   @ n o t e     E N A B L E :   A D C 1   E x t e r n a l   E v e n t   i n j e c t e d   c o n v e r s i o n   i s   c o n n e c t e d   t o   T I M 8   C h a n n e l 4 . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 1 _ E T R G I N J _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ A D C 1 _ E T R G I N J _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   A D C 1 _ E T R G I N J   ( A D C   1   E x t e r n a l   t r i g g e r   i n j e c t e d   c o n v e r s i o n ) . 
     *   @ n o t e     D I S A B L E :   A D C 1   E x t e r n a l   t r i g g e r   i n j e c t e d   c o n v e r s i o n   i s   c o n n e c t e d   t o   E X T I 1 5 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 1 _ E T R G I N J _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ A D C 1 _ E T R G I N J _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   A D C 1 _ E T R G R E G   ( A D C   1   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n ) . 
     *   @ n o t e     E N A B L E :   A D C 1   E x t e r n a l   E v e n t   r e g u l a r   c o n v e r s i o n   i s   c o n n e c t e d   t o   T I M 8   T R G 0 . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 1 _ E T R G R E G _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ A D C 1 _ E T R G R E G _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   A D C 1 _ E T R G R E G   ( A D C   1   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n ) . 
     *   @ n o t e     D I S A B L E :   A D C 1   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n   i s   c o n n e c t e d   t o   E X T I 1 1 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 1 _ E T R G R E G _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ A D C 1 _ E T R G R E G _ R E M A P ) 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ A D C 2 _ E T R G I N J _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   A D C 2 _ E T R G R E G   ( A D C   2   E x t e r n a l   t r i g g e r   i n j e c t e d   c o n v e r s i o n ) . 
     *   @ n o t e     E N A B L E :   A D C 2   E x t e r n a l   E v e n t   i n j e c t e d   c o n v e r s i o n   i s   c o n n e c t e d   t o   T I M 8   C h a n n e l 4 . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 2 _ E T R G I N J _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ A D C 2 _ E T R G I N J _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   A D C 2 _ E T R G R E G   ( A D C   2   E x t e r n a l   t r i g g e r   i n j e c t e d   c o n v e r s i o n ) . 
     *   @ n o t e     D I S A B L E :   A D C 2   E x t e r n a l   t r i g g e r   i n j e c t e d   c o n v e r s i o n   i s   c o n n e c t e d   t o   E X T I 1 5 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 2 _ E T R G I N J _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ A D C 2 _ E T R G I N J _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d   ( A F I O _ M A P R _ A D C 2 _ E T R G R E G _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   A D C 2 _ E T R G R E G   ( A D C   2   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n ) . 
     *   @ n o t e     E N A B L E :   A D C 2   E x t e r n a l   E v e n t   r e g u l a r   c o n v e r s i o n   i s   c o n n e c t e d   t o   T I M 8   T R G 0 . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 2 _ E T R G R E G _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ A D C 2 _ E T R G R E G _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   A D C 2 _ E T R G R E G   ( A D C   2   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n ) . 
     *   @ n o t e     D I S A B L E :   A D C 2   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n   i s   c o n n e c t e d   t o   E X T I 1 1 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ A D C 2 _ E T R G R E G _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ A D C 2 _ E T R G R E G _ R E M A P ) 
 # e n d i f 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   S e r i a l   w i r e   J T A G   c o n f i g u r a t i o n 
     *   @ n o t e     E N A B L E :   F u l l   S W J   ( J T A G - D P   +   S W - D P ) :   R e s e t   S t a t e 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S W J _ E N A B L E ( )     A F I O _ D B G A F R _ C O N F I G ( A F I O _ M A P R _ S W J _ C F G _ R E S E T ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   S e r i a l   w i r e   J T A G   c o n f i g u r a t i o n 
     *   @ n o t e     N O N J T R S T :   F u l l   S W J   ( J T A G - D P   +   S W - D P )   b u t   w i t h o u t   N J T R S T 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S W J _ N O N J T R S T ( )     A F I O _ D B G A F R _ C O N F I G ( A F I O _ M A P R _ S W J _ C F G _ N O J N T R S T ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   S e r i a l   w i r e   J T A G   c o n f i g u r a t i o n 
     *   @ n o t e     N O J T A G :   J T A G - D P   D i s a b l e d   a n d   S W - D P   E n a b l e d 
     *   @ r e t v a l   N o n e 
     * / 
 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S W J _ N O J T A G ( )     A F I O _ D B G A F R _ C O N F I G ( A F I O _ M A P R _ S W J _ C F G _ J T A G D I S A B L E ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   S e r i a l   w i r e   J T A G   c o n f i g u r a t i o n 
     *   @ n o t e     D I S A B L E :   J T A G - D P   D i s a b l e d   a n d   S W - D P   D i s a b l e d 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S W J _ D I S A B L E ( )     A F I O _ D B G A F R _ C O N F I G ( A F I O _ M A P R _ S W J _ C F G _ D I S A B L E ) 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ S P I 3 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   S P I 3   a l t e r n a t e   f u n c t i o n s   S P I 3 _ N S S / I 2 S 3 _ W S ,   S P I 3 _ S C K / I 2 S 3 _ C K ,   S P I 3 _ M I S O ,   S P I 3 _ M O S I / I 2 S 3 _ S D . 
     *   @ n o t e     E N A B L E :   R e m a p           ( S P I 3 _ N S S - I 2 S 3 _ W S / P A 4 ,     S P I 3 _ S C K - I 2 S 3 _ C K / P C 1 0 ,   S P I 3 _ M I S O / P C 1 1 ,   S P I 3 _ M O S I - I 2 S 3 _ S D / P C 1 2 ) 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S P I 3 _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ S P I 3 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   S P I 3   a l t e r n a t e   f u n c t i o n s   S P I 3 _ N S S / I 2 S 3 _ W S ,   S P I 3 _ S C K / I 2 S 3 _ C K ,   S P I 3 _ M I S O ,   S P I 3 _ M O S I / I 2 S 3 _ S D . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( S P I 3 _ N S S - I 2 S 3 _ W S / P A 1 5 ,   S P I 3 _ S C K - I 2 S 3 _ C K / P B 3 ,     S P I 3 _ M I S O / P B 4 ,     S P I 3 _ M O S I - I 2 S 3 _ S D / P B 5 ) . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ S P I 3 _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ S P I 3 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ T I M 2 I T R 1 _ I R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l   o f   T I M 2 _ I T R 1   i n t e r n a l   m a p p i n g . 
     *   @ n o t e     T O _ U S B :   C o n n e c t   U S B   O T G   S O F   ( S t a r t   o f   F r a m e )   o u t p u t   t o   T I M 2 _ I T R 1   f o r   c a l i b r a t i o n   p u r p o s e s . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ T I M 2 I T R 1 _ T O _ U S B ( )   A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ T I M 2 I T R 1 _ I R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l   o f   T I M 2 _ I T R 1   i n t e r n a l   m a p p i n g . 
     *   @ n o t e     T O _ E T H :   C o n n e c t   T I M 2 _ I T R 1   i n t e r n a l l y   t o   t h e   E t h e r n e t   P T P   o u t p u t   f o r   c a l i b r a t i o n   p u r p o s e s . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ T I M 2 I T R 1 _ T O _ E T H ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ T I M 2 I T R 1 _ I R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R _ P T P _ P P S _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   A D C 2 _ E T R G R E G   ( A D C   2   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n ) . 
     *   @ n o t e     E N A B L E :   P T P _ P P S   i s   o u t p u t   o n   P B 5   p i n . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ E T H _ P T P _ P P S _ E N A B L E ( )     A F I O _ R E M A P _ E N A B L E ( A F I O _ M A P R _ P T P _ P P S _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   A D C 2 _ E T R G R E G   ( A D C   2   E x t e r n a l   t r i g g e r   r e g u l a r   c o n v e r s i o n ) . 
     *   @ n o t e     D I S A B L E :   P T P _ P P S   n o t   o u t p u t   o n   P B 5   p i n . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   c o n n e c t i v i t y   l i n e   d e v i c e s   a n d   i s   r e s e r v e d   o t h e r w i s e . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ E T H _ P T P _ P P S _ D I S A B L E ( )   A F I O _ R E M A P _ D I S A B L E ( A F I O _ M A P R _ P T P _ P P S _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 9 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 9 _ C H 1   a n d   T I M 9 _ C H 2 . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T I M 9 _ C H 1   o n   P E 5   a n d   T I M 9 _ C H 2   o n   P E 6 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 9 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 9 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 9 _ C H 1   a n d   T I M 9 _ C H 2 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 9 _ C H 1   o n   P A 2   a n d   T I M 9 _ C H 2   o n   P A 3 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 9 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 9 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 0 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 0 _ C H 1 . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T I M 1 0 _ C H 1   o n   P F 6 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 0 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 0 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 0 _ C H 1 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 1 0 _ C H 1   o n   P B 8 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 0 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 0 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 1 _ R E M A P ) 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 1 _ C H 1 . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T I M 1 1 _ C H 1   o n   P F 7 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 1 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 1 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 1 _ C H 1 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 1 1 _ C H 1   o n   P B 9 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 1 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 1 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 3 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 3 _ C H 1 . 
     *   @ n o t e     E N A B L E :   R e m a p           S T M 3 2 F 1 0 0 : ( T I M 1 3 _ C H 1   o n   P F 8 ) .   O t h e r s : ( T I M 1 3 _ C H 1   o n   P B 0 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 3 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 3 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 3 _ C H 1 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   S T M 3 2 F 1 0 0 : ( T I M 1 3 _ C H 1   o n   P A 6 ) .   O t h e r s : ( T I M 1 3 _ C H 1   o n   P C 8 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 3 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 3 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 4 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 4 _ C H 1 . 
     *   @ n o t e     E N A B L E :   R e m a p           S T M 3 2 F 1 0 0 : ( T I M 1 4 _ C H 1   o n   P B 1 ) .   O t h e r s : ( T I M 1 4 _ C H 1   o n   P F 9 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 4 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 4 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 4 _ C H 1 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   S T M 3 2 F 1 0 0 : ( T I M 1 4 _ C H 1   o n   P C 9 ) .   O t h e r s : ( T I M 1 4 _ C H 1   o n   P A 7 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 4 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 4 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ F S M C _ N A D V _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l s   t h e   u s e   o f   t h e   o p t i o n a l   F S M C _ N A D V   s i g n a l . 
     *   @ n o t e     D I S C O N N E C T E D :   T h e   N A D V   s i g n a l   i s   n o t   c o n n e c t e d .   T h e   I / O   p i n   c a n   b e   u s e d   b y   a n o t h e r   p e r i p h e r a l . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ F S M C N A D V _ D I S C O N N E C T E D ( )   S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ F S M C _ N A D V _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l s   t h e   u s e   o f   t h e   o p t i o n a l   F S M C _ N A D V   s i g n a l . 
     *   @ n o t e     C O N N E C T E D :   T h e   N A D V   s i g n a l   i s   c o n n e c t e d   t o   t h e   o u t p u t   ( d e f a u l t ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ F S M C N A D V _ C O N N E C T E D ( )         C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ F S M C _ N A D V _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 5 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 5 _ C H 1   a n d   T I M 1 5 _ C H 2 . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T I M 1 5 _ C H 1   o n   P B 1 4   a n d   T I M 1 5 _ C H 2   o n   P B 1 5 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 5 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 5 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 5 _ C H 1   a n d   T I M 1 5 _ C H 2 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 1 5 _ C H 1   o n   P A 2     a n d   T I M 1 5 _ C H 2   o n   P A 3 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 5 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 5 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 6 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 6 _ C H 1 . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T I M 1 6 _ C H 1   o n   P A 6 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 6 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 6 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 6 _ C H 1 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 1 6 _ C H 1   o n   P B 8 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 6 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 6 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 7 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 7 _ C H 1 . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T I M 1 7 _ C H 1   o n   P A 7 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 7 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 7 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 7 _ C H 1 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 1 7 _ C H 1   o n   P B 9 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 7 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 7 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ C E C _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   C E C . 
     *   @ n o t e     E N A B L E :   R e m a p           ( C E C   o n   P B 1 0 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ C E C _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ C E C _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   C E C . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( C E C   o n   P B 8 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ C E C _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ C E C _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 _ D M A _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l s   t h e   m a p p i n g   o f   t h e   T I M 1 _ C H 1   T I M 1 _ C H 2   D M A   r e q u e s t s   o n t o   t h e   D M A 1   c h a n n e l s . 
     *   @ n o t e     E N A B L E :   R e m a p   ( T I M 1 _ C H 1   D M A   r e q u e s t / D M A 1   C h a n n e l 6 ,   T I M 1 _ C H 2   D M A   r e q u e s t / D M A 1   C h a n n e l 6 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 D M A _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 _ D M A _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l s   t h e   m a p p i n g   o f   t h e   T I M 1 _ C H 1   T I M 1 _ C H 2   D M A   r e q u e s t s   o n t o   t h e   D M A 1   c h a n n e l s . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 1 _ C H 1   D M A   r e q u e s t / D M A 1   C h a n n e l 2 ,   T I M 1 _ C H 2   D M A   r e q u e s t / D M A 1   C h a n n e l 3 ) . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 D M A _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 _ D M A _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 6 7 _ D A C _ D M A _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l s   t h e   m a p p i n g   o f   t h e   T I M 6 _ D A C 1   a n d   T I M 7 _ D A C 2   D M A   r e q u e s t s   o n t o   t h e   D M A 1   c h a n n e l s . 
     *   @ n o t e     E N A B L E :   R e m a p   ( T I M 6 _ D A C 1   D M A   r e q u e s t / D M A 1   C h a n n e l 3 ,   T I M 7 _ D A C 2   D M A   r e q u e s t / D M A 1   C h a n n e l 4 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 6 7 D A C D M A _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 6 7 _ D A C _ D M A _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   C o n t r o l s   t h e   m a p p i n g   o f   t h e   T I M 6 _ D A C 1   a n d   T I M 7 _ D A C 2   D M A   r e q u e s t s   o n t o   t h e   D M A 1   c h a n n e l s . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 6 _ D A C 1   D M A   r e q u e s t / D M A 2   C h a n n e l 3 ,   T I M 7 _ D A C 2   D M A   r e q u e s t / D M A 2   C h a n n e l 4 ) 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 6 7 D A C D M A _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 6 7 _ D A C _ D M A _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ T I M 1 2 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   t h e   r e m a p p i n g   o f   T I M 1 2 _ C H 1   a n d   T I M 1 2 _ C H 2 . 
     *   @ n o t e     E N A B L E :   R e m a p           ( T I M 1 2 _ C H 1   o n   P B 1 2   a n d   T I M 1 2 _ C H 2   o n   P B 1 3 ) . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   h i g h   d e n s i t y   v a l u e   l i n e   d e v i c e s . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 2 _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 2 _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   r e m a p p i n g   o f   T I M 1 2 _ C H 1   a n d   T I M 1 2 _ C H 2 . 
     *   @ n o t e     D I S A B L E :   N o   r e m a p   ( T I M 1 2 _ C H 1   o n   P C 4     a n d   T I M 1 2 _ C H 2   o n   P C 5 ) . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   h i g h   d e n s i t y   v a l u e   l i n e   d e v i c e s . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ T I M 1 2 _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ T I M 1 2 _ R E M A P ) 
 # e n d i f 
 
 # i f   d e f i n e d ( A F I O _ M A P R 2 _ M I S C _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   M i s c e l l a n e o u s   f e a t u r e s   r e m a p p i n g . 
     *                 T h i s   b i t   i s   s e t   a n d   c l e a r e d   b y   s o f t w a r e .   I t   c o n t r o l s   m i s c e l l a n e o u s   f e a t u r e s . 
     *                 T h e   D M A 2   c h a n n e l   5   i n t e r r u p t   p o s i t i o n   i n   t h e   v e c t o r   t a b l e . 
     *                 T h e   t i m e r   s e l e c t i o n   f o r   D A C   t r i g g e r   3   ( T S E L [ 2 : 0 ]   =   0 1 1 ,   f o r   m o r e   d e t a i l s   r e f e r   t o   t h e   D A C _ C R   r e g i s t e r ) . 
     *   @ n o t e     E N A B L E :   D M A 2   c h a n n e l   5   i n t e r r u p t   i s   m a p p e d   s e p a r a t e l y   a t   p o s i t i o n   6 0   a n d   T I M 1 5   T R G O   e v e n t   i s 
     *                 s e l e c t e d   a s   D A C   T r i g g e r   3 ,   T I M 1 5   t r i g g e r s   T I M 1 / 3 . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   h i g h   d e n s i t y   v a l u e   l i n e   d e v i c e s . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ M I S C _ E N A B L E ( )     S E T _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ M I S C _ R E M A P ) 
 
 / * * 
     *   @ b r i e f   M i s c e l l a n e o u s   f e a t u r e s   r e m a p p i n g . 
     *                 T h i s   b i t   i s   s e t   a n d   c l e a r e d   b y   s o f t w a r e .   I t   c o n t r o l s   m i s c e l l a n e o u s   f e a t u r e s . 
     *                 T h e   D M A 2   c h a n n e l   5   i n t e r r u p t   p o s i t i o n   i n   t h e   v e c t o r   t a b l e . 
     *                 T h e   t i m e r   s e l e c t i o n   f o r   D A C   t r i g g e r   3   ( T S E L [ 2 : 0 ]   =   0 1 1 ,   f o r   m o r e   d e t a i l s   r e f e r   t o   t h e   D A C _ C R   r e g i s t e r ) . 
     *   @ n o t e     D I S A B L E :   D M A 2   c h a n n e l   5   i n t e r r u p t   i s   m a p p e d   w i t h   D M A 2   c h a n n e l   4   a t   p o s i t i o n   5 9 ,   T I M 5   T R G O 
     *                 e v e n t   i s   s e l e c t e d   a s   D A C   T r i g g e r   3 ,   T I M 5   t r i g g e r s   T I M 1 / 3 . 
     *   @ n o t e     T h i s   b i t   i s   a v a i l a b l e   o n l y   i n   h i g h   d e n s i t y   v a l u e   l i n e   d e v i c e s . 
     *   @ r e t v a l   N o n e 
     * / 
 # d e f i n e   _ _ H A L _ A F I O _ R E M A P _ M I S C _ D I S A B L E ( )   C L E A R _ B I T ( A F I O - > M A P R 2 ,   A F I O _ M A P R 2 _ M I S C _ R E M A P ) 
 # e n d i f 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   G P I O E x _ P r i v a t e _ M a c r o s   G P I O E x   P r i v a t e   M a c r o s 
     *   @ { 
     * / 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 1 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 2 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x 6 ) 
 # d e f i n e   G P I O _ G E T _ I N D E X ( _ _ G P I O x _ _ )   ( ( ( _ _ G P I O x _ _ )   = =   ( G P I O A ) ) ?   0 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O B ) ) ?   1 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O C ) ) ?   2 u L   : 3 u L ) 
 # e l i f   d e f i n e d ( S T M 3 2 F 1 0 0 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
 # d e f i n e   G P I O _ G E T _ I N D E X ( _ _ G P I O x _ _ )   ( ( ( _ _ G P I O x _ _ )   = =   ( G P I O A ) ) ?   0 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O B ) ) ?   1 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O C ) ) ?   2 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O D ) ) ?   3 u L   : 4 u L ) 
 # e l i f   d e f i n e d ( S T M 3 2 F 1 0 0 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 1 x G )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) 
 # d e f i n e   G P I O _ G E T _ I N D E X ( _ _ G P I O x _ _ )   ( ( ( _ _ G P I O x _ _ )   = =   ( G P I O A ) ) ?   0 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O B ) ) ?   1 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O C ) ) ?   2 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O D ) ) ?   3 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O E ) ) ?   4 u L   : \ 
                                                                       ( ( _ _ G P I O x _ _ )   = =   ( G P I O F ) ) ?   5 u L   : 6 u L ) 
 # e n d i f 
 
 # d e f i n e   A F I O _ R E M A P _ E N A B L E ( R E M A P _ P I N )               d o {   u i n t 3 2 _ t   t m p r e g   =   A F I O - > M A P R ;   \ 
                                                                                               t m p r e g   | =   A F I O _ M A P R _ S W J _ C F G ;     \ 
                                                                                               t m p r e g   | =   R E M A P _ P I N ;                     \ 
                                                                                               A F I O - > M A P R   =   t m p r e g ;                     \ 
                                                                                               } w h i l e ( 0 u ) 
 
 # d e f i n e   A F I O _ R E M A P _ D I S A B L E ( R E M A P _ P I N )             d o {   u i n t 3 2 _ t   t m p r e g   =   A F I O - > M A P R ;     \ 
                                                                                               t m p r e g   | =   A F I O _ M A P R _ S W J _ C F G ;       \ 
                                                                                               t m p r e g   & =   ~ R E M A P _ P I N ;                     \ 
                                                                                               A F I O - > M A P R   =   t m p r e g ;                       \ 
                                                                                               } w h i l e ( 0 u ) 
 
 # d e f i n e   A F I O _ R E M A P _ P A R T I A L ( R E M A P _ P I N ,   R E M A P _ P I N _ M A S K )   d o {   u i n t 3 2 _ t   t m p r e g   =   A F I O - > M A P R ;   \ 
                                                                                                                     t m p r e g   & =   ~ R E M A P _ P I N _ M A S K ;         \ 
                                                                                                                     t m p r e g   | =   A F I O _ M A P R _ S W J _ C F G ;     \ 
                                                                                                                     t m p r e g   | =   R E M A P _ P I N ;                     \ 
                                                                                                                     A F I O - > M A P R   =   t m p r e g ;                     \ 
                                                                                                                     } w h i l e ( 0 u ) 
 
 # d e f i n e   A F I O _ D B G A F R _ C O N F I G ( D B G A F R _ S W J C F G )     d o {   u i n t 3 2 _ t   t m p r e g   =   A F I O - > M A P R ;           \ 
                                                                                               t m p r e g   & =   ~ A F I O _ M A P R _ S W J _ C F G _ M s k ;   \ 
                                                                                               t m p r e g   | =   D B G A F R _ S W J C F G ;                     \ 
                                                                                               A F I O - > M A P R   =   t m p r e g ;                             \ 
                                                                                               } w h i l e ( 0 u ) 
 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ a d d t o g r o u p   G P I O E x _ E x p o r t e d _ F u n c t i o n s 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   G P I O E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1 
     *   @ { 
     * / 
 v o i d   H A L _ G P I O E x _ C o n f i g E v e n t o u t ( u i n t 3 2 _ t   G P I O _ P o r t S o u r c e ,   u i n t 3 2 _ t   G P I O _ P i n S o u r c e ) ; 
 v o i d   H A L _ G P I O E x _ E n a b l e E v e n t o u t ( v o i d ) ; 
 v o i d   H A L _ G P I O E x _ D i s a b l e E v e n t o u t ( v o i d ) ; 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 # e n d i f   / *   S T M 3 2 F 1 x x _ H A L _ G P I O _ E X _ H   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 