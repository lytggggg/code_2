??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ r c c _ e x . c 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       E x t e n d e d   R C C   H A L   m o d u l e   d r i v e r . 
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g 
     *                     f u n c t i o n a l i t i e s   R C C   e x t e n s i o n   p e r i p h e r a l : 
     *                       +   E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     * 
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
 # i f d e f   H A L _ R C C _ M O D U L E _ E N A B L E D 
 
 / * *   @ d e f g r o u p   R C C E x   R C C E x 
     *   @ b r i e f   R C C   E x t e n s i o n   H A L   m o d u l e   d r i v e r . 
     *   @ { 
     * / 
 
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   R C C E x _ P r i v a t e _ C o n s t a n t s   R C C E x   P r i v a t e   C o n s t a n t s 
     *   @ { 
     * / 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   R C C E x _ P r i v a t e _ M a c r o s   R C C E x   P r i v a t e   M a c r o s 
     *   @ { 
     * / 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   R C C E x _ E x p o r t e d _ F u n c t i o n s   R C C E x   E x p o r t e d   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   R C C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     *     @ b r i e f     E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     * 
 @ v e r b a t i m 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                 # # # # #   E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s     # # # # # 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
         [ . . ] 
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   R C C   C l o c k s 
         f r e q u e n c i e s . 
         [ . . ] 
         ( @ )   I m p o r t a n t   n o t e :   C a r e   m u s t   b e   t a k e n   w h e n   H A L _ R C C E x _ P e r i p h C L K C o n f i g ( )   i s   u s e d   t o 
                 s e l e c t   t h e   R T C   c l o c k   s o u r c e ;   i n   t h i s   c a s e   t h e   B a c k u p   d o m a i n   w i l l   b e   r e s e t   i n 
                 o r d e r   t o   m o d i f y   t h e   R T C   C l o c k   s o u r c e ,   a s   c o n s e q u e n c e   R T C   r e g i s t e r s   ( i n c l u d i n g 
                 t h e   b a c k u p   r e g i s t e r s )   a r e   s e t   t o   t h e i r   r e s e t   v a l u e s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   R C C   e x t e n d e d   p e r i p h e r a l s   c l o c k s   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s   i n   t h e 
     *                   R C C _ P e r i p h C L K I n i t T y p e D e f . 
     *   @ p a r a m     P e r i p h C l k I n i t   p o i n t e r   t o   a n   R C C _ P e r i p h C L K I n i t T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   E x t e n d e d   P e r i p h e r a l s   c l o c k s ( R T C   c l o c k ) . 
     * 
     *   @ n o t e       C a r e   m u s t   b e   t a k e n   w h e n   H A L _ R C C E x _ P e r i p h C L K C o n f i g ( )   i s   u s e d   t o   s e l e c t 
     *                   t h e   R T C   c l o c k   s o u r c e ;   i n   t h i s   c a s e   t h e   B a c k u p   d o m a i n   w i l l   b e   r e s e t   i n 
     *                   o r d e r   t o   m o d i f y   t h e   R T C   C l o c k   s o u r c e ,   a s   c o n s e q u e n c e   R T C   r e g i s t e r s   ( i n c l u d i n g 
     *                   t h e   b a c k u p   r e g i s t e r s )   a r e   s e t   t o   t h e i r   r e s e t   v a l u e s . 
     * 
     *   @ n o t e       I n   c a s e   o f   S T M 3 2 F 1 0 5 x C   o r   S T M 3 2 F 1 0 7 x C   d e v i c e s ,   P L L I 2 S   w i l l   b e   e n a b l e d   i f   r e q u e s t e d   o n 
     *                   o n e   o f   2   I 2 S   i n t e r f a c e s .   W h e n   P L L I 2 S   i s   e n a b l e d ,   y o u   n e e d   t o   c a l l   H A L _ R C C E x _ D i s a b l e P L L I 2 S   t o 
     *                   m a n u a l l y   d i s a b l e   i t . 
     * 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ R C C E x _ P e r i p h C L K C o n f i g ( R C C _ P e r i p h C L K I n i t T y p e D e f     * P e r i p h C l k I n i t ) 
 { 
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ,   t e m p _ r e g   =   0 U ; 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
     u i n t 3 2 _ t     p l l a c t i v e   =   0 U ; 
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ R C C _ P E R I P H C L O C K ( P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n ) ) ; 
 
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   R T C / L C D   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - * / 
     i f   ( ( ( ( P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n )   &   R C C _ P E R I P H C L K _ R T C )   = =   R C C _ P E R I P H C L K _ R T C ) ) 
     { 
         F l a g S t a t u s   p w r c l k c h a n g e d   =   R E S E T ; 
 
         / *   c h e c k   f o r   R T C   P a r a m e t e r s   u s e d   t o   o u t p u t   R T C C L K   * / 
         a s s e r t _ p a r a m ( I S _ R C C _ R T C C L K S O U R C E ( P e r i p h C l k I n i t - > R T C C l o c k S e l e c t i o n ) ) ; 
 
         / *   A s   s o o n   a s   f u n c t i o n   i s   c a l l e d   t o   c h a n g e   R T C   c l o c k   s o u r c e ,   a c t i v a t i o n   o f   t h e 
               p o w e r   d o m a i n   i s   d o n e .   * / 
         / *   R e q u i r e s   t o   e n a b l e   w r i t e   a c c e s s   t o   B a c k u p   D o m a i n   o f   n e c e s s a r y   * / 
         i f   ( _ _ H A L _ R C C _ P W R _ I S _ C L K _ D I S A B L E D ( ) ) 
         { 
             _ _ H A L _ R C C _ P W R _ C L K _ E N A B L E ( ) ; 
             p w r c l k c h a n g e d   =   S E T ; 
         } 
 
         i f   ( H A L _ I S _ B I T _ C L R ( P W R - > C R ,   P W R _ C R _ D B P ) ) 
         { 
             / *   E n a b l e   w r i t e   a c c e s s   t o   B a c k u p   d o m a i n   * / 
             S E T _ B I T ( P W R - > C R ,   P W R _ C R _ D B P ) ; 
 
             / *   W a i t   f o r   B a c k u p   d o m a i n   W r i t e   p r o t e c t i o n   d i s a b l e   * / 
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
             w h i l e   ( H A L _ I S _ B I T _ C L R ( P W R - > C R ,   P W R _ C R _ D B P ) ) 
             { 
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   R C C _ D B P _ T I M E O U T _ V A L U E ) 
                 { 
                     r e t u r n   H A L _ T I M E O U T ; 
                 } 
             } 
         } 
 
         / *   R e s e t   t h e   B a c k u p   d o m a i n   o n l y   i f   t h e   R T C   C l o c k   s o u r c e   s e l e c t i o n   i s   m o d i f i e d   f r o m   r e s e t   v a l u e   * / 
         t e m p _ r e g   =   ( R C C - > B D C R   &   R C C _ B D C R _ R T C S E L ) ; 
         i f   ( ( t e m p _ r e g   ! =   0 x 0 0 0 0 0 0 0 0 U )   & &   ( t e m p _ r e g   ! =   ( P e r i p h C l k I n i t - > R T C C l o c k S e l e c t i o n   &   R C C _ B D C R _ R T C S E L ) ) ) 
         { 
             / *   S t o r e   t h e   c o n t e n t   o f   B D C R   r e g i s t e r   b e f o r e   t h e   r e s e t   o f   B a c k u p   D o m a i n   * / 
             t e m p _ r e g   =   ( R C C - > B D C R   &   ~ ( R C C _ B D C R _ R T C S E L ) ) ; 
             / *   R T C   C l o c k   s e l e c t i o n   c a n   b e   c h a n g e d   o n l y   i f   t h e   B a c k u p   D o m a i n   i s   r e s e t   * / 
             _ _ H A L _ R C C _ B A C K U P R E S E T _ F O R C E ( ) ; 
             _ _ H A L _ R C C _ B A C K U P R E S E T _ R E L E A S E ( ) ; 
             / *   R e s t o r e   t h e   C o n t e n t   o f   B D C R   r e g i s t e r   * / 
             R C C - > B D C R   =   t e m p _ r e g ; 
 
             / *   W a i t   f o r   L S E R D Y   i f   L S E   w a s   e n a b l e d   * / 
             i f   ( H A L _ I S _ B I T _ S E T ( t e m p _ r e g ,   R C C _ B D C R _ L S E O N ) ) 
             { 
                 / *   G e t   S t a r t   T i c k   * / 
                 t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
                 / *   W a i t   t i l l   L S E   i s   r e a d y   * / 
                 w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ L S E R D Y )   = =   R E S E T ) 
                 { 
                     i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   R C C _ L S E _ T I M E O U T _ V A L U E ) 
                     { 
                         r e t u r n   H A L _ T I M E O U T ; 
                     } 
                 } 
             } 
         } 
         _ _ H A L _ R C C _ R T C _ C O N F I G ( P e r i p h C l k I n i t - > R T C C l o c k S e l e c t i o n ) ; 
 
         / *   R e q u i r e   t o   d i s a b l e   p o w e r   c l o c k   i f   n e c e s s a r y   * / 
         i f   ( p w r c l k c h a n g e d   = =   S E T ) 
         { 
             _ _ H A L _ R C C _ P W R _ C L K _ D I S A B L E ( ) ; 
         } 
     } 
 
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   A D C   c l o c k   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - * / 
     i f   ( ( ( P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n )   &   R C C _ P E R I P H C L K _ A D C )   = =   R C C _ P E R I P H C L K _ A D C ) 
     { 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ R C C _ A D C P L L C L K _ D I V ( P e r i p h C l k I n i t - > A d c C l o c k S e l e c t i o n ) ) ; 
 
         / *   C o n f i g u r e   t h e   A D C   c l o c k   s o u r c e   * / 
         _ _ H A L _ R C C _ A D C _ C O N F I G ( P e r i p h C l k I n i t - > A d c C l o c k S e l e c t i o n ) ; 
     } 
 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 S 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - * / 
     i f   ( ( ( P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n )   &   R C C _ P E R I P H C L K _ I 2 S 2 )   = =   R C C _ P E R I P H C L K _ I 2 S 2 ) 
     { 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ R C C _ I 2 S 2 C L K S O U R C E ( P e r i p h C l k I n i t - > I 2 s 2 C l o c k S e l e c t i o n ) ) ; 
 
         / *   C o n f i g u r e   t h e   I 2 S 2   c l o c k   s o u r c e   * / 
         _ _ H A L _ R C C _ I 2 S 2 _ C O N F I G ( P e r i p h C l k I n i t - > I 2 s 2 C l o c k S e l e c t i o n ) ; 
     } 
 
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   I 2 S 3   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - * / 
     i f   ( ( ( P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n )   &   R C C _ P E R I P H C L K _ I 2 S 3 )   = =   R C C _ P E R I P H C L K _ I 2 S 3 ) 
     { 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ R C C _ I 2 S 3 C L K S O U R C E ( P e r i p h C l k I n i t - > I 2 s 3 C l o c k S e l e c t i o n ) ) ; 
 
         / *   C o n f i g u r e   t h e   I 2 S 3   c l o c k   s o u r c e   * / 
         _ _ H A L _ R C C _ I 2 S 3 _ C O N F I G ( P e r i p h C l k I n i t - > I 2 s 3 C l o c k S e l e c t i o n ) ; 
     } 
 
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   P L L   I 2 S   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - * / 
     / *   C h e c k   t h a t   P L L I 2 S   n e e d   t o   b e   e n a b l e d   * / 
     i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ I 2 S 2 S R C )   | |   H A L _ I S _ B I T _ S E T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ I 2 S 3 S R C ) ) 
     { 
         / *   U p d a t e   f l a g   t o   i n d i c a t e   t h a t   P L L   I 2 S   s h o u l d   b e   a c t i v e   * / 
         p l l a c t i v e   =   1 ; 
     } 
 
     / *   C h e c k   i f   P L L   I 2 S   n e e d   t o   b e   e n a b l e d   * / 
     i f   ( p l l a c t i v e   = =   1 ) 
     { 
         / *   E n a b l e   P L L   I 2 S   o n l y   i f   n o t   a c t i v e   * / 
         i f   ( H A L _ I S _ B I T _ C L R ( R C C - > C R ,   R C C _ C R _ P L L 3 O N ) ) 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ R C C _ P L L I 2 S _ M U L ( P e r i p h C l k I n i t - > P L L I 2 S . P L L I 2 S M U L ) ) ; 
             a s s e r t _ p a r a m ( I S _ R C C _ H S E _ P R E D I V 2 ( P e r i p h C l k I n i t - > P L L I 2 S . H S E P r e d i v 2 V a l u e ) ) ; 
 
             / *   P r e d i v 2   c a n   b e   w r i t t e n   o n l y   w h e n   t h e   P L L 2   i s   d i s a b l e d .   * / 
             / *   R e t u r n   a n   e r r o r   o n l y   i f   n e w   v a l u e   i s   d i f f e r e n t   f r o m   t h e   p r o g r a m m e d   v a l u e   * / 
             i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ P L L 2 O N )   & &   \ 
                     ( _ _ H A L _ R C C _ H S E _ G E T _ P R E D I V 2 ( )   ! =   P e r i p h C l k I n i t - > P L L I 2 S . H S E P r e d i v 2 V a l u e ) ) 
             { 
                 r e t u r n   H A L _ E R R O R ; 
             } 
 
             / *   C o n f i g u r e   t h e   H S E   p r e d i v 2   f a c t o r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
             _ _ H A L _ R C C _ H S E _ P R E D I V 2 _ C O N F I G ( P e r i p h C l k I n i t - > P L L I 2 S . H S E P r e d i v 2 V a l u e ) ; 
 
             / *   C o n f i g u r e   t h e   m a i n   P L L I 2 S   m u l t i p l i c a t i o n   f a c t o r s .   * / 
             _ _ H A L _ R C C _ P L L I 2 S _ C O N F I G ( P e r i p h C l k I n i t - > P L L I 2 S . P L L I 2 S M U L ) ; 
 
             / *   E n a b l e   t h e   m a i n   P L L I 2 S .   * / 
             _ _ H A L _ R C C _ P L L I 2 S _ E N A B L E ( ) ; 
 
             / *   G e t   S t a r t   T i c k * / 
             t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
             / *   W a i t   t i l l   P L L I 2 S   i s   r e a d y   * / 
             w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L I 2 S R D Y )     = =   R E S E T ) 
             { 
                 i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L I 2 S _ T I M E O U T _ V A L U E ) 
                 { 
                     r e t u r n   H A L _ T I M E O U T ; 
                 } 
             } 
         } 
         e l s e 
         { 
             / *   R e t u r n   a n   e r r o r   o n l y   i f   u s e r   w a n t s   t o   c h a n g e   t h e   P L L I 2 S M U L   w h e r e a s   P L L I 2 S   i s   a c t i v e   * / 
             i f   ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P L L 3 M U L )   ! =   P e r i p h C l k I n i t - > P L L I 2 S . P L L I 2 S M U L ) 
             { 
                 r e t u r n   H A L _ E R R O R ; 
             } 
         } 
     } 
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 2 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x 6 ) \ 
   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) \ 
   | |   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S B   c l o c k   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - * / 
     i f   ( ( ( P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n )   &   R C C _ P E R I P H C L K _ U S B )   = =   R C C _ P E R I P H C L K _ U S B ) 
     { 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ R C C _ U S B P L L C L K _ D I V ( P e r i p h C l k I n i t - > U s b C l o c k S e l e c t i o n ) ) ; 
 
         / *   C o n f i g u r e   t h e   U S B   c l o c k   s o u r c e   * / 
         _ _ H A L _ R C C _ U S B _ C O N F I G ( P e r i p h C l k I n i t - > U s b C l o c k S e l e c t i o n ) ; 
     } 
 # e n d i f   / *   S T M 3 2 F 1 0 2 x 6   | |   S T M 3 2 F 1 0 2 x B   | |   S T M 3 2 F 1 0 3 x 6   | |   S T M 3 2 F 1 0 3 x B   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     G e t   t h e   P e r i p h C l k I n i t   a c c o r d i n g   t o   t h e   i n t e r n a l 
     *   R C C   c o n f i g u r a t i o n   r e g i s t e r s . 
     *   @ p a r a m     P e r i p h C l k I n i t   p o i n t e r   t o   a n   R C C _ P e r i p h C L K I n i t T y p e D e f   s t r u c t u r e   t h a t 
     *                   r e t u r n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   E x t e n d e d   P e r i p h e r a l s   c l o c k s ( R T C ,   I 2 S ,   A D C   c l o c k s ) . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ R C C E x _ G e t P e r i p h C L K C o n f i g ( R C C _ P e r i p h C L K I n i t T y p e D e f     * P e r i p h C l k I n i t ) 
 { 
     u i n t 3 2 _ t   s r c c l k   =   0 U ; 
 
     / *   S e t   a l l   p o s s i b l e   v a l u e s   f o r   t h e   e x t e n d e d   c l o c k   t y p e   p a r a m e t e r - - - - - - - - - - - - * / 
     P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n   =   R C C _ P E R I P H C L K _ R T C ; 
 
     / *   G e t   t h e   R T C   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     s r c c l k   =   _ _ H A L _ R C C _ G E T _ R T C _ S O U R C E ( ) ; 
     / *   S o u r c e   c l o c k   i s   L S E   o r   L S I * / 
     P e r i p h C l k I n i t - > R T C C l o c k S e l e c t i o n   =   s r c c l k ; 
 
     / *   G e t   t h e   A D C   c l o c k   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n   | =   R C C _ P E R I P H C L K _ A D C ; 
     P e r i p h C l k I n i t - > A d c C l o c k S e l e c t i o n   =   _ _ H A L _ R C C _ G E T _ A D C _ S O U R C E ( ) ; 
 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
     / *   G e t   t h e   I 2 S 2   c l o c k   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n   | =   R C C _ P E R I P H C L K _ I 2 S 2 ; 
     P e r i p h C l k I n i t - > I 2 s 2 C l o c k S e l e c t i o n   =   _ _ H A L _ R C C _ G E T _ I 2 S 2 _ S O U R C E ( ) ; 
 
     / *   G e t   t h e   I 2 S 3   c l o c k   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n   | =   R C C _ P E R I P H C L K _ I 2 S 3 ; 
     P e r i p h C l k I n i t - > I 2 s 3 C l o c k S e l e c t i o n   =   _ _ H A L _ R C C _ G E T _ I 2 S 3 _ S O U R C E ( ) ; 
 
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) 
     / *   G e t   t h e   I 2 S 2   c l o c k   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n   | =   R C C _ P E R I P H C L K _ I 2 S 2 ; 
     P e r i p h C l k I n i t - > I 2 s 2 C l o c k S e l e c t i o n   =   R C C _ I 2 S 2 C L K S O U R C E _ S Y S C L K ; 
 
     / *   G e t   t h e   I 2 S 3   c l o c k   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n   | =   R C C _ P E R I P H C L K _ I 2 S 3 ; 
     P e r i p h C l k I n i t - > I 2 s 3 C l o c k S e l e c t i o n   =   R C C _ I 2 S 3 C L K S O U R C E _ S Y S C L K ; 
 
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 2 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x 6 ) \ 
   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) \ 
   | |   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
     / *   G e t   t h e   U S B   c l o c k   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     P e r i p h C l k I n i t - > P e r i p h C l o c k S e l e c t i o n   | =   R C C _ P E R I P H C L K _ U S B ; 
     P e r i p h C l k I n i t - > U s b C l o c k S e l e c t i o n   =   _ _ H A L _ R C C _ G E T _ U S B _ S O U R C E ( ) ; 
 # e n d i f   / *   S T M 3 2 F 1 0 2 x 6   | |   S T M 3 2 F 1 0 2 x B   | |   S T M 3 2 F 1 0 3 x 6   | |   S T M 3 2 F 1 0 3 x B   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n s   t h e   p e r i p h e r a l   c l o c k   f r e q u e n c y 
     *   @ n o t e       R e t u r n s   0   i f   p e r i p h e r a l   c l o c k   i s   u n k n o w n 
     *   @ p a r a m     P e r i p h C l k   P e r i p h e r a l   c l o c k   i d e n t i f i e r 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ R T C     R T C   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ A D C     A D C   p e r i p h e r a l   c l o c k 
     @ i f   S T M 3 2 F 1 0 3 x E 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     @ e n d i f 
     @ i f   S T M 3 2 F 1 0 3 x G 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     @ e n d i f 
     @ i f   S T M 3 2 F 1 0 5 x C 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ U S B     U S B   p e r i p h e r a l   c l o c k 
     @ e n d i f 
     @ i f   S T M 3 2 F 1 0 7 x C 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 3   I 2 S 3   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ I 2 S 2   I 2 S 2   p e r i p h e r a l   c l o c k 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ U S B     U S B   p e r i p h e r a l   c l o c k 
     @ e n d i f 
     @ i f   S T M 3 2 F 1 0 2 x x 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ U S B     U S B   p e r i p h e r a l   c l o c k 
     @ e n d i f 
     @ i f   S T M 3 2 F 1 0 3 x x 
     *                         @ a r g   @ r e f   R C C _ P E R I P H C L K _ U S B     U S B   p e r i p h e r a l   c l o c k 
     @ e n d i f 
     *   @ r e t v a l   F r e q u e n c y   i n   H z   ( 0 :   m e a n s   t h a t   n o   a v a i l a b l e   f r e q u e n c y   f o r   t h e   p e r i p h e r a l ) 
     * / 
 u i n t 3 2 _ t   H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( u i n t 3 2 _ t   P e r i p h C l k ) 
 { 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
     c o n s t   u i n t 8 _ t   a P L L M U L F a c t o r T a b l e [ 1 4 ]   =   { 0 ,   0 ,   4 ,   5 ,   6 ,   7 ,   8 ,   9 ,   0 ,   0 ,   0 ,   0 ,   0 ,   1 3 } ; 
     c o n s t   u i n t 8 _ t   a P r e d i v F a c t o r T a b l e [ 1 6 ]   =   { 1 ,   2 ,   3 ,   4 ,   5 ,   6 ,   7 ,   8 ,   9 ,   1 0 ,   1 1 ,   1 2 ,   1 3 ,   1 4 ,   1 5 ,   1 6 } ; 
 
     u i n t 3 2 _ t   p r e d i v 1   =   0 U ,   p l l c l k   =   0 U ,   p l l m u l   =   0 U ; 
     u i n t 3 2 _ t   p l l 2 m u l   =   0 U ,   p l l 3 m u l   =   0 U ,   p r e d i v 2   =   0 U ; 
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 2 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x 6 )   | |   \ 
         d e f i n e d ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) 
     c o n s t   u i n t 8 _ t   a P L L M U L F a c t o r T a b l e [ 1 6 ]   =   { 2 ,   3 ,   4 ,   5 ,   6 ,   7 ,   8 ,   9 ,   1 0 ,   1 1 ,   1 2 ,   1 3 ,   1 4 ,   1 5 ,   1 6 ,   1 6 } ; 
     c o n s t   u i n t 8 _ t   a P r e d i v F a c t o r T a b l e [ 2 ]   =   { 1 ,   2 } ; 
 
     u i n t 3 2 _ t   p r e d i v 1   =   0 U ,   p l l c l k   =   0 U ,   p l l m u l   =   0 U ; 
 # e n d i f   / *   S T M 3 2 F 1 0 2 x 6   | |   S T M 3 2 F 1 0 2 x B   | |   S T M 3 2 F 1 0 3 x 6   | |   S T M 3 2 F 1 0 3 x B   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * / 
     u i n t 3 2 _ t   t e m p _ r e g   =   0 U ,   f r e q u e n c y   =   0 U ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ R C C _ P E R I P H C L O C K ( P e r i p h C l k ) ) ; 
 
     s w i t c h   ( P e r i p h C l k ) 
     { 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 2 x 6 )   | |   d e f i n e d ( S T M 3 2 F 1 0 2 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x 6 ) \ 
   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x B )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) \ 
   | |   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
         c a s e   R C C _ P E R I P H C L K _ U S B : 
         { 
             / *   G e t   R C C   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
             t e m p _ r e g   =   R C C - > C F G R ; 
 
             / *   C h e c k   i f   P L L   i s   e n a b l e d   * / 
             i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ P L L O N ) ) 
             { 
                 p l l m u l   =   a P L L M U L F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( t e m p _ r e g   &   R C C _ C F G R _ P L L M U L L )   > >   R C C _ C F G R _ P L L M U L L _ P o s ] ; 
                 i f   ( ( t e m p _ r e g   &   R C C _ C F G R _ P L L S R C )   ! =   R C C _ P L L S O U R C E _ H S I _ D I V 2 ) 
                 { 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 0 x B ) \ 
   | |   d e f i n e d ( S T M 3 2 F 1 0 0 x E ) 
                     p r e d i v 1   =   a P r e d i v F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 1 )   > >   R C C _ C F G R 2 _ P R E D I V 1 _ P o s ] ; 
 # e l s e 
                     p r e d i v 1   =   a P r e d i v F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( R C C - > C F G R   &   R C C _ C F G R _ P L L X T P R E )   > >   R C C _ C F G R _ P L L X T P R E _ P o s ] ; 
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   | |   S T M 3 2 F 1 0 0 x B   | |   S T M 3 2 F 1 0 0 x E   * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
                     i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ) ) 
                     { 
                         / *   P L L 2   s e l e c t e d   a s   P r e d i v 1   s o u r c e   * / 
                         / *   P L L C L K   =   P L L 2 C L K   /   P R E D I V 1   *   P L L M U L   w i t h   P L L 2 C L K   =   H S E / P R E D I V 2   *   P L L 2 M U L   * / 
                         p r e d i v 2   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 2 )   > >   R C C _ C F G R 2 _ P R E D I V 2 _ P o s )   +   1 ; 
                         p l l 2 m u l   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P L L 2 M U L )   > >   R C C _ C F G R 2 _ P L L 2 M U L _ P o s )   +   2 ; 
                         p l l c l k   =   ( u i n t 3 2 _ t ) ( ( ( ( H S E _ V A L U E   /   p r e d i v 2 )   *   p l l 2 m u l )   /   p r e d i v 1 )   *   p l l m u l ) ; 
                     } 
                     e l s e 
                     { 
                         / *   H S E   u s e d   a s   P L L   c l o c k   s o u r c e   :   P L L C L K   =   H S E / P R E D I V 1   *   P L L M U L   * / 
                         p l l c l k   =   ( u i n t 3 2 _ t ) ( ( H S E _ V A L U E   /   p r e d i v 1 )   *   p l l m u l ) ; 
                     } 
 
                     / *   I f   P L L M U L   w a s   s e t   t o   1 3   m e a n s   t h a t   i t   w a s   t o   c o v e r   t h e   c a s e   P L L M U L   6 . 5   ( a v o i d   u s i n g   f l o a t )   * / 
                     / *   I n   t h i s   c a s e   n e e d   t o   d i v i d e   p l l c l k   b y   2   * / 
                     i f   ( p l l m u l   = =   a P L L M U L F a c t o r T a b l e [ ( u i n t 3 2 _ t ) ( R C C _ C F G R _ P L L M U L L 6 _ 5 )   > >   R C C _ C F G R _ P L L M U L L _ P o s ] ) 
                     { 
                         p l l c l k   =   p l l c l k   /   2 ; 
                     } 
 # e l s e 
                     i f   ( ( t e m p _ r e g   &   R C C _ C F G R _ P L L S R C )   ! =   R C C _ P L L S O U R C E _ H S I _ D I V 2 ) 
                     { 
                         / *   H S E   u s e d   a s   P L L   c l o c k   s o u r c e   :   P L L C L K   =   H S E / P R E D I V 1   *   P L L M U L   * / 
                         p l l c l k   =   ( u i n t 3 2 _ t ) ( ( H S E _ V A L U E   /   p r e d i v 1 )   *   p l l m u l ) ; 
                     } 
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
                 } 
                 e l s e 
                 { 
                     / *   H S I   u s e d   a s   P L L   c l o c k   s o u r c e   :   P L L C L K   =   H S I / 2   *   P L L M U L   * / 
                     p l l c l k   =   ( u i n t 3 2 _ t ) ( ( H S I _ V A L U E   > >   1 )   *   p l l m u l ) ; 
                 } 
 
                 / *   C a l c u l   o f   t h e   U S B   f r e q u e n c y * / 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
                 / *   U S B C L K   =   P L L V C O   =   ( 2   x   P L L C L K )   /   U S B   p r e s c a l e r   * / 
                 i f   ( _ _ H A L _ R C C _ G E T _ U S B _ S O U R C E ( )   = =   R C C _ U S B C L K S O U R C E _ P L L _ D I V 2 ) 
                 { 
                     / *   P r e s c a l e r   o f   2   s e l e c t e d   f o r   U S B   * / 
                     f r e q u e n c y   =   p l l c l k ; 
                 } 
                 e l s e 
                 { 
                     / *   P r e s c a l e r   o f   3   s e l e c t e d   f o r   U S B   * / 
                     f r e q u e n c y   =   ( 2   *   p l l c l k )   /   3 ; 
                 } 
 # e l s e 
                 / *   U S B C L K   =   P L L C L K   /   U S B   p r e s c a l e r   * / 
                 i f   ( _ _ H A L _ R C C _ G E T _ U S B _ S O U R C E ( )   = =   R C C _ U S B C L K S O U R C E _ P L L ) 
                 { 
                     / *   N o   p r e s c a l e r   s e l e c t e d   f o r   U S B   * / 
                     f r e q u e n c y   =   p l l c l k ; 
                 } 
                 e l s e 
                 { 
                     / *   P r e s c a l e r   o f   1 . 5   s e l e c t e d   f o r   U S B   * / 
                     f r e q u e n c y   =   ( p l l c l k   *   2 )   /   3 ; 
                 } 
 # e n d i f 
             } 
             b r e a k ; 
         } 
 # e n d i f   / *   S T M 3 2 F 1 0 2 x 6   | |   S T M 3 2 F 1 0 2 x B   | |   S T M 3 2 F 1 0 3 x 6   | |   S T M 3 2 F 1 0 3 x B   | |   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G )   | |   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
         c a s e   R C C _ P E R I P H C L K _ I 2 S 2 : 
         { 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) 
             / *   S Y S C L K   u s e d   a s   s o u r c e   c l o c k   f o r   I 2 S 2   * / 
             f r e q u e n c y   =   H A L _ R C C _ G e t S y s C l o c k F r e q ( ) ; 
 # e l s e 
             i f   ( _ _ H A L _ R C C _ G E T _ I 2 S 2 _ S O U R C E ( )   = =   R C C _ I 2 S 2 C L K S O U R C E _ S Y S C L K ) 
             { 
                 / *   S Y S C L K   u s e d   a s   s o u r c e   c l o c k   f o r   I 2 S 2   * / 
                 f r e q u e n c y   =   H A L _ R C C _ G e t S y s C l o c k F r e q ( ) ; 
             } 
             e l s e 
             { 
                 / *   C h e c k   i f   P L L I 2 S   i s   e n a b l e d   * / 
                 i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N ) ) 
                 { 
                     / *   P L L I 2 S V C O   =   2   *   P L L I 2 S C L K   =   2   *   ( H S E / P R E D I V 2   *   P L L 3 M U L )   * / 
                     p r e d i v 2   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 2 )   > >   R C C _ C F G R 2 _ P R E D I V 2 _ P o s )   +   1 ; 
                     p l l 3 m u l   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P L L 3 M U L )   > >   R C C _ C F G R 2 _ P L L 3 M U L _ P o s )   +   2 ; 
                     f r e q u e n c y   =   ( u i n t 3 2 _ t ) ( 2   *   ( ( H S E _ V A L U E   /   p r e d i v 2 )   *   p l l 3 m u l ) ) ; 
                 } 
             } 
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * / 
             b r e a k ; 
         } 
         c a s e   R C C _ P E R I P H C L K _ I 2 S 3 : 
         { 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 3 x E )   | |   d e f i n e d ( S T M 3 2 F 1 0 3 x G ) 
             / *   S Y S C L K   u s e d   a s   s o u r c e   c l o c k   f o r   I 2 S 3   * / 
             f r e q u e n c y   =   H A L _ R C C _ G e t S y s C l o c k F r e q ( ) ; 
 # e l s e 
             i f   ( _ _ H A L _ R C C _ G E T _ I 2 S 3 _ S O U R C E ( )   = =   R C C _ I 2 S 3 C L K S O U R C E _ S Y S C L K ) 
             { 
                 / *   S Y S C L K   u s e d   a s   s o u r c e   c l o c k   f o r   I 2 S 3   * / 
                 f r e q u e n c y   =   H A L _ R C C _ G e t S y s C l o c k F r e q ( ) ; 
             } 
             e l s e 
             { 
                 / *   C h e c k   i f   P L L I 2 S   i s   e n a b l e d   * / 
                 i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N ) ) 
                 { 
                     / *   P L L I 2 S V C O   =   2   *   P L L I 2 S C L K   =   2   *   ( H S E / P R E D I V 2   *   P L L 3 M U L )   * / 
                     p r e d i v 2   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P R E D I V 2 )   > >   R C C _ C F G R 2 _ P R E D I V 2 _ P o s )   +   1 ; 
                     p l l 3 m u l   =   ( ( R C C - > C F G R 2   &   R C C _ C F G R 2 _ P L L 3 M U L )   > >   R C C _ C F G R 2 _ P L L 3 M U L _ P o s )   +   2 ; 
                     f r e q u e n c y   =   ( u i n t 3 2 _ t ) ( 2   *   ( ( H S E _ V A L U E   /   p r e d i v 2 )   *   p l l 3 m u l ) ) ; 
                 } 
             } 
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   * / 
             b r e a k ; 
         } 
 # e n d i f   / *   S T M 3 2 F 1 0 3 x E   | |   S T M 3 2 F 1 0 3 x G   | |   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
         c a s e   R C C _ P E R I P H C L K _ R T C : 
         { 
             / *   G e t   R C C   B D C R   c o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
             t e m p _ r e g   =   R C C - > B D C R ; 
 
             / *   C h e c k   i f   L S E   i s   r e a d y   i f   R T C   c l o c k   s e l e c t i o n   i s   L S E   * / 
             i f   ( ( ( t e m p _ r e g   &   R C C _ B D C R _ R T C S E L )   = =   R C C _ R T C C L K S O U R C E _ L S E )   & &   ( H A L _ I S _ B I T _ S E T ( t e m p _ r e g ,   R C C _ B D C R _ L S E R D Y ) ) ) 
             { 
                 f r e q u e n c y   =   L S E _ V A L U E ; 
             } 
             / *   C h e c k   i f   L S I   i s   r e a d y   i f   R T C   c l o c k   s e l e c t i o n   i s   L S I   * / 
             e l s e   i f   ( ( ( t e m p _ r e g   &   R C C _ B D C R _ R T C S E L )   = =   R C C _ R T C C L K S O U R C E _ L S I )   & &   ( H A L _ I S _ B I T _ S E T ( R C C - > C S R ,   R C C _ C S R _ L S I R D Y ) ) ) 
             { 
                 f r e q u e n c y   =   L S I _ V A L U E ; 
             } 
             e l s e   i f   ( ( ( t e m p _ r e g   &   R C C _ B D C R _ R T C S E L )   = =   R C C _ R T C C L K S O U R C E _ H S E _ D I V 1 2 8 )   & &   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ H S E R D Y ) ) ) 
             { 
                 f r e q u e n c y   =   H S E _ V A L U E   /   1 2 8 U ; 
             } 
             / *   C l o c k   n o t   e n a b l e d   f o r   R T C * / 
             e l s e 
             { 
                 / *   n o t h i n g   t o   d o :   f r e q u e n c y   a l r e a d y   i n i t i a l i z e d   t o   0 U   * / 
             } 
             b r e a k ; 
         } 
         c a s e   R C C _ P E R I P H C L K _ A D C : 
         { 
             f r e q u e n c y   =   H A L _ R C C _ G e t P C L K 2 F r e q ( )   /   ( ( ( _ _ H A L _ R C C _ G E T _ A D C _ S O U R C E ( )   > >   R C C _ C F G R _ A D C P R E _ P o s )   +   1 )   *   2 ) ; 
             b r e a k ; 
         } 
         d e f a u l t : 
         { 
             b r e a k ; 
         } 
     } 
     r e t u r n   ( f r e q u e n c y ) ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 # i f   d e f i n e d ( S T M 3 2 F 1 0 5 x C )   | |   d e f i n e d ( S T M 3 2 F 1 0 7 x C ) 
 / * *   @ d e f g r o u p   R C C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   P L L I 2 S   M a n a g e m e n t   f u n c t i o n 
     *     @ b r i e f     P L L I 2 S   M a n a g e m e n t   f u n c t i o n s 
     * 
 @ v e r b a t i m 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                 # # # # #   E x t e n d e d   P L L I 2 S   M a n a g e m e n t   f u n c t i o n s     # # # # # 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
         [ . . ] 
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   P L L I 2 S 
         a c t i v a t i o n   o r   d e a c t i v a t i o n 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     E n a b l e   P L L I 2 S 
     *   @ p a r a m     P L L I 2 S I n i t   p o i n t e r   t o   a n   R C C _ P L L I 2 S I n i t T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   P L L I 2 S 
     *   @ n o t e       T h e   P L L I 2 S   c o n f i g u r a t i o n   n o t   m o d i f i e d   i f   u s e d   b y   I 2 S 2   o r   I 2 S 3   I n t e r f a c e . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ R C C E x _ E n a b l e P L L I 2 S ( R C C _ P L L I 2 S I n i t T y p e D e f     * P L L I 2 S I n i t ) 
 { 
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ; 
 
     / *   C h e c k   t h a t   P L L   I 2 S   h a s   n o t   b e e n   a l r e a d y   e n a b l e d   b y   I 2 S 2   o r   I 2 S 3 * / 
     i f   ( H A L _ I S _ B I T _ C L R ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ I 2 S 2 S R C )   & &   H A L _ I S _ B I T _ C L R ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ I 2 S 3 S R C ) ) 
     { 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ R C C _ P L L I 2 S _ M U L ( P L L I 2 S I n i t - > P L L I 2 S M U L ) ) ; 
         a s s e r t _ p a r a m ( I S _ R C C _ H S E _ P R E D I V 2 ( P L L I 2 S I n i t - > H S E P r e d i v 2 V a l u e ) ) ; 
 
         / *   P r e d i v 2   c a n   b e   w r i t t e n   o n l y   w h e n   t h e   P L L 2   i s   d i s a b l e d .   * / 
         / *   R e t u r n   a n   e r r o r   o n l y   i f   n e w   v a l u e   i s   d i f f e r e n t   f r o m   t h e   p r o g r a m m e d   v a l u e   * / 
         i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ P L L 2 O N )   & &   \ 
                 ( _ _ H A L _ R C C _ H S E _ G E T _ P R E D I V 2 ( )   ! =   P L L I 2 S I n i t - > H S E P r e d i v 2 V a l u e ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
 
         / *   D i s a b l e   t h e   m a i n   P L L I 2 S .   * / 
         _ _ H A L _ R C C _ P L L I 2 S _ D I S A B L E ( ) ; 
 
         / *   G e t   S t a r t   T i c k * / 
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
         / *   W a i t   t i l l   P L L I 2 S   i s   r e a d y   * / 
         w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L I 2 S R D Y )     ! =   R E S E T ) 
         { 
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L I 2 S _ T I M E O U T _ V A L U E ) 
             { 
                 r e t u r n   H A L _ T I M E O U T ; 
             } 
         } 
 
         / *   C o n f i g u r e   t h e   H S E   p r e d i v 2   f a c t o r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
         _ _ H A L _ R C C _ H S E _ P R E D I V 2 _ C O N F I G ( P L L I 2 S I n i t - > H S E P r e d i v 2 V a l u e ) ; 
 
 
         / *   C o n f i g u r e   t h e   m a i n   P L L I 2 S   m u l t i p l i c a t i o n   f a c t o r s .   * / 
         _ _ H A L _ R C C _ P L L I 2 S _ C O N F I G ( P L L I 2 S I n i t - > P L L I 2 S M U L ) ; 
 
         / *   E n a b l e   t h e   m a i n   P L L I 2 S .   * / 
         _ _ H A L _ R C C _ P L L I 2 S _ E N A B L E ( ) ; 
 
         / *   G e t   S t a r t   T i c k * / 
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
         / *   W a i t   t i l l   P L L I 2 S   i s   r e a d y   * / 
         w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L I 2 S R D Y )     = =   R E S E T ) 
         { 
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L I 2 S _ T I M E O U T _ V A L U E ) 
             { 
                 r e t u r n   H A L _ T I M E O U T ; 
             } 
         } 
     } 
     e l s e 
     { 
         / *   P L L I 2 S   c a n n o t   b e   m o d i f i e d   a s   a l r e a d y   u s e d   b y   I 2 S 2   o r   I 2 S 3   * / 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D i s a b l e   P L L I 2 S 
     *   @ n o t e       P L L I 2 S   i s   n o t   d i s a b l e d   i f   u s e d   b y   I 2 S 2   o r   I 2 S 3   I n t e r f a c e . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ R C C E x _ D i s a b l e P L L I 2 S ( v o i d ) 
 { 
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ; 
 
     / *   D i s a b l e   P L L   I 2 S   a s   n o t   r e q u e s t e d   b y   I 2 S 2   o r   I 2 S 3 * / 
     i f   ( H A L _ I S _ B I T _ C L R ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ I 2 S 2 S R C )   & &   H A L _ I S _ B I T _ C L R ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ I 2 S 3 S R C ) ) 
     { 
         / *   D i s a b l e   t h e   m a i n   P L L I 2 S .   * / 
         _ _ H A L _ R C C _ P L L I 2 S _ D I S A B L E ( ) ; 
 
         / *   G e t   S t a r t   T i c k * / 
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
         / *   W a i t   t i l l   P L L I 2 S   i s   r e a d y   * / 
         w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L I 2 S R D Y )     ! =   R E S E T ) 
         { 
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L I 2 S _ T I M E O U T _ V A L U E ) 
             { 
                 r e t u r n   H A L _ T I M E O U T ; 
             } 
         } 
     } 
     e l s e 
     { 
         / *   P L L I 2 S   i s   c u r r e n t l y   u s e d   b y   I 2 S 2   o r   I 2 S 3 .   C a n n o t   b e   d i s a b l e d . * / 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   R C C E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P L L 2   M a n a g e m e n t   f u n c t i o n 
     *     @ b r i e f     P L L 2   M a n a g e m e n t   f u n c t i o n s 
     * 
 @ v e r b a t i m 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                 # # # # #   E x t e n d e d   P L L 2   M a n a g e m e n t   f u n c t i o n s     # # # # # 
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
         [ . . ] 
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   P L L 2 
         a c t i v a t i o n   o r   d e a c t i v a t i o n 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     E n a b l e   P L L 2 
     *   @ p a r a m     P L L 2 I n i t   p o i n t e r   t o   a n   R C C _ P L L 2 I n i t T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   P L L 2 
     *   @ n o t e       T h e   P L L 2   c o n f i g u r a t i o n   n o t   m o d i f i e d   i f   u s e d   i n d i r e c t l y   a s   s y s t e m   c l o c k . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ R C C E x _ E n a b l e P L L 2 ( R C C _ P L L 2 I n i t T y p e D e f     * P L L 2 I n i t ) 
 { 
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ; 
 
     / *   T h i s   b i t   c a n   n o t   b e   c l e a r e d   i f   t h e   P L L 2   c l o c k   i s   u s e d   i n d i r e c t l y   a s   s y s t e m 
         c l o c k   ( i . e .   i t   i s   u s e d   a s   P L L   c l o c k   e n t r y   t h a t   i s   u s e d   a s   s y s t e m   c l o c k ) .   * / 
     i f   ( ( _ _ H A L _ R C C _ G E T _ P L L _ O S C S O U R C E ( )   = =   R C C _ P L L S O U R C E _ H S E )   & &   \ 
             ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   = =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ P L L C L K )   & &   \ 
             ( ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ) )   = =   R C C _ C F G R 2 _ P R E D I V 1 S R C _ P L L 2 ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
     e l s e 
     { 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ R C C _ P L L 2 _ M U L ( P L L 2 I n i t - > P L L 2 M U L ) ) ; 
         a s s e r t _ p a r a m ( I S _ R C C _ H S E _ P R E D I V 2 ( P L L 2 I n i t - > H S E P r e d i v 2 V a l u e ) ) ; 
 
         / *   P r e d i v 2   c a n   b e   w r i t t e n   o n l y   w h e n   t h e   P L L I 2 S   i s   d i s a b l e d .   * / 
         / *   R e t u r n   a n   e r r o r   o n l y   i f   n e w   v a l u e   i s   d i f f e r e n t   f r o m   t h e   p r o g r a m m e d   v a l u e   * / 
         i f   ( H A L _ I S _ B I T _ S E T ( R C C - > C R ,   R C C _ C R _ P L L 3 O N )   & &   \ 
                 ( _ _ H A L _ R C C _ H S E _ G E T _ P R E D I V 2 ( )   ! =   P L L 2 I n i t - > H S E P r e d i v 2 V a l u e ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
 
         / *   D i s a b l e   t h e   m a i n   P L L 2 .   * / 
         _ _ H A L _ R C C _ P L L 2 _ D I S A B L E ( ) ; 
 
         / *   G e t   S t a r t   T i c k * / 
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
         / *   W a i t   t i l l   P L L 2   i s   d i s a b l e d   * / 
         w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L 2 R D Y )   ! =   R E S E T ) 
         { 
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L 2 _ T I M E O U T _ V A L U E ) 
             { 
                 r e t u r n   H A L _ T I M E O U T ; 
             } 
         } 
 
         / *   C o n f i g u r e   t h e   H S E   p r e d i v 2   f a c t o r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
         _ _ H A L _ R C C _ H S E _ P R E D I V 2 _ C O N F I G ( P L L 2 I n i t - > H S E P r e d i v 2 V a l u e ) ; 
 
         / *   C o n f i g u r e   t h e   m a i n   P L L 2   m u l t i p l i c a t i o n   f a c t o r s .   * / 
         _ _ H A L _ R C C _ P L L 2 _ C O N F I G ( P L L 2 I n i t - > P L L 2 M U L ) ; 
 
         / *   E n a b l e   t h e   m a i n   P L L 2 .   * / 
         _ _ H A L _ R C C _ P L L 2 _ E N A B L E ( ) ; 
 
         / *   G e t   S t a r t   T i c k * / 
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
         / *   W a i t   t i l l   P L L 2   i s   r e a d y   * / 
         w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L 2 R D Y )     = =   R E S E T ) 
         { 
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L 2 _ T I M E O U T _ V A L U E ) 
             { 
                 r e t u r n   H A L _ T I M E O U T ; 
             } 
         } 
     } 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D i s a b l e   P L L 2 
     *   @ n o t e       P L L 2   i s   n o t   d i s a b l e d   i f   u s e d   i n d i r e c t l y   a s   s y s t e m   c l o c k . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ R C C E x _ D i s a b l e P L L 2 ( v o i d ) 
 { 
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ; 
 
     / *   T h i s   b i t   c a n   n o t   b e   c l e a r e d   i f   t h e   P L L 2   c l o c k   i s   u s e d   i n d i r e c t l y   a s   s y s t e m 
         c l o c k   ( i . e .   i t   i s   u s e d   a s   P L L   c l o c k   e n t r y   t h a t   i s   u s e d   a s   s y s t e m   c l o c k ) .   * / 
     i f   ( ( _ _ H A L _ R C C _ G E T _ P L L _ O S C S O U R C E ( )   = =   R C C _ P L L S O U R C E _ H S E )   & &   \ 
             ( _ _ H A L _ R C C _ G E T _ S Y S C L K _ S O U R C E ( )   = =   R C C _ S Y S C L K S O U R C E _ S T A T U S _ P L L C L K )   & &   \ 
             ( ( R E A D _ B I T ( R C C - > C F G R 2 ,   R C C _ C F G R 2 _ P R E D I V 1 S R C ) )   = =   R C C _ C F G R 2 _ P R E D I V 1 S R C _ P L L 2 ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
     e l s e 
     { 
         / *   D i s a b l e   t h e   m a i n   P L L 2 .   * / 
         _ _ H A L _ R C C _ P L L 2 _ D I S A B L E ( ) ; 
 
         / *   G e t   S t a r t   T i c k * / 
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ; 
 
         / *   W a i t   t i l l   P L L 2   i s   d i s a b l e d   * / 
         w h i l e   ( _ _ H A L _ R C C _ G E T _ F L A G ( R C C _ F L A G _ P L L 2 R D Y )     ! =   R E S E T ) 
         { 
             i f   ( ( H A L _ G e t T i c k ( )   -   t i c k s t a r t )   >   P L L 2 _ T I M E O U T _ V A L U E ) 
             { 
                 r e t u r n   H A L _ T I M E O U T ; 
             } 
         } 
     } 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 # e n d i f   / *   S T M 3 2 F 1 0 5 x C   | |   S T M 3 2 F 1 0 7 x C   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 # e n d i f   / *   H A L _ R C C _ M O D U L E _ E N A B L E D   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 
 