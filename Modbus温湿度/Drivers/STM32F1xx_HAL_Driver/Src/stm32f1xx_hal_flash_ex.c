??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ f l a s h _ e x . c 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       E x t e n d e d   F L A S H   H A L   m o d u l e   d r i v e r . 
     *         
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g   
     *                     f u n c t i o n a l i t i e s   o f   t h e   F L A S H   p e r i p h e r a l : 
     *                       +   E x t e n d e d   I n i t i a l i z a t i o n / d e - i n i t i a l i z a t i o n   f u n c t i o n s 
     *                       +   E x t e n d e d   I / O   o p e r a t i o n   f u n c t i o n s 
     *                       +   E x t e n d e d   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   
     *                   
     @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                               # # # # #   F l a s h   p e r i p h e r a l   e x t e n d e d   f e a t u r e s     # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                       
                                             # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ]   T h i s   d r i v e r   p r o v i d e s   f u n c t i o n s   t o   c o n f i g u r e   a n d   p r o g r a m   t h e   F L A S H   m e m o r y   
               o f   a l l   S T M 3 2 F 1 x x x   d e v i c e s .   I t   i n c l u d e s 
               
                 ( + + )   S e t / R e s e t   t h e   w r i t e   p r o t e c t i o n 
                 ( + + )   P r o g r a m   t h e   u s e r   O p t i o n   B y t e s 
                 ( + + )   G e t   t h e   R e a d   p r o t e c t i o n   L e v e l 
     
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
 # i f d e f   H A L _ F L A S H _ M O D U L E _ E N A B L E D 
 
 / * *   @ a d d t o g r o u p   F L A S H 
     *   @ { 
     * / 
 / * *   @ a d d t o g r o u p   F L A S H _ P r i v a t e _ V a r i a b l e s 
   *   @ { 
   * / 
 / *   V a r i a b l e s   u s e d   f o r   E r a s e   p a g e s   u n d e r   i n t e r r u p t i o n * / 
 e x t e r n   F L A S H _ P r o c e s s T y p e D e f   p F l a s h ; 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
     
 / * *   @ d e f g r o u p   F L A S H E x   F L A S H E x 
     *   @ b r i e f   F L A S H   H A L   E x t e n s i o n   m o d u l e   d r i v e r 
     *   @ { 
     * / 
 
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   F L A S H E x _ P r i v a t e _ C o n s t a n t s   F L A S H E x   P r i v a t e   C o n s t a n t s 
   *   @ { 
   * / 
 # d e f i n e   F L A S H _ P O S I T I O N _ I W D G S W _ B I T                 F L A S H _ O B R _ I W D G _ S W _ P o s 
 # d e f i n e   F L A S H _ P O S I T I O N _ O B _ U S E R D A T A 0 _ B I T     F L A S H _ O B R _ D A T A 0 _ P o s 
 # d e f i n e   F L A S H _ P O S I T I O N _ O B _ U S E R D A T A 1 _ B I T     F L A S H _ O B R _ D A T A 1 _ P o s 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   F L A S H E x _ P r i v a t e _ M a c r o s   F L A S H E x   P r i v a t e   M a c r o s 
     *   @ { 
     * / 
 / * * 
     *   @ } 
     * /   
 
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   F L A S H E x _ P r i v a t e _ F u n c t i o n s   F L A S H E x   P r i v a t e   F u n c t i o n s 
   *   @ { 
   * / 
 / *   E r a s e   o p e r a t i o n s   * / 
 s t a t i c   v o i d                             F L A S H _ M a s s E r a s e ( u i n t 3 2 _ t   B a n k s ) ; 
 v o i d         F L A S H _ P a g e E r a s e ( u i n t 3 2 _ t   P a g e A d d r e s s ) ; 
 
 / *   O p t i o n   b y t e s   c o n t r o l   * / 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ E n a b l e W R P ( u i n t 3 2 _ t   W r i t e P r o t e c t P a g e ) ; 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ D i s a b l e W R P ( u i n t 3 2 _ t   W r i t e P r o t e c t P a g e ) ; 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ R D P _ L e v e l C o n f i g ( u i n t 8 _ t   R e a d P r o t e c t L e v e l ) ; 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ U s e r C o n f i g ( u i n t 8 _ t   U s e r C o n f i g ) ; 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ P r o g r a m D a t a ( u i n t 3 2 _ t   A d d r e s s ,   u i n t 8 _ t   D a t a ) ; 
 s t a t i c   u i n t 3 2 _ t                     F L A S H _ O B _ G e t W R P ( v o i d ) ; 
 s t a t i c   u i n t 3 2 _ t                     F L A S H _ O B _ G e t R D P ( v o i d ) ; 
 s t a t i c   u i n t 8 _ t                       F L A S H _ O B _ G e t U s e r ( v o i d ) ; 
 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   F L A S H E x _ E x p o r t e d _ F u n c t i o n s   F L A S H E x   E x p o r t e d   F u n c t i o n s 
     *   @ { 
     * / 
     
 / * *   @ d e f g r o u p   F L A S H E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   F L A S H E x   M e m o r y   E r a s i n g   f u n c t i o n s 
   *     @ b r i e f       F L A S H   M e m o r y   E r a s i n g   f u n c t i o n s 
     * 
 @ v e r b a t i m       
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                 # # # # #   F L A S H   E r a s i n g   P r o g r a m m i n g   f u n c t i o n s   # # # # #   
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
 
         [ . . ]   T h e   F L A S H   M e m o r y   E r a s i n g   f u n c t i o n s ,   i n c l u d e s   t h e   f o l l o w i n g   f u n c t i o n s : 
         ( + )   @ r e f   H A L _ F L A S H E x _ E r a s e :   r e t u r n   o n l y   w h e n   e r a s e   h a s   b e e n   d o n e 
         ( + )   @ r e f   H A L _ F L A S H E x _ E r a s e _ I T :   e n d   o f   e r a s e   i s   d o n e   w h e n   @ r e f   H A L _ F L A S H _ E n d O f O p e r a t i o n C a l l b a c k   
                 i s   c a l l e d   w i t h   p a r a m e t e r   0 x F F F F F F F F 
 
         [ . . ]   A n y   o p e r a t i o n   o f   e r a s e   s h o u l d   f o l l o w   t h e s e   s t e p s : 
         ( # )   C a l l   t h e   @ r e f   H A L _ F L A S H _ U n l o c k ( )   f u n c t i o n   t o   e n a b l e   t h e   f l a s h   c o n t r o l   r e g i s t e r   a n d   
                 p r o g r a m   m e m o r y   a c c e s s . 
         ( # )   C a l l   t h e   d e s i r e d   f u n c t i o n   t o   e r a s e   p a g e . 
         ( # )   C a l l   t h e   @ r e f   H A L _ F L A S H _ L o c k ( )   t o   d i s a b l e   t h e   f l a s h   p r o g r a m   m e m o r y   a c c e s s   
               ( r e c o m m e n d e d   t o   p r o t e c t   t h e   F L A S H   m e m o r y   a g a i n s t   p o s s i b l e   u n w a n t e d   o p e r a t i o n ) . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
     
 
 / * * 
     *   @ b r i e f     P e r f o r m   a   m a s s   e r a s e   o r   e r a s e   t h e   s p e c i f i e d   F L A S H   m e m o r y   p a g e s 
     *   @ n o t e       T o   c o r r e c t l y   r u n   t h i s   f u n c t i o n ,   t h e   @ r e f   H A L _ F L A S H _ U n l o c k ( )   f u n c t i o n 
     *                   m u s t   b e   c a l l e d   b e f o r e . 
     *                   C a l l   t h e   @ r e f   H A L _ F L A S H _ L o c k ( )   t o   d i s a b l e   t h e   f l a s h   m e m o r y   a c c e s s   
     *                   ( r e c o m m e n d e d   t o   p r o t e c t   t h e   F L A S H   m e m o r y   a g a i n s t   p o s s i b l e   u n w a n t e d   o p e r a t i o n ) 
     *   @ p a r a m [ i n ]     p E r a s e I n i t   p o i n t e r   t o   a n   F L A S H _ E r a s e I n i t T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   e r a s i n g . 
     * 
     *   @ p a r a m [ o u t ]     P a g e E r r o r   p o i n t e r   t o   v a r i a b l e     t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   o n   f a u l t y   p a g e   i n   c a s e   o f   e r r o r 
     *                   ( 0 x F F F F F F F F   m e a n s   t h a t   a l l   t h e   p a g e s   h a v e   b e e n   c o r r e c t l y   e r a s e d ) 
     * 
     *   @ r e t v a l   H A L _ S t a t u s T y p e D e f   H A L   S t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H E x _ E r a s e ( F L A S H _ E r a s e I n i t T y p e D e f   * p E r a s e I n i t ,   u i n t 3 2 _ t   * P a g e E r r o r ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ E R R O R ; 
     u i n t 3 2 _ t   a d d r e s s   =   0 U ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( & p F l a s h ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ F L A S H _ T Y P E E R A S E ( p E r a s e I n i t - > T y p e E r a s e ) ) ; 
 
     i f   ( p E r a s e I n i t - > T y p e E r a s e   = =   F L A S H _ T Y P E E R A S E _ M A S S E R A S E ) 
     { 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
         i f   ( p E r a s e I n i t - > B a n k s   = =   F L A S H _ B A N K _ B O T H ) 
         { 
             / *   M a s s   E r a s e   r e q u e s t e d   f o r   B a n k 1   a n d   B a n k 2   * / 
             / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
             i f   ( ( F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K )   & &   \ 
                     ( F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K ) ) 
             { 
                 / * M a s s   e r a s e   t o   b e   d o n e * / 
                 F L A S H _ M a s s E r a s e ( F L A S H _ B A N K _ B O T H ) ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 i f   ( ( F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K )   & &   \ 
                         ( F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K ) ) 
                 { 
                     s t a t u s   =   H A L _ O K ; 
                 } 
                 
                 / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   M E R   B i t   * / 
                 C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ M E R ) ; 
                 C L E A R _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ M E R ) ; 
             } 
         } 
         e l s e   i f   ( p E r a s e I n i t - > B a n k s   = =   F L A S H _ B A N K _ 2 ) 
         { 
             / *   M a s s   E r a s e   r e q u e s t e d   f o r   B a n k 2   * / 
             / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
             i f   ( F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K ) 
             { 
                 / * M a s s   e r a s e   t o   b e   d o n e * / 
                 F L A S H _ M a s s E r a s e ( F L A S H _ B A N K _ 2 ) ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
                 
                 / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   M E R   B i t   * / 
                 C L E A R _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ M E R ) ; 
             } 
         } 
         e l s e   
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
         { 
             / *   M a s s   E r a s e   r e q u e s t e d   f o r   B a n k 1   * / 
             / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
             i f   ( F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K ) 
             { 
                 / * M a s s   e r a s e   t o   b e   d o n e * / 
                 F L A S H _ M a s s E r a s e ( F L A S H _ B A N K _ 1 ) ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
                 
                 / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   M E R   B i t   * / 
                 C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ M E R ) ; 
             } 
         } 
     } 
     e l s e 
     { 
         / *   P a g e   E r a s e   i s   r e q u e s t e d   * / 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ F L A S H _ P R O G R A M _ A D D R E S S ( p E r a s e I n i t - > P a g e A d d r e s s ) ) ; 
         a s s e r t _ p a r a m ( I S _ F L A S H _ N B _ P A G E S ( p E r a s e I n i t - > P a g e A d d r e s s ,   p E r a s e I n i t - > N b P a g e s ) ) ; 
         
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
         / *   P a g e   E r a s e   r e q u e s t e d   o n   a d d r e s s   l o c a t e d   o n   b a n k 2   * / 
         i f ( p E r a s e I n i t - > P a g e A d d r e s s   >   F L A S H _ B A N K 1 _ E N D ) 
         {       
             / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
             i f   ( F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K ) 
             { 
                 / * I n i t i a l i z a t i o n   o f   P a g e E r r o r   v a r i a b l e * / 
                 * P a g e E r r o r   =   0 x F F F F F F F F U ; 
                 
                 / *   E r a s e   b y   p a g e   b y   p a g e   t o   b e   d o n e * / 
                 f o r ( a d d r e s s   =   p E r a s e I n i t - > P a g e A d d r e s s ; 
                         a d d r e s s   <   ( p E r a s e I n i t - > P a g e A d d r e s s   +   ( p E r a s e I n i t - > N b P a g e s ) * F L A S H _ P A G E _ S I Z E ) ; 
                         a d d r e s s   + =   F L A S H _ P A G E _ S I Z E ) 
                 { 
                     F L A S H _ P a g e E r a s e ( a d d r e s s ) ; 
                     
                     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n B a n k 2 ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
                     
                     / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P E R   B i t   * / 
                     C L E A R _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ P E R ) ; 
                     
                     i f   ( s t a t u s   ! =   H A L _ O K ) 
                     { 
                         / *   I n   c a s e   o f   e r r o r ,   s t o p   e r a s e   p r o c e d u r e   a n d   r e t u r n   t h e   f a u l t y   a d d r e s s   * / 
                         * P a g e E r r o r   =   a d d r e s s ; 
                         b r e a k ; 
                     } 
                 } 
             } 
         } 
         e l s e 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
       { 
             / *   P a g e   E r a s e   r e q u e s t e d   o n   a d d r e s s   l o c a t e d   o n   b a n k 1   * / 
             / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
             i f   ( F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E )   = =   H A L _ O K ) 
             { 
                 / * I n i t i a l i z a t i o n   o f   P a g e E r r o r   v a r i a b l e * / 
                 * P a g e E r r o r   =   0 x F F F F F F F F U ; 
                 
                 / *   E r a s e   p a g e   b y   p a g e   t o   b e   d o n e * / 
                 f o r ( a d d r e s s   =   p E r a s e I n i t - > P a g e A d d r e s s ; 
                         a d d r e s s   <   ( ( p E r a s e I n i t - > N b P a g e s   *   F L A S H _ P A G E _ S I Z E )   +   p E r a s e I n i t - > P a g e A d d r e s s ) ; 
                         a d d r e s s   + =   F L A S H _ P A G E _ S I Z E ) 
                 { 
                     F L A S H _ P a g e E r a s e ( a d d r e s s ) ; 
                     
                     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
                     
                     / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   P E R   B i t   * / 
                     C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ P E R ) ; 
                     
                     i f   ( s t a t u s   ! =   H A L _ O K ) 
                     { 
                         / *   I n   c a s e   o f   e r r o r ,   s t o p   e r a s e   p r o c e d u r e   a n d   r e t u r n   t h e   f a u l t y   a d d r e s s   * / 
                         * P a g e E r r o r   =   a d d r e s s ; 
                         b r e a k ; 
                     } 
                 } 
             } 
         } 
     } 
 
     / *   P r o c e s s   U n l o c k e d   * / 
     _ _ H A L _ U N L O C K ( & p F l a s h ) ; 
 
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     P e r f o r m   a   m a s s   e r a s e   o r   e r a s e   t h e   s p e c i f i e d   F L A S H   m e m o r y   p a g e s   w i t h   i n t e r r u p t   e n a b l e d 
     *   @ n o t e       T o   c o r r e c t l y   r u n   t h i s   f u n c t i o n ,   t h e   @ r e f   H A L _ F L A S H _ U n l o c k ( )   f u n c t i o n 
     *                   m u s t   b e   c a l l e d   b e f o r e . 
     *                   C a l l   t h e   @ r e f   H A L _ F L A S H _ L o c k ( )   t o   d i s a b l e   t h e   f l a s h   m e m o r y   a c c e s s   
     *                   ( r e c o m m e n d e d   t o   p r o t e c t   t h e   F L A S H   m e m o r y   a g a i n s t   p o s s i b l e   u n w a n t e d   o p e r a t i o n ) 
     *   @ p a r a m     p E r a s e I n i t   p o i n t e r   t o   a n   F L A S H _ E r a s e I n i t T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   e r a s i n g . 
     * 
     *   @ r e t v a l   H A L _ S t a t u s T y p e D e f   H A L   S t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H E x _ E r a s e _ I T ( F L A S H _ E r a s e I n i t T y p e D e f   * p E r a s e I n i t ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( & p F l a s h ) ; 
 
     / *   I f   p r o c e d u r e   a l r e a d y   o n g o i n g ,   r e j e c t   t h e   n e x t   o n e   * / 
     i f   ( p F l a s h . P r o c e d u r e O n G o i n g   ! =   F L A S H _ P R O C _ N O N E ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
     
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ F L A S H _ T Y P E E R A S E ( p E r a s e I n i t - > T y p e E r a s e ) ) ; 
 
     / *   E n a b l e   E n d   o f   F L A S H   O p e r a t i o n   a n d   E r r o r   s o u r c e   i n t e r r u p t s   * / 
     _ _ H A L _ F L A S H _ E N A B L E _ I T ( F L A S H _ I T _ E O P   |   F L A S H _ I T _ E R R ) ; 
 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
     / *   E n a b l e   E n d   o f   F L A S H   O p e r a t i o n   a n d   E r r o r   s o u r c e   i n t e r r u p t s   * / 
     _ _ H A L _ F L A S H _ E N A B L E _ I T ( F L A S H _ I T _ E O P _ B A N K 2   |   F L A S H _ I T _ E R R _ B A N K 2 ) ; 
     
 # e n d i f 
     i f   ( p E r a s e I n i t - > T y p e E r a s e   = =   F L A S H _ T Y P E E R A S E _ M A S S E R A S E ) 
     { 
         / * M a s s   e r a s e   t o   b e   d o n e * / 
         p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ M A S S E R A S E ; 
                 F L A S H _ M a s s E r a s e ( p E r a s e I n i t - > B a n k s ) ; 
     } 
     e l s e 
     { 
         / *   E r a s e   b y   p a g e   t o   b e   d o n e * / 
 
         / *   C h e c k   t h e   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ F L A S H _ P R O G R A M _ A D D R E S S ( p E r a s e I n i t - > P a g e A d d r e s s ) ) ; 
         a s s e r t _ p a r a m ( I S _ F L A S H _ N B _ P A G E S ( p E r a s e I n i t - > P a g e A d d r e s s ,   p E r a s e I n i t - > N b P a g e s ) ) ; 
 
         p F l a s h . P r o c e d u r e O n G o i n g   =   F L A S H _ P R O C _ P A G E E R A S E ; 
         p F l a s h . D a t a R e m a i n i n g   =   p E r a s e I n i t - > N b P a g e s ; 
         p F l a s h . A d d r e s s   =   p E r a s e I n i t - > P a g e A d d r e s s ; 
 
         / * E r a s e   1 s t   p a g e   a n d   w a i t   f o r   I T * / 
         F L A S H _ P a g e E r a s e ( p E r a s e I n i t - > P a g e A d d r e s s ) ; 
     } 
 
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   F L A S H E x _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   O p t i o n   B y t e s   P r o g r a m m i n g   f u n c t i o n s 
   *     @ b r i e f       O p t i o n   B y t e s   P r o g r a m m i n g   f u n c t i o n s 
     * 
 @ v e r b a t i m       
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                 # # # # #   O p t i o n   B y t e s   P r o g r a m m i n g   f u n c t i o n s   # # # # #   
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =     
         [ . . ] 
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   F L A S H   
         o p t i o n   b y t e s   o p e r a t i o n s . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     E r a s e s   t h e   F L A S H   o p t i o n   b y t e s . 
     *   @ n o t e       T h i s   f u n c t i o n s   e r a s e s   a l l   o p t i o n   b y t e s   e x c e p t   t h e   R e a d   p r o t e c t i o n   ( R D P ) . 
     *                   T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   F L A S H   i n t e r f a c e 
     *                   T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ O B _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   o p t i o n s   b y t e s 
     *                   T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ O B _ L a u n c h ( )   s h o u l d   b e   c a l l e d   a f t e r   t o   f o r c e   t h e   r e l o a d   o f   t h e   o p t i o n s   b y t e s 
     *                   ( s y s t e m   r e s e t   w i l l   o c c u r ) 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H E x _ O B E r a s e ( v o i d ) 
 { 
     u i n t 8 _ t   r d p t m p   =   O B _ R D P _ L E V E L _ 0 ; 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ E R R O R ; 
 
     / *   G e t   t h e   a c t u a l   r e a d   p r o t e c t i o n   O p t i o n   B y t e   v a l u e   * / 
     r d p t m p   =   F L A S H _ O B _ G e t R D P ( ) ; 
 
     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
 
     i f ( s t a t u s   = =   H A L _ O K ) 
     { 
         / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
         p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
 
         / *   I f   t h e   p r e v i o u s   o p e r a t i o n   i s   c o m p l e t e d ,   p r o c e e d   t o   e r a s e   t h e   o p t i o n   b y t e s   * / 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T E R ) ; 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ S T R T ) ; 
 
         / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
         s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
 
         / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   O P T E R   B i t   * / 
         C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T E R ) ; 
 
         i f ( s t a t u s   = =   H A L _ O K ) 
         { 
             / *   R e s t o r e   t h e   l a s t   r e a d   p r o t e c t i o n   O p t i o n   B y t e   v a l u e   * / 
             s t a t u s   =   F L A S H _ O B _ R D P _ L e v e l C o n f i g ( r d p t m p ) ; 
         } 
     } 
 
     / *   R e t u r n   t h e   e r a s e   s t a t u s   * / 
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     P r o g r a m   o p t i o n   b y t e s 
     *   @ n o t e       T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   F L A S H   i n t e r f a c e 
     *                   T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ O B _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   o p t i o n s   b y t e s 
     *                   T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ O B _ L a u n c h ( )   s h o u l d   b e   c a l l e d   a f t e r   t o   f o r c e   t h e   r e l o a d   o f   t h e   o p t i o n s   b y t e s 
     *                   ( s y s t e m   r e s e t   w i l l   o c c u r ) 
     * 
     *   @ p a r a m     p O B I n i t   p o i n t e r   t o   a n   F L A S H _ O B I n i t S t r u c t   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   p r o g r a m m i n g . 
     * 
     *   @ r e t v a l   H A L _ S t a t u s T y p e D e f   H A L   S t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ F L A S H E x _ O B P r o g r a m ( F L A S H _ O B P r o g r a m I n i t T y p e D e f   * p O B I n i t ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ E R R O R ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( & p F l a s h ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ O P T I O N B Y T E ( p O B I n i t - > O p t i o n T y p e ) ) ; 
 
     / *   W r i t e   p r o t e c t i o n   c o n f i g u r a t i o n   * / 
     i f ( ( p O B I n i t - > O p t i o n T y p e   &   O P T I O N B Y T E _ W R P )   = =   O P T I O N B Y T E _ W R P ) 
     { 
         a s s e r t _ p a r a m ( I S _ W R P S T A T E ( p O B I n i t - > W R P S t a t e ) ) ; 
         i f   ( p O B I n i t - > W R P S t a t e   = =   O B _ W R P S T A T E _ E N A B L E ) 
         { 
             / *   E n a b l e   o f   W r i t e   p r o t e c t i o n   o n   t h e   s e l e c t e d   p a g e   * / 
             s t a t u s   =   F L A S H _ O B _ E n a b l e W R P ( p O B I n i t - > W R P P a g e ) ; 
         } 
         e l s e 
         { 
             / *   D i s a b l e   o f   W r i t e   p r o t e c t i o n   o n   t h e   s e l e c t e d   p a g e   * / 
             s t a t u s   =   F L A S H _ O B _ D i s a b l e W R P ( p O B I n i t - > W R P P a g e ) ; 
         } 
         i f   ( s t a t u s   ! =   H A L _ O K ) 
         { 
             / *   P r o c e s s   U n l o c k e d   * / 
             _ _ H A L _ U N L O C K ( & p F l a s h ) ; 
             r e t u r n   s t a t u s ; 
         } 
     } 
 
     / *   R e a d   p r o t e c t i o n   c o n f i g u r a t i o n   * / 
     i f ( ( p O B I n i t - > O p t i o n T y p e   &   O P T I O N B Y T E _ R D P )   = =   O P T I O N B Y T E _ R D P ) 
     { 
         s t a t u s   =   F L A S H _ O B _ R D P _ L e v e l C o n f i g ( p O B I n i t - > R D P L e v e l ) ; 
         i f   ( s t a t u s   ! =   H A L _ O K ) 
         { 
             / *   P r o c e s s   U n l o c k e d   * / 
             _ _ H A L _ U N L O C K ( & p F l a s h ) ; 
             r e t u r n   s t a t u s ; 
         } 
     } 
 
     / *   U S E R   c o n f i g u r a t i o n   * / 
     i f ( ( p O B I n i t - > O p t i o n T y p e   &   O P T I O N B Y T E _ U S E R )   = =   O P T I O N B Y T E _ U S E R ) 
     { 
         s t a t u s   =   F L A S H _ O B _ U s e r C o n f i g ( p O B I n i t - > U S E R C o n f i g ) ; 
         i f   ( s t a t u s   ! =   H A L _ O K ) 
         { 
             / *   P r o c e s s   U n l o c k e d   * / 
             _ _ H A L _ U N L O C K ( & p F l a s h ) ; 
             r e t u r n   s t a t u s ; 
         } 
     } 
 
     / *   D A T A   c o n f i g u r a t i o n * / 
     i f ( ( p O B I n i t - > O p t i o n T y p e   &   O P T I O N B Y T E _ D A T A )   = =   O P T I O N B Y T E _ D A T A ) 
     { 
         s t a t u s   =   F L A S H _ O B _ P r o g r a m D a t a ( p O B I n i t - > D A T A A d d r e s s ,   p O B I n i t - > D A T A D a t a ) ; 
         i f   ( s t a t u s   ! =   H A L _ O K ) 
         { 
             / *   P r o c e s s   U n l o c k e d   * / 
             _ _ H A L _ U N L O C K ( & p F l a s h ) ; 
             r e t u r n   s t a t u s ; 
         } 
     } 
 
     / *   P r o c e s s   U n l o c k e d   * / 
     _ _ H A L _ U N L O C K ( & p F l a s h ) ; 
 
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     G e t   t h e   O p t i o n   b y t e   c o n f i g u r a t i o n 
     *   @ p a r a m     p O B I n i t   p o i n t e r   t o   a n   F L A S H _ O B I n i t S t r u c t   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   p r o g r a m m i n g . 
     * 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ F L A S H E x _ O B G e t C o n f i g ( F L A S H _ O B P r o g r a m I n i t T y p e D e f   * p O B I n i t ) 
 { 
     p O B I n i t - > O p t i o n T y p e   =   O P T I O N B Y T E _ W R P   |   O P T I O N B Y T E _ R D P   |   O P T I O N B Y T E _ U S E R ; 
 
     / * G e t   W R P * / 
     p O B I n i t - > W R P P a g e   =   F L A S H _ O B _ G e t W R P ( ) ; 
 
     / * G e t   R D P   L e v e l * / 
     p O B I n i t - > R D P L e v e l   =   F L A S H _ O B _ G e t R D P ( ) ; 
 
     / * G e t   U S E R * / 
     p O B I n i t - > U S E R C o n f i g   =   F L A S H _ O B _ G e t U s e r ( ) ; 
 } 
 
 / * * 
     *   @ b r i e f     G e t   t h e   O p t i o n   b y t e   u s e r   d a t a 
     *   @ p a r a m     D A T A A d r e s s   A d d r e s s   o f   t h e   o p t i o n   b y t e   D A T A 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   @ r e f   O B _ D A T A _ A D D R E S S _ D A T A 0 
     *                         @ a r g   @ r e f   O B _ D A T A _ A D D R E S S _ D A T A 1 
     *   @ r e t v a l   V a l u e   p r o g r a m m e d   i n   U S E R   d a t a 
     * / 
 u i n t 3 2 _ t   H A L _ F L A S H E x _ O B G e t U s e r D a t a ( u i n t 3 2 _ t   D A T A A d r e s s ) 
 { 
     u i n t 3 2 _ t   v a l u e   =   0 ; 
     
     i f   ( D A T A A d r e s s   = =   O B _ D A T A _ A D D R E S S _ D A T A 0 ) 
     { 
         / *   G e t   v a l u e   p r o g r a m m e d   i n   O B   U S E R   D a t a 0   * / 
         v a l u e   =   R E A D _ B I T ( F L A S H - > O B R ,   F L A S H _ O B R _ D A T A 0 )   > >   F L A S H _ P O S I T I O N _ O B _ U S E R D A T A 0 _ B I T ; 
     } 
     e l s e 
     { 
         / *   G e t   v a l u e   p r o g r a m m e d   i n   O B   U S E R   D a t a 1   * / 
         v a l u e   =   R E A D _ B I T ( F L A S H - > O B R ,   F L A S H _ O B R _ D A T A 1 )   > >   F L A S H _ P O S I T I O N _ O B _ U S E R D A T A 1 _ B I T ; 
     } 
     
     r e t u r n   v a l u e ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   F L A S H E x _ P r i v a t e _ F u n c t i o n s 
   *   @ { 
   * / 
 
 / * * 
     *   @ b r i e f     F u l l   e r a s e   o f   F L A S H   m e m o r y   B a n k   
     *   @ p a r a m     B a n k s   B a n k s   t o   b e   e r a s e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   @ r e f   F L A S H _ B A N K _ 1   B a n k 1   t o   b e   e r a s e d 
     @ i f   S T M 3 2 F 1 0 1 x G 
     *                         @ a r g   @ r e f   F L A S H _ B A N K _ 2   B a n k 2   t o   b e   e r a s e d 
     *                         @ a r g   @ r e f   F L A S H _ B A N K _ B O T H   B a n k 1   a n d   B a n k 2   t o   b e   e r a s e d 
     @ e n d i f 
     @ i f   S T M 3 2 F 1 0 3 x G 
     *                         @ a r g   @ r e f   F L A S H _ B A N K _ 2   B a n k 2   t o   b e   e r a s e d 
     *                         @ a r g   @ r e f   F L A S H _ B A N K _ B O T H   B a n k 1   a n d   B a n k 2   t o   b e   e r a s e d 
     @ e n d i f 
     * 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   F L A S H _ M a s s E r a s e ( u i n t 3 2 _ t   B a n k s ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ F L A S H _ B A N K ( B a n k s ) ) ; 
 
     / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
     p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
     i f ( B a n k s   = =   F L A S H _ B A N K _ B O T H ) 
     { 
         / *   b a n k 1   &   b a n k 2   w i l l   b e   e r a s e d * / 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ M E R ) ; 
         S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ M E R ) ; 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ S T R T ) ; 
         S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ S T R T ) ; 
     } 
     e l s e   i f ( B a n k s   = =   F L A S H _ B A N K _ 2 ) 
     { 
         / * O n l y   b a n k 2   w i l l   b e   e r a s e d * / 
         S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ M E R ) ; 
         S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ S T R T ) ; 
     } 
     e l s e 
     { 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
 # i f   ! d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( B a n k s ) ; 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * /     
         / *   O n l y   b a n k 1   w i l l   b e   e r a s e d * / 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ M E R ) ; 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ S T R T ) ; 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
     } 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
 } 
 
 / * * 
     *   @ b r i e f     E n a b l e   t h e   w r i t e   p r o t e c t i o n   o f   t h e   d e s i r e d   p a g e s 
     *   @ n o t e       A n   o p t i o n   b y t e   e r a s e   i s   d o n e   a u t o m a t i c a l l y   i n   t h i s   f u n c t i o n .   
     *   @ n o t e       W h e n   t h e   m e m o r y   r e a d   p r o t e c t i o n   l e v e l   i s   s e l e c t e d   ( R D P   l e v e l   =   1 ) ,   
     *                   i t   i s   n o t   p o s s i b l e   t o   p r o g r a m   o r   e r a s e   t h e   f l a s h   p a g e   i   i f 
     *                   d e b u g   f e a t u r e s   a r e   c o n n e c t e d   o r   b o o t   c o d e   i s   e x e c u t e d   i n   R A M ,   e v e n   i f   n W R P i   =   1   
     *   
     *   @ p a r a m     W r i t e P r o t e c t P a g e   s p e c i f i e s   t h e   p a g e ( s )   t o   b e   w r i t e   p r o t e c t e d . 
     *                   T h e   v a l u e   o f   t h i s   p a r a m e t e r   d e p e n d   o n   d e v i c e   u s e d   w i t h i n   t h e   s a m e   s e r i e s   
     *   @ r e t v a l   H A L   s t a t u s   
     * / 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ E n a b l e W R P ( u i n t 3 2 _ t   W r i t e P r o t e c t P a g e ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ; 
     u i n t 1 6 _ t   W R P 0 _ D a t a   =   0 x F F F F ; 
 # i f   d e f i n e d ( F L A S H _ W R P 1 _ W R P 1 ) 
     u i n t 1 6 _ t   W R P 1 _ D a t a   =   0 x F F F F ; 
 # e n d i f   / *   F L A S H _ W R P 1 _ W R P 1   * / 
 # i f   d e f i n e d ( F L A S H _ W R P 2 _ W R P 2 ) 
     u i n t 1 6 _ t   W R P 2 _ D a t a   =   0 x F F F F ; 
 # e n d i f   / *   F L A S H _ W R P 2 _ W R P 2   * / 
 # i f   d e f i n e d ( F L A S H _ W R P 3 _ W R P 3 ) 
     u i n t 1 6 _ t   W R P 3 _ D a t a   =   0 x F F F F ; 
 # e n d i f   / *   F L A S H _ W R P 3 _ W R P 3   * / 
     
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ O B _ W R P ( W r i t e P r o t e c t P a g e ) ) ; 
         
     / *   G e t   c u r r e n t   w r i t e   p r o t e c t e d   p a g e s   a n d   t h e   n e w   p a g e s   t o   b e   p r o t e c t e d   * * * * * * / 
     W r i t e P r o t e c t P a g e   =   ( u i n t 3 2 _ t ) ( ~ ( ( ~ F L A S H _ O B _ G e t W R P ( ) )   |   W r i t e P r o t e c t P a g e ) ) ; 
     
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 0 T O 1 5 M A S K ) 
     W R P 0 _ D a t a   =   ( u i n t 1 6 _ t ) ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 0 T O 1 5 M A S K ) ; 
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 0 T O 3 1 M A S K ) 
     W R P 0 _ D a t a   =   ( u i n t 1 6 _ t ) ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 0 T O 3 1 M A S K ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 0 T O 3 1 M A S K   * / 
     
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 1 6 T O 3 1 M A S K ) 
     W R P 1 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 1 6 T O 3 1 M A S K )   > >   8 U ) ; 
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 3 2 T O 6 3 M A S K ) 
     W R P 1 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 3 2 T O 6 3 M A S K )   > >   8 U ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 3 2 T O 6 3 M A S K   * / 
   
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 6 4 T O 9 5 M A S K ) 
     W R P 2 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 6 4 T O 9 5 M A S K )   > >   1 6 U ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 6 4 T O 9 5 M A S K   * / 
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 3 2 T O 4 7 M A S K ) 
     W R P 2 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 3 2 T O 4 7 M A S K )   > >   1 6 U ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 3 2 T O 4 7 M A S K   * / 
 
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 9 6 T O 1 2 7 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 9 6 T O 1 2 7 M A S K )   > >   2 4 U ) ;   
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 4 8 T O 2 5 5 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 4 8 T O 2 5 5 M A S K )   > >   2 4 U ) ;   
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 4 8 T O 5 1 1 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 4 8 T O 5 1 1 M A S K )   > >   2 4 U ) ;   
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 4 8 T O 1 2 7 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 4 8 T O 1 2 7 M A S K )   > >   2 4 U ) ;   
 # e n d i f   / *   O B _ W R P _ P A G E S 9 6 T O 1 2 7 M A S K   * / 
     
     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
 
     i f ( s t a t u s   = =   H A L _ O K ) 
     {   
         / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
         p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
 
         / *   T o   b e   a b l e   t o   w r i t e   a g a i n   o p t i o n   b y t e ,   n e e d   t o   p e r f o r m   a   o p t i o n   b y t e   e r a s e   * / 
         s t a t u s   =   H A L _ F L A S H E x _ O B E r a s e ( ) ; 
         i f   ( s t a t u s   = =   H A L _ O K )     
         { 
             / *   E n a b l e   w r i t e   p r o t e c t i o n   * / 
             S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
 
 # i f   d e f i n e d ( F L A S H _ W R P 0 _ W R P 0 ) 
             i f ( W R P 0 _ D a t a   ! =   0 x F F U ) 
             { 
                 O B - > W R P 0   & =   W R P 0 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 0 _ W R P 0   * / 
 
 # i f   d e f i n e d ( F L A S H _ W R P 1 _ W R P 1 ) 
             i f ( ( s t a t u s   = =   H A L _ O K )   & &   ( W R P 1 _ D a t a   ! =   0 x F F U ) ) 
             { 
                 O B - > W R P 1   & =   W R P 1 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 1 _ W R P 1   * / 
 
 # i f   d e f i n e d ( F L A S H _ W R P 2 _ W R P 2 ) 
             i f ( ( s t a t u s   = =   H A L _ O K )   & &   ( W R P 2 _ D a t a   ! =   0 x F F U ) ) 
             { 
                 O B - > W R P 2   & =   W R P 2 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 2 _ W R P 2   * / 
 
 # i f   d e f i n e d ( F L A S H _ W R P 3 _ W R P 3 ) 
             i f ( ( s t a t u s   = =   H A L _ O K )   & &   ( W R P 3 _ D a t a   ! =   0 x F F U ) ) 
             { 
                 O B - > W R P 3   & =   W R P 3 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 3 _ W R P 3   * / 
 
             / *   i f   t h e   p r o g r a m   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   O P T P G   B i t   * / 
             C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
         } 
     } 
     
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     D i s a b l e   t h e   w r i t e   p r o t e c t i o n   o f   t h e   d e s i r e d   p a g e s 
     *   @ n o t e       A n   o p t i o n   b y t e   e r a s e   i s   d o n e   a u t o m a t i c a l l y   i n   t h i s   f u n c t i o n .   
     *   @ n o t e       W h e n   t h e   m e m o r y   r e a d   p r o t e c t i o n   l e v e l   i s   s e l e c t e d   ( R D P   l e v e l   =   1 ) ,   
     *                   i t   i s   n o t   p o s s i b l e   t o   p r o g r a m   o r   e r a s e   t h e   f l a s h   p a g e   i   i f       
     *                   d e b u g   f e a t u r e s   a r e   c o n n e c t e d   o r   b o o t   c o d e   i s   e x e c u t e d   i n   R A M ,   e v e n   i f   n W R P i   =   1   
     *   
     *   @ p a r a m     W r i t e P r o t e c t P a g e   s p e c i f i e s   t h e   p a g e ( s )   t o   b e   w r i t e   u n p r o t e c t e d . 
     *                   T h e   v a l u e   o f   t h i s   p a r a m e t e r   d e p e n d   o n   d e v i c e   u s e d   w i t h i n   t h e   s a m e   s e r i e s   
     *   @ r e t v a l   H A L   s t a t u s   
     * / 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ D i s a b l e W R P ( u i n t 3 2 _ t   W r i t e P r o t e c t P a g e ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ; 
     u i n t 1 6 _ t   W R P 0 _ D a t a   =   0 x F F F F ; 
 # i f   d e f i n e d ( F L A S H _ W R P 1 _ W R P 1 ) 
     u i n t 1 6 _ t   W R P 1 _ D a t a   =   0 x F F F F ; 
 # e n d i f   / *   F L A S H _ W R P 1 _ W R P 1   * / 
 # i f   d e f i n e d ( F L A S H _ W R P 2 _ W R P 2 ) 
     u i n t 1 6 _ t   W R P 2 _ D a t a   =   0 x F F F F ; 
 # e n d i f   / *   F L A S H _ W R P 2 _ W R P 2   * / 
 # i f   d e f i n e d ( F L A S H _ W R P 3 _ W R P 3 ) 
     u i n t 1 6 _ t   W R P 3 _ D a t a   =   0 x F F F F ; 
 # e n d i f   / *   F L A S H _ W R P 3 _ W R P 3   * / 
     
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ O B _ W R P ( W r i t e P r o t e c t P a g e ) ) ; 
 
     / *   G e t   c u r r e n t   w r i t e   p r o t e c t e d   p a g e s   a n d   t h e   n e w   p a g e s   t o   b e   u n p r o t e c t e d   * * * * * * / 
     W r i t e P r o t e c t P a g e   =   ( F L A S H _ O B _ G e t W R P ( )   |   W r i t e P r o t e c t P a g e ) ; 
 
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 0 T O 1 5 M A S K ) 
     W R P 0 _ D a t a   =   ( u i n t 1 6 _ t ) ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 0 T O 1 5 M A S K ) ; 
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 0 T O 3 1 M A S K ) 
     W R P 0 _ D a t a   =   ( u i n t 1 6 _ t ) ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 0 T O 3 1 M A S K ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 0 T O 3 1 M A S K   * / 
     
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 1 6 T O 3 1 M A S K ) 
     W R P 1 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 1 6 T O 3 1 M A S K )   > >   8 U ) ; 
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 3 2 T O 6 3 M A S K ) 
     W R P 1 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 3 2 T O 6 3 M A S K )   > >   8 U ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 3 2 T O 6 3 M A S K   * / 
   
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 6 4 T O 9 5 M A S K ) 
     W R P 2 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 6 4 T O 9 5 M A S K )   > >   1 6 U ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 6 4 T O 9 5 M A S K   * / 
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 3 2 T O 4 7 M A S K ) 
     W R P 2 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 3 2 T O 4 7 M A S K )   > >   1 6 U ) ; 
 # e n d i f   / *   O B _ W R P _ P A G E S 3 2 T O 4 7 M A S K   * / 
 
 # i f   d e f i n e d ( O B _ W R P _ P A G E S 9 6 T O 1 2 7 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 9 6 T O 1 2 7 M A S K )   > >   2 4 U ) ;   
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 4 8 T O 2 5 5 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 4 8 T O 2 5 5 M A S K )   > >   2 4 U ) ;   
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 4 8 T O 5 1 1 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 4 8 T O 5 1 1 M A S K )   > >   2 4 U ) ;   
 # e l i f   d e f i n e d ( O B _ W R P _ P A G E S 4 8 T O 1 2 7 M A S K ) 
     W R P 3 _ D a t a   =   ( u i n t 1 6 _ t ) ( ( W r i t e P r o t e c t P a g e   &   O B _ W R P _ P A G E S 4 8 T O 1 2 7 M A S K )   > >   2 4 U ) ;   
 # e n d i f   / *   O B _ W R P _ P A G E S 9 6 T O 1 2 7 M A S K   * / 
 
         
     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
 
     i f ( s t a t u s   = =   H A L _ O K ) 
     {   
         / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
         p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
 
         / *   T o   b e   a b l e   t o   w r i t e   a g a i n   o p t i o n   b y t e ,   n e e d   t o   p e r f o r m   a   o p t i o n   b y t e   e r a s e   * / 
         s t a t u s   =   H A L _ F L A S H E x _ O B E r a s e ( ) ; 
         i f   ( s t a t u s   = =   H A L _ O K )     
         { 
             S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
 
 # i f   d e f i n e d ( F L A S H _ W R P 0 _ W R P 0 ) 
             i f ( W R P 0 _ D a t a   ! =   0 x F F U ) 
             { 
                 O B - > W R P 0   | =   W R P 0 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 0 _ W R P 0   * / 
 
 # i f   d e f i n e d ( F L A S H _ W R P 1 _ W R P 1 ) 
             i f ( ( s t a t u s   = =   H A L _ O K )   & &   ( W R P 1 _ D a t a   ! =   0 x F F U ) ) 
             { 
                 O B - > W R P 1   | =   W R P 1 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 1 _ W R P 1   * / 
 
 # i f   d e f i n e d ( F L A S H _ W R P 2 _ W R P 2 ) 
             i f ( ( s t a t u s   = =   H A L _ O K )   & &   ( W R P 2 _ D a t a   ! =   0 x F F U ) ) 
             { 
                 O B - > W R P 2   | =   W R P 2 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 2 _ W R P 2   * / 
 
 # i f   d e f i n e d ( F L A S H _ W R P 3 _ W R P 3 ) 
             i f ( ( s t a t u s   = =   H A L _ O K )   & &   ( W R P 3 _ D a t a   ! =   0 x F F U ) ) 
             { 
                 O B - > W R P 3   | =   W R P 3 _ D a t a ; 
                 
                 / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
                 s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
             } 
 # e n d i f   / *   F L A S H _ W R P 3 _ W R P 3   * / 
 
             / *   i f   t h e   p r o g r a m   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   O P T P G   B i t   * / 
             C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
         } 
     } 
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     S e t   t h e   r e a d   p r o t e c t i o n   l e v e l . 
     *   @ p a r a m     R e a d P r o t e c t L e v e l   s p e c i f i e s   t h e   r e a d   p r o t e c t i o n   l e v e l . 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   @ r e f   O B _ R D P _ L E V E L _ 0   N o   p r o t e c t i o n 
     *                         @ a r g   @ r e f   O B _ R D P _ L E V E L _ 1   R e a d   p r o t e c t i o n   o f   t h e   m e m o r y 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ R D P _ L e v e l C o n f i g ( u i n t 8 _ t   R e a d P r o t e c t L e v e l ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ; 
     
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ O B _ R D P _ L E V E L ( R e a d P r o t e c t L e v e l ) ) ; 
     
     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
     
     i f ( s t a t u s   = =   H A L _ O K ) 
     {   
         / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
         p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
         
         / *   I f   t h e   p r e v i o u s   o p e r a t i o n   i s   c o m p l e t e d ,   p r o c e e d   t o   e r a s e   t h e   o p t i o n   b y t e s   * / 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T E R ) ; 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ S T R T ) ; 
 
         / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
         s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
 
         / *   I f   t h e   e r a s e   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   O P T E R   B i t   * / 
         C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T E R ) ; 
 
         i f ( s t a t u s   = =   H A L _ O K ) 
         { 
             / *   E n a b l e   t h e   O p t i o n   B y t e s   P r o g r a m m i n g   o p e r a t i o n   * / 
             S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
             
             W R I T E _ R E G ( O B - > R D P ,   R e a d P r o t e c t L e v e l ) ; 
             
             / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
             s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ;   
             
             / *   i f   t h e   p r o g r a m   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   O P T P G   B i t   * / 
             C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
         } 
     } 
     
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     P r o g r a m   t h e   F L A S H   U s e r   O p t i o n   B y t e .         
     *   @ n o t e       P r o g r a m m i n g   o f   t h e   O B   s h o u l d   b e   p e r f o r m e d   o n l y   a f t e r   a n   e r a s e   ( o t h e r w i s e   P G E R R   o c c u r s ) 
     *   @ p a r a m     U s e r C o n f i g   T h e   F L A S H   U s e r   O p t i o n   B y t e s   v a l u e s   F L A S H _ O B R _ I W D G _ S W ( B i t 2 ) ,   
     *                   F L A S H _ O B R _ n R S T _ S T O P ( B i t 3 ) , F L A S H _ O B R _ n R S T _ S T D B Y ( B i t 4 ) . 
     *                   A n d   B F B F 2 ( B i t 5 )   f o r   S T M 3 2 F 1 0 1 x G   a n d   S T M 3 2 F 1 0 3 x G   .   
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ U s e r C o n f i g ( u i n t 8 _ t   U s e r C o n f i g ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ O B _ I W D G _ S O U R C E ( ( U s e r C o n f i g & O B _ I W D G _ S W ) ) ) ; 
     a s s e r t _ p a r a m ( I S _ O B _ S T O P _ S O U R C E ( ( U s e r C o n f i g & O B _ S T O P _ N O _ R S T ) ) ) ; 
     a s s e r t _ p a r a m ( I S _ O B _ S T D B Y _ S O U R C E ( ( U s e r C o n f i g & O B _ S T D B Y _ N O _ R S T ) ) ) ; 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
     a s s e r t _ p a r a m ( I S _ O B _ B O O T 1 ( ( U s e r C o n f i g & O B _ B O O T 1 _ S E T ) ) ) ; 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
 
     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
     
     i f ( s t a t u s   = =   H A L _ O K ) 
     {           
         / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
         p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
 
         / *   E n a b l e   t h e   O p t i o n   B y t e s   P r o g r a m m i n g   o p e r a t i o n   * / 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ;   
   
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
         O B - > U S E R   =   ( U s e r C o n f i g   |   0 x F 0 U ) ; 
 # e l s e 
         O B - > U S E R   =   ( U s e r C o n f i g   |   0 x 8 8 U ) ; 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
 
         / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
         s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
 
         / *   i f   t h e   p r o g r a m   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   O P T P G   B i t   * / 
         C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
     } 
     
     r e t u r n   s t a t u s ;   
 } 
 
 / * * 
     *   @ b r i e f     P r o g r a m s   a   h a l f   w o r d   a t   a   s p e c i f i e d   O p t i o n   B y t e   D a t a   a d d r e s s . 
     *   @ n o t e       T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   F L A S H   i n t e r f a c e 
     *                   T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ O B _ U n l o c k ( )   s h o u l d   b e   c a l l e d   b e f o r e   t o   u n l o c k   t h e   o p t i o n s   b y t e s 
     *                   T h e   f u n c t i o n   @ r e f   H A L _ F L A S H _ O B _ L a u n c h ( )   s h o u l d   b e   c a l l e d   a f t e r   t o   f o r c e   t h e   r e l o a d   o f   t h e   o p t i o n s   b y t e s   
     *                   ( s y s t e m   r e s e t   w i l l   o c c u r ) 
     *                   P r o g r a m m i n g   o f   t h e   O B   s h o u l d   b e   p e r f o r m e d   o n l y   a f t e r   a n   e r a s e   ( o t h e r w i s e   P G E R R   o c c u r s ) 
     *   @ p a r a m     A d d r e s s   s p e c i f i e s   t h e   a d d r e s s   t o   b e   p r o g r a m m e d . 
     *                   T h i s   p a r a m e t e r   c a n   b e   0 x 1 F F F F 8 0 4   o r   0 x 1 F F F F 8 0 6 .   
     *   @ p a r a m     D a t a   s p e c i f i e s   t h e   d a t a   t o   b e   p r o g r a m m e d . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 s t a t i c   H A L _ S t a t u s T y p e D e f   F L A S H _ O B _ P r o g r a m D a t a ( u i n t 3 2 _ t   A d d r e s s ,   u i n t 8 _ t   D a t a ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ E R R O R ; 
     
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ O B _ D A T A _ A D D R E S S ( A d d r e s s ) ) ; 
     
     / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
     s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
     
     i f ( s t a t u s   = =   H A L _ O K ) 
     { 
         / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
         p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
 
         / *   E n a b l e s   t h e   O p t i o n   B y t e s   P r o g r a m m i n g   o p e r a t i o n   * / 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ;   
         * ( _ _ I O   u i n t 1 6 _ t * ) A d d r e s s   =   D a t a ; 
         
         / *   W a i t   f o r   l a s t   o p e r a t i o n   t o   b e   c o m p l e t e d   * / 
         s t a t u s   =   F L A S H _ W a i t F o r L a s t O p e r a t i o n ( ( u i n t 3 2 _ t ) F L A S H _ T I M E O U T _ V A L U E ) ; 
         
         / *   I f   t h e   p r o g r a m   o p e r a t i o n   i s   c o m p l e t e d ,   d i s a b l e   t h e   O P T P G   B i t   * / 
         C L E A R _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ O P T P G ) ; 
     } 
     / *   R e t u r n   t h e   O p t i o n   B y t e   D a t a   P r o g r a m   S t a t u s   * / 
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   F L A S H   W r i t e   P r o t e c t i o n   O p t i o n   B y t e s   v a l u e . 
     *   @ r e t v a l   T h e   F L A S H   W r i t e   P r o t e c t i o n   O p t i o n   B y t e s   v a l u e 
     * / 
 s t a t i c   u i n t 3 2 _ t   F L A S H _ O B _ G e t W R P ( v o i d ) 
 { 
     / *   R e t u r n   t h e   F L A S H   w r i t e   p r o t e c t i o n   R e g i s t e r   v a l u e   * / 
     r e t u r n   ( u i n t 3 2 _ t ) ( R E A D _ R E G ( F L A S H - > W R P R ) ) ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n s   t h e   F L A S H   R e a d   P r o t e c t i o n   l e v e l . 
     *   @ r e t v a l   F L A S H   R D P   l e v e l 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   @ r e f   O B _ R D P _ L E V E L _ 0   N o   p r o t e c t i o n 
     *                         @ a r g   @ r e f   O B _ R D P _ L E V E L _ 1   R e a d   p r o t e c t i o n   o f   t h e   m e m o r y 
     * / 
 s t a t i c   u i n t 3 2 _ t   F L A S H _ O B _ G e t R D P ( v o i d ) 
 { 
     u i n t 3 2 _ t   r e a d s t a t u s   =   O B _ R D P _ L E V E L _ 0 ; 
     u i n t 3 2 _ t   t m p _ r e g   =   0 U ; 
     
     / *   R e a d   R D P   l e v e l   b i t s   * / 
     t m p _ r e g   =   R E A D _ B I T ( F L A S H - > O B R ,   F L A S H _ O B R _ R D P R T ) ; 
 
     i f   ( t m p _ r e g   = =   F L A S H _ O B R _ R D P R T ) 
     { 
         r e a d s t a t u s   =   O B _ R D P _ L E V E L _ 1 ; 
     } 
     e l s e   
     { 
         r e a d s t a t u s   =   O B _ R D P _ L E V E L _ 0 ; 
     } 
 
     r e t u r n   r e a d s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   F L A S H   U s e r   O p t i o n   B y t e   v a l u e . 
     *   @ r e t v a l   T h e   F L A S H   U s e r   O p t i o n   B y t e s   v a l u e s :   F L A S H _ O B R _ I W D G _ S W ( B i t 2 ) ,   
     *                   F L A S H _ O B R _ n R S T _ S T O P ( B i t 3 ) , F L A S H _ O B R _ n R S T _ S T D B Y ( B i t 4 ) . 
     *                   A n d   F L A S H _ O B R _ B F B 2 ( B i t 5 )   f o r   S T M 3 2 F 1 0 1 x G   a n d   S T M 3 2 F 1 0 3 x G   .   
     * / 
 s t a t i c   u i n t 8 _ t   F L A S H _ O B _ G e t U s e r ( v o i d ) 
 { 
     / *   R e t u r n   t h e   U s e r   O p t i o n   B y t e   * / 
     r e t u r n   ( u i n t 8 _ t ) ( ( R E A D _ R E G ( F L A S H - > O B R )   &   F L A S H _ O B R _ U S E R )   > >   F L A S H _ P O S I T I O N _ I W D G S W _ B I T ) ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   F L A S H 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   F L A S H _ P r i v a t e _ F u n c t i o n s 
   *   @ { 
   * / 
 
 / * * 
     *   @ b r i e f     E r a s e   t h e   s p e c i f i e d   F L A S H   m e m o r y   p a g e 
     *   @ p a r a m     P a g e A d d r e s s   F L A S H   p a g e   t o   e r a s e 
     *                   T h e   v a l u e   o f   t h i s   p a r a m e t e r   d e p e n d   o n   d e v i c e   u s e d   w i t h i n   t h e   s a m e   s e r i e s             
     *   
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   F L A S H _ P a g e E r a s e ( u i n t 3 2 _ t   P a g e A d d r e s s ) 
 { 
     / *   C l e a n   t h e   e r r o r   c o n t e x t   * / 
     p F l a s h . E r r o r C o d e   =   H A L _ F L A S H _ E R R O R _ N O N E ; 
 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
     i f ( P a g e A d d r e s s   >   F L A S H _ B A N K 1 _ E N D ) 
     {   
         / *   P r o c e e d   t o   e r a s e   t h e   p a g e   * / 
         S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ P E R ) ; 
         W R I T E _ R E G ( F L A S H - > A R 2 ,   P a g e A d d r e s s ) ; 
         S E T _ B I T ( F L A S H - > C R 2 ,   F L A S H _ C R 2 _ S T R T ) ; 
     } 
     e l s e 
     { 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
         / *   P r o c e e d   t o   e r a s e   t h e   p a g e   * / 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ P E R ) ; 
         W R I T E _ R E G ( F L A S H - > A R ,   P a g e A d d r e s s ) ; 
         S E T _ B I T ( F L A S H - > C R ,   F L A S H _ C R _ S T R T ) ; 
 # i f   d e f i n e d ( F L A S H _ B A N K 2 _ E N D ) 
     } 
 # e n d i f   / *   F L A S H _ B A N K 2 _ E N D   * / 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 # e n d i f   / *   H A L _ F L A S H _ M O D U L E _ E N A B L E D   * / 
 / * * 
     *   @ } 
     * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 