??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ t i m e b a s e _ r t c _ a l a r m _ t e m p l a t e . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H A L   t i m e   b a s e   b a s e d   o n   t h e   h a r d w a r e   R T C _ A L A R M .  
     *  
     *                     T h i s   f i l e   o v e r r i d e   t h e   n a t i v e   H A L   t i m e   b a s e   f u n c t i o n s   ( d e f i n e d   a s   w e a k )  
     *                     t o   u s e   t h e   R T C   A L A R M   f o r   t i m e   b a s e   g e n e r a t i o n :  
     *                       +   I n t i a l i z e s   t h e   R T C   p e r i p h e r a l   t o   i n c r e m e n t   t h e   s e c o n d s   r e g i s t e r s   e a c h   1 m s  
     *                       +   T h e   a l a r m   i s   c o n f i g u r e d   t o   a s s e r t   a n   i n t e r r u p t   w h e n   t h e   R T C   r e a c h e s   1 m s  
     *                       +   H A L _ I n c T i c k   i s   c a l l e d   a t   e a c h   A l a r m   e v e n t   a n d   t h e   t i m e   i s   r e s e t   t o   0 0 : 0 0 : 0 0  
     *                       +   H S E   ( d e f a u l t ) ,   L S E   o r   L S I   c a n   b e   s e l e c t e d   a s   R T C   c l o c k   s o u r c e  
   @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   f i l e   m u s t   b e   c o p i e d   t o   t h e   a p p l i c a t i o n   f o l d e r   a n d   m o d i f i e d   a s   f o l l o w s :  
         ( # )   R e n a m e   i t   t o   ' s t m 3 2 f 1 x x _ h a l _ t i m e b a s e _ r t c _ a l a r m . c '  
         ( # )   A d d   t h i s   f i l e   a n d   t h e   R T C   H A L   d r i v e r s   t o   y o u r   p r o j e c t   a n d   u n c o m m e n t  
               H A L _ R T C _ M O D U L E _ E N A B L E D   d e f i n e   i n   s t m 3 2 f 1 x x _ h a l _ c o n f . h  
  
         [ . . ]  
         ( @ )   H A L   R T C   a l a r m   a n d   H A L   R T C   w a k e u p   d r i v e r s   c a n ?b  b e   u s e d   w i t h   l o w   p o w e r   m o d e s :  
                 T h e   w a k e   u p   c a p a b i l i t y   o f   t h e   R T C   m a y   b e   i n t r u s i v e   i n   c a s e   o f   p r i o r   l o w   p o w e r   m o d e  
                 c o n f i g u r a t i o n   r e q u i r i n g   d i f f e r e n t   w a k e   u p   s o u r c e s .  
                 A p p l i c a t i o n / E x a m p l e   b e h a v i o r   i s   n o   m o r e   g u a r a n t e e d  
         ( @ )   T h e   s t m 3 2 f 1 x x _ h a l _ t i m e b a s e _ t i m   u s e   i s   r e c o m m e n d e d   f o r   t h e   A p p l i c a t i o n s / E x a m p l e s  
                     r e q u i r i n g   l o w   p o w e r   m o d e s  
  
     @ e n d v e r b a t i m  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s .  
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   H A L _ T i m e B a s e _ R T C _ A l a r m _ T e m p l a t e     H A L   T i m e B a s e   R T C   A l a r m   T e m p l a t e  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *   U n c o m m e n t   t h e   l i n e   b e l o w   t o   s e l e c t   t h e   a p p r o p r i a t e   R T C   C l o c k   s o u r c e   f o r   y o u r   a p p l i c a t i o n :  
     +   R T C _ C L O C K _ S O U R C E _ H S E :   c a n   b e   s e l e c t e d   f o r   a p p l i c a t i o n s   r e q u i r i n g   t i m i n g   p r e c i s i o n .  
     +   R T C _ C L O C K _ S O U R C E _ L S E :   c a n   b e   s e l e c t e d   f o r   a p p l i c a t i o n s   w i t h   l o w   c o n s t r a i n t   o n   t i m i n g  
                                                     p r e c i s i o n .  
     +   R T C _ C L O C K _ S O U R C E _ L S I :   c a n   b e   s e l e c t e d   f o r   a p p l i c a t i o n s   w i t h   l o w   c o n s t r a i n t   o n   t i m i n g  
                                                     p r e c i s i o n .  
     * /  
 # d e f i n e   R T C _ C L O C K _ S O U R C E _ H S E  
 / *   # d e f i n e   R T C _ C L O C K _ S O U R C E _ L S E   * /  
 / *   # d e f i n e   R T C _ C L O C K _ S O U R C E _ L S I   * /  
  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 R T C _ H a n d l e T y p e D e f                 h R T C _ H a n d l e ;  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 v o i d   R T C _ A l a r m _ I R Q H a n d l e r ( v o i d ) ;  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   c o n f i g u r e s   t h e   R T C _ A L A R M A   a s   a   t i m e   b a s e   s o u r c e .  
     *                   T h e   t i m e   s o u r c e   i s   c o n f i g u r e d     t o   h a v e   1 m s   t i m e   b a s e   w i t h   a   d e d i c a t e d  
     *                   T i c k   i n t e r r u p t   p r i o r i t y .  
     *   @ n o t e       T h i s   f u n c t i o n   i s   c a l l e d     a u t o m a t i c a l l y   a t   t h e   b e g i n n i n g   o f   p r o g r a m   a f t e r  
     *                   r e s e t   b y   H A L _ I n i t ( )   o r   a t   a n y   t i m e   w h e n   c l o c k   i s   c o n f i g u r e d ,   b y   H A L _ R C C _ C l o c k C o n f i g ( ) .  
     *   @ p a r a m     T i c k P r i o r i t y   T i c k   i n t e r r u p t   p r i o r i t y .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I n i t T i c k ( u i n t 3 2 _ t   T i c k P r i o r i t y )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t e r   =   0 U ;  
  
     R C C _ O s c I n i t T y p e D e f                 R C C _ O s c I n i t S t r u c t ;  
     R C C _ P e r i p h C L K I n i t T y p e D e f     P e r i p h C l k I n i t S t r u c t ;  
     H A L _ S t a t u s T y p e D e f                   s t a t u s ;  
  
 # i f d e f   R T C _ C L O C K _ S O U R C E _ L S E  
     / *   C o n f i g u e   L S E   a s   R T C   c l o c k   s o u c r e   * /  
     R C C _ O s c I n i t S t r u c t . O s c i l l a t o r T y p e   =   R C C _ O S C I L L A T O R T Y P E _ L S E ;  
     R C C _ O s c I n i t S t r u c t . P L L . P L L S t a t e   =   R C C _ P L L _ N O N E ;  
     R C C _ O s c I n i t S t r u c t . L S E S t a t e   =   R C C _ L S E _ O N ;  
     P e r i p h C l k I n i t S t r u c t . R T C C l o c k S e l e c t i o n   =   R C C _ R T C C L K S O U R C E _ L S E ;  
 # e l i f   d e f i n e d   ( R T C _ C L O C K _ S O U R C E _ L S I )  
     / *   C o n f i g u e   L S I   a s   R T C   c l o c k   s o u c r e   * /  
     R C C _ O s c I n i t S t r u c t . O s c i l l a t o r T y p e   =   R C C _ O S C I L L A T O R T Y P E _ L S I ;  
     R C C _ O s c I n i t S t r u c t . P L L . P L L S t a t e   =   R C C _ P L L _ N O N E ;  
     R C C _ O s c I n i t S t r u c t . L S I S t a t e   =   R C C _ L S I _ O N ;  
     P e r i p h C l k I n i t S t r u c t . R T C C l o c k S e l e c t i o n   =   R C C _ R T C C L K S O U R C E _ L S I ;  
 # e l i f   d e f i n e d   ( R T C _ C L O C K _ S O U R C E _ H S E )  
     / *   C o n f i g u e   H S E   a s   R T C   c l o c k   s o u c r e   * /  
     R C C _ O s c I n i t S t r u c t . O s c i l l a t o r T y p e   =   R C C _ O S C I L L A T O R T Y P E _ H S E ;  
     R C C _ O s c I n i t S t r u c t . P L L . P L L S t a t e   =   R C C _ P L L _ N O N E ;  
     R C C _ O s c I n i t S t r u c t . H S E S t a t e   =   R C C _ H S E _ O N ;  
     P e r i p h C l k I n i t S t r u c t . R T C C l o c k S e l e c t i o n   =   R C C _ R T C C L K S O U R C E _ H S E _ D I V 1 2 8 ;  
 # e l s e  
 # e r r o r   P l e a s e   s e l e c t   t h e   R T C   C l o c k   s o u r c e  
 # e n d i f   / *   R T C _ C L O C K _ S O U R C E _ L S E   * /  
     s t a t u s   =   H A L _ R C C _ O s c C o n f i g ( & R C C _ O s c I n i t S t r u c t ) ;  
     i f   ( s t a t u s   = =   H A L _ O K )  
     {  
         P e r i p h C l k I n i t S t r u c t . P e r i p h C l o c k S e l e c t i o n   =   R C C _ P E R I P H C L K _ R T C ;  
         s t a t u s   =   H A L _ R C C E x _ P e r i p h C L K C o n f i g ( & P e r i p h C l k I n i t S t r u c t ) ;  
         i f   ( s t a t u s   = =   H A L _ O K )  
         {  
             / *   E n a b l e   R T C   C l o c k   * /  
             _ _ H A L _ R C C _ R T C _ E N A B L E ( ) ;  
  
             / *   C o n f i g u r e   R T C   t i m e   b a s e   t o   1 0 K h z   * /  
             h R T C _ H a n d l e . I n s t a n c e   =   R T C ;  
             h R T C _ H a n d l e . I n i t . A s y n c h P r e d i v   =   ( H A L _ R C C E x _ G e t P e r i p h C L K F r e q ( R C C _ P E R I P H C L K _ R T C )   /   1 0 0 0 0 )   -   1 ;  
             h R T C _ H a n d l e . I n i t . O u t P u t   =   R T C _ O U T P U T S O U R C E _ N O N E ;  
             s t a t u s   =   H A L _ R T C _ I n i t ( & h R T C _ H a n d l e ) ;  
         }  
     }  
     i f   ( s t a t u s   = =   H A L _ O K )  
     {  
         / *   D i s a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
         _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ D I S A B L E ( & h R T C _ H a n d l e ) ;  
  
         / *   C l e a r   f l a g   a l a r m   A   * /  
         _ _ H A L _ R T C _ A L A R M _ C L E A R _ F L A G ( & h R T C _ H a n d l e ,   R T C _ F L A G _ A L R A F ) ;  
  
         c o u n t e r   =   0 U ;  
         / *   W a i t   t i l l   R T C   A L R A F   f l a g   i s   s e t   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
         w h i l e   ( _ _ H A L _ R T C _ A L A R M _ G E T _ F L A G ( & h R T C _ H a n d l e ,   R T C _ F L A G _ A L R A F )   ! =   R E S E T )  
         {  
             i f   ( c o u n t e r + +   = =   S y s t e m C o r e C l o c k   /   4 8 U )   / *   T i m e o u t   =   ~   1 s   * /  
             {  
                 s t a t u s   =   H A L _ E R R O R ;  
             }  
         }  
     }  
     i f   ( s t a t u s   = =   H A L _ O K )  
     {  
         / *   S e t   R T C   C O U N T E R   M S B   w o r d   * /  
         h R T C _ H a n d l e . I n s t a n c e - > A L R H   =   0 x 0 0 U ;  
         / *   S e t   R T C   C O U N T E R   L S B   w o r d   * /  
         h R T C _ H a n d l e . I n s t a n c e - > A L R L   =   0 x 0 9 U ;  
  
         / *   R T C   A l a r m   I n t e r r u p t   C o n f i g u r a t i o n :   E X T I   c o n f i g u r a t i o n   * /  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ I T ( ) ;  
         _ _ H A L _ R T C _ A L A R M _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ;  
  
         / *   C l e a r   S e c o n d   a n d   o v e r f l o w   f l a g s   * /  
         C L E A R _ B I T ( h R T C _ H a n d l e . I n s t a n c e - > C R L ,   ( R T C _ F L A G _ S E C   |   R T C _ F L A G _ O W ) ) ;  
  
         / *   S e t   R T C   C O U N T E R   M S B   w o r d   * /  
         h R T C _ H a n d l e . I n s t a n c e - > C N T H   =   0 x 0 0 U ;  
         / *   S e t   R T C   C O U N T E R   L S B   w o r d   * /  
         h R T C _ H a n d l e . I n s t a n c e - > C N T L   =   0 x 0 0 U ;  
  
         / *   C o n f i g u r e   t h e   A l a r m   i n t e r r u p t   * /  
         _ _ H A L _ R T C _ A L A R M _ E N A B L E _ I T ( & h R T C _ H a n d l e ,   R T C _ I T _ A L R A ) ;  
  
         / *   E n a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
         _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ E N A B L E ( & h R T C _ H a n d l e ) ;  
  
         / *   W a i t   t i l l   R T C   i s   i n   I N I T   s t a t e   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
         c o u n t e r   =   0 U ;  
         w h i l e   ( ( h R T C _ H a n d l e . I n s t a n c e - > C R L   &   R T C _ C R L _ R T O F F )   = =   ( u i n t 3 2 _ t ) R E S E T )  
         {  
             i f   ( c o u n t e r + +   = =   S y s t e m C o r e C l o c k   /   4 8 U )   / *   T i m e o u t   =   ~   1 s   * /  
             {  
                 s t a t u s   =   H A L _ E R R O R ;  
             }  
         }    
     }  
     i f   ( s t a t u s   = =   H A L _ O K )  
     {  
         / *   E n a b l e   t h e   R T C   g l o b a l   I n t e r r u p t   * /  
         H A L _ N V I C _ E n a b l e I R Q ( R T C _ A l a r m _ I R Q n ) ;  
  
         / *   C o n f i g u r e   t h e   S y s T i c k   I R Q   p r i o r i t y   * /  
         i f   ( T i c k P r i o r i t y   <   ( 1 U L   < <   _ _ N V I C _ P R I O _ B I T S ) )  
         {  
             H A L _ N V I C _ S e t P r i o r i t y ( R T C _ A l a r m _ I R Q n ,   T i c k P r i o r i t y   , 0 U ) ;  
             u w T i c k P r i o   =   T i c k P r i o r i t y ;  
         }  
         e l s e  
         {  
             s t a t u s   =   H A L _ E R R O R ;  
         }  
     }  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S u s p e n d   T i c k   i n c r e m e n t .  
     *   @ n o t e       D i s a b l e   t h e   t i c k   i n c r e m e n t   b y   d i s a b l i n g   R T C   A L A R M   i n t e r r u p t .  
     *   @ p a r a m     N o n e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ S u s p e n d T i c k ( v o i d )  
 {  
     / *   D i s a b l e   R T C   A L A R M   u p d a t e   I n t e r r u p t   * /  
     _ _ H A L _ R T C _ A L A R M _ D I S A B L E _ I T ( & h R T C _ H a n d l e ,   R T C _ I T _ A L R A ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s u m e   T i c k   i n c r e m e n t .  
     *   @ n o t e       E n a b l e   t h e   t i c k   i n c r e m e n t   b y   E n a b l i n g   R T C   A L A R M   i n t e r r u p t .  
     *   @ p a r a m     N o n e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R e s u m e T i c k ( v o i d )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t e r   =   0 U ;  
  
     / *   D i s a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ D I S A B L E ( & h R T C _ H a n d l e ) ;  
  
     / *   S e t   R T C   C O U N T E R   M S B   w o r d   * /  
     h R T C _ H a n d l e . I n s t a n c e - > C N T H   =   0 x 0 0 U ;  
     / *   S e t   R T C   C O U N T E R   L S B   w o r d   * /  
     h R T C _ H a n d l e . I n s t a n c e - > C N T L   =   0 x 0 0 U ;  
  
     / *   C l e a r   S e c o n d   a n d   o v e r f l o w   f l a g s   * /  
     C L E A R _ B I T ( h R T C _ H a n d l e . I n s t a n c e - > C R L ,   ( R T C _ F L A G _ S E C   |   R T C _ F L A G _ O W   |   R T C _ F L A G _ A L R A F ) ) ;  
  
     / *   E n a b l e   R T C   A L A R M   U p d a t e   i n t e r r u p t   * /  
     _ _ H A L _ R T C _ A L A R M _ E N A B L E _ I T ( & h R T C _ H a n d l e ,   R T C _ I T _ A L R A ) ;  
  
     / *   E n a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ E N A B L E ( & h R T C _ H a n d l e ) ;  
  
     / *   W a i t   t i l l   R T C   i s   i n   I N I T   s t a t e   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
     w h i l e   ( ( h R T C _ H a n d l e . I n s t a n c e - > C R L   &   R T C _ C R L _ R T O F F )   = =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         i f   ( c o u n t e r + +   = =   S y s t e m C o r e C l o c k   /   4 8 U )   / *   T i m e o u t   =   ~   1 s   * /  
         {  
             b r e a k ;  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     A L A R M   A   E v e n t   C a l l b a c k   i n   n o n   b l o c k i n g   m o d e  
     *   @ n o t e       T h i s   f u n c t i o n   i s   c a l l e d     w h e n   R T C _ A L A R M   i n t e r r u p t   t o o k   p l a c e ,   i n s i d e  
     *   R T C _ A L A R M _ I R Q H a n d l e r ( ) .   I t   m a k e s   a   d i r e c t   c a l l   t o   H A L _ I n c T i c k ( )   t o   i n c r e m e n t  
     *   a   g l o b a l   v a r i a b l e   " u w T i c k "   u s e d   a s   a p p l i c a t i o n   t i m e   b a s e .  
     *   @ p a r a m     h r t c   R T C   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R T C _ A l a r m A E v e n t C a l l b a c k ( R T C _ H a n d l e T y p e D e f   * h r t c )  
 {  
     _ _ I O   u i n t 3 2 _ t   c o u n t e r   =   0 U ;  
  
     H A L _ I n c T i c k ( ) ;  
  
     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ D I S A B L E ( h r t c ) ;  
  
     / *   S e t   R T C   C O U N T E R   M S B   w o r d   * /  
     W R I T E _ R E G ( h r t c - > I n s t a n c e - > C N T H ,   0 x 0 0 U ) ;  
     / *   S e t   R T C   C O U N T E R   L S B   w o r d   * /  
     W R I T E _ R E G ( h r t c - > I n s t a n c e - > C N T L ,   0 x 0 0 U ) ;  
  
     / *   C l e a r   S e c o n d   a n d   o v e r f l o w   f l a g s   * /  
     C L E A R _ B I T ( h r t c - > I n s t a n c e - > C R L ,   ( R T C _ F L A G _ S E C   |   R T C _ F L A G _ O W ) ) ;  
  
     / *   E n a b l e   t h e   w r i t e   p r o t e c t i o n   f o r   R T C   r e g i s t e r s   * /  
     _ _ H A L _ R T C _ W R I T E P R O T E C T I O N _ E N A B L E ( h r t c ) ;  
  
     / *   W a i t   t i l l   R T C   i s   i n   I N I T   s t a t e   a n d   i f   T i m e   o u t   i s   r e a c h e d   e x i t   * /  
     w h i l e   ( ( h r t c - > I n s t a n c e - > C R L   &   R T C _ C R L _ R T O F F )   = =   ( u i n t 3 2 _ t ) R E S E T )  
     {  
         i f   ( c o u n t e r + +   = =   S y s t e m C o r e C l o c k   /   4 8 U )   / *   T i m e o u t   =   ~   1 s   * /  
         {  
             b r e a k ;  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   R T C   A L A R M   i n t e r r u p t   r e q u e s t .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   R T C _ A l a r m _ I R Q H a n d l e r ( v o i d )  
 {  
     H A L _ R T C _ A l a r m I R Q H a n d l e r ( & h R T C _ H a n d l e ) ;  
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
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  
 