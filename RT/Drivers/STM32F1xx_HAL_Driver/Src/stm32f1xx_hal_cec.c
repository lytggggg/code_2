??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ c e c . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       C E C   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g    
     *                     f u n c t i o n a l i t i e s   o f   t h e   H i g h   D e f i n i t i o n   M u l t i m e d i a   I n t e r f a c e    
     *                     C o n s u m e r   E l e c t r o n i c s   C o n t r o l   P e r i p h e r a l   ( C E C ) .  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n  
     *                       +   I O   o p e r a t i o n   f u n c t i o n  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n  
     *  
     *                        
     @ v e r b a t i m                
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h e   C E C   H A L   d r i v e r   c a n   b e   u s e d   a s   f o l l o w :  
          
         ( # )   D e c l a r e   a   C E C _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e .  
         ( # )   I n i t i a l i z e   t h e   C E C   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   H A L _ C E C _ M s p I n i t   ( ) A P I :  
                 ( # # )   E n a b l e   t h e   C E C   i n t e r f a c e   c l o c k .  
                 ( # # )   C E C   p i n s   c o n f i g u r a t i o n :  
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   C E C   G P I O s .  
                         ( + + + )   C o n f i g u r e   t h e s e   C E C   p i n s   a s   a l t e r n a t e   f u n c t i o n   p u l l - u p .  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s   ( H A L _ C E C _ T r a n s m i t _ I T ( )  
                           a n d   H A L _ C E C _ R e c e i v e _ I T ( )   A P I s ) :  
                         ( + + + )   C o n f i g u r e   t h e   C E C   i n t e r r u p t   p r i o r i t y .  
                         ( + + + )   E n a b l e   t h e   N V I C   C E C   I R Q   h a n d l e .  
                         ( + + + )   T h e   s p e c i f i c   C E C   i n t e r r u p t s   ( T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t ,    
                                     R X N E   i n t e r r u p t   a n d   E r r o r   I n t e r r u p t s )   w i l l   b e   m a n a g e d   u s i n g   t h e   m a c r o s  
                                     _ _ H A L _ C E C _ E N A B L E _ I T ( )   a n d   _ _ H A L _ C E C _ D I S A B L E _ I T ( )   i n s i d e   t h e   t r a n s m i t    
                                     a n d   r e c e i v e   p r o c e s s .  
  
         ( # )   P r o g r a m   t h e   B i t   T i m i n g   E r r o r   M o d e   a n d   t h e   B i t   P e r i o d   E r r o r   M o d e   i n   t h e   h c e c   I n i t   s t r u c t u r e .  
  
         ( # )   I n i t i a l i z e   t h e   C E C   r e g i s t e r s   b y   c a l l i n g   t h e   H A L _ C E C _ I n i t ( )   A P I .  
  
     [ . . ]                  
         ( @ )   T h i s   A P I   ( H A L _ C E C _ I n i t ( ) )   c o n f i g u r e s   a l s o   t h e   l o w   l e v e l   H a r d w a r e   ( G P I O ,   C L O C K ,   C O R T E X . . . e t c )  
                 b y   c a l l i n g   t h e   c u s t o m e d   H A L _ C E C _ M s p I n i t ( )   A P I .  
     * * *   C a l l b a c k   r e g i s t r a t i o n   * * *  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
     a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
     U s e   F u n c t i o n s   @ r e f   H A L _ C E C _ R e g i s t e r C a l l b a c k ( )   o r   H A L _ C E C _ R e g i s t e r X X X C a l l b a c k ( )  
     t o   r e g i s t e r   a n   i n t e r r u p t   c a l l b a c k .  
  
     F u n c t i o n   @ r e f   H A L _ C E C _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x C p l t C a l l b a c k           :   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
         ( + )   E r r o r C a l l b a c k             :   c a l l b a c k   f o r   e r r o r   d e t e c t i o n .  
         ( + )   M s p I n i t C a l l b a c k         :   C E C   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k     :   C E C   M s p D e I n i t .  
     T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
     a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
     F o r   s p e c i f i c   c a l l b a c k   H A L _ C E C _ R x C p l t C a l l b a c k   u s e   d e d i c a t e d   r e g i s t e r   c a l l b a c k s    
     @ r e f   H A L _ C E C _ R e g i s t e r R x C p l t C a l l b a c k ( ) .  
  
     U s e   f u n c t i o n   @ r e f   H A L _ C E C _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
     w e a k   f u n c t i o n .  
     @ r e f   H A L _ C E C _ U n R e g i s t e r C a l l b a c k ( )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
     a n d   t h e   C a l l b a c k   I D .  
     T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x C p l t C a l l b a c k           :   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
         ( + )   E r r o r C a l l b a c k             :   c a l l b a c k   f o r   e r r o r   d e t e c t i o n .  
         ( + )   M s p I n i t C a l l b a c k         :   C E C   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k     :   C E C   M s p D e I n i t .  
  
     F o r   c a l l b a c k   H A L _ C E C _ R x C p l t C a l l b a c k   u s e   d e d i c a t e d   u n r e g i s t e r   c a l l b a c k   :    
     @ r e f   H A L _ C E C _ U n R e g i s t e r R x C p l t C a l l b a c k ( ) .  
  
     B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ C E C _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   H A L _ C E C _ S T A T E _ R E S E T  
     a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s   :  
     e x a m p l e s   @ r e f   H A L _ C E C _ T x C p l t C a l l b a c k ( )   ,   @ r e f   H A L _ C E C _ R x C p l t C a l l b a c k ( ) .  
     E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e  
     r e s e t   t o   t h e   l e g a c y   w e a k   f u n c t i o n   i n   t h e   @ r e f   H A L _ C E C _ I n i t ( ) /   @ r e f   H A L _ C E C _ D e I n i t ( )   o n l y   w h e n  
     t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
     i f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ C E C _ I n i t ( )   /   @ r e f   H A L _ C E C _ D e I n i t ( )  
     k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   f u n c t i o n s   ( r e g i s t e r e d   b e f o r e h a n d )  
  
     C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ C E C _ S T A T E _ R E A D Y   s t a t e   o n l y .  
     E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   c a l l b a c k s   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
     i n   H A L _ C E C _ S T A T E _ R E A D Y   o r   H A L _ C E C _ S T A T E _ R E S E T   s t a t e ,  
     t h u s   r e g i s t e r e d   ( u s e r )   M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
     I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
     u s i n g   @ r e f   H A L _ C E C _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ C E C _ D e I n i t ( )  
     o r   @ r e f   H A L _ C E C _ I n i t ( )   f u n c t i o n .  
  
     W h e n   t h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
     n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e   a n d   a l l   c a l l b a c k s  
     a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s .  
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
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *      
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 # i f d e f   H A L _ C E C _ M O D U L E _ E N A B L E D  
  
 # i f   d e f i n e d   ( C E C )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C E C   C E C  
     *   @ b r i e f   H A L   C E C   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ P r i v a t e _ C o n s t a n t s   C E C   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
 # d e f i n e   C E C _ C F G R _ F I E L D S   ( C E C _ C F G R _ B T E M   |   C E C _ C F G R _ B P E M   )  
 # d e f i n e   C E C _ F L A G _ T R A N S M I T _ M A S K   ( C E C _ F L A G _ T S O M | C E C _ F L A G _ T E O M | C E C _ F L A G _ T B T R F )  
 # d e f i n e   C E C _ F L A G _ R E C E I V E _ M A S K   ( C E C _ F L A G _ R S O M | C E C _ F L A G _ R E O M | C E C _ F L A G _ R B T F )  
 # d e f i n e   C E C _ E S R _ A L L _ E R R O R   ( C E C _ E S R _ B T E | C E C _ E S R _ B P E | C E C _ E S R _ R B T F E | C E C _ E S R _ S B E | C E C _ E S R _ A C K E | C E C _ E S R _ L I N E | C E C _ E S R _ T B T F E )  
 # d e f i n e   C E C _ R X X F E R S I Z E _ I N I T I A L I Z E   0 x F F F F   / * ! <   V a l u e   u s e d   t o   i n i t i a l i s e   t h e   R x X f e r S i z e   o f   t h e   h a n d l e   * /  
 / * *  
     *   @ }  
     * /  
    
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ P r i v a t e _ F u n c t i o n s   C E C   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   C E C _ T r a n s m i t _ I T ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   C E C _ R e c e i v e _ I T ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 / * *  
     *   @ }  
     * /  
      
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s   C E C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s    
     *  
 @ v e r b a t i m                                                                                                  
 = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   t h e   C E C  
             ( + )   T h e   f o l l o w i n g   p a r a m e t e r s   n e e d   t o   b e   c o n f i g u r e d :    
                 ( + + )   T i m i n g E r r o r F r e e  
                 ( + + )   P e r i o d E r r o r F r e e    
                 ( + + )   I n i t i a t o r A d d r e s s  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   I n i t i a l i z e s   t h e   C E C   m o d e   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   C E C _ I n i t T y p e D e f   a n d   c r e a t e s   t h e   a s s o c i a t e d   h a n d l e   .  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   C h e c k   t h e   C E C   h a n d l e   a l l o c a t i o n   * /  
     i f ( ( h c e c   = =   N U L L )   | | ( h c e c - > I n i t . R x B u f f e r   = =   N U L L ) )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /    
     a s s e r t _ p a r a m ( I S _ C E C _ A L L _ I N S T A N C E ( h c e c - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ C E C _ B I T _ T I M I N G _ E R R O R _ M O D E ( h c e c - > I n i t . T i m i n g E r r o r F r e e ) ) ;  
     a s s e r t _ p a r a m ( I S _ C E C _ B I T _ P E R I O D _ E R R O R _ M O D E ( h c e c - > I n i t . P e r i o d E r r o r F r e e ) ) ;  
     a s s e r t _ p a r a m ( I S _ C E C _ A D D R E S S ( h c e c - > I n i t . O w n A d d r e s s ) ) ;  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h c e c - > L o c k   =   H A L _ U N L O C K E D ;  
  
         h c e c - > T x C p l t C a l l b a c k     =   H A L _ C E C _ T x C p l t C a l l b a c k ;     / *   L e g a c y   w e a k   T x C p l t C a l l b a c k     * /  
         h c e c - > R x C p l t C a l l b a c k   =   H A L _ C E C _ R x C p l t C a l l b a c k ;       / *   L e g a c y   w e a k   R x C p l t C a l l b a c k   * /  
         h c e c - > E r r o r C a l l b a c k   =   H A L _ C E C _ E r r o r C a l l b a c k ;           / *   L e g a c y   w e a k   E r r o r C a l l b a c k   * /  
  
         i f ( h c e c - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h c e c - > M s p I n i t C a l l b a c k   =   H A L _ C E C _ M s p I n i t ;   / *   L e g a c y   w e a k   M s p I n i t     * /  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h c e c - > M s p I n i t C a l l b a c k ( h c e c ) ;  
     }  
 # e l s e  
     i f ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h c e c - > L o c k   =   H A L _ U N L O C K E D ;  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K   * /  
         H A L _ C E C _ M s p I n i t ( h c e c ) ;  
     }  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ B U S Y ;  
      
     / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ C E C _ D I S A B L E ( h c e c ) ;  
      
     / *   W r i t e   t o   C E C   C o n t r o l   R e g i s t e r   * /  
     M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > C F G R ,   C E C _ C F G R _ F I E L D S ,   h c e c - > I n i t . T i m i n g E r r o r F r e e   |   h c e c - > I n i t . P e r i o d E r r o r F r e e ) ;  
      
     / *   W r i t e   t o   C E C   O w n   A d d r e s s   R e g i s t e r   * /  
     M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > O A R ,   C E C _ O A R _ O A ,   h c e c - > I n i t . O w n A d d r e s s ) ;  
      
     / *   C o n f i g u r e   t h e   p r e s c a l e r   t o   g e n e r a t e   t h e   r e q u i r e d   5 0   m i c r o s e c o n d s   t i m e   b a s e . * /  
     M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > P R E S ,   C E C _ P R E S _ P R E S ,   5 0 U   *   ( H A L _ R C C _ G e t P C L K 1 F r e q ( ) / 1 0 0 0 0 0 0 U )   -   1 U ) ;  
      
     / *   E n a b l e   t h e   f o l l o w i n g   C E C   I n t e r r u p t   * /  
     _ _ H A L _ C E C _ E N A B L E _ I T ( h c e c ,   C E C _ I T _ I E ) ;  
  
     / *   E n a b l e   t h e   C E C   P e r i p h e r a l   * /  
     _ _ H A L _ C E C _ E N A B L E ( h c e c ) ;  
      
     h c e c - > E r r o r C o d e   =   H A L _ C E C _ E R R O R _ N O N E ;  
     h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ R E A D Y ;  
     h c e c - > R x S t a t e   =   H A L _ C E C _ S T A T E _ R E A D Y ;  
      
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   D e I n i t i a l i z e s   t h e   C E C   p e r i p h e r a l    
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ D e I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   C h e c k   t h e   C E C   h a n d l e   a l l o c a t i o n   * /  
     i f ( h c e c   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C E C _ A L L _ I N S T A N C E ( h c e c - > I n s t a n c e ) ) ;  
  
     h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ B U S Y ;  
  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f ( h c e c - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h c e c - > M s p D e I n i t C a l l b a c k   =   H A L _ C E C _ M s p D e I n i t ;   / *   L e g a c y   w e a k   M s p D e I n i t     * /  
     }  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h c e c - > M s p D e I n i t C a l l b a c k ( h c e c ) ;  
  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     H A L _ C E C _ M s p D e I n i t ( h c e c ) ;  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
  
     _ _ H A L _ R C C _ C E C _ F O R C E _ R E S E T ( ) ;  
     _ _ H A L _ R C C _ C E C _ R E L E A S E _ R E S E T ( ) ;  
      
     h c e c - > E r r o r C o d e   =   H A L _ C E C _ E R R O R _ N O N E ;  
     h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ R E S E T ;  
     h c e c - > R x S t a t e   =   H A L _ C E C _ S T A T E _ R E S E T ;  
      
     / *   P r o c e s s   U n l o c k   * /  
     _ _ H A L _ U N L O C K ( h c e c ) ;  
      
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   I n i t i a l i z e s   t h e   O w n   A d d r e s s   o f   t h e   C E C   d e v i c e  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ p a r a m     C E C _ O w n A d d r e s s :   T h e   C E C   o w n   a d d r e s s .      
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ S e t D e v i c e A d d r e s s ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 1 6 _ t   C E C _ O w n A d d r e s s )  
 {  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ C E C _ O W N _ A D D R E S S ( C E C _ O w n A d d r e s s ) ) ;  
  
     i f   ( ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E A D Y )   & &   ( h c e c - > R x S t a t e   = =   H A L _ C E C _ S T A T E _ R E A D Y ) )  
     {    
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h c e c ) ;    
          
         h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ B U S Y ;  
      
         / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
         _ _ H A L _ C E C _ D I S A B L E ( h c e c ) ;  
          
         i f ( C E C _ O w n A d d r e s s   ! =   C E C _ O W N _ A D D R E S S _ N O N E )  
         {  
               M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > O A R ,   C E C _ O A R _ O A ,   h c e c - > I n i t . O w n A d d r e s s ) ;  
         }  
         e l s e  
         {  
               C L E A R _ B I T ( h c e c - > I n s t a n c e - > O A R ,   C E C _ O A R _ O A ) ;      
         }  
                  
         h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ R E A D Y ;  
         h c e c - > E r r o r C o d e   =   H A L _ C E C _ E R R O R _ N O N E ;  
          
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h c e c ) ;    
          
         / *   E n a b l e   t h e   P e r i p h e r a l   * /  
         _ _ H A L _ C E C _ E N A B L E ( h c e c ) ;  
          
         r e t u r n     H A L _ O K ;    
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   C E C   M S P   I n i t  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
   _ _ w e a k   v o i d   H A L _ C E C _ M s p I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c e c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C E C _ M s p I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /    
 }  
  
 / * *  
     *   @ b r i e f   C E C   M S P   D e I n i t  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
   _ _ w e a k   v o i d   H A L _ C E C _ M s p D e I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c e c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C E C _ M s p D e I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /    
 }  
  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   C E C   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h c e c   C E C   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ C E C _ T X _ C P L T _ C B _ I D   T x   C o m p l e t e   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ C E C _ E R R O R _ C B _ I D   E r r o r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ C E C _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ C E C _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ R e g i s t e r C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   H A L _ C E C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p C E C _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
         / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h c e c ) ;  
  
     i f ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ C E C _ T X _ C P L T _ C B _ I D   :  
             h c e c - > T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
  
         c a s e   H A L _ C E C _ E R R O R _ C B _ I D   :  
             h c e c - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
  
         c a s e   H A L _ C E C _ M S P I N I T _ C B _ I D   :  
             h c e c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
  
       c a s e   H A L _ C E C _ M S P D E I N I T _ C B _ I D   :  
             h c e c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
             / *   R e t u r n   e r r o r   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e   i f ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ C E C _ M S P I N I T _ C B _ I D   :  
             h c e c - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
  
       c a s e   H A L _ C E C _ M S P D E I N I T _ C B _ I D   :  
             h c e c - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
             b r e a k ;  
  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
           / *   R e t u r n   e r r o r   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h c e c ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   C E C   C a l l b a c k  
     *                   C E C   c a l l a b c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m   h c e c   u a r t   h a n d l e  
     *   @ p a r a m   C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                     @ a r g   @ r e f   H A L _ C E C _ T X _ C P L T _ C B _ I D   T x   C o m p l e t e   c a l l b a c k   I D D  
     *                     @ a r g   @ r e f   H A L _ C E C _ E R R O R _ C B _ I D   E r r o r   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ C E C _ M S P I N I T _ C B _ I D   M s p I n i t   c a l l b a c k   I D  
     *                     @ a r g   @ r e f   H A L _ C E C _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   c a l l b a c k   I D  
     *   @ r e t v a l   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ U n R e g i s t e r C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   H A L _ C E C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h c e c ) ;  
  
     i f ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ C E C _ T X _ C P L T _ C B _ I D   :  
             h c e c - > T x C p l t C a l l b a c k   =   H A L _ C E C _ T x C p l t C a l l b a c k ;     / *   L e g a c y   w e a k     T x C p l t C a l l b a c k   * /  
             b r e a k ;  
  
         c a s e   H A L _ C E C _ E R R O R _ C B _ I D   :  
             h c e c - > E r r o r C a l l b a c k   =   H A L _ C E C _ E r r o r C a l l b a c k ;     / *   L e g a c y   w e a k   E r r o r C a l l b a c k       * /  
             b r e a k ;  
  
         c a s e   H A L _ C E C _ M S P I N I T _ C B _ I D   :  
             h c e c - > M s p I n i t C a l l b a c k   =   H A L _ C E C _ M s p I n i t ;  
             b r e a k ;  
  
       c a s e   H A L _ C E C _ M S P D E I N I T _ C B _ I D   :  
             h c e c - > M s p D e I n i t C a l l b a c k   =   H A L _ C E C _ M s p D e I n i t ;  
             b r e a k ;  
  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
           / *   R e t u r n   e r r o r   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e   i f ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
         c a s e   H A L _ C E C _ M S P I N I T _ C B _ I D   :  
             h c e c - > M s p I n i t C a l l b a c k   =   H A L _ C E C _ M s p I n i t ;  
             b r e a k ;  
  
       c a s e   H A L _ C E C _ M S P D E I N I T _ C B _ I D   :  
             h c e c - > M s p D e I n i t C a l l b a c k   =   H A L _ C E C _ M s p D e I n i t ;  
             b r e a k ;  
  
         d e f a u l t   :  
             / *   U p d a t e   t h e   e r r o r   c o d e   * /  
             h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
           / *   R e t u r n   e r r o r   s t a t u s   * /  
             s t a t u s   =     H A L _ E R R O R ;  
             b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h c e c ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     R e g i s t e r   C E C   R X   c o m p l e t e   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   H A L _ C E C _ R x C p l t C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h c e c   C E C   h a n d l e  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   R x   t r a n s f e r   c o m p e l e t e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ R e g i s t e r R x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   p C E C _ R x C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h c e c ) ;  
  
     i f ( H A L _ C E C _ S T A T E _ R E A D Y   = =   h c e c - > R x S t a t e )  
     {  
         h c e c - > R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h c e c ) ;  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n R e g i s t e r   C E C   R X   c o m p l e t e   C a l l b a c k  
     *                   C E C   R X   c o m p l e t e   C a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   H A L _ C E C _ R x C p l t C a l l b a c k ( )   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h c e c   C E C   h a n d l e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ U n R e g i s t e r R x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h c e c ) ;  
  
     i f ( H A L _ C E C _ S T A T E _ R E A D Y   = =   h c e c - > R x S t a t e )  
     {  
         h c e c - > R x C p l t C a l l b a c k   =   H A L _ C E C _ R x C p l t C a l l b a c k ;   / *   L e g a c y   w e a k     C E C   R x C p l t C a l l b a c k     * /  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h c e c - > E r r o r C o d e   | =   H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h c e c ) ;  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s    
     *     @ b r i e f   C E C   T r a n s m i t / R e c e i v e   f u n c t i o n s    
     *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #    
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   C E C   d a t a   t r a n s f e r s .  
          
         ( # )   T h e   C E C   h a n d l e   m u s t   c o n t a i n   t h e   i n i t i a t o r   ( T X   s i d e )   a n d   t h e   d e s t i n a t i o n   ( R X   s i d e )  
                 l o g i c a l   a d d r e s s e s   ( 4 - b i t   l o n g   a d d r e s s e s ,   0 x F   f o r   b r o a d c a s t   m e s s a g e s   d e s t i n a t i o n )  
          
         ( # )   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   u s i n g   I n t e r r u p t s .    
                       T h e s e   A P I ' s   r e t u r n   t h e   H A L   s t a t u s .  
                       T h e   e n d   o f   t h e   d a t a   p r o c e s s i n g   w i l l   b e   i n d i c a t e d   t h r o u g h   t h e    
                       d e d i c a t e d   C E C   I R Q   w h e n   u s i n g   I n t e r r u p t   m o d e .  
                       T h e   H A L _ C E C _ T x C p l t C a l l b a c k ( ) ,   H A L _ C E C _ R x C p l t C a l l b a c k ( )   u s e r   c a l l b a c k s    
                       w i l l   b e   e x e c u t e d   r e s p e c t i v e l y   a t   t h e   e n d   o f   t h e   t r a n s m i t   o r   R e c e i v e   p r o c e s s  
                       T h e   H A L _ C E C _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   w i l l   b e   e x e c u t e d   w h e n   a   c o m m u n i c a t i o n    
                       e r r o r   i s   d e t e c t e d  
                  
         ( # )   A P I ' s   w i t h   I n t e r r u p t   a r e   :  
                   ( + )   H A L _ C E C _ T r a n s m i t _ I T ( )  
                   ( + )   H A L _ C E C _ I R Q H a n d l e r ( )  
  
         ( # )   A   s e t   o f   U s e r   C a l l b a c k s   a r e   p r o v i d e d :  
                   ( + )   H A L _ C E C _ T x C p l t C a l l b a c k ( )  
                   ( + )   H A L _ C E C _ R x C p l t C a l l b a c k ( )  
                   ( + )   H A L _ C E C _ E r r o r C a l l b a c k ( )  
              
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   S e n d   d a t a   i n   i n t e r r u p t   m o d e    
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ p a r a m   I n i t i a t o r A d d r e s s :   I n i t i a t o r   a d d r e s s  
     *   @ p a r a m   D e s t i n a t i o n A d d r e s s :   d e s t i n a t i o n   l o g i c a l   a d d r e s s              
     *   @ p a r a m   p D a t a :   p o i n t e r   t o   i n p u t   b y t e   d a t a   b u f f e r  
     *   @ p a r a m   S i z e :   a m o u n t   o f   d a t a   t o   b e   s e n t   i n   b y t e s   ( w i t h o u t   c o u n t i n g   t h e   h e a d e r ) .  
     *                             0   m e a n s   o n l y   t h e   h e a d e r   i s   s e n t   ( p i n g   o p e r a t i o n ) .  
     *                             M a x i m u m   T X   s i z e   i s   1 5   b y t e s   ( 1   o p c o d e   a n d   u p   t o   1 4   o p e r a n d s ) .          
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ T r a n s m i t _ I T ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 8 _ t   I n i t i a t o r A d d r e s s , u i n t 8 _ t   D e s t i n a t i o n A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   S i z e )  
 {  
     / *   i f   t h e   I P   i s n ' t   a l r e a d y   b u s y   a n d   i f   t h e r e   i s   n o   p r e v i o u s   t r a n s m i s s i o n  
           a l r e a d y   p e n d i n g   d u e   t o   a r b i t r a t i o n   l o s t   * /  
     i f ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ R E A D Y )    
     {          
         i f ( ( p D a t a   = =   N U L L   )   & &   ( S i z e   >   0 U ) )    
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         a s s e r t _ p a r a m ( I S _ C E C _ A D D R E S S ( D e s t i n a t i o n A d d r e s s ) ) ;  
         a s s e r t _ p a r a m ( I S _ C E C _ A D D R E S S ( I n i t i a t o r A d d r e s s ) ) ;    
         a s s e r t _ p a r a m ( I S _ C E C _ M S G S I Z E ( S i z e ) ) ;  
          
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h c e c ) ;  
         h c e c - > p T x B u f f P t r   =   p D a t a ;  
         h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ B U S Y _ T X ;  
         h c e c - > E r r o r C o d e   =   H A L _ C E C _ E R R O R _ N O N E ;  
  
         / *   i n i t i a l i z e   t h e   n u m b e r   o f   b y t e s   t o   s e n d ,  
           *   0   m e a n s   o n l y   o n e   h e a d e r   i s   s e n t   ( p i n g   o p e r a t i o n )   * /  
         h c e c - > T x X f e r C o u n t   =   S i z e ;  
  
         / *   s e n d   h e a d e r   b l o c k   * /  
         h c e c - > I n s t a n c e - > T X D   =   ( u i n t 8 _ t ) ( ( u i n t 3 2 _ t ) I n i t i a t o r A d d r e s s   < <   C E C _ I N I T I A T O R _ L S B _ P O S )   |   D e s t i n a t i o n A d d r e s s ;  
          
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h c e c ) ;    
  
         / *   c a s e   n o   d a t a   t o   b e   s e n t ,   s e n d e r   i s   o n l y   p i n g i n g   t h e   s y s t e m   * /  
         i f   ( S i z e   ! =   0 )  
         {          
             / *   S e t   T X   S t a r t   o f   M e s s a g e   ( T X S O M )   b i t   * /  
             M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > C S R ,   C E C _ F L A G _ T R A N S M I T _ M A S K ,   C E C _ F L A G _ T S O M ) ;  
         }  
         e l s e  
         {  
             / *   S e n d   a   p i n g   c o m m a n d   * /  
             M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > C S R ,   C E C _ F L A G _ T R A N S M I T _ M A S K ,   C E C _ F L A G _ T E O M | C E C _ F L A G _ T S O M ) ;  
         }  
         r e t u r n   H A L _ O K ;  
  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;        
     }  
 }  
  
 / * *  
     *   @ b r i e f   G e t   s i z e   o f   t h e   r e c e i v e d   f r a m e .  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   F r a m e   s i z e  
     * /  
 u i n t 3 2 _ t   H A L _ C E C _ G e t L a s t R e c e i v e d F r a m e S i z e ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     r e t u r n   h c e c - > R x X f e r S i z e ;  
 }  
  
 / * *  
     *   @ b r i e f   C h a n g e   R x   B u f f e r .  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ p a r a m   R x b u f f e r :   R x   B u f f e r  
     *   @ n o t e     T h i s   f u n c t i o n   c a n   b e   c a l l e d   o n l y   i n s i d e   t h e   H A L _ C E C _ R x C p l t C a l l b a c k ( )    
     *   @ r e t v a l   F r a m e   s i z e  
     * /  
 v o i d   H A L _ C E C _ C h a n g e R x B u f f e r ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 8 _ t *   R x b u f f e r )  
 {  
     h c e c - > I n i t . R x B u f f e r   =   R x b u f f e r ;    
 }  
      
 / * *  
     *   @ b r i e f   T h i s   f u n c t i o n   h a n d l e s   C E C   i n t e r r u p t   r e q u e s t s .  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ C E C _ I R Q H a n d l e r ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   S a v e   e r r o r   s t a t u s   r e g i s t e r   f o r   f u r t h e r   e r r o r   h a n d l i n g   p u r p o s e s   * /  
     h c e c - > E r r o r C o d e   =   R E A D _ B I T ( h c e c - > I n s t a n c e - > E S R ,   C E C _ E S R _ A L L _ E R R O R ) ;  
  
     / *   T r a n s m i t   e r r o r   * /  
     i f ( _ _ H A L _ C E C _ G E T _ F L A G ( h c e c ,   C E C _ F L A G _ T E R R )   ! =   R E S E T )  
     {  
         / *   A c k n o w l e d g e m e n t   o f   t h e   e r r o r   * /  
         _ _ H A L _ C E C _ C L E A R _ F L A G ( h c e c ,   C E C _ F L A G _ T E R R ) ;  
          
         h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ R E A D Y ;  
     }  
      
     / *   R e c e i v e   e r r o r   * /  
     i f ( _ _ H A L _ C E C _ G E T _ F L A G ( h c e c ,   C E C _ F L A G _ R E R R )   ! =   R E S E T )  
     {  
         / *   A c k n o w l e d g e m e n t   o f   t h e   e r r o r   * /  
         _ _ H A L _ C E C _ C L E A R _ F L A G ( h c e c ,   C E C _ F L A G _ R E R R ) ;  
         h c e c - > I n i t . R x B u f f e r - = h c e c - > R x X f e r S i z e ;  
         h c e c - > R x X f e r S i z e   =   0 U ;    
         h c e c - > R x S t a t e   =   H A L _ C E C _ S T A T E _ R E A D Y ;  
     }  
      
     i f ( ( h c e c - > E r r o r C o d e   &   C E C _ E S R _ A L L _ E R R O R )   ! =   0 U )  
     {  
         / *   E r r o r     C a l l   B a c k   * /  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h c e c - > E r r o r C a l l b a c k ( h c e c ) ;  
 # e l s e          
         H A L _ C E C _ E r r o r C a l l b a c k ( h c e c ) ;  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
      
     / *   T r a n s m i t   b y t e   r e q u e s t   o r   b l o c k   t r a n s f e r   f i n i s h e d   * /  
     i f ( _ _ H A L _ C E C _ G E T _ F L A G ( h c e c ,   C E C _ F L A G _ T B T R F )   ! =   R E S E T )  
     {  
         C E C _ T r a n s m i t _ I T ( h c e c ) ;  
     }  
  
     / *   R e c e i v e   b y t e   o r   b l o c k   t r a n s f e r   f i n i s h e d   * /  
     i f ( _ _ H A L _ C E C _ G E T _ F L A G ( h c e c ,   C E C _ F L A G _ R B T F )   ! =   R E S E T )  
     {  
         i f ( h c e c - > R x X f e r S i z e   = =   0 U )  
         {  
             / *   r e c e p t i o n   i s   s t a r t i n g   * /    
             h c e c - > R x S t a t e   =   H A L _ C E C _ S T A T E _ B U S Y _ R X ;  
         }  
         C E C _ R e c e i v e _ I T ( h c e c ) ;  
     }  
 }  
  
  
 / * *  
     *   @ b r i e f   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
   _ _ w e a k   v o i d   H A L _ C E C _ T x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c e c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C E C _ T x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /    
 }  
  
 / * *  
     *   @ b r i e f   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ p a r a m   R x F r a m e S i z e :   S i z e   o f   f r a m e  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ C E C _ R x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 3 2 _ t   R x F r a m e S i z e )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c e c ) ;  
     U N U S E D ( R x F r a m e S i z e ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C E C _ R x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f   C E C   e r r o r   c a l l b a c k s  
     *   @ p a r a m   h c e c :   C E C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
   _ _ w e a k   v o i d   H A L _ C E C _ E r r o r C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h c e c ) ;  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ C E C _ E r r o r C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /    
 }  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
     *     @ b r i e f       C E C   c o n t r o l   f u n c t i o n s    
     *  
 @ v e r b a t i m        
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n   # # # # #  
   = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =      
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   c o n t r o l   t h e   C E C .  
           ( + )   H A L _ C E C _ G e t S t a t e ( )   A P I   c a n   b e   h e l p f u l   t o   c h e c k   i n   r u n - t i m e   t h e   s t a t e   o f   t h e   C E C   p e r i p h e r a l .    
 	   ( + )   H A L _ C E C _ G e t E r r o r ( )   A P I   c a n   b e   h e l p f u l   t o   c h e c k   i n   r u n - t i m e   t h e   e r r o r   o f   t h e   C E C   p e r i p h e r a l .    
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
 / * *  
     *   @ b r i e f   r e t u r n   t h e   C E C   s t a t e  
     *   @ p a r a m   h c e c :   p o i n t e r   t o   a   C E C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C E C   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ C E C _ S t a t e T y p e D e f   H A L _ C E C _ G e t S t a t e ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     u i n t 3 2 _ t   t e m p 1 =   0 x 0 0 U ,   t e m p 2   =   0 x 0 0 U ;  
     t e m p 1   =   h c e c - > g S t a t e ;  
     t e m p 2   =   h c e c - > R x S t a t e ;  
      
     r e t u r n   ( H A L _ C E C _ S t a t e T y p e D e f ) ( t e m p 1   |   t e m p 2 ) ;  
 }  
  
 / * *  
 *   @ b r i e f     R e t u r n   t h e   C E C   e r r o r   c o d e  
 *   @ p a r a m     h c e c   :   p o i n t e r   t o   a   C E C _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   C E C .  
 *   @ r e t v a l   C E C   E r r o r   C o d e  
 * /  
 u i n t 3 2 _ t   H A L _ C E C _ G e t E r r o r ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     r e t u r n   h c e c - > E r r o r C o d e ;  
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
 / * *   @ a d d t o g r o u p   C E C _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
  
   / * *  
     *   @ b r i e f   S e n d   d a t a   i n   i n t e r r u p t   m o d e    
     *   @ p a r a m   h c e c :   C E C   h a n d l e .    
     *                   F u n c t i o n   c a l l e d   u n d e r   i n t e r r u p t i o n   o n l y ,   o n c e  
     *                   i n t e r r u p t i o n s   h a v e   b e e n   e n a b l e d   b y   H A L _ C E C _ T r a n s m i t _ I T ( )        
     *   @ r e t v a l   H A L   s t a t u s  
     * /      
 s t a t i c   H A L _ S t a t u s T y p e D e f   C E C _ T r a n s m i t _ I T ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     / *   i f   t h e   I P   i s   a l r e a d y   b u s y   o r   i f   t h e r e   i s   a   p r e v i o u s   t r a n s m i s s i o n  
           a l r e a d y   p e n d i n g   d u e   t o   a r b i t r a t i o n   l o s s   * /  
     i f ( ( h c e c - > g S t a t e   = =   H A L _ C E C _ S T A T E _ B U S Y _ T X )   | |   ( _ _ H A L _ C E C _ G E T _ T R A N S M I S S I O N _ S T A R T _ F L A G ( h c e c )   ! =   R E S E T ) )  
     {  
         / *   i f   a l l   d a t a   h a v e   b e e n   s e n t   * /  
         i f ( h c e c - > T x X f e r C o u n t   = =   0 U )  
         {  
             / *   A c k n o w l e d g e   s u c c e s s f u l   c o m p l e t i o n   b y   w r i t i n g   0 x 0 0   * /  
             M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > C S R ,   C E C _ F L A G _ T R A N S M I T _ M A S K ,   0 x 0 0 U ) ;  
  
             h c e c - > g S t a t e   =   H A L _ C E C _ S T A T E _ R E A D Y ;  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
           h c e c - > T x C p l t C a l l b a c k ( h c e c ) ;  
 # e l s e  
           H A L _ C E C _ T x C p l t C a l l b a c k ( h c e c ) ;  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /            
              
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             / *   R e d u c e   t h e   n u m b e r   o f   b y t e s   t o   t r a n s f e r   b y   o n e   * /  
             h c e c - > T x X f e r C o u n t - - ;  
              
             / *   W r i t e   d a t a   t o   T X   b u f f e r * /  
             h c e c - > I n s t a n c e - > T X D   =   * h c e c - > p T x B u f f P t r + + ;  
              
             / *   I f   t h i s   i s   t h e   l a s t   b y t e   o f   t h e   o n g o i n g   t r a n s m i s s i o n   * /  
             i f ( h c e c - > T x X f e r C o u n t   = =   0 U )  
             {  
                 / *   A c k n o w l e d g e   b y t e   r e q u e s t   a n d   s i g n a l   e n d   o f   m e s s a g e   * /  
                 M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > C S R ,   C E C _ F L A G _ T R A N S M I T _ M A S K ,   C E C _ F L A G _ T E O M ) ;  
             }  
             e l s e  
             {  
                 / *   A c k n o w l e d g e   b y t e   r e q u e s t   b y   w r i t i n g   0 x 0 0   * /  
                 M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > C S R ,   C E C _ F L A G _ T R A N S M I T _ M A S K ,   0 x 0 0 U ) ;  
             }      
              
             r e t u r n   H A L _ O K ;  
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;        
     }  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e   d a t a   i n   i n t e r r u p t   m o d e .    
     *   @ p a r a m   h c e c :   C E C   h a n d l e .  
     *                   F u n c t i o n   c a l l e d   u n d e r   i n t e r r u p t i o n   o n l y ,   o n c e  
     *                   i n t e r r u p t i o n s   h a v e   b e e n   e n a b l e d   b y   H A L _ C E C _ R e c e i v e _ I T ( )        
     *   @ r e t v a l   H A L   s t a t u s  
     * /      
 s t a t i c   H A L _ S t a t u s T y p e D e f   C E C _ R e c e i v e _ I T ( C E C _ H a n d l e T y p e D e f   * h c e c )  
 {  
     s t a t i c   u i n t 3 2 _ t   t e m p ;  
      
     i f ( h c e c - > R x S t a t e   = =   H A L _ C E C _ S T A T E _ B U S Y _ R X )  
     {  
         t e m p   =   h c e c - > I n s t a n c e - > C S R ;  
          
         / *   S t o r e   r e c e i v e d   d a t a   * /  
         h c e c - > R x X f e r S i z e + + ;  
         * h c e c - > I n i t . R x B u f f e r + +   =   h c e c - > I n s t a n c e - > R X D ;  
          
         / *   A c k n o w l e d g e   r e c e i v e d   b y t e   b y   w r i t i n g   0 x 0 0   * /  
         M O D I F Y _ R E G ( h c e c - > I n s t a n c e - > C S R ,   C E C _ F L A G _ R E C E I V E _ M A S K ,   0 x 0 0 U ) ;  
          
         / *   I f   t h e   E n d   O f   M e s s a g e   i s   r e a c h e d   * /  
         i f ( H A L _ I S _ B I T _ S E T ( t e m p ,   C E C _ F L A G _ R E O M ) )  
         {  
             / *   I n t e r r u p t s   a r e   n o t   d i s a b l e d   d u e   t o   t r a n s m i s s i o n   s t i l l   o n g o i n g   * /  
             h c e c - > R x S t a t e   =   H A L _ C E C _ S T A T E _ R E A D Y ;  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         h c e c - > R x C p l t C a l l b a c k ( h c e c ,   h c e c - > R x X f e r S i z e ) ;  
 # e l s e  
         H A L _ C E C _ R x C p l t C a l l b a c k ( h c e c ,   h c e c - > R x X f e r S i z e ) ;    
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /              
              
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             r e t u r n   H A L _ B U S Y ;    
         }  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;    
     }  
 }  
  
 / * *  
   *   @ }  
   * /    
    
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   C E C   * /  
  
 # e n d i f   / *   H A L _ C E C _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  