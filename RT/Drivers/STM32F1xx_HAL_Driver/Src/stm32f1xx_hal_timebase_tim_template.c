??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ t i m e b a s e _ t i m _ t e m p l a t e . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H A L   t i m e   b a s e   b a s e d   o n   t h e   h a r d w a r e   T I M   T e m p l a t e .  
     *  
     *                     T h i s   f i l e   o v e r r i d e s   t h e   n a t i v e   H A L   t i m e   b a s e   f u n c t i o n s   ( d e f i n e d   a s   w e a k )  
     *                     t h e   T I M   t i m e   b a s e :  
     *                       +   I n t i a l i z e s   t h e   T I M   p e r i p h e r a l   g e n e r a t e   a   P e r i o d   e l a p s e d   E v e n t   e a c h   1 m s  
     *                       +   H A L _ I n c T i c k   i s   c a l l e d   i n s i d e   H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k   i e   e a c h   1 m s  
     *  
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
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   H A L _ T i m e B a s e _ T I M  
     *   @ {  
     * /  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 T I M _ H a n d l e T y p e D e f                 T i m H a n d l e ;  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 v o i d   T I M 2 _ I R Q H a n d l e r ( v o i d ) ;  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   c o n f i g u r e s   t h e   T I M 2   a s   a   t i m e   b a s e   s o u r c e .  
     *                   T h e   t i m e   s o u r c e   i s   c o n f i g u r e d   t o   h a v e   1 m s   t i m e   b a s e   w i t h   a   d e d i c a t e d  
     *                   T i c k   i n t e r r u p t   p r i o r i t y .  
     *   @ n o t e       T h i s   f u n c t i o n   i s   c a l l e d     a u t o m a t i c a l l y   a t   t h e   b e g i n n i n g   o f   p r o g r a m   a f t e r  
     *                   r e s e t   b y   H A L _ I n i t ( )   o r   a t   a n y   t i m e   w h e n   c l o c k   i s   c o n f i g u r e d ,   b y   H A L _ R C C _ C l o c k C o n f i g ( ) .  
     *   @ p a r a m     T i c k P r i o r i t y   T i c k   i n t e r r u p t   p r i o r i t y .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I n i t T i c k ( u i n t 3 2 _ t   T i c k P r i o r i t y )  
 {  
     R C C _ C l k I n i t T y p e D e f         c l k c o n f i g ;  
     u i n t 3 2 _ t                             u w T i m c l o c k ,   u w A P B 1 P r e s c a l e r   =   0 U ;  
     u i n t 3 2 _ t                             u w P r e s c a l e r V a l u e   =   0 U ;  
     u i n t 3 2 _ t                             p F L a t e n c y ;  
     H A L _ S t a t u s T y p e D e f           s t a t u s   =   H A L _ O K ;  
  
  
     / *   E n a b l e   T I M 2   c l o c k   * /  
     _ _ H A L _ R C C _ T I M 2 _ C L K _ E N A B L E ( ) ;  
  
     / *   G e t   c l o c k   c o n f i g u r a t i o n   * /  
     H A L _ R C C _ G e t C l o c k C o n f i g ( & c l k c o n f i g ,   & p F L a t e n c y ) ;  
  
     / *   G e t   A P B 1   p r e s c a l e r   * /  
     u w A P B 1 P r e s c a l e r   =   c l k c o n f i g . A P B 1 C L K D i v i d e r ;  
  
     / *   C o m p u t e   T I M 2   c l o c k   * /  
     i f   ( u w A P B 1 P r e s c a l e r   = =   R C C _ H C L K _ D I V 1 )  
     {  
         u w T i m c l o c k   =   H A L _ R C C _ G e t P C L K 1 F r e q ( ) ;  
     }  
     e l s e  
     {  
         u w T i m c l o c k   =   2   *   H A L _ R C C _ G e t P C L K 1 F r e q ( ) ;  
     }  
  
     / *   C o m p u t e   t h e   p r e s c a l e r   v a l u e   t o   h a v e   T I M 2   c o u n t e r   c l o c k   e q u a l   t o   1 M H z   * /  
     u w P r e s c a l e r V a l u e   =   ( u i n t 3 2 _ t ) ( ( u w T i m c l o c k   /   1 0 0 0 0 0 0 U )   -   1 U ) ;  
  
     / *   I n i t i a l i z e   T I M 2   * /  
     T i m H a n d l e . I n s t a n c e   =   T I M 2 ;  
  
     / *   I n i t i a l i z e   T I M x   p e r i p h e r a l   a s   f o l l o w :  
     +   P e r i o d   =   [ ( T I M 2 C L K / 1 0 0 0 )   -   1 ] .   t o   h a v e   a   ( 1 / 1 0 0 0 )   s   t i m e   b a s e .  
     +   P r e s c a l e r   =   ( u w T i m c l o c k / 1 0 0 0 0 0 0   -   1 )   t o   h a v e   a   1 M H z   c o u n t e r   c l o c k .  
     +   C l o c k D i v i s i o n   =   0  
     +   C o u n t e r   d i r e c t i o n   =   U p  
     * /  
     T i m H a n d l e . I n i t . P e r i o d   =   ( 1 0 0 0 0 0 0 U   /   1 0 0 0 U )   -   1 U ;  
     T i m H a n d l e . I n i t . P r e s c a l e r   =   u w P r e s c a l e r V a l u e ;  
     T i m H a n d l e . I n i t . C l o c k D i v i s i o n   =   0 U ;  
     T i m H a n d l e . I n i t . C o u n t e r M o d e   =   T I M _ C O U N T E R M O D E _ U P ;  
     T i m H a n d l e . I n i t . A u t o R e l o a d P r e l o a d   =   T I M _ A U T O R E L O A D _ P R E L O A D _ D I S A B L E ;  
     s t a t u s   =   H A L _ T I M _ B a s e _ I n i t ( & T i m H a n d l e ) ;  
     i f   ( s t a t u s   = =   H A L _ O K )  
     {  
         / *   S t a r t   t h e   T I M   t i m e   B a s e   g e n e r a t i o n   i n   i n t e r r u p t   m o d e   * /  
         s t a t u s   =   H A L _ T I M _ B a s e _ S t a r t _ I T ( & T i m H a n d l e ) ;  
         i f   ( s t a t u s   = =   H A L _ O K )  
         {  
             / *   E n a b l e   t h e   T I M 2   g l o b a l   I n t e r r u p t   * /  
             H A L _ N V I C _ E n a b l e I R Q ( T I M 2 _ I R Q n ) ;  
  
             i f   ( T i c k P r i o r i t y   <   ( 1 U L   < <   _ _ N V I C _ P R I O _ B I T S ) )  
             {  
                 / * C o n f i g u r e   t h e   T I M 2   I R Q   p r i o r i t y   * /  
                 H A L _ N V I C _ S e t P r i o r i t y ( T I M 2 _ I R Q n ,   T i c k P r i o r i t y   , 0 ) ;    
                 u w T i c k P r i o   =   T i c k P r i o r i t y ;  
             }  
             e l s e  
             {  
                 s t a t u s   =   H A L _ E R R O R ;  
             }  
         }  
     }  
  
     / *   R e t u r n   f u n c t i o n   s t a t u s   * /  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     S u s p e n d   T i c k   i n c r e m e n t .  
     *   @ n o t e       D i s a b l e   t h e   t i c k   i n c r e m e n t   b y   d i s a b l i n g   T I M 2   u p d a t e   i n t e r r u p t .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ S u s p e n d T i c k ( v o i d )  
 {  
     / *   D i s a b l e   T I M 2   u p d a t e   I n t e r r u p t   * /  
     _ _ H A L _ T I M _ D I S A B L E _ I T ( & T i m H a n d l e ,   T I M _ I T _ U P D A T E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s u m e   T i c k   i n c r e m e n t .  
     *   @ n o t e       E n a b l e   t h e   t i c k   i n c r e m e n t   b y   E n a b l i n g   T I M 2   u p d a t e   i n t e r r u p t .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ R e s u m e T i c k ( v o i d )  
 {  
     / *   E n a b l e   T I M 2   U p d a t e   i n t e r r u p t   * /  
     _ _ H A L _ T I M _ E N A B L E _ I T ( & T i m H a n d l e ,   T I M _ I T _ U P D A T E ) ;  
 }  
  
 / * *  
     *   @ b r i e f     P e r i o d   e l a p s e d   c a l l b a c k   i n   n o n   b l o c k i n g   m o d e  
     *   @ n o t e       T h i s   f u n c t i o n   i s   c a l l e d     w h e n   T I M 2   i n t e r r u p t   t o o k   p l a c e ,   i n s i d e  
     *   H A L _ T I M _ I R Q H a n d l e r ( ) .   I t   m a k e s   a   d i r e c t   c a l l   t o   H A L _ I n c T i c k ( )   t o   i n c r e m e n t  
     *   a   g l o b a l   v a r i a b l e   " u w T i c k "   u s e d   a s   a p p l i c a t i o n   t i m e   b a s e .  
     *   @ p a r a m     h t i m   T I M   h a n d l e  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m )  
 {  
     H A L _ I n c T i c k ( ) ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   T I M   i n t e r r u p t   r e q u e s t .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   T I M 2 _ I R Q H a n d l e r ( v o i d )  
 {  
     H A L _ T I M _ I R Q H a n d l e r ( & T i m H a n d l e ) ;  
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