??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ l l _ r t c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       R T C   L L   m o d u l e   d r i v e r .  
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
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ r t c . h "  
 # i n c l u d e   " s t m 3 2 f 1 x x _ l l _ c o r t e x . h "  
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
 # i f   d e f i n e d ( R T C )  
  
 / * *   @ a d d t o g r o u p   R T C _ L L  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   R T C _ L L _ P r i v a t e _ C o n s t a n t s  
     *   @ {  
     * /  
 / *   D e f a u l t   v a l u e s   u s e d   f o r   p r e s c a l e r   * /  
 # d e f i n e   R T C _ A S Y N C H _ P R E S C _ D E F A U L T           0 x 0 0 0 0 7 F F F U  
  
 / *   V a l u e s   u s e d   f o r   t i m e o u t   * /  
 # d e f i n e   R T C _ I N I T M O D E _ T I M E O U T                   1 0 0 0 U   / *   1 s   w h e n   t i c k   s e t   t o   1 m s   * /  
 # d e f i n e   R T C _ S Y N C H R O _ T I M E O U T                     1 0 0 0 U   / *   1 s   w h e n   t i c k   s e t   t o   1 m s   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   R T C _ L L _ P r i v a t e _ M a c r o s  
     *   @ {  
     * /  
  
 # d e f i n e   I S _ L L _ R T C _ A S Y N C H _ P R E D I V ( _ _ V A L U E _ _ )       ( ( _ _ V A L U E _ _ )   < =   0 x F F F F F U )  
  
 # d e f i n e   I S _ L L _ R T C _ F O R M A T ( _ _ V A L U E _ _ )   ( ( ( _ _ V A L U E _ _ )   = =   L L _ R T C _ F O R M A T _ B I N )   \  
                                                                     | |   ( ( _ _ V A L U E _ _ )   = =   L L _ R T C _ F O R M A T _ B C D ) )  
  
 # d e f i n e   I S _ L L _ R T C _ H O U R 2 4 ( _ _ H O U R _ _ )                         ( ( _ _ H O U R _ _ )   < =   2 3 U )  
 # d e f i n e   I S _ L L _ R T C _ M I N U T E S ( _ _ M I N U T E S _ _ )                 ( ( _ _ M I N U T E S _ _ )   < =   5 9 U )  
 # d e f i n e   I S _ L L _ R T C _ S E C O N D S ( _ _ S E C O N D S _ _ )                 ( ( _ _ S E C O N D S _ _ )   < =   5 9 U )  
 # d e f i n e   I S _ L L _ R T C _ C A L I B _ O U T P U T ( _ _ O U T P U T _ _ )   ( ( ( _ _ O U T P U T _ _ )   = =   L L _ R T C _ C A L I B _ O U T P U T _ N O N E )   | |   \  
                                                                                         ( ( _ _ O U T P U T _ _ )   = =   L L _ R T C _ C A L I B _ O U T P U T _ R T C C L O C K )   | |   \  
                                                                                         ( ( _ _ O U T P U T _ _ )   = =   L L _ R T C _ C A L I B _ O U T P U T _ A L A R M )   | |   \  
                                                                                         ( ( _ _ O U T P U T _ _ )   = =   L L _ R T C _ C A L I B _ O U T P U T _ S E C O N D ) )  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   R T C _ L L _ E x p o r t e d _ F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   R T C _ L L _ E F _ I n i t  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     D e - I n i t i a l i z e s   t h e   R T C   r e g i s t e r s   t o   t h e i r   d e f a u l t   r e s e t   v a l u e s .  
     *   @ n o t e       T h i s   f u n c t i o n   d o e s n ' t   r e s e t   t h e   R T C   C l o c k   s o u r c e   a n d   R T C   B a c k u p   D a t a  
     *                   r e g i s t e r s .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   r e g i s t e r s   a r e   d e - i n i t i a l i z e d  
     *                     -   E R R O R :   R T C   r e g i s t e r s   a r e   n o t   d e - i n i t i a l i z e d  
     * /  
 E r r o r S t a t u s   L L _ R T C _ D e I n i t ( R T C _ T y p e D e f   * R T C x )  
 {  
     E r r o r S t a t u s   s t a t u s   =   E R R O R ;  
  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
  
     / *   D i s a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
     L L _ R T C _ D i s a b l e W r i t e P r o t e c t i o n ( R T C x ) ;  
  
     / *   S e t   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( L L _ R T C _ E n t e r I n i t M o d e ( R T C x )   ! =   E R R O R )  
     {  
         L L _ R T C _ W r i t e R e g ( R T C x ,   C N T L ,   0 x 0 0 0 0 ) ;  
         L L _ R T C _ W r i t e R e g ( R T C x ,   C N T H ,   0 x 0 0 0 0 ) ;  
         L L _ R T C _ W r i t e R e g ( R T C x ,   P R L H ,   0 x 0 0 0 0 ) ;  
         L L _ R T C _ W r i t e R e g ( R T C x ,   P R L L ,   0 x 8 0 0 0 ) ;  
         L L _ R T C _ W r i t e R e g ( R T C x ,   C R H ,     0 x 0 0 0 0 ) ;  
         L L _ R T C _ W r i t e R e g ( R T C x ,   C R L ,     0 x 0 0 2 0 ) ;  
  
         / *   R e s e t   T a m p e r   a n d   a l t e r n a t e   f u n c t i o n s   c o n f i g u r a t i o n   r e g i s t e r   * /  
         L L _ R T C _ W r i t e R e g ( B K P ,   R T C C R ,   0 x 0 0 0 0 0 0 0 0 U ) ;  
         L L _ R T C _ W r i t e R e g ( B K P ,   C R ,         0 x 0 0 0 0 0 0 0 0 U ) ;  
         L L _ R T C _ W r i t e R e g ( B K P ,   C S R ,       0 x 0 0 0 0 0 0 0 0 U ) ;  
  
         / *   E x i t   I n i t i a l i z a t i o n   M o d e   * /  
         i f   ( L L _ R T C _ E x i t I n i t M o d e ( R T C x )   ! =   E R R O R )  
         {  
             / *   W a i t   t i l l   t h e   R T C   R S F   f l a g   i s   s e t   * /  
             s t a t u s   =   L L _ R T C _ W a i t F o r S y n c h r o ( R T C x ) ;  
      
             / *   C l e a r   R S F   F l a g   * /  
             L L _ R T C _ C l e a r F l a g _ R S ( R T C x ) ;  
              
             / *   E n a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
             L L _ R T C _ E n a b l e W r i t e P r o t e c t i o n ( R T C x ) ;  
         }  
     }  
     e l s e  
     {  
         / *   E n a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
         L L _ R T C _ E n a b l e W r i t e P r o t e c t i o n ( R T C x ) ;  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   R T C   r e g i s t e r s   a c c o r d i n g   t o   t h e   s p e c i f i e d   p a r a m e t e r s  
     *                   i n   R T C _ I n i t S t r u c t .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ p a r a m     R T C _ I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ R T C _ I n i t T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   R T C   p e r i p h e r a l .  
     *   @ n o t e       T h e   R T C   P r e s c a l e r   r e g i s t e r   i s   w r i t e   p r o t e c t e d   a n d   c a n   b e   w r i t t e n   i n  
     *                   i n i t i a l i z a t i o n   m o d e   o n l y .  
     *   @ n o t e       t h e   u s e r   s h o u l d   c a l l   L L _ R T C _ S t r u c t I n i t ( )     o r   t h e   s t r u c t u r e   o f   P r e s c a l e r  
     *                   n e e d   t o   b e   i n i t i a l i z e d     b e f o r e   R T C   i n i t ( )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   r e g i s t e r s   a r e   i n i t i a l i z e d  
     *                     -   E R R O R :   R T C   r e g i s t e r s   a r e   n o t   i n i t i a l i z e d  
     * /  
 E r r o r S t a t u s   L L _ R T C _ I n i t ( R T C _ T y p e D e f   * R T C x ,   L L _ R T C _ I n i t T y p e D e f   * R T C _ I n i t S t r u c t )  
 {  
     E r r o r S t a t u s   s t a t u s   =   E R R O R ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ R T C _ A S Y N C H _ P R E D I V ( R T C _ I n i t S t r u c t - > A s y n c h P r e s c a l e r ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ R T C _ C A L I B _ O U T P U T ( R T C _ I n i t S t r u c t - > O u t P u t S o u r c e ) ) ;  
     / *   W a i t i n g   f o r   s y n c h r o   * /  
     i f   ( L L _ R T C _ W a i t F o r S y n c h r o ( R T C x )   ! =   E R R O R )  
     {  
         / *   S e t   I n i t i a l i z a t i o n   m o d e   * /  
         i f   ( L L _ R T C _ E n t e r I n i t M o d e ( R T C x )   ! =   E R R O R )  
         {  
             / *   C l e a r   F l a g   B i t s   * /  
             L L _ R T C _ C l e a r F l a g _ A L R ( R T C x ) ;  
             L L _ R T C _ C l e a r F l a g _ O W ( R T C x ) ;  
             L L _ R T C _ C l e a r F l a g _ S E C ( R T C x ) ;  
  
             i f   ( R T C _ I n i t S t r u c t - > O u t P u t S o u r c e   ! =   L L _ R T C _ C A L I B _ O U T P U T _ N O N E )  
             {  
                 / *   D i s a b l e   t h e   s e l e c t e d   T a m p e r   P i n   * /  
                 L L _ R T C _ T A M P E R _ D i s a b l e ( B K P ) ;  
             }  
             / *   S e t   t h e   s i g n a l   w h i c h   w i l l   b e   r o u t e d   t o   R T C   T a m p e r   P i n   * /  
             L L _ R T C _ S e t O u t p u t S o u r c e ( B K P ,   R T C _ I n i t S t r u c t - > O u t P u t S o u r c e ) ;  
  
             / *   C o n f i g u r e   S y n c h r o n o u s   a n d   A s y n c h r o n o u s   p r e s c a l e r   f a c t o r   * /  
             L L _ R T C _ S e t A s y n c h P r e s c a l e r ( R T C x ,   R T C _ I n i t S t r u c t - > A s y n c h P r e s c a l e r ) ;  
  
             / *   E x i t   I n i t i a l i z a t i o n   M o d e   * /  
             L L _ R T C _ E x i t I n i t M o d e ( R T C x ) ;  
  
             s t a t u s   =   S U C C E S S ;  
         }  
     }  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   e a c h   @ r e f   L L _ R T C _ I n i t T y p e D e f   f i e l d   t o   d e f a u l t   v a l u e .  
     *   @ p a r a m     R T C _ I n i t S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ R T C _ I n i t T y p e D e f   s t r u c t u r e   w h i c h   w i l l   b e   i n i t i a l i z e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ R T C _ S t r u c t I n i t ( L L _ R T C _ I n i t T y p e D e f   * R T C _ I n i t S t r u c t )  
 {  
     / *   S e t   R T C _ I n i t S t r u c t   f i e l d s   t o   d e f a u l t   v a l u e s   * /  
     R T C _ I n i t S t r u c t - > A s y n c h P r e s c a l e r   =   R T C _ A S Y N C H _ P R E S C _ D E F A U L T ;  
     R T C _ I n i t S t r u c t - > O u t P u t S o u r c e         =   L L _ R T C _ C A L I B _ O U T P U T _ N O N E ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   R T C   c u r r e n t   t i m e .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ p a r a m     R T C _ F o r m a t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R T C _ F O R M A T _ B I N  
     *                   @ a r g   @ r e f   L L _ R T C _ F O R M A T _ B C D  
     *   @ p a r a m     R T C _ T i m e S t r u c t   p o i n t e r   t o   a   R T C _ T i m e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                                 t h e   t i m e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   R T C .  
     *   @ n o t e     T h e   u s e r   s h o u l d   c a l l   L L _ R T C _ T I M E _ S t r u c t I n i t ( )   o r   t h e   s t r u c t u r e  
     *                 o f   t i m e   n e e d   t o   b e   i n i t i a l i z e d     b e f o r e   t i m e   i n i t ( )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   T i m e   r e g i s t e r   i s   c o n f i g u r e d  
     *                     -   E R R O R :   R T C   T i m e   r e g i s t e r   i s   n o t   c o n f i g u r e d  
     * /  
 E r r o r S t a t u s   L L _ R T C _ T I M E _ I n i t ( R T C _ T y p e D e f   * R T C x ,   u i n t 3 2 _ t   R T C _ F o r m a t ,   L L _ R T C _ T i m e T y p e D e f   * R T C _ T i m e S t r u c t )  
 {  
     E r r o r S t a t u s   s t a t u s   =   E R R O R ;  
     u i n t 3 2 _ t   c o u n t e r _ t i m e   =   0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ R T C _ F O R M A T ( R T C _ F o r m a t ) ) ;  
  
     i f   ( R T C _ F o r m a t   = =   L L _ R T C _ F O R M A T _ B I N )  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ H O U R 2 4 ( R T C _ T i m e S t r u c t - > H o u r s ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ M I N U T E S ( R T C _ T i m e S t r u c t - > M i n u t e s ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ S E C O N D S ( R T C _ T i m e S t r u c t - > S e c o n d s ) ) ;  
     }  
     e l s e  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ H O U R 2 4 ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ T i m e S t r u c t - > H o u r s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ M I N U T E S ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ T i m e S t r u c t - > M i n u t e s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ S E C O N D S ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ T i m e S t r u c t - > S e c o n d s ) ) ) ;  
     }  
  
     / *   E n t e r   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( L L _ R T C _ E n t e r I n i t M o d e ( R T C x )   ! =   E R R O R )  
     {  
         / *   C h e c k   t h e   i n p u t   p a r a m e t e r s   f o r m a t   * /  
         i f   ( R T C _ F o r m a t   = =   L L _ R T C _ F O R M A T _ B I N )  
         {  
             c o u n t e r _ t i m e   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) R T C _ T i m e S t r u c t - > H o u r s   *   3 6 0 0 U )   +   \  
                                                                 ( ( u i n t 3 2 _ t ) R T C _ T i m e S t r u c t - > M i n u t e s   *   6 0 U )   +   \  
                                                                 ( ( u i n t 3 2 _ t ) R T C _ T i m e S t r u c t - > S e c o n d s ) ) ;  
             L L _ R T C _ T I M E _ S e t ( R T C x ,   c o u n t e r _ t i m e ) ;  
         }  
         e l s e  
         {  
             c o u n t e r _ t i m e   =   ( ( ( u i n t 3 2 _ t ) ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ T i m e S t r u c t - > H o u r s ) )   *   3 6 0 0 U )   +   \  
                                             ( ( u i n t 3 2 _ t ) ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ T i m e S t r u c t - > M i n u t e s ) )   *   6 0 U )   +   \  
                                             ( ( u i n t 3 2 _ t ) ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ T i m e S t r u c t - > S e c o n d s ) ) ) ) ;  
             L L _ R T C _ T I M E _ S e t ( R T C x ,   c o u n t e r _ t i m e ) ;  
         }  
         s t a t u s   =   S U C C E S S ;  
     }  
     / *   E x i t   I n i t i a l i z a t i o n   m o d e   * /  
     L L _ R T C _ E x i t I n i t M o d e ( R T C x ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   e a c h   @ r e f   L L _ R T C _ T i m e T y p e D e f   f i e l d   t o   d e f a u l t   v a l u e   ( T i m e   =   0 0 h : 0 0 m i n : 0 0 s e c ) .  
     *   @ p a r a m     R T C _ T i m e S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ R T C _ T i m e T y p e D e f   s t r u c t u r e   w h i c h   w i l l   b e   i n i t i a l i z e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ R T C _ T I M E _ S t r u c t I n i t ( L L _ R T C _ T i m e T y p e D e f   * R T C _ T i m e S t r u c t )  
 {  
     / *   T i m e   =   0 0 h : 0 0 m i n : 0 0 s e c   * /  
     R T C _ T i m e S t r u c t - > H o u r s             =   0 U ;  
     R T C _ T i m e S t r u c t - > M i n u t e s         =   0 U ;  
     R T C _ T i m e S t r u c t - > S e c o n d s         =   0 U ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   R T C   A l a r m .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ p a r a m     R T C _ F o r m a t   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                   @ a r g   @ r e f   L L _ R T C _ F O R M A T _ B I N  
     *                   @ a r g   @ r e f   L L _ R T C _ F O R M A T _ B C D  
     *   @ p a r a m     R T C _ A l a r m S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ R T C _ A l a r m T y p e D e f   s t r u c t u r e   t h a t  
     *                                                   c o n t a i n s   t h e   a l a r m   c o n f i g u r a t i o n   p a r a m e t e r s .  
     *   @ n o t e       t h e   u s e r   s h o u l d   c a l l   L L _ R T C _ A L A R M _ S t r u c t I n i t ( )     o r   t h e   s t r u c t u r e  
     *                   o f   A l a r m   n e e d   t o   b e   i n i t i a l i z e d     b e f o r e   A l a r m   i n i t ( )  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   A L A R M   r e g i s t e r s   a r e   c o n f i g u r e d  
     *                     -   E R R O R :   A L A R M   r e g i s t e r s   a r e   n o t   c o n f i g u r e d  
     * /  
 E r r o r S t a t u s   L L _ R T C _ A L A R M _ I n i t ( R T C _ T y p e D e f   * R T C x ,   u i n t 3 2 _ t   R T C _ F o r m a t ,   L L _ R T C _ A l a r m T y p e D e f   * R T C _ A l a r m S t r u c t )  
 {  
     E r r o r S t a t u s   s t a t u s   =   E R R O R ;  
     u i n t 3 2 _ t   c o u n t e r _ a l a r m   =   0 U ;  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
     a s s e r t _ p a r a m ( I S _ L L _ R T C _ F O R M A T ( R T C _ F o r m a t ) ) ;  
  
     i f   ( R T C _ F o r m a t   = =   L L _ R T C _ F O R M A T _ B I N )  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ H O U R 2 4 ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . H o u r s ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ M I N U T E S ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . M i n u t e s ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ S E C O N D S ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . S e c o n d s ) ) ;  
     }  
     e l s e  
     {  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ H O U R 2 4 ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . H o u r s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ M I N U T E S ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . M i n u t e s ) ) ) ;  
         a s s e r t _ p a r a m ( I S _ L L _ R T C _ S E C O N D S ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . S e c o n d s ) ) ) ;  
     }  
  
     / *   E n t e r   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( L L _ R T C _ E n t e r I n i t M o d e ( R T C x )   ! =   E R R O R )  
     {  
         / *   C h e c k   t h e   i n p u t   p a r a m e t e r s   f o r m a t   * /  
         i f   ( R T C _ F o r m a t   = =   L L _ R T C _ F O R M A T _ B I N )  
         {  
             c o u n t e r _ a l a r m   =   ( u i n t 3 2 _ t ) ( ( ( u i n t 3 2 _ t ) R T C _ A l a r m S t r u c t - > A l a r m T i m e . H o u r s   *   3 6 0 0 U )   +   \  
                                                                   ( ( u i n t 3 2 _ t ) R T C _ A l a r m S t r u c t - > A l a r m T i m e . M i n u t e s   *   6 0 U )   +   \  
                                                                   ( ( u i n t 3 2 _ t ) R T C _ A l a r m S t r u c t - > A l a r m T i m e . S e c o n d s ) ) ;  
             L L _ R T C _ A L A R M _ S e t ( R T C x ,   c o u n t e r _ a l a r m ) ;  
         }  
         e l s e  
         {  
             c o u n t e r _ a l a r m   =   ( ( ( u i n t 3 2 _ t ) ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . H o u r s ) )   *   3 6 0 0 U )   +   \  
                                               ( ( u i n t 3 2 _ t ) ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . M i n u t e s ) )   *   6 0 U )   +   \  
                                               ( ( u i n t 3 2 _ t ) ( _ _ L L _ R T C _ C O N V E R T _ B C D 2 B I N ( R T C _ A l a r m S t r u c t - > A l a r m T i m e . S e c o n d s ) ) ) ) ;  
             L L _ R T C _ A L A R M _ S e t ( R T C x ,   c o u n t e r _ a l a r m ) ;  
         }  
         s t a t u s   =   S U C C E S S ;  
     }  
     / *   E x i t   I n i t i a l i z a t i o n   m o d e   * /  
     L L _ R T C _ E x i t I n i t M o d e ( R T C x ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   e a c h   @ r e f   L L _ R T C _ A l a r m T y p e D e f   o f   A L A R M   f i e l d   t o   d e f a u l t   v a l u e   ( T i m e   =   0 0 h : 0 0 m n : 0 0 s e c   /  
     *                   D a y   =   1 s t   d a y   o f   t h e   m o n t h / M a s k   =   a l l   f i e l d s   a r e   m a s k e d ) .  
     *   @ p a r a m     R T C _ A l a r m S t r u c t   p o i n t e r   t o   a   @ r e f   L L _ R T C _ A l a r m T y p e D e f   s t r u c t u r e   w h i c h   w i l l   b e   i n i t i a l i z e d .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   L L _ R T C _ A L A R M _ S t r u c t I n i t ( L L _ R T C _ A l a r m T y p e D e f   * R T C _ A l a r m S t r u c t )  
 {  
     / *   A l a r m   T i m e   S e t t i n g s   :   T i m e   =   0 0 h : 0 0 m n : 0 0 s e c   * /  
     R T C _ A l a r m S t r u c t - > A l a r m T i m e . H o u r s             =   0 U ;  
     R T C _ A l a r m S t r u c t - > A l a r m T i m e . M i n u t e s         =   0 U ;  
     R T C _ A l a r m S t r u c t - > A l a r m T i m e . S e c o n d s         =   0 U ;  
 }  
  
 / * *  
     *   @ b r i e f     E n t e r s   t h e   R T C   I n i t i a l i z a t i o n   m o d e .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   i s   i n   I n i t   m o d e  
     *                     -   E R R O R :   R T C   i s   n o t   i n   I n i t   m o d e  
     * /  
 E r r o r S t a t u s   L L _ R T C _ E n t e r I n i t M o d e ( R T C _ T y p e D e f   * R T C x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t i m e o u t   =   R T C _ I N I T M O D E _ T I M E O U T ;  
     E r r o r S t a t u s   s t a t u s   =   S U C C E S S ;  
     u i n t 3 2 _ t   t m p   =   0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
  
     / *   W a i t   t i l l   R T C   i s   i n   I N I T   s t a t e   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
     t m p   =   L L _ R T C _ I s A c t i v e F l a g _ R T O F ( R T C x ) ;  
     w h i l e   ( ( t i m e o u t   ! =   0 U )   & &   ( t m p   ! =   1 U ) )  
     {  
         i f   ( L L _ S Y S T I C K _ I s A c t i v e C o u n t e r F l a g ( )   = =   1 U )  
         {  
             t i m e o u t   - - ;  
         }  
         t m p   =   L L _ R T C _ I s A c t i v e F l a g _ R T O F ( R T C x ) ;  
         i f   ( t i m e o u t   = =   0 U )  
         {  
             s t a t u s   =   E R R O R ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
     L L _ R T C _ D i s a b l e W r i t e P r o t e c t i o n ( R T C x ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     E x i t   t h e   R T C   I n i t i a l i z a t i o n   m o d e .  
     *   @ n o t e       W h e n   t h e   i n i t i a l i z a t i o n   s e q u e n c e   i s   c o m p l e t e ,   t h e   c a l e n d a r   r e s t a r t s  
     *                   c o u n t i n g   a f t e r   4   R T C C L K   c y c l e s .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   e x i t e d   f r o m   i n   I n i t   m o d e  
     *                     -   E R R O R :   N o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ R T C _ E x i t I n i t M o d e ( R T C _ T y p e D e f   * R T C x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t i m e o u t   =   R T C _ I N I T M O D E _ T I M E O U T ;  
     E r r o r S t a t u s   s t a t u s   =   S U C C E S S ;  
     u i n t 3 2 _ t   t m p   =   0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
  
     / *   D i s a b l e   i n i t i a l i z a t i o n   m o d e   * /  
     L L _ R T C _ E n a b l e W r i t e P r o t e c t i o n ( R T C x ) ;  
  
     / *   W a i t   t i l l   R T C   i s   i n   I N I T   s t a t e   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
     t m p   =   L L _ R T C _ I s A c t i v e F l a g _ R T O F ( R T C x ) ;  
     w h i l e   ( ( t i m e o u t   ! =   0 U )   & &   ( t m p   ! =   1 U ) )  
     {  
         i f   ( L L _ S Y S T I C K _ I s A c t i v e C o u n t e r F l a g ( )   = =   1 U )  
         {  
             t i m e o u t   - - ;  
         }  
         t m p   =   L L _ R T C _ I s A c t i v e F l a g _ R T O F ( R T C x ) ;  
         i f   ( t i m e o u t   = =   0 U )  
         {  
             s t a t u s   =   E R R O R ;  
         }  
     }  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   t h e   T i m e   C o u n t e r  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ p a r a m     T i m e C o u n t e r   t h i s   v a l u e   c a n   b e   f r o m   0   t o   0 x F F F F F F F F  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   C o u n t e r   r e g i s t e r   c o n f i g u r e d  
     *                     -   E R R O R :   N o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ R T C _ T I M E _ S e t C o u n t e r ( R T C _ T y p e D e f   * R T C x ,   u i n t 3 2 _ t   T i m e C o u n t e r )  
 {  
     E r r o r S t a t u s   s t a t u s   =   E R R O R ;  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
  
     / *   E n t e r   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( L L _ R T C _ E n t e r I n i t M o d e ( R T C x )   ! =   E R R O R )  
     {  
         L L _ R T C _ T I M E _ S e t ( R T C x ,   T i m e C o u n t e r ) ;  
         s t a t u s   =   S U C C E S S ;  
     }  
     / *   E x i t   I n i t i a l i z a t i o n   m o d e   * /  
     L L _ R T C _ E x i t I n i t M o d e ( R T C x ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S e t   A l a r m   C o u n t e r .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ p a r a m     A l a r m C o u n t e r   t h i s   v a l u e   c a n   b e   f r o m   0   t o   0 x F F F F F F F F  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   e x i t e d   f r o m   i n   I n i t   m o d e  
     *                     -   E R R O R :   N o t   a p p l i c a b l e  
     * /  
 E r r o r S t a t u s   L L _ R T C _ A L A R M _ S e t C o u n t e r ( R T C _ T y p e D e f   * R T C x ,   u i n t 3 2 _ t   A l a r m C o u n t e r )  
 {  
     E r r o r S t a t u s   s t a t u s   =   E R R O R ;  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
  
     / *   E n t e r   I n i t i a l i z a t i o n   m o d e   * /  
     i f   ( L L _ R T C _ E n t e r I n i t M o d e ( R T C x )   ! =   E R R O R )  
     {  
         L L _ R T C _ A L A R M _ S e t ( R T C x ,   A l a r m C o u n t e r ) ;  
         s t a t u s   =   S U C C E S S ;  
     }  
     / *   E x i t   I n i t i a l i z a t i o n   m o d e   * /  
     L L _ R T C _ E x i t I n i t M o d e ( R T C x ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     W a i t s   u n t i l   t h e   R T C   r e g i s t e r s   a r e   s y n c h r o n i z e d   w i t h   R T C   A P B   c l o c k .  
     *   @ n o t e       T h e   R T C   R e s y n c h r o n i z a t i o n   m o d e   i s   w r i t e   p r o t e c t e d ,   u s e   t h e  
     *                   @ r e f   L L _ R T C _ D i s a b l e W r i t e P r o t e c t i o n   b e f o r e   c a l l i n g   t h i s   f u n c t i o n .  
     *   @ p a r a m     R T C x   R T C   I n s t a n c e  
     *   @ r e t v a l   A n   E r r o r S t a t u s   e n u m e r a t i o n   v a l u e :  
     *                     -   S U C C E S S :   R T C   r e g i s t e r s   a r e   s y n c h r o n i s e d  
     *                     -   E R R O R :   R T C   r e g i s t e r s   a r e   n o t   s y n c h r o n i s e d  
     * /  
 E r r o r S t a t u s   L L _ R T C _ W a i t F o r S y n c h r o ( R T C _ T y p e D e f   * R T C x )  
 {  
     _ _ I O   u i n t 3 2 _ t   t i m e o u t   =   R T C _ S Y N C H R O _ T I M E O U T ;  
     E r r o r S t a t u s   s t a t u s   =   S U C C E S S ;  
     u i n t 3 2 _ t   t m p   =   0 U ;  
  
     / *   C h e c k   t h e   p a r a m e t e r   * /  
     a s s e r t _ p a r a m ( I S _ R T C _ A L L _ I N S T A N C E ( R T C x ) ) ;  
  
     / *   C l e a r   R S F   f l a g   * /  
     L L _ R T C _ C l e a r F l a g _ R S ( R T C x ) ;  
  
     / *   W a i t   t h e   r e g i s t e r s   t o   b e   s y n c h r o n i s e d   * /  
     t m p   =   L L _ R T C _ I s A c t i v e F l a g _ R S ( R T C x ) ;  
     w h i l e   ( ( t i m e o u t   ! =   0 U )   & &   ( t m p   ! =   0 U ) )  
     {  
         i f   ( L L _ S Y S T I C K _ I s A c t i v e C o u n t e r F l a g ( )   = =   1 U )  
         {  
             t i m e o u t - - ;  
         }  
         t m p   =   L L _ R T C _ I s A c t i v e F l a g _ R S ( R T C x ) ;  
         i f   ( t i m e o u t   = =   0 U )  
         {  
             s t a t u s   =   E R R O R ;  
         }  
     }  
  
     r e t u r n   ( s t a t u s ) ;  
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
 # e n d i f   / *   d e f i n e d ( R T C )   * /  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   U S E _ F U L L _ L L _ D R I V E R   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  