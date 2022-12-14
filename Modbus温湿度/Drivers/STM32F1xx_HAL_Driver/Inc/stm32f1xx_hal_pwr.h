??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ p w r . h 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       H e a d e r   f i l e   o f   P W R   H A L   m o d u l e . 
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
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ P W R _ H 
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ P W R _ H 
 
 # i f d e f   _ _ c p l u s p l u s 
   e x t e r n   " C "   { 
 # e n d i f 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h " 
 
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ a d d t o g r o u p   P W R 
     *   @ { 
     * / 
 
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   P W R _ E x p o r t e d _ T y p e s   P W R   E x p o r t e d   T y p e s 
     *   @ { 
     * /   
 
 / * * 
     *   @ b r i e f     P W R   P V D   c o n f i g u r a t i o n   s t r u c t u r e   d e f i n i t i o n 
     * / 
 t y p e d e f   s t r u c t 
 { 
     u i n t 3 2 _ t   P V D L e v e l ;       / * ! <   P V D L e v e l :   S p e c i f i e s   t h e   P V D   d e t e c t i o n   l e v e l . 
                                                         T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   P W R _ P V D _ d e t e c t i o n _ l e v e l   * / 
 
     u i n t 3 2 _ t   M o d e ;             / * ! <   M o d e :   S p e c i f i e s   t h e   o p e r a t i n g   m o d e   f o r   t h e   s e l e c t e d   p i n s . 
                                                       T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   P W R _ P V D _ M o d e   * / 
 } P W R _ P V D T y p e D e f ; 
 
 
 / * * 
     *   @ } 
     * / 
 
 
 / *   I n t e r n a l   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ a d d t o g r o u p   P W R _ P r i v a t e _ C o n s t a n t s 
     *   @ { 
     * /   
 
 # d e f i n e   P W R _ E X T I _ L I N E _ P V D     ( ( u i n t 3 2 _ t ) 0 x 0 0 0 1 0 0 0 0 )     / * ! <   E x t e r n a l   i n t e r r u p t   l i n e   1 6   C o n n e c t e d   t o   t h e   P V D   E X T I   L i n e   * / 
 
 / * * 
     *   @ } 
     * / 
 
   
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   P W R _ E x p o r t e d _ C o n s t a n t s   P W R   E x p o r t e d   C o n s t a n t s 
     *   @ { 
     * /   
 
 / * *   @ d e f g r o u p   P W R _ P V D _ d e t e c t i o n _ l e v e l   P W R   P V D   d e t e c t i o n   l e v e l 
     *   @ { 
     * / 
 # d e f i n e   P W R _ P V D L E V E L _ 0                                     P W R _ C R _ P L S _ 2 V 2 
 # d e f i n e   P W R _ P V D L E V E L _ 1                                     P W R _ C R _ P L S _ 2 V 3 
 # d e f i n e   P W R _ P V D L E V E L _ 2                                     P W R _ C R _ P L S _ 2 V 4 
 # d e f i n e   P W R _ P V D L E V E L _ 3                                     P W R _ C R _ P L S _ 2 V 5 
 # d e f i n e   P W R _ P V D L E V E L _ 4                                     P W R _ C R _ P L S _ 2 V 6 
 # d e f i n e   P W R _ P V D L E V E L _ 5                                     P W R _ C R _ P L S _ 2 V 7 
 # d e f i n e   P W R _ P V D L E V E L _ 6                                     P W R _ C R _ P L S _ 2 V 8 
 # d e f i n e   P W R _ P V D L E V E L _ 7                                     P W R _ C R _ P L S _ 2 V 9   
                                                                                                                     
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   P W R _ P V D _ M o d e   P W R   P V D   M o d e 
     *   @ { 
     * / 
 # d e f i n e   P W R _ P V D _ M O D E _ N O R M A L                                   0 x 0 0 0 0 0 0 0 0 U       / * ! <   b a s i c   m o d e   i s   u s e d   * / 
 # d e f i n e   P W R _ P V D _ M O D E _ I T _ R I S I N G                             0 x 0 0 0 1 0 0 0 1 U       / * ! <   E x t e r n a l   I n t e r r u p t   M o d e   w i t h   R i s i n g   e d g e   t r i g g e r   d e t e c t i o n   * / 
 # d e f i n e   P W R _ P V D _ M O D E _ I T _ F A L L I N G                           0 x 0 0 0 1 0 0 0 2 U       / * ! <   E x t e r n a l   I n t e r r u p t   M o d e   w i t h   F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n   * / 
 # d e f i n e   P W R _ P V D _ M O D E _ I T _ R I S I N G _ F A L L I N G             0 x 0 0 0 1 0 0 0 3 U       / * ! <   E x t e r n a l   I n t e r r u p t   M o d e   w i t h   R i s i n g / F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n   * / 
 # d e f i n e   P W R _ P V D _ M O D E _ E V E N T _ R I S I N G                       0 x 0 0 0 2 0 0 0 1 U       / * ! <   E v e n t   M o d e   w i t h   R i s i n g   e d g e   t r i g g e r   d e t e c t i o n   * / 
 # d e f i n e   P W R _ P V D _ M O D E _ E V E N T _ F A L L I N G                     0 x 0 0 0 2 0 0 0 2 U       / * ! <   E v e n t   M o d e   w i t h   F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n   * / 
 # d e f i n e   P W R _ P V D _ M O D E _ E V E N T _ R I S I N G _ F A L L I N G       0 x 0 0 0 2 0 0 0 3 U       / * ! <   E v e n t   M o d e   w i t h   R i s i n g / F a l l i n g   e d g e   t r i g g e r   d e t e c t i o n   * / 
 
 / * * 
     *   @ } 
     * / 
 
 
 / * *   @ d e f g r o u p   P W R _ W a k e U p _ P i n s   P W R   W a k e U p   P i n s 
     *   @ { 
     * / 
 
 # d e f i n e   P W R _ W A K E U P _ P I N 1                                   P W R _ C S R _ E W U P 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   P W R _ R e g u l a t o r _ s t a t e _ i n _ S L E E P _ S T O P _ m o d e   P W R   R e g u l a t o r   s t a t e   i n   S L E E P / S T O P   m o d e 
     *   @ { 
     * / 
 # d e f i n e   P W R _ M A I N R E G U L A T O R _ O N                                                 0 x 0 0 0 0 0 0 0 0 U 
 # d e f i n e   P W R _ L O W P O W E R R E G U L A T O R _ O N                                         P W R _ C R _ L P D S 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   P W R _ S L E E P _ m o d e _ e n t r y   P W R   S L E E P   m o d e   e n t r y 
     *   @ { 
     * / 
 # d e f i n e   P W R _ S L E E P E N T R Y _ W F I                             ( ( u i n t 8 _ t ) 0 x 0 1 ) 
 # d e f i n e   P W R _ S L E E P E N T R Y _ W F E                             ( ( u i n t 8 _ t ) 0 x 0 2 ) 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   P W R _ S T O P _ m o d e _ e n t r y   P W R   S T O P   m o d e   e n t r y 
     *   @ { 
     * / 
 # d e f i n e   P W R _ S T O P E N T R Y _ W F I                               ( ( u i n t 8 _ t ) 0 x 0 1 ) 
 # d e f i n e   P W R _ S T O P E N T R Y _ W F E                               ( ( u i n t 8 _ t ) 0 x 0 2 ) 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   P W R _ F l a g   P W R   F l a g 
     *   @ { 
     * / 
 # d e f i n e   P W R _ F L A G _ W U                                           P W R _ C S R _ W U F 
 # d e f i n e   P W R _ F L A G _ S B                                           P W R _ C S R _ S B F 
 # d e f i n e   P W R _ F L A G _ P V D O                                       P W R _ C S R _ P V D O 
 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / *   E x p o r t e d   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   P W R _ E x p o r t e d _ M a c r o s   P W R   E x p o r t e d   M a c r o s 
     *   @ { 
     * / 
 
 / * *   @ b r i e f     C h e c k   P W R   f l a g   i s   s e t   o r   n o t . 
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   f l a g   t o   c h e c k . 
     *                       T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   P W R _ F L A G _ W U :   W a k e   U p   f l a g .   T h i s   f l a g   i n d i c a t e s   t h a t   a   w a k e u p   e v e n t 
     *                                     w a s   r e c e i v e d   f r o m   t h e   W K U P   p i n   o r   f r o m   t h e   R T C   a l a r m 
     *                                     A n   a d d i t i o n a l   w a k e u p   e v e n t   i s   d e t e c t e d   i f   t h e   W K U P   p i n   i s   e n a b l e d 
     *                                     ( b y   s e t t i n g   t h e   E W U P   b i t )   w h e n   t h e   W K U P   p i n   l e v e l   i s   a l r e a d y   h i g h . 
     *                         @ a r g   P W R _ F L A G _ S B :   S t a n d B y   f l a g .   T h i s   f l a g   i n d i c a t e s   t h a t   t h e   s y s t e m   w a s 
     *                                     r e s u m e d   f r o m   S t a n d B y   m o d e . 
     *                         @ a r g   P W R _ F L A G _ P V D O :   P V D   O u t p u t .   T h i s   f l a g   i s   v a l i d   o n l y   i f   P V D   i s   e n a b l e d 
     *                                     b y   t h e   H A L _ P W R _ E n a b l e P V D ( )   f u n c t i o n .   T h e   P V D   i s   s t o p p e d   b y   S t a n d b y   m o d e 
     *                                     F o r   t h i s   r e a s o n ,   t h i s   b i t   i s   e q u a l   t o   0   a f t e r   S t a n d b y   o r   r e s e t 
     *                                     u n t i l   t h e   P V D E   b i t   i s   s e t . 
     *   @ r e t v a l   T h e   n e w   s t a t e   o f   _ _ F L A G _ _   ( T R U E   o r   F A L S E ) . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ G E T _ F L A G ( _ _ F L A G _ _ )   ( ( P W R - > C S R   &   ( _ _ F L A G _ _ ) )   = =   ( _ _ F L A G _ _ ) ) 
 
 / * *   @ b r i e f     C l e a r   t h e   P W R ' s   p e n d i n g   f l a g s . 
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   f l a g   t o   c l e a r . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   P W R _ F L A G _ W U :   W a k e   U p   f l a g 
     *                         @ a r g   P W R _ F L A G _ S B :   S t a n d B y   f l a g 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ C L E A R _ F L A G ( _ _ F L A G _ _ )   S E T _ B I T ( P W R - > C R ,   ( ( _ _ F L A G _ _ )   < <   2 ) ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   i n t e r r u p t   o n   P V D   E x t i   L i n e   1 6 . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ I T ( )             S E T _ B I T ( E X T I - > I M R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   i n t e r r u p t   o n   P V D   E x t i   L i n e   1 6 .   
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ I T ( )           C L E A R _ B I T ( E X T I - > I M R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 / * * 
     *   @ b r i e f   E n a b l e   e v e n t   o n   P V D   E x t i   L i n e   1 6 . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ E V E N T ( )       S E T _ B I T ( E X T I - > E M R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   e v e n t   o n   P V D   E x t i   L i n e   1 6 . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ E V E N T ( )     C L E A R _ B I T ( E X T I - > E M R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 
 / * * 
     *   @ b r i e f     P V D   E X T I   l i n e   c o n f i g u r a t i o n :   s e t   f a l l i n g   e d g e   t r i g g e r .     
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( )     S E T _ B I T ( E X T I - > F T S R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   P V D   E x t e n d e d   I n t e r r u p t   F a l l i n g   T r i g g e r . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( )     C L E A R _ B I T ( E X T I - > F T S R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 
 / * * 
     *   @ b r i e f     P V D   E X T I   l i n e   c o n f i g u r a t i o n :   s e t   r i s i n g   e d g e   t r i g g e r . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( )       S E T _ B I T ( E X T I - > R T S R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   P V D   E x t e n d e d   I n t e r r u p t   R i s i n g   T r i g g e r . 
     *   T h i s   p a r a m e t e r   c a n   b e : 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( )     C L E A R _ B I T ( E X T I - > R T S R ,   P W R _ E X T I _ L I N E _ P V D ) 
 
 / * * 
     *   @ b r i e f     P V D   E X T I   l i n e   c o n f i g u r a t i o n :   s e t   r i s i n g   &   f a l l i n g   e d g e   t r i g g e r . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ R I S I N G _ F A L L I N G _ E D G E ( )       _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ R I S I N G _ E D G E ( ) ; _ _ H A L _ P W R _ P V D _ E X T I _ E N A B L E _ F A L L I N G _ E D G E ( ) ; 
 
 / * * 
     *   @ b r i e f   D i s a b l e   t h e   P V D   E x t e n d e d   I n t e r r u p t   R i s i n g   &   F a l l i n g   T r i g g e r . 
     *   T h i s   p a r a m e t e r   c a n   b e : 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ R I S I N G _ F A L L I N G _ E D G E ( )     _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ R I S I N G _ E D G E ( ) ; _ _ H A L _ P W R _ P V D _ E X T I _ D I S A B L E _ F A L L I N G _ E D G E ( ) ; 
 
 
 
 / * * 
     *   @ b r i e f   C h e c k   w h e t h e r   t h e   s p e c i f i e d   P V D   E X T I   i n t e r r u p t   f l a g   i s   s e t   o r   n o t . 
     *   @ r e t v a l   E X T I   P V D   L i n e   S t a t u s . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ G E T _ F L A G ( )               ( E X T I - > P R   &   ( P W R _ E X T I _ L I N E _ P V D ) ) 
 
 / * * 
     *   @ b r i e f   C l e a r   t h e   P V D   E X T I   f l a g . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ C L E A R _ F L A G ( )           ( E X T I - > P R   =   ( P W R _ E X T I _ L I N E _ P V D ) ) 
 
 / * * 
     *   @ b r i e f   G e n e r a t e   a   S o f t w a r e   i n t e r r u p t   o n   s e l e c t e d   E X T I   l i n e . 
     *   @ r e t v a l   N o n e . 
     * / 
 # d e f i n e   _ _ H A L _ P W R _ P V D _ E X T I _ G E N E R A T E _ S W I T ( )     S E T _ B I T ( E X T I - > S W I E R ,   P W R _ E X T I _ L I N E _ P V D ) 
 / * * 
     *   @ } 
     * / 
 
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ d e f g r o u p   P W R _ P r i v a t e _ M a c r o s   P W R   P r i v a t e   M a c r o s 
     *   @ { 
     * / 
 # d e f i n e   I S _ P W R _ P V D _ L E V E L ( L E V E L )   ( ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 0 )   | |   ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 1 ) | |   \ 
                                                                   ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 2 )   | |   ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 3 ) | |   \ 
                                                                   ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 4 )   | |   ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 5 ) | |   \ 
                                                                   ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 6 )   | |   ( ( L E V E L )   = =   P W R _ P V D L E V E L _ 7 ) ) 
 
 
 # d e f i n e   I S _ P W R _ P V D _ M O D E ( M O D E )   ( ( ( M O D E )   = =   P W R _ P V D _ M O D E _ I T _ R I S I N G ) | |   ( ( M O D E )   = =   P W R _ P V D _ M O D E _ I T _ F A L L I N G )   | |   \ 
                                                             ( ( M O D E )   = =   P W R _ P V D _ M O D E _ I T _ R I S I N G _ F A L L I N G )   | |   ( ( M O D E )   = =   P W R _ P V D _ M O D E _ E V E N T _ R I S I N G )   | |   \ 
                                                             ( ( M O D E )   = =   P W R _ P V D _ M O D E _ E V E N T _ F A L L I N G )   | |   ( ( M O D E )   = =   P W R _ P V D _ M O D E _ E V E N T _ R I S I N G _ F A L L I N G )   | |   \ 
                                                             ( ( M O D E )   = =   P W R _ P V D _ M O D E _ N O R M A L ) )   
 
 # d e f i n e   I S _ P W R _ W A K E U P _ P I N ( P I N )   ( ( ( P I N )   = =   P W R _ W A K E U P _ P I N 1 ) ) 
 
 # d e f i n e   I S _ P W R _ R E G U L A T O R ( R E G U L A T O R )   ( ( ( R E G U L A T O R )   = =   P W R _ M A I N R E G U L A T O R _ O N )   | |   \ 
                                                                           ( ( R E G U L A T O R )   = =   P W R _ L O W P O W E R R E G U L A T O R _ O N ) ) 
 
 # d e f i n e   I S _ P W R _ S L E E P _ E N T R Y ( E N T R Y )   ( ( ( E N T R Y )   = =   P W R _ S L E E P E N T R Y _ W F I )   | |   ( ( E N T R Y )   = =   P W R _ S L E E P E N T R Y _ W F E ) ) 
 
 # d e f i n e   I S _ P W R _ S T O P _ E N T R Y ( E N T R Y )   ( ( ( E N T R Y )   = =   P W R _ S T O P E N T R Y _ W F I )   | |   ( ( E N T R Y )   = =   P W R _ S T O P E N T R Y _ W F E ) ) 
 
 / * * 
     *   @ } 
     * / 
 
 
 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ a d d t o g r o u p   P W R _ E x p o r t e d _ F u n c t i o n s   P W R   E x p o r t e d   F u n c t i o n s 
     *   @ { 
     * / 
     
 / * *   @ a d d t o g r o u p   P W R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   
     *   @ { 
     * / 
 
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 v o i d   H A L _ P W R _ D e I n i t ( v o i d ) ; 
 v o i d   H A L _ P W R _ E n a b l e B k U p A c c e s s ( v o i d ) ; 
 v o i d   H A L _ P W R _ D i s a b l e B k U p A c c e s s ( v o i d ) ; 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ a d d t o g r o u p   P W R _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   
     *   @ { 
     * / 
 
 / *   P e r i p h e r a l   C o n t r o l   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 v o i d   H A L _ P W R _ C o n f i g P V D ( P W R _ P V D T y p e D e f   * s C o n f i g P V D ) ; 
 / *   # d e f i n e   H A L _ P W R _ C o n f i g P V D   1 2 * / 
 v o i d   H A L _ P W R _ E n a b l e P V D ( v o i d ) ; 
 v o i d   H A L _ P W R _ D i s a b l e P V D ( v o i d ) ; 
 
 / *   W a k e U p   p i n s   c o n f i g u r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 v o i d   H A L _ P W R _ E n a b l e W a k e U p P i n ( u i n t 3 2 _ t   W a k e U p P i n x ) ; 
 v o i d   H A L _ P W R _ D i s a b l e W a k e U p P i n ( u i n t 3 2 _ t   W a k e U p P i n x ) ; 
 
 / *   L o w   P o w e r   m o d e s   c o n f i g u r a t i o n   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 v o i d   H A L _ P W R _ E n t e r S T O P M o d e ( u i n t 3 2 _ t   R e g u l a t o r ,   u i n t 8 _ t   S T O P E n t r y ) ; 
 v o i d   H A L _ P W R _ E n t e r S L E E P M o d e ( u i n t 3 2 _ t   R e g u l a t o r ,   u i n t 8 _ t   S L E E P E n t r y ) ; 
 v o i d   H A L _ P W R _ E n t e r S T A N D B Y M o d e ( v o i d ) ; 
 
 v o i d   H A L _ P W R _ E n a b l e S l e e p O n E x i t ( v o i d ) ; 
 v o i d   H A L _ P W R _ D i s a b l e S l e e p O n E x i t ( v o i d ) ; 
 v o i d   H A L _ P W R _ E n a b l e S E V O n P e n d ( v o i d ) ; 
 v o i d   H A L _ P W R _ D i s a b l e S E V O n P e n d ( v o i d ) ; 
 
 
 
 v o i d   H A L _ P W R _ P V D _ I R Q H a n d l e r ( v o i d ) ; 
 v o i d   H A L _ P W R _ P V D C a l l b a c k ( v o i d ) ; 
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
 
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ P W R _ H   * / 
 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 