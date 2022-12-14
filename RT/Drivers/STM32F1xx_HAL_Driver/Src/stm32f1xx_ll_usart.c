??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ u s a r t . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       U S A R T   L L   m o d u l e   d r i v e r .  
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
 # i f   d e f i n e d ( U S E _ F U L L _ L L _ D R I V E R )  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ u s a r t . h "  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ r c c . h "  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ b u s . h "  
 # i f d e f     U S E _ F U L L _ A S S E R T  
 # i n c l u d e   " s t m 3 2 _ a s s e r t . h "  
 # e l s e  
 # d e f i n e   a s s e r t _ p a r a m ( e x p r )   ( ( v o i d ) 0 U )  
 # e n d i f  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ L L _ D r i v e r  
     *   @ {  
     * /  
  
 # i f   d e f i n e d   ( U S A R T 1 )   | |   d e f i n e d   ( U S A R T 2 )   | |   d e f i n e d   ( U S A R T 3 )   | |   d e f i n e d   ( U A R T 4 )   | |   d e f i n e d   ( U A R T 5 )  
  
 / * *   @ a d d t o g r o u p   U S A R T _ L L  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   U S A R T _ L L _ P r i v a t e _ C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   U S A R T _ L L _ P r i v a t e _ M a c r o s  
     *   @ {  
     * /  
  
 / *   _ _ B A U D R A T E _ _   T h e   m a x i m u m   B a u d   R a t e   i s   d e r i v e d   f r o m   t h e   m a x i m u m   c l o c k   a v a i l a b l e  
   *                             d i v i d e d   b y   t h e   s m a l l e s t   o v e r s a m p l i n g   u s e d   o n   t h e   U S A R T   ( i . e .   8 )         * /  
 # d e f i n e   I S _ L L _ U S A R T _ B A U D R A T E ( _ _ B A U D R A T E _ _ )   ( ( _ _ B A U D R A T E _ _ )   < =   4 5 0 0 0 0 0 U )  
  
 / *   _ _ V A L U E _ _   I n   c a s e   o f   o v e r s a m p l i n g   b y   1 6   a n d   8 ,   B R R   c o n t e n t   m u s t   b e   g r e a t e r   t h a n   o r   e q u a l   t o   1 6 d .   * /  
 # d e f i n e   I S _ L L _ U S A R T _ B R R _ M I N ( _ _ V A L U E _ _ )   ( ( _ _ V A L U E _ _ )   > =   1 6 U )  
  
 # d e f i n e   I S _ L L _ U S A R T _ D I R E C T I O N ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ D I R E C T I O N _ N O N E )   \  
                                                                               | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ D I R E C T I O N _ R X )   \  
                                                                               | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ D I R E C T I O N _ T X )   \  
                                                                               | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ D I R E C T I O N _ T X _ R X ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ P A R I T Y ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ P A R I T Y _ N O N E )   \  
                                                                         | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ P A R I T Y _ E V E N )   \  
                                                                         | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ P A R I T Y _ O D D ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ D A T A W I D T H ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ D A T A W I D T H _ 8 B )   \  
                                                                               | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ D A T A W I D T H _ 9 B ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ O V E R S A M P L I N G ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ O V E R S A M P L I N G _ 1 6 )   \  
                                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ O V E R S A M P L I N G _ 8 ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ L A S T B I T C L K O U T P U T ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ L A S T C L K P U L S E _ N O _ O U T P U T )   \  
                                                                                             | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ L A S T C L K P U L S E _ O U T P U T ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ C L O C K P H A S E ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ P H A S E _ 1 E D G E )   \  
                                                                                 | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ P H A S E _ 2 E D G E ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ C L O C K P O L A R I T Y ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ P O L A R I T Y _ L O W )   \  
                                                                                       | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ P O L A R I T Y _ H I G H ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ C L O C K O U T P U T ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ C L O C K _ D I S A B L E )   \  
                                                                                   | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ C L O C K _ E N A B L E ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ S T O P B I T S ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ S T O P B I T S _ 0 _ 5 )   \  
                                                                             | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ S T O P B I T S _ 1 )   \  
                                                                             | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ S T O P B I T S _ 1 _ 5 )   \  
                                                                             | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ S T O P B I T S _ 2 ) )  
  
 # d e f i n e   I S _ L L _ U S A R T _ H W C O N T R O L ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ H W C O N T R O L _ N O N E )   \  
                                                                               | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ H W C O N T R O L _ R T S )   \  
                                                                               | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ H W C O N T R O L _ C T S )   \  
                                                                               | |   ( ( _ _ V A L U E _ _ )   = =   L L _ U S A R T _ H W C O N T R O L _ R T S _ C T S ) )  
  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   U S A R T _ L L _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   U S A R T _ L L _ E F _ I n i t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     D e - i n i t i a l i z e   U S A R T   r e g i s t e r s   ( R e g i s t e r s   r e s t o r e d   t o   t h e i r   d e f a u l t   v a l u e s ) .  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   U S A R T   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   U S A R T   r e g i s t e r s   a r e   n o t   d e - i n i t i a l i z e d  
     * /  
 E r r o r S t a t u s   L L _ U S A R T _ D e I n i t ( U S A R T _ T y p e D e f   * U S A R T x )  
 {  
     E r r o r S t a t u s   s t a t u s   =   S U C C E S S ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ U A R T _ I N S T A N C E ( U S A R T x ) ) ;  
  
     i f   ( U S A R T x   = =   U S A R T 1 )  
     {  
         / *   F o r c e   r e s e t   o f   U S A R T   c l o c k   * /  
         L L _ A P B 2 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1 ) ;  
  
         / *   R e l e a s e   r e s e t   o f   U S A R T   c l o c k   * /  
         L L _ A P B 2 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 2 _ G R P 1 _ P E R I P H _ U S A R T 1 ) ;  
     }  
     e l s e   i f   ( U S A R T x   = =   U S A R T 2 )  
     {  
         / *   F o r c e   r e s e t   o f   U S A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2 ) ;  
  
         / *   R e l e a s e   r e s e t   o f   U S A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 2 ) ;  
     }  
 # i f   d e f i n e d ( U S A R T 3 )  
     e l s e   i f   ( U S A R T x   = =   U S A R T 3 )  
     {  
         / *   F o r c e   r e s e t   o f   U S A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3 ) ;  
  
         / *   R e l e a s e   r e s e t   o f   U S A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U S A R T 3 ) ;  
     }  
 # e n d i f   / *   U S A R T 3   * /  
 # i f   d e f i n e d ( U A R T 4 )  
     e l s e   i f   ( U S A R T x   = =   U A R T 4 )  
     {  
         / *   F o r c e   r e s e t   o f   U A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4 ) ;  
  
         / *   R e l e a s e   r e s e t   o f   U A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 4 ) ;  
     }  
 # e n d i f   / *   U A R T 4   * /  
 # i f   d e f i n e d ( U A R T 5 )  
     e l s e   i f   ( U S A R T x   = =   U A R T 5 )  
     {  
         / *   F o r c e   r e s e t   o f   U A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ F o r c e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5 ) ;  
  
         / *   R e l e a s e   r e s e t   o f   U A R T   c l o c k   * /  
         L L _ A P B 1 _ G R P 1 _ R e l e a s e R e s e t ( L L _ A P B 1 _ G R P 1 _ P E R I P H _ U A R T 5 ) ;  
     }  
 # e n d i f   / *   U A R T 5   * /  
     e l s e  
     {  
         s t a t u s   =   E R R O R ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   U S A R T   r e g i s t e r s   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   U S A R T _ I n i t S t r u c t .  
     *   @ n o t e       A s   s o m e   b i t s   i n   U S A R T   c o n f i g u r a t i o n   r e g i s t e r s   c a n   o n l y   b e   w r i t t e n   w h e n   t h e   U S A R T   i s   d i s a b l e d   ( U S A R T _ C R 1 _ U E   b i t   = 0 ) ,  
     *                   U S A R T   I P   s h o u l d   b e   i n   d i s a b l e d   s t a t e   p r i o r   c a l l i n g   t h i s   f u n c t i o n .   O t h e r w i s e ,   E R R O R   r e s u l t   w i l l   b e   r e t u r n e d .  
     *   @ n o t e       B a u d   r a t e   v a l u e   s t o r e d   i n   U S A R T _ I n i t S t r u c t   B a u d R a t e   f i e l d ,   s h o u l d   b e   v a l i d   ( d i f f e r e n t   f r o m   0 ) .  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     U S A R T _ I n i t S t r u c t   p o i n t e r   t o   a   L L _ U S A R T _ I n i t T y p e D e f   s t r u c t u r e  
     *                   t h a t   c o n t a i n s   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   p e r i p h e r a l .  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   U S A R T   r e g i s t e r s   a r e   i n i t i a l i z e d   a c c o r d i n g   t o   U S A R T _ I n i t S t r u c t   c o n t e n t  
     *                     -   E R R O R :   P r o b l e m   o c c u r r e d   d u r i n g   U S A R T   R e g i s t e r s   i n i t i a l i z a t i o n  
     * /  
 E r r o r S t a t u s   L L _ U S A R T _ I n i t ( U S A R T _ T y p e D e f   * U S A R T x ,   L L _ U S A R T _ I n i t T y p e D e f   * U S A R T _ I n i t S t r u c t )  
 {  
     E r r o r S t a t u s   s t a t u s   =   E R R O R ;  
     u i n t 3 2 _ t   p e r i p h c l k   =   L L _ R C C _ P E R I P H _ F R E Q U E N C Y _ N O ;  
     L L _ R C C _ C l o c k s T y p e D e f   r c c _ c l o c k s ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ U A R T _ I N S T A N C E ( U S A R T x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ B A U D R A T E ( U S A R T _ I n i t S t r u c t - > B a u d R a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ D A T A W I D T H ( U S A R T _ I n i t S t r u c t - > D a t a W i d t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ S T O P B I T S ( U S A R T _ I n i t S t r u c t - > S t o p B i t s ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ P A R I T Y ( U S A R T _ I n i t S t r u c t - > P a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ D I R E C T I O N ( U S A R T _ I n i t S t r u c t - > T r a n s f e r D i r e c t i o n ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ H W C O N T R O L ( U S A R T _ I n i t S t r u c t - > H a r d w a r e F l o w C o n t r o l ) ) ;  
 # i f   d e f i n e d ( U S A R T _ C R 1 _ O V E R 8 )  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ O V E R S A M P L I N G ( U S A R T _ I n i t S t r u c t - > O v e r S a m p l i n g ) ) ;  
 # e n d i f   / *   U S A R T _ O v e r S a m p l i n g _ F e a t u r e   * /  
  
     / *   U S A R T   n e e d s   t o   b e   i n   d i s a b l e d   s t a t e ,   i n   o r d e r   t o   b e   a b l e   t o   c o n f i g u r e   s o m e   b i t s   i n  
           C R x   r e g i s t e r s   * /  
     i f   ( L L _ U S A R T _ I s E n a b l e d ( U S A R T x )   = =   0 U )  
     {  
         / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 1   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - -  
           *   C o n f i g u r e   U S A R T x   C R 1   ( U S A R T   W o r d   L e n g t h ,   P a r i t y ,   M o d e   a n d   O v e r s a m p l i n g   b i t s )   w i t h   p a r a m e t e r s :  
           *   -   D a t a W i d t h :                     U S A R T _ C R 1 _ M   b i t s   a c c o r d i n g   t o   U S A R T _ I n i t S t r u c t - > D a t a W i d t h   v a l u e  
           *   -   P a r i t y :                           U S A R T _ C R 1 _ P C E ,   U S A R T _ C R 1 _ P S   b i t s   a c c o r d i n g   t o   U S A R T _ I n i t S t r u c t - > P a r i t y   v a l u e  
           *   -   T r a n s f e r D i r e c t i o n :     U S A R T _ C R 1 _ T E ,   U S A R T _ C R 1 _ R E   b i t s   a c c o r d i n g   t o   U S A R T _ I n i t S t r u c t - > T r a n s f e r D i r e c t i o n   v a l u e  
           *   -   O v e r s a m p l i n g :               U S A R T _ C R 1 _ O V E R 8   b i t   a c c o r d i n g   t o   U S A R T _ I n i t S t r u c t - > O v e r S a m p l i n g   v a l u e .  
           * /  
 # i f   d e f i n e d ( U S A R T _ C R 1 _ O V E R 8 )  
         M O D I F Y _ R E G ( U S A R T x - > C R 1 ,  
                               ( U S A R T _ C R 1 _ M   |   U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S   |  
                                 U S A R T _ C R 1 _ T E   |   U S A R T _ C R 1 _ R E   |   U S A R T _ C R 1 _ O V E R 8 ) ,  
                               ( U S A R T _ I n i t S t r u c t - > D a t a W i d t h   |   U S A R T _ I n i t S t r u c t - > P a r i t y   |  
                                 U S A R T _ I n i t S t r u c t - > T r a n s f e r D i r e c t i o n   |   U S A R T _ I n i t S t r u c t - > O v e r S a m p l i n g ) ) ;  
 # e l s e  
         M O D I F Y _ R E G ( U S A R T x - > C R 1 ,  
                               ( U S A R T _ C R 1 _ M   |   U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S   |  
                                 U S A R T _ C R 1 _ T E   |   U S A R T _ C R 1 _ R E ) ,  
                               ( U S A R T _ I n i t S t r u c t - > D a t a W i d t h   |   U S A R T _ I n i t S t r u c t - > P a r i t y   |  
                                 U S A R T _ I n i t S t r u c t - > T r a n s f e r D i r e c t i o n ) ) ;  
 # e n d i f   / *   U S A R T _ O v e r S a m p l i n g _ F e a t u r e   * /  
  
         / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - -  
           *   C o n f i g u r e   U S A R T x   C R 2   ( S t o p   b i t s )   w i t h   p a r a m e t e r s :  
           *   -   S t o p   B i t s :                     U S A R T _ C R 2 _ S T O P   b i t s   a c c o r d i n g   t o   U S A R T _ I n i t S t r u c t - > S t o p B i t s   v a l u e .  
           *   -   C L K E N ,   C P O L ,   C P H A   a n d   L B C L   b i t s   a r e   t o   b e   c o n f i g u r e d   u s i n g   L L _ U S A R T _ C l o c k I n i t ( ) .  
           * /  
         L L _ U S A R T _ S e t S t o p B i t s L e n g t h ( U S A R T x ,   U S A R T _ I n i t S t r u c t - > S t o p B i t s ) ;  
  
         / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 3   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - -  
           *   C o n f i g u r e   U S A R T x   C R 3   ( H a r d w a r e   F l o w   C o n t r o l )   w i t h   p a r a m e t e r s :  
           *   -   H a r d w a r e F l o w C o n t r o l :   U S A R T _ C R 3 _ R T S E ,   U S A R T _ C R 3 _ C T S E   b i t s   a c c o r d i n g   t o   U S A R T _ I n i t S t r u c t - > H a r d w a r e F l o w C o n t r o l   v a l u e .  
           * /  
         L L _ U S A R T _ S e t H W F l o w C t r l ( U S A R T x ,   U S A R T _ I n i t S t r u c t - > H a r d w a r e F l o w C o n t r o l ) ;  
  
         / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   B R R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - -  
           *   R e t r i e v e   C l o c k   f r e q u e n c y   u s e d   f o r   U S A R T   P e r i p h e r a l  
           * /  
         L L _ R C C _ G e t S y s t e m C l o c k s F r e q ( & r c c _ c l o c k s ) ;  
         i f   ( U S A R T x   = =   U S A R T 1 )  
         {  
             p e r i p h c l k   =   r c c _ c l o c k s . P C L K 2 _ F r e q u e n c y ;  
         }  
         e l s e   i f   ( U S A R T x   = =   U S A R T 2 )  
         {  
             p e r i p h c l k   =   r c c _ c l o c k s . P C L K 1 _ F r e q u e n c y ;  
         }  
 # i f   d e f i n e d ( U S A R T 3 )  
         e l s e   i f   ( U S A R T x   = =   U S A R T 3 )  
         {  
             p e r i p h c l k   =   r c c _ c l o c k s . P C L K 1 _ F r e q u e n c y ;  
         }  
 # e n d i f   / *   U S A R T 3   * /  
 # i f   d e f i n e d ( U A R T 4 )  
         e l s e   i f   ( U S A R T x   = =   U A R T 4 )  
         {  
             p e r i p h c l k   =   r c c _ c l o c k s . P C L K 1 _ F r e q u e n c y ;  
         }  
 # e n d i f   / *   U A R T 4   * /  
 # i f   d e f i n e d ( U A R T 5 )  
         e l s e   i f   ( U S A R T x   = =   U A R T 5 )  
         {  
             p e r i p h c l k   =   r c c _ c l o c k s . P C L K 1 _ F r e q u e n c y ;  
         }  
 # e n d i f   / *   U A R T 5   * /  
         e l s e  
         {  
             / *   N o t h i n g   t o   d o ,   a s   e r r o r   c o d e   i s   a l r e a d y   a s s i g n e d   t o   E R R O R   v a l u e   * /  
         }  
  
         / *   C o n f i g u r e   t h e   U S A R T   B a u d   R a t e   :  
               -   v a l i d   b a u d   r a t e   v a l u e   ( d i f f e r e n t   f r o m   0 )   i s   r e q u i r e d  
               -   P e r i p h e r a l   c l o c k   a s   r e t u r n e d   b y   R C C   s e r v i c e ,   s h o u l d   b e   v a l i d   ( d i f f e r e n t   f r o m   0 ) .  
         * /  
         i f   ( ( p e r i p h c l k   ! =   L L _ R C C _ P E R I P H _ F R E Q U E N C Y _ N O )  
                 & &   ( U S A R T _ I n i t S t r u c t - > B a u d R a t e   ! =   0 U ) )  
         {  
             s t a t u s   =   S U C C E S S ;  
 # i f   d e f i n e d ( U S A R T _ C R 1 _ O V E R 8 )  
             L L _ U S A R T _ S e t B a u d R a t e ( U S A R T x ,  
                                                       p e r i p h c l k ,  
                                                       U S A R T _ I n i t S t r u c t - > O v e r S a m p l i n g ,  
                                                       U S A R T _ I n i t S t r u c t - > B a u d R a t e ) ;  
 # e l s e  
             L L _ U S A R T _ S e t B a u d R a t e ( U S A R T x ,  
                                                       p e r i p h c l k ,  
                                                       U S A R T _ I n i t S t r u c t - > B a u d R a t e ) ;  
 # e n d i f   / *   U S A R T _ O v e r S a m p l i n g _ F e a t u r e   * /  
  
             / *   C h e c k   B R R   i s   g r e a t e r   t h a n   o r   e q u a l   t o   1 6 d   * /  
             a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ B R R _ M I N ( U S A R T x - > B R R ) ) ;  
         }  
     }  
     / *   E n d i f   ( = >   U S A R T   n o t   i n   D i s a b l e d   s t a t e   = >   r e t u r n   E R R O R )   * /  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
     *   @ b r i e f   S e t   e a c h   @ r e f   L L _ U S A R T _ I n i t T y p e D e f   f i e l d   t o   d e f a u l t   v a l u e .  
     *   @ p a r a m   U S A R T _ I n i t S t r u c t   P o i n t e r   t o   a   @ r e f   L L _ U S A R T _ I n i t T y p e D e f   s t r u c t u r e  
     *                                                   w h o s e   f i e l d s   w i l l   b e   s e t   t o   d e f a u l t   v a l u e s .  
     *   @ r e t v a l   N o n e  
     * /  
  
 v o i d   L L _ U S A R T _ S t r u c t I n i t ( L L _ U S A R T _ I n i t T y p e D e f   * U S A R T _ I n i t S t r u c t )  
 {  
     / *   S e t   U S A R T _ I n i t S t r u c t   f i e l d s   t o   d e f a u l t   v a l u e s   * /  
     U S A R T _ I n i t S t r u c t - > B a u d R a t e                         =   9 6 0 0 U ;  
     U S A R T _ I n i t S t r u c t - > D a t a W i d t h                       =   L L _ U S A R T _ D A T A W I D T H _ 8 B ;  
     U S A R T _ I n i t S t r u c t - > S t o p B i t s                         =   L L _ U S A R T _ S T O P B I T S _ 1 ;  
     U S A R T _ I n i t S t r u c t - > P a r i t y                             =   L L _ U S A R T _ P A R I T Y _ N O N E   ;  
     U S A R T _ I n i t S t r u c t - > T r a n s f e r D i r e c t i o n       =   L L _ U S A R T _ D I R E C T I O N _ T X _ R X ;  
     U S A R T _ I n i t S t r u c t - > H a r d w a r e F l o w C o n t r o l   =   L L _ U S A R T _ H W C O N T R O L _ N O N E ;  
 # i f   d e f i n e d ( U S A R T _ C R 1 _ O V E R 8 )  
     U S A R T _ I n i t S t r u c t - > O v e r S a m p l i n g                 =   L L _ U S A R T _ O V E R S A M P L I N G _ 1 6 ;  
 # e n d i f   / *   U S A R T _ O v e r S a m p l i n g _ F e a t u r e   * /  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   U S A R T   C l o c k   r e l a t e d   s e t t i n g s   a c c o r d i n g   t o   t h e  
     *                   s p e c i f i e d   p a r a m e t e r s   i n   t h e   U S A R T _ C l o c k I n i t S t r u c t .  
     *   @ n o t e       A s   s o m e   b i t s   i n   U S A R T   c o n f i g u r a t i o n   r e g i s t e r s   c a n   o n l y   b e   w r i t t e n   w h e n   t h e   U S A R T   i s   d i s a b l e d   ( U S A R T _ C R 1 _ U E   b i t   = 0 ) ,  
     *                   U S A R T   I P   s h o u l d   b e   i n   d i s a b l e d   s t a t e   p r i o r   c a l l i n g   t h i s   f u n c t i o n .   O t h e r w i s e ,   E R R O R   r e s u l t   w i l l   b e   r e t u r n e d .  
     *   @ p a r a m     U S A R T x   U S A R T   I n s t a n c e  
     *   @ p a r a m     U S A R T _ C l o c k I n i t S t r u c t   P o i n t e r   t o   a   @ r e f   L L _ U S A R T _ C l o c k I n i t T y p e D e f   s t r u c t u r e  
     *                   t h a t   c o n t a i n s   t h e   C l o c k   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   p e r i p h e r a l .  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   U S A R T   r e g i s t e r s   r e l a t e d   t o   C l o c k   s e t t i n g s   a r e   i n i t i a l i z e d   a c c o r d i n g   t o   U S A R T _ C l o c k I n i t S t r u c t   c o n t e n t  
     *                     -   E R R O R :   P r o b l e m   o c c u r r e d   d u r i n g   U S A R T   R e g i s t e r s   i n i t i a l i z a t i o n  
     * /  
 E r r o r S t a t u s   L L _ U S A R T _ C l o c k I n i t ( U S A R T _ T y p e D e f   * U S A R T x ,   L L _ U S A R T _ C l o c k I n i t T y p e D e f   * U S A R T _ C l o c k I n i t S t r u c t )  
 {  
     E r r o r S t a t u s   s t a t u s   =   S U C C E S S ;  
  
     / *   C h e c k   U S A R T   I n s t a n c e   a n d   C l o c k   s i g n a l   o u t p u t   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ U A R T _ I N S T A N C E ( U S A R T x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ C L O C K O U T P U T ( U S A R T _ C l o c k I n i t S t r u c t - > C l o c k O u t p u t ) ) ;  
  
     / *   U S A R T   n e e d s   t o   b e   i n   d i s a b l e d   s t a t e ,   i n   o r d e r   t o   b e   a b l e   t o   c o n f i g u r e   s o m e   b i t s   i n  
           C R x   r e g i s t e r s   * /  
     i f   ( L L _ U S A R T _ I s E n a b l e d ( U S A R T x )   = =   0 U )  
     {  
         / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
         / *   I f   C l o c k   s i g n a l   h a s   t o   b e   o u t p u t   * /  
         i f   ( U S A R T _ C l o c k I n i t S t r u c t - > C l o c k O u t p u t   = =   L L _ U S A R T _ C L O C K _ D I S A B L E )  
         {  
             / *   D e a c t i v a t e   C l o c k   s i g n a l   d e l i v e r y   :  
               *   -   D i s a b l e   C l o c k   O u t p u t :                 U S A R T _ C R 2 _ C L K E N   c l e a r e d  
               * /  
             L L _ U S A R T _ D i s a b l e S C L K O u t p u t ( U S A R T x ) ;  
         }  
         e l s e  
         {  
             / *   E n s u r e   U S A R T   i n s t a n c e   i s   U S A R T   c a p a b l e   * /  
             a s s e r t _ p a r a m ( I S _ U S A R T _ I N S T A N C E ( U S A R T x ) ) ;  
  
             / *   C h e c k   c l o c k   r e l a t e d   p a r a m e t e r s   * /  
             a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ C L O C K P O L A R I T Y ( U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P o l a r i t y ) ) ;  
             a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ C L O C K P H A S E ( U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P h a s e ) ) ;  
             a s s e r t _ p a r a m ( I S _ L L _ U S A R T _ L A S T B I T C L K O U T P U T ( U S A R T _ C l o c k I n i t S t r u c t - > L a s t B i t C l o c k P u l s e ) ) ;  
  
             / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - -  
               *   C o n f i g u r e   U S A R T x   C R 2   ( C l o c k   s i g n a l   r e l a t e d   b i t s )   w i t h   p a r a m e t e r s :  
               *   -   E n a b l e   C l o c k   O u t p u t :                   U S A R T _ C R 2 _ C L K E N   s e t  
               *   -   C l o c k   P o l a r i t y :                             U S A R T _ C R 2 _ C P O L   b i t   a c c o r d i n g   t o   U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P o l a r i t y   v a l u e  
               *   -   C l o c k   P h a s e :                                   U S A R T _ C R 2 _ C P H A   b i t   a c c o r d i n g   t o   U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P h a s e   v a l u e  
               *   -   L a s t   B i t   C l o c k   P u l s e   O u t p u t :   U S A R T _ C R 2 _ L B C L   b i t   a c c o r d i n g   t o   U S A R T _ C l o c k I n i t S t r u c t - > L a s t B i t C l o c k P u l s e   v a l u e .  
               * /  
             M O D I F Y _ R E G ( U S A R T x - > C R 2 ,  
                                   U S A R T _ C R 2 _ C L K E N   |   U S A R T _ C R 2 _ C P H A   |   U S A R T _ C R 2 _ C P O L   |   U S A R T _ C R 2 _ L B C L ,  
                                   U S A R T _ C R 2 _ C L K E N   |   U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P o l a r i t y   |  
                                   U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P h a s e   |   U S A R T _ C l o c k I n i t S t r u c t - > L a s t B i t C l o c k P u l s e ) ;  
         }  
     }  
     / *   E l s e   ( U S A R T   n o t   i n   D i s a b l e d   s t a t e   = >   r e t u r n   E R R O R   * /  
     e l s e  
     {  
         s t a t u s   =   E R R O R ;  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
 }  
  
 / * *  
     *   @ b r i e f   S e t   e a c h   f i e l d   o f   a   @ r e f   L L _ U S A R T _ C l o c k I n i t T y p e D e f   t y p e   s t r u c t u r e   t o   d e f a u l t   v a l u e .  
     *   @ p a r a m   U S A R T _ C l o c k I n i t S t r u c t   P o i n t e r   t o   a   @ r e f   L L _ U S A R T _ C l o c k I n i t T y p e D e f   s t r u c t u r e  
     *                                                             w h o s e   f i e l d s   w i l l   b e   s e t   t o   d e f a u l t   v a l u e s .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ U S A R T _ C l o c k S t r u c t I n i t ( L L _ U S A R T _ C l o c k I n i t T y p e D e f   * U S A R T _ C l o c k I n i t S t r u c t )  
 {  
     / *   S e t   L L _ U S A R T _ C l o c k I n i t S t r u c t   f i e l d s   w i t h   d e f a u l t   v a l u e s   * /  
     U S A R T _ C l o c k I n i t S t r u c t - > C l o c k O u t p u t               =   L L _ U S A R T _ C L O C K _ D I S A B L E ;  
     U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P o l a r i t y           =   L L _ U S A R T _ P O L A R I T Y _ L O W ;                         / *   N o t   r e l e v a n t   w h e n   C l o c k O u t p u t   =   L L _ U S A R T _ C L O C K _ D I S A B L E   * /  
     U S A R T _ C l o c k I n i t S t r u c t - > C l o c k P h a s e                 =   L L _ U S A R T _ P H A S E _ 1 E D G E ;                           / *   N o t   r e l e v a n t   w h e n   C l o c k O u t p u t   =   L L _ U S A R T _ C L O C K _ D I S A B L E   * /  
     U S A R T _ C l o c k I n i t S t r u c t - > L a s t B i t C l o c k P u l s e   =   L L _ U S A R T _ L A S T C L K P U L S E _ N O _ O U T P U T ;     / *   N o t   r e l e v a n t   w h e n   C l o c k O u t p u t   =   L L _ U S A R T _ C L O C K _ D I S A B L E   * /  
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
 # e n d i f   / *   U S A R T 1   | |   U S A R T 2   | |   U S A R T 3   | |   U A R T 4   | |   U A R T 5   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  
  