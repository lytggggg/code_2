??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         u s a r t . c 
     *   @ b r i e f       T h i s   f i l e   p r o v i d e s   c o d e   f o r   t h e   c o n f i g u r a t i o n 
     *                     o f   t h e   U S A R T   i n s t a n c e s . 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ a t t e n t i o n 
     * 
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 2 2   S T M i c r o e l e c t r o n i c s . 
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
 # i n c l u d e   " u s a r t . h " 
 
 / *   U S E R   C O D E   B E G I N   0   * / 
 # i n c l u d e   < s t d i o . h > 
 i n t   f p u t c ( i n t   c h , F I L E   * f ) 
   
 { 
         H A L _ U A R T _ T r a n s m i t ( & h u a r t 1 , ( u i n t 8 _ t   * ) & c h , 1 , 0 x F F F F ) ;         
 	 	 / / I{?_?S??~_g	 
 	 w h i l e ( _ _ H A L _ U A R T _ G E T _ F L A G ( & h u a r t 1 , U A R T _ F L A G _ T C ) ! = S E T ) { 
 	 } 	 	 
 
         r e t u r n   c h ; 
 } 
 / *   U S E R   C O D E   E N D   0   * / 
 
 U A R T _ H a n d l e T y p e D e f   h u a r t 1 ; 
 U A R T _ H a n d l e T y p e D e f   h u a r t 2 ; 
 D M A _ H a n d l e T y p e D e f   h d m a _ u s a r t 2 _ r x ; 
 D M A _ H a n d l e T y p e D e f   h d m a _ u s a r t 2 _ t x ; 
 
 v o l a t i l e   u i n t 8 _ t   r x _ l e n = 0 ; 
 v o l a t i l e   u i n t 8 _ t   r e c v _ e n d _ f l a g = 0 ; 
 u i n t 8 _ t   r x _ b u f f e r [ 2 0 ] ; 
 / *   U S A R T 1   i n i t   f u n c t i o n   * / 
 
 v o i d   M X _ U S A R T 1 _ U A R T _ I n i t ( v o i d ) 
 { 
 
     / *   U S E R   C O D E   B E G I N   U S A R T 1 _ I n i t   0   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 1 _ I n i t   0   * / 
 
     / *   U S E R   C O D E   B E G I N   U S A R T 1 _ I n i t   1   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 1 _ I n i t   1   * / 
     h u a r t 1 . I n s t a n c e   =   U S A R T 1 ; 
     h u a r t 1 . I n i t . B a u d R a t e   =   1 1 5 2 0 0 ; 
     h u a r t 1 . I n i t . W o r d L e n g t h   =   U A R T _ W O R D L E N G T H _ 8 B ; 
     h u a r t 1 . I n i t . S t o p B i t s   =   U A R T _ S T O P B I T S _ 1 ; 
     h u a r t 1 . I n i t . P a r i t y   =   U A R T _ P A R I T Y _ N O N E ; 
     h u a r t 1 . I n i t . M o d e   =   U A R T _ M O D E _ T X _ R X ; 
     h u a r t 1 . I n i t . H w F l o w C t l   =   U A R T _ H W C O N T R O L _ N O N E ; 
     h u a r t 1 . I n i t . O v e r S a m p l i n g   =   U A R T _ O V E R S A M P L I N G _ 1 6 ; 
     i f   ( H A L _ U A R T _ I n i t ( & h u a r t 1 )   ! =   H A L _ O K ) 
     { 
         E r r o r _ H a n d l e r ( ) ; 
     } 
     / *   U S E R   C O D E   B E G I N   U S A R T 1 _ I n i t   2   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 1 _ I n i t   2   * / 
 
 } 
 / *   U S A R T 2   i n i t   f u n c t i o n   * / 
 
 v o i d   M X _ U S A R T 2 _ U A R T _ I n i t ( v o i d ) 
 { 
 
     / *   U S E R   C O D E   B E G I N   U S A R T 2 _ I n i t   0   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 2 _ I n i t   0   * / 
 
     / *   U S E R   C O D E   B E G I N   U S A R T 2 _ I n i t   1   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 2 _ I n i t   1   * / 
     h u a r t 2 . I n s t a n c e   =   U S A R T 2 ; 
     h u a r t 2 . I n i t . B a u d R a t e   =   4 8 0 0 ; 
     h u a r t 2 . I n i t . W o r d L e n g t h   =   U A R T _ W O R D L E N G T H _ 8 B ; 
     h u a r t 2 . I n i t . S t o p B i t s   =   U A R T _ S T O P B I T S _ 1 ; 
     h u a r t 2 . I n i t . P a r i t y   =   U A R T _ P A R I T Y _ N O N E ; 
     h u a r t 2 . I n i t . M o d e   =   U A R T _ M O D E _ T X _ R X ; 
     h u a r t 2 . I n i t . H w F l o w C t l   =   U A R T _ H W C O N T R O L _ N O N E ; 
     h u a r t 2 . I n i t . O v e r S a m p l i n g   =   U A R T _ O V E R S A M P L I N G _ 1 6 ; 
     i f   ( H A L _ U A R T _ I n i t ( & h u a r t 2 )   ! =   H A L _ O K ) 
     { 
         E r r o r _ H a n d l e r ( ) ; 
     } 
     / *   U S E R   C O D E   B E G I N   U S A R T 2 _ I n i t   2   * / 
 / / 	 _ _ H A L _ U A R T _ E N A B L E _ I T ( & h u a r t 2 ,   U A R T _ I T _ I D L E ) ; / / O??i d l e -N?e
 / / 	 H A L _ U A R T _ R e c e i v e _ D M A ( & h u a r t 2 , r x _ b u f f e r , 1 0 ) ; / / Sb _D M A ?c6e?pencX[eQr x _ b u f f e r pe?~-N0	 
     / *   U S E R   C O D E   E N D   U S A R T 2 _ I n i t   2   * / 
 
 } 
 
 v o i d   H A L _ U A R T _ M s p I n i t ( U A R T _ H a n d l e T y p e D e f *   u a r t H a n d l e ) 
 { 
 
     G P I O _ I n i t T y p e D e f   G P I O _ I n i t S t r u c t   =   { 0 } ; 
     i f ( u a r t H a n d l e - > I n s t a n c e = = U S A R T 1 ) 
     { 
     / *   U S E R   C O D E   B E G I N   U S A R T 1 _ M s p I n i t   0   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 1 _ M s p I n i t   0   * / 
         / *   U S A R T 1   c l o c k   e n a b l e   * / 
         _ _ H A L _ R C C _ U S A R T 1 _ C L K _ E N A B L E ( ) ; 
 
         _ _ H A L _ R C C _ G P I O A _ C L K _ E N A B L E ( ) ; 
         / * * U S A R T 1   G P I O   C o n f i g u r a t i o n 
         P A 9           - - - - - - >   U S A R T 1 _ T X 
         P A 1 0           - - - - - - >   U S A R T 1 _ R X 
         * / 
         G P I O _ I n i t S t r u c t . P i n   =   G P I O _ P I N _ 9 ; 
         G P I O _ I n i t S t r u c t . M o d e   =   G P I O _ M O D E _ A F _ P P ; 
         G P I O _ I n i t S t r u c t . S p e e d   =   G P I O _ S P E E D _ F R E Q _ H I G H ; 
         H A L _ G P I O _ I n i t ( G P I O A ,   & G P I O _ I n i t S t r u c t ) ; 
 
         G P I O _ I n i t S t r u c t . P i n   =   G P I O _ P I N _ 1 0 ; 
         G P I O _ I n i t S t r u c t . M o d e   =   G P I O _ M O D E _ I N P U T ; 
         G P I O _ I n i t S t r u c t . P u l l   =   G P I O _ N O P U L L ; 
         H A L _ G P I O _ I n i t ( G P I O A ,   & G P I O _ I n i t S t r u c t ) ; 
 
     / *   U S E R   C O D E   B E G I N   U S A R T 1 _ M s p I n i t   1   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 1 _ M s p I n i t   1   * / 
     } 
     e l s e   i f ( u a r t H a n d l e - > I n s t a n c e = = U S A R T 2 ) 
     { 
     / *   U S E R   C O D E   B E G I N   U S A R T 2 _ M s p I n i t   0   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 2 _ M s p I n i t   0   * / 
         / *   U S A R T 2   c l o c k   e n a b l e   * / 
         _ _ H A L _ R C C _ U S A R T 2 _ C L K _ E N A B L E ( ) ; 
 
         _ _ H A L _ R C C _ G P I O A _ C L K _ E N A B L E ( ) ; 
         / * * U S A R T 2   G P I O   C o n f i g u r a t i o n 
         P A 2           - - - - - - >   U S A R T 2 _ T X 
         P A 3           - - - - - - >   U S A R T 2 _ R X 
         * / 
         G P I O _ I n i t S t r u c t . P i n   =   G P I O _ P I N _ 2 ; 
         G P I O _ I n i t S t r u c t . M o d e   =   G P I O _ M O D E _ A F _ P P ; 
         G P I O _ I n i t S t r u c t . S p e e d   =   G P I O _ S P E E D _ F R E Q _ H I G H ; 
         H A L _ G P I O _ I n i t ( G P I O A ,   & G P I O _ I n i t S t r u c t ) ; 
 
         G P I O _ I n i t S t r u c t . P i n   =   G P I O _ P I N _ 3 ; 
         G P I O _ I n i t S t r u c t . M o d e   =   G P I O _ M O D E _ I N P U T ; 
         G P I O _ I n i t S t r u c t . P u l l   =   G P I O _ N O P U L L ; 
         H A L _ G P I O _ I n i t ( G P I O A ,   & G P I O _ I n i t S t r u c t ) ; 
 
         / *   U S A R T 2   D M A   I n i t   * / 
         / *   U S A R T 2 _ R X   I n i t   * / 
         h d m a _ u s a r t 2 _ r x . I n s t a n c e   =   D M A 1 _ C h a n n e l 6 ; 
         h d m a _ u s a r t 2 _ r x . I n i t . D i r e c t i o n   =   D M A _ P E R I P H _ T O _ M E M O R Y ; 
         h d m a _ u s a r t 2 _ r x . I n i t . P e r i p h I n c   =   D M A _ P I N C _ D I S A B L E ; 
         h d m a _ u s a r t 2 _ r x . I n i t . M e m I n c   =   D M A _ M I N C _ E N A B L E ; 
         h d m a _ u s a r t 2 _ r x . I n i t . P e r i p h D a t a A l i g n m e n t   =   D M A _ P D A T A A L I G N _ B Y T E ; 
         h d m a _ u s a r t 2 _ r x . I n i t . M e m D a t a A l i g n m e n t   =   D M A _ M D A T A A L I G N _ B Y T E ; 
         h d m a _ u s a r t 2 _ r x . I n i t . M o d e   =   D M A _ N O R M A L ; 
         h d m a _ u s a r t 2 _ r x . I n i t . P r i o r i t y   =   D M A _ P R I O R I T Y _ L O W ; 
         i f   ( H A L _ D M A _ I n i t ( & h d m a _ u s a r t 2 _ r x )   ! =   H A L _ O K ) 
         { 
             E r r o r _ H a n d l e r ( ) ; 
         } 
 
         _ _ H A L _ L I N K D M A ( u a r t H a n d l e , h d m a r x , h d m a _ u s a r t 2 _ r x ) ; 
 
         / *   U S A R T 2 _ T X   I n i t   * / 
         h d m a _ u s a r t 2 _ t x . I n s t a n c e   =   D M A 1 _ C h a n n e l 7 ; 
         h d m a _ u s a r t 2 _ t x . I n i t . D i r e c t i o n   =   D M A _ M E M O R Y _ T O _ P E R I P H ; 
         h d m a _ u s a r t 2 _ t x . I n i t . P e r i p h I n c   =   D M A _ P I N C _ D I S A B L E ; 
         h d m a _ u s a r t 2 _ t x . I n i t . M e m I n c   =   D M A _ M I N C _ E N A B L E ; 
         h d m a _ u s a r t 2 _ t x . I n i t . P e r i p h D a t a A l i g n m e n t   =   D M A _ P D A T A A L I G N _ B Y T E ; 
         h d m a _ u s a r t 2 _ t x . I n i t . M e m D a t a A l i g n m e n t   =   D M A _ M D A T A A L I G N _ B Y T E ; 
         h d m a _ u s a r t 2 _ t x . I n i t . M o d e   =   D M A _ N O R M A L ; 
         h d m a _ u s a r t 2 _ t x . I n i t . P r i o r i t y   =   D M A _ P R I O R I T Y _ L O W ; 
         i f   ( H A L _ D M A _ I n i t ( & h d m a _ u s a r t 2 _ t x )   ! =   H A L _ O K ) 
         { 
             E r r o r _ H a n d l e r ( ) ; 
         } 
 
         _ _ H A L _ L I N K D M A ( u a r t H a n d l e , h d m a t x , h d m a _ u s a r t 2 _ t x ) ; 
 
         / *   U S A R T 2   i n t e r r u p t   I n i t   * / 
         H A L _ N V I C _ S e t P r i o r i t y ( U S A R T 2 _ I R Q n ,   0 ,   0 ) ; 
         H A L _ N V I C _ E n a b l e I R Q ( U S A R T 2 _ I R Q n ) ; 
     / *   U S E R   C O D E   B E G I N   U S A R T 2 _ M s p I n i t   1   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 2 _ M s p I n i t   1   * / 
     } 
 } 
 
 v o i d   H A L _ U A R T _ M s p D e I n i t ( U A R T _ H a n d l e T y p e D e f *   u a r t H a n d l e ) 
 { 
 
     i f ( u a r t H a n d l e - > I n s t a n c e = = U S A R T 1 ) 
     { 
     / *   U S E R   C O D E   B E G I N   U S A R T 1 _ M s p D e I n i t   0   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 1 _ M s p D e I n i t   0   * / 
         / *   P e r i p h e r a l   c l o c k   d i s a b l e   * / 
         _ _ H A L _ R C C _ U S A R T 1 _ C L K _ D I S A B L E ( ) ; 
 
         / * * U S A R T 1   G P I O   C o n f i g u r a t i o n 
         P A 9           - - - - - - >   U S A R T 1 _ T X 
         P A 1 0           - - - - - - >   U S A R T 1 _ R X 
         * / 
         H A L _ G P I O _ D e I n i t ( G P I O A ,   G P I O _ P I N _ 9 | G P I O _ P I N _ 1 0 ) ; 
 
     / *   U S E R   C O D E   B E G I N   U S A R T 1 _ M s p D e I n i t   1   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 1 _ M s p D e I n i t   1   * / 
     } 
     e l s e   i f ( u a r t H a n d l e - > I n s t a n c e = = U S A R T 2 ) 
     { 
     / *   U S E R   C O D E   B E G I N   U S A R T 2 _ M s p D e I n i t   0   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 2 _ M s p D e I n i t   0   * / 
         / *   P e r i p h e r a l   c l o c k   d i s a b l e   * / 
         _ _ H A L _ R C C _ U S A R T 2 _ C L K _ D I S A B L E ( ) ; 
 
         / * * U S A R T 2   G P I O   C o n f i g u r a t i o n 
         P A 2           - - - - - - >   U S A R T 2 _ T X 
         P A 3           - - - - - - >   U S A R T 2 _ R X 
         * / 
         H A L _ G P I O _ D e I n i t ( G P I O A ,   G P I O _ P I N _ 2 | G P I O _ P I N _ 3 ) ; 
 
         / *   U S A R T 2   D M A   D e I n i t   * / 
         H A L _ D M A _ D e I n i t ( u a r t H a n d l e - > h d m a r x ) ; 
         H A L _ D M A _ D e I n i t ( u a r t H a n d l e - > h d m a t x ) ; 
 
         / *   U S A R T 2   i n t e r r u p t   D e i n i t   * / 
         H A L _ N V I C _ D i s a b l e I R Q ( U S A R T 2 _ I R Q n ) ; 
     / *   U S E R   C O D E   B E G I N   U S A R T 2 _ M s p D e I n i t   1   * / 
 
     / *   U S E R   C O D E   E N D   U S A R T 2 _ M s p D e I n i t   1   * / 
     } 
 } 
 
 / *   U S E R   C O D E   B E G I N   1   * / 
 
 / *   U S E R   C O D E   E N D   1   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 
 