??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ u s a r t . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       U S A R T   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   U n i v e r s a l   S y n c h r o n o u s / A s y n c h r o n o u s   R e c e i v e r   T r a n s m i t t e r  
     *                     P e r i p h e r a l   ( U S A R T ) .  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h e   U S A R T   H A L   d r i v e r   c a n   b e   u s e d   a s   f o l l o w s :  
  
         ( # )   D e c l a r e   a   U S A R T _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e   ( e g .   U S A R T _ H a n d l e T y p e D e f   h u s a r t ) .  
         ( # )   I n i t i a l i z e   t h e   U S A R T   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   H A L _ U S A R T _ M s p I n i t ( )   A P I :  
                 ( # # )   E n a b l e   t h e   U S A R T x   i n t e r f a c e   c l o c k .  
                 ( # # )   U S A R T   p i n s   c o n f i g u r a t i o n :  
                           ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   U S A R T   G P I O s .  
                           ( + + + )   C o n f i g u r e   t h e   U S A R T   p i n s   a s   a l t e r n a t e   f u n c t i o n   p u l l - u p .  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s   ( H A L _ U S A R T _ T r a n s m i t _ I T ( ) ,  
                           H A L _ U S A R T _ R e c e i v e _ I T ( )   a n d   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ I T ( )   A P I s ) :  
                           ( + + + )   C o n f i g u r e   t h e   U S A R T x   i n t e r r u p t   p r i o r i t y .  
                           ( + + + )   E n a b l e   t h e   N V I C   U S A R T   I R Q   h a n d l e .  
                 ( # # )   D M A   C o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   D M A   p r o c e s s   ( H A L _ U S A R T _ T r a n s m i t _ D M A ( )  
                           H A L _ U S A R T _ R e c e i v e _ D M A ( )   a n d   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ D M A ( )   A P I s ) :  
                           ( + + + )   D e c l a r e   a   D M A   h a n d l e   s t r u c t u r e   f o r   t h e   T x / R x   c h a n n e l .  
                           ( + + + )   E n a b l e   t h e   D M A x   i n t e r f a c e   c l o c k .  
                           ( + + + )   C o n f i g u r e   t h e   d e c l a r e d   D M A   h a n d l e   s t r u c t u r e   w i t h   t h e   r e q u i r e d   T x / R x   p a r a m e t e r s .  
                           ( + + + )   C o n f i g u r e   t h e   D M A   T x / R x   c h a n n e l .  
                           ( + + + )   A s s o c i a t e   t h e   i n i t i a l i z e d   D M A   h a n d l e   t o   t h e   U S A R T   D M A   T x / R x   h a n d l e .  
                           ( + + + )   C o n f i g u r e   t h e   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   f o r   t h e   t r a n s f e r   c o m p l e t e   i n t e r r u p t   o n   t h e   D M A   T x / R x   c h a n n e l .  
                           ( + + + )   C o n f i g u r e   t h e   U S A R T x   i n t e r r u p t   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   U S A R T   I R Q   h a n d l e  
                                       ( u s e d   f o r   l a s t   b y t e   s e n d i n g   c o m p l e t i o n   d e t e c t i o n   i n   D M A   n o n   c i r c u l a r   m o d e )  
  
         ( # )   P r o g r a m   t h e   B a u d   R a t e ,   W o r d   L e n g t h ,   S t o p   B i t ,   P a r i t y ,   H a r d w a r e  
                 f l o w   c o n t r o l   a n d   M o d e ( R e c e i v e r / T r a n s m i t t e r )   i n   t h e   h u s a r t   I n i t   s t r u c t u r e .  
  
         ( # )   I n i t i a l i z e   t h e   U S A R T   r e g i s t e r s   b y   c a l l i n g   t h e   H A L _ U S A R T _ I n i t ( )   A P I :  
                 ( + + )   T h e s e   A P I s   c o n f i g u r e s   a l s o   t h e   l o w   l e v e l   H a r d w a r e   G P I O ,   C L O C K ,   C O R T E X . . . e t c )  
                           b y   c a l l i n g   t h e   c u s t o m i z e d   H A L _ U S A R T _ M s p I n i t ( & h u s a r t )   A P I .  
  
                 - @ @ -   T h e   s p e c i f i c   U S A R T   i n t e r r u p t s   ( T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t ,  
                           R X N E   i n t e r r u p t   a n d   E r r o r   I n t e r r u p t s )   w i l l   b e   m a n a g e d   u s i n g   t h e   m a c r o s  
                           _ _ H A L _ U S A R T _ E N A B L E _ I T ( )   a n d   _ _ H A L _ U S A R T _ D I S A B L E _ I T ( )   i n s i d e   t h e   t r a n s m i t   a n d   r e c e i v e   p r o c e s s .  
  
         ( # )   T h r e e   o p e r a t i o n   m o d e s   a r e   a v a i l a b l e   w i t h i n   t h i s   d r i v e r   :  
  
           * * *   P o l l i n g   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ U S A R T _ T r a n s m i t ( )  
               ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ U S A R T _ R e c e i v e ( )  
  
           * * *   I n t e r r u p t   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ U S A R T _ T r a n s m i t _ I T ( )  
               ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ T x C p l t C a l l b a c k  
               ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ U S A R T _ R e c e i v e _ I T ( )  
               ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ U S A R T _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ R x C p l t C a l l b a c k  
               ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ U S A R T _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ E r r o r C a l l b a c k  
  
           * * *   D M A   m o d e   I O   o p e r a t i o n   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ U S A R T _ T r a n s m i t _ D M A ( )  
               ( + )   A t   t r a n s m i s s i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k  
               ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ U S A R T _ T x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ T x C p l t C a l l b a c k  
               ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ U S A R T _ R e c e i v e _ D M A ( )  
               ( + )   A t   r e c e p t i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k  
               ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ U S A R T _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ R x C p l t C a l l b a c k  
               ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ U S A R T _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ U S A R T _ E r r o r C a l l b a c k  
               ( + )   P a u s e   t h e   D M A   T r a n s f e r   u s i n g   H A L _ U S A R T _ D M A P a u s e ( )  
               ( + )   R e s u m e   t h e   D M A   T r a n s f e r   u s i n g   H A L _ U S A R T _ D M A R e s u m e ( )  
               ( + )   S t o p   t h e   D M A   T r a n s f e r   u s i n g   H A L _ U S A R T _ D M A S t o p ( )  
  
           * * *   U S A R T   H A L   d r i v e r   m a c r o s   l i s t   * * *  
           = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
           [ . . ]  
               B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   U S A R T   H A L   d r i v e r .  
  
               ( + )   _ _ H A L _ U S A R T _ E N A B L E :   E n a b l e   t h e   U S A R T   p e r i p h e r a l  
               ( + )   _ _ H A L _ U S A R T _ D I S A B L E :   D i s a b l e   t h e   U S A R T   p e r i p h e r a l  
               ( + )   _ _ H A L _ U S A R T _ G E T _ F L A G   :   C h e c k   w h e t h e r   t h e   s p e c i f i e d   U S A R T   f l a g   i s   s e t   o r   n o t  
               ( + )   _ _ H A L _ U S A R T _ C L E A R _ F L A G   :   C l e a r   t h e   s p e c i f i e d   U S A R T   p e n d i n g   f l a g  
               ( + )   _ _ H A L _ U S A R T _ E N A B L E _ I T :   E n a b l e   t h e   s p e c i f i e d   U S A R T   i n t e r r u p t  
               ( + )   _ _ H A L _ U S A R T _ D I S A B L E _ I T :   D i s a b l e   t h e   s p e c i f i e d   U S A R T   i n t e r r u p t  
  
           [ . . ]  
               ( @ )   Y o u   c a n   r e f e r   t o   t h e   U S A R T   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s  
  
         # # # # #   C a l l b a c k   r e g i s t r a t i o n   # # # # #  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
         [ . . ]  
         T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
         a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
         [ . . ]  
         U s e   F u n c t i o n   @ r e f   H A L _ U S A R T _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k .  
         F u n c t i o n   @ r e f   H A L _ U S A R T _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x H a l f C p l t C a l l b a c k                 :   T x   H a l f   C o m p l e t e   C a l l b a c k .  
         ( + )   T x C p l t C a l l b a c k                         :   T x   C o m p l e t e   C a l l b a c k .  
         ( + )   R x H a l f C p l t C a l l b a c k                 :   R x   H a l f   C o m p l e t e   C a l l b a c k .  
         ( + )   R x C p l t C a l l b a c k                         :   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   T x R x C p l t C a l l b a c k                     :   T x   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   E r r o r C a l l b a c k                           :   E r r o r   C a l l b a c k .  
         ( + )   A b o r t C p l t C a l l b a c k                   :   A b o r t   C o m p l e t e   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                       :   U S A R T   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k                   :   U S A R T   M s p D e I n i t .  
         T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
         a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
         [ . . ]  
         U s e   f u n c t i o n   @ r e f   H A L _ U S A R T _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
         w e a k   ( s u r c h a r g e d )   f u n c t i o n .  
         @ r e f   H A L _ U S A R T _ U n R e g i s t e r C a l l b a c k ( )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
         a n d   t h e   C a l l b a c k   I D .  
         T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
         ( + )   T x H a l f C p l t C a l l b a c k                 :   T x   H a l f   C o m p l e t e   C a l l b a c k .  
         ( + )   T x C p l t C a l l b a c k                         :   T x   C o m p l e t e   C a l l b a c k .  
         ( + )   R x H a l f C p l t C a l l b a c k                 :   R x   H a l f   C o m p l e t e   C a l l b a c k .  
         ( + )   R x C p l t C a l l b a c k                         :   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   T x R x C p l t C a l l b a c k                     :   T x   R x   C o m p l e t e   C a l l b a c k .  
         ( + )   E r r o r C a l l b a c k                           :   E r r o r   C a l l b a c k .  
         ( + )   A b o r t C p l t C a l l b a c k                   :   A b o r t   C o m p l e t e   C a l l b a c k .  
         ( + )   M s p I n i t C a l l b a c k                       :   U S A R T   M s p I n i t .  
         ( + )   M s p D e I n i t C a l l b a c k                   :   U S A R T   M s p D e I n i t .  
  
         [ . . ]  
         B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ U S A R T _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   H A L _ U S A R T _ S T A T E _ R E S E T  
         a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   ( s u r c h a r g e d )   f u n c t i o n s :  
         e x a m p l e s   @ r e f   H A L _ U S A R T _ T x C p l t C a l l b a c k ( ) ,   @ r e f   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k ( ) .  
         E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e   r e s p e c t i v e l y  
         r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ U S A R T _ I n i t ( )  
         a n d   @ r e f   H A L _ U S A R T _ D e I n i t ( )   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
         I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ U S A R T _ I n i t ( )   a n d   @ r e f   H A L _ U S A R T _ D e I n i t ( )  
         k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d ) .  
  
         [ . . ]  
         C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ U S A R T _ S T A T E _ R E A D Y   s t a t e   o n l y .  
         E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
         i n   H A L _ U S A R T _ S T A T E _ R E A D Y   o r   H A L _ U S A R T _ S T A T E _ R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )  
         M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
         I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
         u s i n g   @ r e f   H A L _ U S A R T _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ U S A R T _ D e I n i t ( )  
         o r   @ r e f   H A L _ U S A R T _ I n i t ( )   f u n c t i o n .  
  
         [ . . ]  
         W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
         n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e  
         a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
  
     @ e n d v e r b a t i m  
           [ . . ]  
               ( @ )   A d d i t i o n a l   r e m a r k :   I f   t h e   p a r i t y   i s   e n a b l e d ,   t h e n   t h e   M S B   b i t   o f   t h e   d a t a   w r i t t e n  
                       i n   t h e   d a t a   r e g i s t e r   i s   t r a n s m i t t e d   b u t   i s   c h a n g e d   b y   t h e   p a r i t y   b i t .  
                       D e p e n d i n g   o n   t h e   f r a m e   l e n g t h   d e f i n e d   b y   t h e   M   b i t   ( 8 - b i t s   o r   9 - b i t s ) ,  
                       t h e   p o s s i b l e   U S A R T   f r a m e   f o r m a t s   a r e   a s   l i s t e d   i n   t h e   f o l l o w i n g   t a b l e :  
         + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
         |       M   b i t   |     P C E   b i t     |                         U S A R T   f r a m e                                   |  
         | - - - - - - - - - - - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         0         |         0             |         |   S B   |   8   b i t   d a t a   |   S T B   |                     |  
         | - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         0         |         1             |         |   S B   |   7   b i t   d a t a   |   P B   |   S T B   |           |  
         | - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         1         |         0             |         |   S B   |   9   b i t   d a t a   |   S T B   |                     |  
         | - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         1         |         1             |         |   S B   |   8   b i t   d a t a   |   P B   |   S T B   |           |  
         + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
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
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T   U S A R T  
     *   @ b r i e f   H A L   U S A R T   S y n c h r o n o u s   m o d u l e   d r i v e r  
     *   @ {  
     * /  
 # i f d e f   H A L _ U S A R T _ M O D U L E _ E N A B L E D  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   U S A R T _ P r i v a t e _ C o n s t a n t s  
     *   @ {  
     * /  
 # d e f i n e   D U M M Y _ D A T A                       0 x F F F F U  
 # d e f i n e   U S A R T _ T I M E O U T _ V A L U E     2 2 0 0 0 U  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   U S A R T _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 v o i d   U S A R T _ I n i t C a l l b a c k s T o D e f a u l t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 s t a t i c   v o i d   U S A R T _ E n d T x T r a n s f e r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 s t a t i c   v o i d   U S A R T _ E n d R x T r a n s f e r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ T r a n s m i t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ E n d T r a n s m i t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ T r a n s m i t R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 s t a t i c   v o i d   U S A R T _ S e t C o n f i g ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ) ;  
 s t a t i c   v o i d   U S A R T _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   U S A R T _ D M A T x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   U S A R T _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   U S A R T _ D M A R x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   U S A R T _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   U S A R T _ D M A A b o r t O n E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   U S A R T _ D M A T x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   U S A R T _ D M A R x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i c k s t a r t ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s   U S A R T   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   U S A R T   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                             # # # # #   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
     T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   t h e   U S A R T  
     i n   a s y n c h r o n o u s   a n d   i n   s y n c h r o n o u s   m o d e s .  
     ( + )   F o r   t h e   a s y n c h r o n o u s   m o d e   o n l y   t h e s e   p a r a m e t e r s   c a n   b e   c o n f i g u r e d :  
             ( + + )   B a u d   R a t e  
             ( + + )   W o r d   L e n g t h  
             ( + + )   S t o p   B i t  
             ( + + )   P a r i t y :   I f   t h e   p a r i t y   i s   e n a b l e d ,   t h e n   t h e   M S B   b i t   o f   t h e   d a t a   w r i t t e n  
                       i n   t h e   d a t a   r e g i s t e r   i s   t r a n s m i t t e d   b u t   i s   c h a n g e d   b y   t h e   p a r i t y   b i t .  
                       D e p e n d i n g   o n   t h e   f r a m e   l e n g t h   d e f i n e d   b y   t h e   M   b i t   ( 8 - b i t s   o r   9 - b i t s ) ,  
                       p l e a s e   r e f e r   t o   R e f e r e n c e   m a n u a l   f o r   p o s s i b l e   U S A R T   f r a m e   f o r m a t s .  
             ( + + )   U S A R T   p o l a r i t y  
             ( + + )   U S A R T   p h a s e  
             ( + + )   U S A R T   L a s t B i t  
             ( + + )   R e c e i v e r / t r a n s m i t t e r   m o d e s  
  
     [ . . ]  
         T h e   H A L _ U S A R T _ I n i t ( )   f u n c t i o n   f o l l o w s   t h e   U S A R T     s y n c h r o n o u s   c o n f i g u r a t i o n  
         p r o c e d u r e s   ( d e t a i l s   f o r   t h e   p r o c e d u r e s   a r e   a v a i l a b l e   i n   r e f e r e n c e   m a n u a l s  
         ( R M 0 0 0 8   f o r   S T M 3 2 F 1 0 X x x   M C U s   a n d   R M 0 0 4 1   f o r   S T M 3 2 F 1 0 0 x x   M C U s ) ) .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   U S A R T   m o d e   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   U S A R T _ I n i t T y p e D e f   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   C h e c k   t h e   U S A R T   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h u s a r t   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ U S A R T _ I N S T A N C E ( h u s a r t - > I n s t a n c e ) ) ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h u s a r t - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         U S A R T _ I n i t C a l l b a c k s T o D e f a u l t ( h u s a r t ) ;  
  
         i f   ( h u s a r t - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h u s a r t - > M s p I n i t C a l l b a c k   =   H A L _ U S A R T _ M s p I n i t ;  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h u s a r t - > M s p I n i t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K   * /  
         H A L _ U S A R T _ M s p I n i t ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y ;  
  
     / *   S e t   t h e   U S A R T   C o m m u n i c a t i o n   p a r a m e t e r s   * /  
     U S A R T _ S e t C o n f i g ( h u s a r t ) ;  
  
     / *   I n   U S A R T   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
           -   L I N E N   b i t   i n   t h e   U S A R T _ C R 2   r e g i s t e r  
           -   H D S E L ,   S C E N   a n d   I R E N   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 2 ,   U S A R T _ C R 2 _ L I N E N ) ;  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   ( U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ H D S E L   |   U S A R T _ C R 3 _ I R E N ) ) ;  
  
     / *   E n a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ U S A R T _ E N A B L E ( h u s a r t ) ;  
  
     / *   I n i t i a l i z e   t h e   U S A R T   s t a t e   * /  
     h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   U S A R T   p e r i p h e r a l .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D e I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   C h e c k   t h e   U S A R T   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h u s a r t   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ U S A R T _ I N S T A N C E ( h u s a r t - > I n s t a n c e ) ) ;  
  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ U S A R T _ D I S A B L E ( h u s a r t ) ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     i f   ( h u s a r t - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h u s a r t - > M s p D e I n i t C a l l b a c k   =   H A L _ U S A R T _ M s p D e I n i t ;  
     }  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h u s a r t - > M s p D e I n i t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     H A L _ U S A R T _ M s p D e I n i t ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     U S A R T   M S P   I n i t .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ M s p I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     U S A R T   M S P   D e I n i t .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ M s p D e I n i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   U S A R T   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h u s a r t   u s a r t   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ T X _ H A L F C O M P L E T E _ C B _ I D   T x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ R X _ H A L F C O M P L E T E _ C B _ I D   R x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ T X _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ A B O R T _ C O M P L E T E _ C B _ I D   A b o r t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ M S P I N I T _ C B _ I D   M s p I n i t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
 +     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e g i s t e r C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   H A L _ U S A R T _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p U S A R T _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h u s a r t ) ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ U S A R T _ T X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > T x H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ T X _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ R X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > R x H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ R X _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ T X _ R X _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > T x R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ E R R O R _ C B _ I D   :  
                 h u s a r t - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ A B O R T _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > A b o r t C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ M S P I N I T _ C B _ I D   :  
                 h u s a r t - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ M S P D E I N I T _ C B _ I D   :  
                 h u s a r t - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ U S A R T _ M S P I N I T _ C B _ I D   :  
                 h u s a r t - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ M S P D E I N I T _ C B _ I D   :  
                 h u s a r t - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   U S A R T   C a l l b a c k  
     *                   U S A R T   c a l l a b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h u s a r t   u s a r t   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ T X _ H A L F C O M P L E T E _ C B _ I D   T x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ R X _ H A L F C O M P L E T E _ C B _ I D   R x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ T X _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ A B O R T _ C O M P L E T E _ C B _ I D   A b o r t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ M S P I N I T _ C B _ I D   M s p I n i t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ U S A R T _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ U n R e g i s t e r C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   H A L _ U S A R T _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h u s a r t ) ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ U S A R T _ T X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > T x H a l f C p l t C a l l b a c k   =   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k ;                               / *   L e g a c y   w e a k     T x H a l f C p l t C a l l b a c k               * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ T X _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > T x C p l t C a l l b a c k   =   H A L _ U S A R T _ T x C p l t C a l l b a c k ;                                               / *   L e g a c y   w e a k   T x C p l t C a l l b a c k                         * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ R X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > R x H a l f C p l t C a l l b a c k   =   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k ;                               / *   L e g a c y   w e a k   R x H a l f C p l t C a l l b a c k                 * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ R X _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > R x C p l t C a l l b a c k   =   H A L _ U S A R T _ R x C p l t C a l l b a c k ;                                               / *   L e g a c y   w e a k   R x C p l t C a l l b a c k                         * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ T X _ R X _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > T x R x C p l t C a l l b a c k   =   H A L _ U S A R T _ T x R x C p l t C a l l b a c k ;                                       / *   L e g a c y   w e a k   T x R x C p l t C a l l b a c k                         * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ E R R O R _ C B _ I D   :  
                 h u s a r t - > E r r o r C a l l b a c k   =   H A L _ U S A R T _ E r r o r C a l l b a c k ;                                                   / *   L e g a c y   w e a k   E r r o r C a l l b a c k                           * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ A B O R T _ C O M P L E T E _ C B _ I D   :  
                 h u s a r t - > A b o r t C p l t C a l l b a c k   =   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ;                                   / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k                   * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ M S P I N I T _ C B _ I D   :  
                 h u s a r t - > M s p I n i t C a l l b a c k   =   H A L _ U S A R T _ M s p I n i t ;                                                           / *   L e g a c y   w e a k   M s p I n i t C a l l b a c k                       * /  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ M S P D E I N I T _ C B _ I D   :  
                 h u s a r t - > M s p D e I n i t C a l l b a c k   =   H A L _ U S A R T _ M s p D e I n i t ;                                                   / *   L e g a c y   w e a k   M s p D e I n i t C a l l b a c k                   * /  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ U S A R T _ M S P I N I T _ C B _ I D   :  
                 h u s a r t - > M s p I n i t C a l l b a c k   =   H A L _ U S A R T _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ U S A R T _ M S P D E I N I T _ C B _ I D   :  
                 h u s a r t - > M s p D e I n i t C a l l b a c k   =   H A L _ U S A R T _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f       U S A R T   T r a n s m i t   a n d   R e c e i v e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                   # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   U S A R T   s y n c h r o n o u s  
         d a t a   t r a n s f e r s .  
  
     [ . . ]  
         T h e   U S A R T   s u p p o r t s   m a s t e r   m o d e   o n l y :   i t   c a n n o t   r e c e i v e   o r   s e n d   d a t a   r e l a t e d   t o   a n   i n p u t  
         c l o c k   ( S C L K   i s   a l w a y s   a n   o u t p u t ) .  
  
         ( # )   T h e r e   a r e   t w o   m o d e s   o f   t r a n s f e r :  
                 ( + + )   B l o c k i n g   m o d e :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   i n   p o l l i n g   m o d e .  
                           T h e   H A L   s t a t u s   o f   a l l   d a t a   p r o c e s s i n g   i s   r e t u r n e d   b y   t h e   s a m e   f u n c t i o n  
                           a f t e r   f i n i s h i n g   t r a n s f e r .  
                 ( + + )   N o - B l o c k i n g   m o d e :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   u s i n g   I n t e r r u p t s  
                           o r   D M A ,   T h e s e   A P I ' s   r e t u r n   t h e   H A L   s t a t u s .  
                           T h e   e n d   o f   t h e   d a t a   p r o c e s s i n g   w i l l   b e   i n d i c a t e d   t h r o u g h   t h e  
                           d e d i c a t e d   U S A R T   I R Q   w h e n   u s i n g   I n t e r r u p t   m o d e   o r   t h e   D M A   I R Q   w h e n  
                           u s i n g   D M A   m o d e .  
                           T h e   H A L _ U S A R T _ T x C p l t C a l l b a c k ( ) ,   H A L _ U S A R T _ R x C p l t C a l l b a c k ( )   a n d   H A L _ U S A R T _ T x R x C p l t C a l l b a c k ( )  
                             u s e r   c a l l b a c k s  
                           w i l l   b e   e x e c u t e d   r e s p e c t i v e l y   a t   t h e   e n d   o f   t h e   t r a n s m i t   o r   R e c e i v e   p r o c e s s  
                           T h e   H A L _ U S A R T _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   w i l l   b e   e x e c u t e d   w h e n   a   c o m m u n i c a t i o n  
                           e r r o r   i s   d e t e c t e d  
  
         ( # )   B l o c k i n g   m o d e   A P I s   a r e   :  
                 ( + + )   H A L _ U S A R T _ T r a n s m i t ( )   i n   s i m p l e x   m o d e  
                 ( + + )   H A L _ U S A R T _ R e c e i v e ( )   i n   f u l l   d u p l e x   r e c e i v e   o n l y  
                 ( + + )   H A L _ U S A R T _ T r a n s m i t R e c e i v e ( )   i n   f u l l   d u p l e x   m o d e  
  
         ( # )   N o n   B l o c k i n g   m o d e   A P I s   w i t h   I n t e r r u p t   a r e   :  
                 ( + + )   H A L _ U S A R T _ T r a n s m i t _ I T ( ) i n   s i m p l e x   m o d e  
                 ( + + )   H A L _ U S A R T _ R e c e i v e _ I T ( )   i n   f u l l   d u p l e x   r e c e i v e   o n l y  
                 ( + + )   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ I T ( )   i n   f u l l   d u p l e x   m o d e  
                 ( + + )   H A L _ U S A R T _ I R Q H a n d l e r ( )  
  
         ( # )   N o n   B l o c k i n g   m o d e   f u n c t i o n s   w i t h   D M A   a r e   :  
                 ( + + )   H A L _ U S A R T _ T r a n s m i t _ D M A ( ) i n   s i m p l e x   m o d e  
                 ( + + )   H A L _ U S A R T _ R e c e i v e _ D M A ( )   i n   f u l l   d u p l e x   r e c e i v e   o n l y  
                 ( + + )   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ D M A ( )   i n   f u l l   d u p l e x   m o d e  
                 ( + + )   H A L _ U S A R T _ D M A P a u s e ( )  
                 ( + + )   H A L _ U S A R T _ D M A R e s u m e ( )  
                 ( + + )   H A L _ U S A R T _ D M A S t o p ( )  
  
         ( # )   A   s e t   o f   T r a n s f e r   C o m p l e t e   C a l l b a c k s   a r e   p r o v i d e d   i n   n o n   B l o c k i n g   m o d e :  
                 ( + + )   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ U S A R T _ T x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ U S A R T _ R x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ U S A R T _ E r r o r C a l l b a c k ( )  
                 ( + + )   H A L _ U S A R T _ T x R x C p l t C a l l b a c k ( )  
  
         ( # )   N o n - B l o c k i n g   m o d e   t r a n s f e r s   c o u l d   b e   a b o r t e d   u s i n g   A b o r t   A P I ' s   :  
                 ( + + )   H A L _ U S A R T _ A b o r t ( )  
                 ( + + )   H A L _ U S A R T _ A b o r t _ I T ( )  
  
         ( # )   F o r   A b o r t   s e r v i c e s   b a s e d   o n   i n t e r r u p t s   ( H A L _ U S A R T _ A b o r t _ I T ) ,   a   A b o r t   C o m p l e t e   C a l l b a c k s   i s   p r o v i d e d :  
                 ( + + )   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( )  
  
         ( # )   I n   N o n - B l o c k i n g   m o d e   t r a n s f e r s ,   p o s s i b l e   e r r o r s   a r e   s p l i t   i n t o   2   c a t e g o r i e s .  
                 E r r o r s   a r e   h a n d l e d   a s   f o l l o w s   :  
                 ( + + )   E r r o r   i s   c o n s i d e r e d   a s   R e c o v e r a b l e   a n d   n o n   b l o c k i n g   :   T r a n s f e r   c o u l d   g o   t i l l   e n d ,   b u t   e r r o r   s e v e r i t y   i s  
                           t o   b e   e v a l u a t e d   b y   u s e r   :   t h i s   c o n c e r n s   F r a m e   E r r o r ,   P a r i t y   E r r o r   o r   N o i s e   E r r o r   i n   I n t e r r u p t   m o d e   r e c e p t i o n   .  
                           R e c e i v e d   c h a r a c t e r   i s   t h e n   r e t r i e v e d   a n d   s t o r e d   i n   R x   b u f f e r ,   E r r o r   c o d e   i s   s e t   t o   a l l o w   u s e r   t o   i d e n t i f y   e r r o r   t y p e ,  
                           a n d   H A L _ U S A R T _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   i s   e x e c u t e d .   T r a n s f e r   i s   k e p t   o n g o i n g   o n   U S A R T   s i d e .  
                           I f   u s e r   w a n t s   t o   a b o r t   i t ,   A b o r t   s e r v i c e s   s h o u l d   b e   c a l l e d   b y   u s e r .  
                 ( + + )   E r r o r   i s   c o n s i d e r e d   a s   B l o c k i n g   :   T r a n s f e r   c o u l d   n o t   b e   c o m p l e t e d   p r o p e r l y   a n d   i s   a b o r t e d .  
                           T h i s   c o n c e r n s   O v e r r u n   E r r o r   I n   I n t e r r u p t   m o d e   r e c e p t i o n   a n d   a l l   e r r o r s   i n   D M A   m o d e .  
                           E r r o r   c o d e   i s   s e t   t o   a l l o w   u s e r   t o   i d e n t i f y   e r r o r   t y p e ,   a n d   H A L _ U S A R T _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   i s   e x e c u t e d .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     S i m p l e x   S e n d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   s e n t   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   p r o v i d e d   t h r o u g h   p T x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p T x D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 8 _ t     * p t x d a t a 8 b i t s ;  
     u i n t 1 6 _ t   * p t x d a t a 1 6 b i t s ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p T x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X ;  
  
         / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         h u s a r t - > T x X f e r S i z e   =   S i z e ;  
         h u s a r t - > T x X f e r C o u n t   =   S i z e ;  
  
         / *   I n   c a s e   o f   9 b i t s / N o   P a r i t y   t r a n s f e r ,   p T x D a t a   n e e d s   t o   b e   h a n d l e d   a s   a   u i n t 1 6 _ t   p o i n t e r   * /  
         i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
         {  
             p t x d a t a 8 b i t s     =   N U L L ;  
             p t x d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t   * )   p T x D a t a ;  
         }  
         e l s e  
         {  
             p t x d a t a 8 b i t s     =   p T x D a t a ;  
             p t x d a t a 1 6 b i t s   =   N U L L ;  
         }  
  
         w h i l e   ( h u s a r t - > T x X f e r C o u n t   >   0 U )  
         {  
             / *   W a i t   f o r   T X E   f l a g   i n   o r d e r   t o   w r i t e   d a t a   i n   D R   * /  
             i f   ( U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( h u s a r t ,   U S A R T _ F L A G _ T X E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
             i f   ( p t x d a t a 8 b i t s   = =   N U L L )  
             {  
                 h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 1 6 _ t ) ( * p t x d a t a 1 6 b i t s   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                 p t x d a t a 1 6 b i t s + + ;  
             }  
             e l s e  
             {  
                 h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 8 _ t ) ( * p t x d a t a 8 b i t s   &   ( u i n t 8 _ t ) 0 x F F ) ;  
                 p t x d a t a 8 b i t s + + ;  
             }  
  
             h u s a r t - > T x X f e r C o u n t - - ;  
         }  
  
         i f   ( U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( h u s a r t ,   U S A R T _ F L A G _ T C ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     F u l l - D u p l e x   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e .  
     *   @ n o t e       T o   r e c e i v e   s y n c h r o n o u s   d a t a ,   d u m m y   d a t a   a r e   s i m u l t a n e o u s l y   t r a n s m i t t e d .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   r e c e i v e d   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   a v a i l a b l e   t h r o u g h   p R x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p R x D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   r e c e i v e d .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e c e i v e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 8 _ t     * p r x d a t a 8 b i t s ;  
     u i n t 1 6 _ t   * p r x d a t a 1 6 b i t s ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p R x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X ;  
  
         / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         h u s a r t - > R x X f e r S i z e   =   S i z e ;  
         h u s a r t - > R x X f e r C o u n t   =   S i z e ;  
  
         / *   I n   c a s e   o f   9 b i t s / N o   P a r i t y   t r a n s f e r ,   p R x D a t a   n e e d s   t o   b e   h a n d l e d   a s   a   u i n t 1 6 _ t   p o i n t e r   * /  
         i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
         {  
             p r x d a t a 8 b i t s     =   N U L L ;  
             p r x d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t   * )   p R x D a t a ;  
         }  
         e l s e  
         {  
             p r x d a t a 8 b i t s     =   p R x D a t a ;  
             p r x d a t a 1 6 b i t s   =   N U L L ;  
         }  
  
         / *   C h e c k   t h e   r e m a i n   d a t a   t o   b e   r e c e i v e d   * /  
         w h i l e   ( h u s a r t - > R x X f e r C o u n t   >   0 U )  
         {  
             / *   W a i t   u n t i l   T X E   f l a g   i s   s e t   t o   s e n d   d u m m y   b y t e   i n   o r d e r   t o   g e n e r a t e   t h e  
             *   c l o c k   f o r   t h e   s l a v e   t o   s e n d   d a t a .  
             *   W h a t e v e r   t h e   f r a m e   l e n g t h   ( 7 ,   8   o r   9 - b i t   l o n g ) ,   t h e   s a m e   d u m m y   v a l u e  
             *   c a n   b e   w r i t t e n   f o r   a l l   t h e   c a s e s .   * /  
             i f   ( U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( h u s a r t ,   U S A R T _ F L A G _ T X E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
             h u s a r t - > I n s t a n c e - > D R   =   ( D U M M Y _ D A T A   &   ( u i n t 1 6 _ t ) 0 x 0 F F ) ;  
  
             / *   W a i t   u n t i l   R X N E   f l a g   i s   s e t   t o   r e c e i v e   t h e   b y t e   * /  
             i f   ( U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( h u s a r t ,   U S A R T _ F L A G _ R X N E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
             {  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
  
             i f   ( p r x d a t a 8 b i t s   = =   N U L L )  
             {  
                 * p r x d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                 p r x d a t a 1 6 b i t s + + ;  
             }  
             e l s e  
             {  
                 i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   | |   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 8 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) ) )  
                 {  
                     * p r x d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 F F ) ;  
                 }  
                 e l s e  
                 {  
                     * p r x d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 7 F ) ;  
                 }  
                 p r x d a t a 8 b i t s + + ;  
             }  
             h u s a r t - > R x X f e r C o u n t - - ;  
         }  
  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     F u l l - D u p l e x   S e n d   a n d   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   f u l l - d u p l e x   m o d e   ( b l o c k i n g   m o d e ) .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   s e n t   d a t a   a n d   t h e   r e c e i v e d   d a t a   a r e   h a n d l e d   a s   s e t s   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   a v a i l a b l e   t h r o u g h   p T x D a t a   a n d   t h r o u g h   p R x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p T x D a t a   P o i n t e r   t o   T X   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     p R x D a t a   P o i n t e r   t o   R X   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t   ( s a m e   a m o u n t   t o   b e   r e c e i v e d ) .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t R e c e i v e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 8 _ t     * p r x d a t a 8 b i t s ;  
     u i n t 1 6 _ t   * p r x d a t a 1 6 b i t s ;  
     u i n t 8 _ t     * p t x d a t a 8 b i t s ;  
     u i n t 1 6 _ t   * p t x d a t a 1 6 b i t s ;  
     u i n t 1 6 _ t   r x d a t a c o u n t ;  
     u i n t 3 2 _ t   t i c k s t a r t ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p T x D a t a   = =   N U L L )   | |   ( p R x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   I n   c a s e   o f   9 b i t s / N o   P a r i t y   t r a n s f e r ,   p T x D a t a   a n d   p R x D a t a   b u f f e r s   p r o v i d e d   a s   i n p u t   p a r a m e t e r  
               s h o u l d   b e   a l i g n e d   o n   a   u 1 6   f r o n t i e r ,   a s   d a t a   t o   b e   f i l l e d   i n t o   T D R / r e t r i e v e d   f r o m   R D R   w i l l   b e  
               h a n d l e d   t h r o u g h   a   u 1 6   c a s t .   * /  
         i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
         {  
             i f   ( ( ( ( ( u i n t 3 2 _ t ) p T x D a t a )   &   1 U )   ! =   0 U )   | |   ( ( ( ( u i n t 3 2 _ t ) p R x D a t a )   &   1 U )   ! =   0 U ) )  
             {  
                 r e t u r n     H A L _ E R R O R ;  
             }  
         }  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X ;  
  
         / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t   * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         h u s a r t - > R x X f e r S i z e   =   S i z e ;  
         h u s a r t - > T x X f e r S i z e   =   S i z e ;  
         h u s a r t - > T x X f e r C o u n t   =   S i z e ;  
         h u s a r t - > R x X f e r C o u n t   =   S i z e ;  
  
         / *   I n   c a s e   o f   9 b i t s / N o   P a r i t y   t r a n s f e r ,   p R x D a t a   n e e d s   t o   b e   h a n d l e d   a s   a   u i n t 1 6 _ t   p o i n t e r   * /  
         i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
         {  
             p r x d a t a 8 b i t s     =   N U L L ;  
             p t x d a t a 8 b i t s     =   N U L L ;  
             p t x d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t   * )   p T x D a t a ;  
             p r x d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t   * )   p R x D a t a ;  
         }  
         e l s e  
         {  
             p r x d a t a 8 b i t s     =   p R x D a t a ;  
             p t x d a t a 8 b i t s     =   p T x D a t a ;  
             p t x d a t a 1 6 b i t s   =   N U L L ;  
             p r x d a t a 1 6 b i t s   =   N U L L ;  
         }  
  
         / *   C h e c k   t h e   r e m a i n   d a t a   t o   b e   r e c e i v e d   * /  
         / *   r x d a t a c o u n t   i s   a   t e m p o r a r y   v a r i a b l e   f o r   M I S R A C 2 0 1 2 - R u l e - 1 3 . 5   * /  
         r x d a t a c o u n t   =   h u s a r t - > R x X f e r C o u n t ;  
         w h i l e   ( ( h u s a r t - > T x X f e r C o u n t   >   0 U )   | |   ( r x d a t a c o u n t   >   0 U ) )  
         {  
             i f   ( h u s a r t - > T x X f e r C o u n t   >   0 U )  
             {  
                 / *   W a i t   f o r   T X E   f l a g   i n   o r d e r   t o   w r i t e   d a t a   i n   D R   * /  
                 i f   ( U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( h u s a r t ,   U S A R T _ F L A G _ T X E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
  
                 i f   ( p t x d a t a 8 b i t s   = =   N U L L )  
                 {  
                     h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 1 6 _ t ) ( * p t x d a t a 1 6 b i t s   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                     p t x d a t a 1 6 b i t s + + ;  
                 }  
                 e l s e  
                 {  
                     h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 8 _ t ) ( * p t x d a t a 8 b i t s   &   ( u i n t 8 _ t ) 0 x F F ) ;  
                     p t x d a t a 8 b i t s + + ;    
                 }  
  
                 h u s a r t - > T x X f e r C o u n t - - ;  
             }  
  
             i f   ( h u s a r t - > R x X f e r C o u n t   >   0 U )  
             {      
                 / *   W a i t   f o r   R X N E   F l a g   * /  
                 i f   ( U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( h u s a r t ,   U S A R T _ F L A G _ R X N E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
                 i f   ( p r x d a t a 8 b i t s   = =   N U L L )  
                 {  
                     * p r x d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                     p r x d a t a 1 6 b i t s + + ;  
                 }  
                 e l s e  
                 {  
                     i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   | |   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 8 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) ) )  
                     {  
                         * p r x d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 F F ) ;  
                     }  
                     e l s e  
                     {  
                         * p r x d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 7 F ) ;  
                     }  
  
                     p r x d a t a 8 b i t s + + ;  
                 }  
  
                 h u s a r t - > R x X f e r C o u n t - - ;  
             }  
             r x d a t a c o u n t   =   h u s a r t - > R x X f e r C o u n t ;  
         }  
  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S i m p l e x   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   s e n t   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   p r o v i d e d   t h r o u g h   p T x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p T x D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t .  
     *   @ r e t v a l   H A L   s t a t u s  
     *   @ n o t e       T h e   U S A R T   e r r o r s   a r e   n o t   m a n a g e d   t o   a v o i d   t h e   o v e r r u n   e r r o r .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p T x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > p T x B u f f P t r   =   p T x D a t a ;  
         h u s a r t - > T x X f e r S i z e   =   S i z e ;  
         h u s a r t - > T x X f e r C o u n t   =   S i z e ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X ;  
  
         / *   T h e   U S A R T   E r r o r   I n t e r r u p t s :   ( F r a m e   e r r o r ,   N o i s e   e r r o r ,   O v e r r u n   e r r o r )  
               a r e   n o t   m a n a g e d   b y   t h e   U S A R T   t r a n s m i t   p r o c e s s   t o   a v o i d   t h e   o v e r r u n   i n t e r r u p t  
               w h e n   t h e   U S A R T   m o d e   i s   c o n f i g u r e d   f o r   t r a n s m i t   a n d   r e c e i v e   " U S A R T _ M O D E _ T X _ R X "  
               t o   b e n e f i t   f o r   t h e   f r a m e   e r r o r   a n d   n o i s e   i n t e r r u p t s   t h e   U S A R T   m o d e   s h o u l d   b e  
               c o n f i g u r e d   o n l y   f o r   t r a n s m i t   " U S A R T _ M O D E _ T X "  
               T h e   _ _ H A L _ U S A R T _ E N A B L E _ I T ( h u s a r t ,   U S A R T _ I T _ E R R )   c a n   b e   u s e d   t o   e n a b l e   t h e   F r a m e   e r r o r ,  
               N o i s e   e r r o r   i n t e r r u p t   * /  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         / *   E n a b l e   t h e   U S A R T   T r a n s m i t   D a t a   R e g i s t e r   E m p t y   I n t e r r u p t   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S i m p l e x   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e .  
     *   @ n o t e       T o   r e c e i v e   s y n c h r o n o u s   d a t a ,   d u m m y   d a t a   a r e   s i m u l t a n e o u s l y   t r a n s m i t t e d .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   r e c e i v e d   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   a v a i l a b l e   t h r o u g h   p R x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p R x D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   r e c e i v e d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p R x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > p R x B u f f P t r   =   p R x D a t a ;  
         h u s a r t - > R x X f e r S i z e   =   S i z e ;  
         h u s a r t - > R x X f e r C o u n t   =   S i z e ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         / *   E n a b l e   t h e   U S A R T   P a r i t y   E r r o r   a n d   D a t a   R e g i s t e r   n o t   e m p t y   I n t e r r u p t s   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ R X N E I E ) ;  
  
         / *   E n a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   S e n d   d u m m y   b y t e   i n   o r d e r   t o   g e n e r a t e   t h e   c l o c k   f o r   t h e   s l a v e   t o   s e n d   d a t a   * /  
         h u s a r t - > I n s t a n c e - > D R   =   ( D U M M Y _ D A T A   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     F u l l - D u p l e x   S e n d   a n d   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   f u l l - d u p l e x   m o d e   ( n o n - b l o c k i n g ) .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   s e n t   d a t a   a n d   t h e   r e c e i v e d   d a t a   a r e   h a n d l e d   a s   s e t s   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   a v a i l a b l e   t h r o u g h   p T x D a t a   a n d   t h r o u g h   p R x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p T x D a t a   P o i n t e r   t o   T X   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     p R x D a t a   P o i n t e r   t o   R X   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t   ( s a m e   a m o u n t   t o   b e   r e c e i v e d ) .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 8 _ t   * p R x D a t a ,     u i n t 1 6 _ t   S i z e )  
 {  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p T x D a t a   = =   N U L L )   | |   ( p R x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > p R x B u f f P t r   =   p R x D a t a ;  
         h u s a r t - > R x X f e r S i z e   =   S i z e ;  
         h u s a r t - > R x X f e r C o u n t   =   S i z e ;  
         h u s a r t - > p T x B u f f P t r   =   p T x D a t a ;  
         h u s a r t - > T x X f e r S i z e   =   S i z e ;  
         h u s a r t - > T x X f e r C o u n t   =   S i z e ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X _ R X ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         / *   E n a b l e   t h e   U S A R T   D a t a   R e g i s t e r   n o t   e m p t y   I n t e r r u p t   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
  
         / *   E n a b l e   t h e   U S A R T   P a r i t y   E r r o r   I n t e r r u p t   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
         / *   E n a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   E n a b l e   t h e   U S A R T   T r a n s m i t   D a t a   R e g i s t e r   E m p t y   I n t e r r u p t   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     S i m p l e x   S e n d   a n   a m o u n t   o f   d a t a   i n   D M A   m o d e .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   s e n t   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   p r o v i d e d   t h r o u g h   p T x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p T x D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t _ D M A ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   * t m p ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p T x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > p T x B u f f P t r   =   p T x D a t a ;  
         h u s a r t - > T x X f e r S i z e   =   S i z e ;  
         h u s a r t - > T x X f e r C o u n t   =   S i z e ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X ;  
  
         / *   S e t   t h e   U S A R T   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r C p l t C a l l b a c k   =   U S A R T _ D M A T r a n s m i t C p l t ;  
  
         / *   S e t   t h e   U S A R T   D M A   H a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   U S A R T _ D M A T x H a l f C p l t ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   U S A R T _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   a b o r t   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   E n a b l e   t h e   U S A R T   t r a n s m i t   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t   * ) & p T x D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h u s a r t - > h d m a t x ,   * ( u i n t 3 2 _ t   * ) t m p ,   ( u i n t 3 2 _ t ) & h u s a r t - > I n s t a n c e - > D R ,   S i z e ) ;  
  
         / *   C l e a r   t h e   T C   f l a g   i n   t h e   S R   r e g i s t e r   b y   w r i t i n g   0   t o   i t   * /  
         _ _ H A L _ U S A R T _ C L E A R _ F L A G ( h u s a r t ,   U S A R T _ F L A G _ T C ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A T   b i t  
         i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     F u l l - D u p l e x   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   D M A   m o d e .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   r e c e i v e d   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   a v a i l a b l e   t h r o u g h   p R x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p R x D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   r e c e i v e d .  
     *   @ r e t v a l   H A L   s t a t u s  
     *   @ n o t e       T h e   U S A R T   D M A   t r a n s m i t   c h a n n e l   m u s t   b e   c o n f i g u r e d   i n   o r d e r   t o   g e n e r a t e   t h e   c l o c k   f o r   t h e   s l a v e .  
     *   @ n o t e       W h e n   t h e   U S A R T   p a r i t y   i s   e n a b l e d   ( P C E   =   1 )   t h e   d a t a   r e c e i v e d   c o n t a i n   t h e   p a r i t y   b i t .  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ R e c e i v e _ D M A ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   * t m p ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p R x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > p R x B u f f P t r   =   p R x D a t a ;  
         h u s a r t - > R x X f e r S i z e   =   S i z e ;  
         h u s a r t - > p T x B u f f P t r   =   p R x D a t a ;  
         h u s a r t - > T x X f e r S i z e   =   S i z e ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X ;  
  
         / *   S e t   t h e   U S A R T   D M A   R x   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r C p l t C a l l b a c k   =   U S A R T _ D M A R e c e i v e C p l t ;  
  
         / *   S e t   t h e   U S A R T   D M A   H a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   U S A R T _ D M A R x H a l f C p l t ;  
  
         / *   S e t   t h e   U S A R T   D M A   R x   t r a n s f e r   e r r o r   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   U S A R T _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   a b o r t   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   S e t   t h e   U S A R T   T x   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   a s   N U L L   b e c a u s e   t h e   c o m m u n i c a t i o n   c l o s i n g  
         i s   p e r f o r m e d   i n   D M A   r e c e p t i o n   c o m p l e t e   c a l l b a c k     * /  
         h u s a r t - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   N U L L ;  
         h u s a r t - > h d m a t x - > X f e r C p l t C a l l b a c k   =   N U L L ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   U S A R T _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   A b o r t C p l t C a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   E n a b l e   t h e   U S A R T   r e c e i v e   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t   * ) & p R x D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h u s a r t - > h d m a r x ,   ( u i n t 3 2 _ t ) & h u s a r t - > I n s t a n c e - > D R ,   * ( u i n t 3 2 _ t   * ) t m p ,   S i z e ) ;  
  
         / *   E n a b l e   t h e   U S A R T   t r a n s m i t   D M A   c h a n n e l :   t h e   t r a n s m i t   c h a n n e l   i s   u s e d   i n   o r d e r  
               t o   g e n e r a t e   i n   t h e   n o n - b l o c k i n g   m o d e   t h e   c l o c k   t o   t h e   s l a v e   d e v i c e ,  
               t h i s   m o d e   i s n ' t   a   s i m p l e x   r e c e i v e   m o d e   b u t   a   f u l l - d u p l e x   r e c e i v e   o n e   * /  
         H A L _ D M A _ S t a r t _ I T ( h u s a r t - > h d m a t x ,   * ( u i n t 3 2 _ t   * ) t m p ,   ( u i n t 3 2 _ t ) & h u s a r t - > I n s t a n c e - > D R ,   S i z e ) ;  
  
         / *   C l e a r   t h e   O v e r r u n   f l a g   j u s t   b e f o r e   e n a b l i n g   t h e   D M A   R x   r e q u e s t :   m a n d a t o r y   f o r   t h e   s e c o n d   t r a n s f e r   * /  
         _ _ H A L _ U S A R T _ C L E A R _ O R E F L A G ( h u s a r t ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         / *   E n a b l e   t h e   U S A R T   P a r i t y   E r r o r   I n t e r r u p t   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
         / *   E n a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t h e   r e c e i v e r   r e q u e s t   b y   s e t t i n g   t h e   D M A R   b i t  
               i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A T   b i t  
               i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     F u l l - D u p l e x   T r a n s m i t   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   D M A   m o d e .  
     *   @ n o t e       W h e n   U S A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                   t h e   s e n t   d a t a   a n d   t h e   r e c e i v e d   d a t a   a r e   h a n d l e d   a s   s e t s   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   i n d i c a t e   t h e   n u m b e r  
     *                   o f   u 1 6   a v a i l a b l e   t h r o u g h   p T x D a t a   a n d   t h r o u g h   p R x D a t a .  
     *   @ p a r a m     h u s a r t     P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                   t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     p T x D a t a   P o i n t e r   t o   T X   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     p R x D a t a   P o i n t e r   t o   R X   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m     S i z e         A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   r e c e i v e d / s e n t .  
     *   @ n o t e       W h e n   t h e   U S A R T   p a r i t y   i s   e n a b l e d   ( P C E   =   1 )   t h e   d a t a   r e c e i v e d   c o n t a i n   t h e   p a r i t y   b i t .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ T r a n s m i t R e c e i v e _ D M A ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 8 _ t   * p T x D a t a ,   u i n t 8 _ t   * p R x D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   * t m p ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p T x D a t a   = =   N U L L )   | |   ( p R x D a t a   = =   N U L L )   | |   ( S i z e   = =   0 ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h u s a r t ) ;  
  
         h u s a r t - > p R x B u f f P t r   =   p R x D a t a ;  
         h u s a r t - > R x X f e r S i z e   =   S i z e ;  
         h u s a r t - > p T x B u f f P t r   =   p T x D a t a ;  
         h u s a r t - > T x X f e r S i z e   =   S i z e ;  
  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X _ R X ;  
  
         / *   S e t   t h e   U S A R T   D M A   R x   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r C p l t C a l l b a c k   =   U S A R T _ D M A R e c e i v e C p l t ;  
  
         / *   S e t   t h e   U S A R T   D M A   H a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   U S A R T _ D M A R x H a l f C p l t ;  
  
         / *   S e t   t h e   U S A R T   D M A   T x   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r C p l t C a l l b a c k   =   U S A R T _ D M A T r a n s m i t C p l t ;  
  
         / *   S e t   t h e   U S A R T   D M A   H a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   U S A R T _ D M A T x H a l f C p l t ;  
  
         / *   S e t   t h e   U S A R T   D M A   T x   t r a n s f e r   e r r o r   c a l l b a c k   * /  
         h u s a r t - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   U S A R T _ D M A E r r o r ;  
  
         / *   S e t   t h e   U S A R T   D M A   R x   t r a n s f e r   e r r o r   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   U S A R T _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   a b o r t   c a l l b a c k   * /  
         h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   E n a b l e   t h e   U S A R T   r e c e i v e   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t   * ) & p R x D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h u s a r t - > h d m a r x ,   ( u i n t 3 2 _ t ) & h u s a r t - > I n s t a n c e - > D R ,   * ( u i n t 3 2 _ t   * ) t m p ,   S i z e ) ;  
  
         / *   E n a b l e   t h e   U S A R T   t r a n s m i t   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t   * ) & p T x D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h u s a r t - > h d m a t x ,   * ( u i n t 3 2 _ t   * ) t m p ,   ( u i n t 3 2 _ t ) & h u s a r t - > I n s t a n c e - > D R ,   S i z e ) ;  
  
         / *   C l e a r   t h e   T C   f l a g   i n   t h e   S R   r e g i s t e r   b y   w r i t i n g   0   t o   i t   * /  
         _ _ H A L _ U S A R T _ C L E A R _ F L A G ( h u s a r t ,   U S A R T _ F L A G _ T C ) ;  
  
         / *   C l e a r   t h e   O v e r r u n   f l a g :   m a n d a t o r y   f o r   t h e   s e c o n d   t r a n s f e r   i n   c i r c u l a r   m o d e   * /  
         _ _ H A L _ U S A R T _ C L E A R _ O R E F L A G ( h u s a r t ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
         / *   E n a b l e   t h e   U S A R T   P a r i t y   E r r o r   I n t e r r u p t   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
         / *   E n a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t h e   r e c e i v e r   r e q u e s t   b y   s e t t i n g   t h e   D M A R   b i t  
               i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A T   b i t  
               i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     P a u s e s   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D M A P a u s e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h u s a r t ) ;  
  
     / *   D i s a b l e   t h e   U S A R T   D M A   T x   r e q u e s t   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e s u m e s   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D M A R e s u m e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h u s a r t ) ;  
  
     / *   E n a b l e   t h e   U S A R T   D M A   T x   r e q u e s t   * /  
     S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S t o p s   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ D M A S t o p ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
     / *   T h e   L o c k   i s   n o t   i m p l e m e n t e d   o n   t h i s   A P I   t o   a l l o w   t h e   u s e r   a p p l i c a t i o n  
           t o   c a l l   t h e   H A L   U S A R T   A P I   u n d e r   c a l l b a c k s   H A L _ U S A R T _ T x C p l t C a l l b a c k ( )   /   H A L _ U S A R T _ R x C p l t C a l l b a c k ( ) :  
           w h e n   c a l l i n g   H A L _ D M A _ A b o r t ( )   A P I   t h e   D M A   T X / R X   T r a n s f e r   c o m p l e t e   i n t e r r u p t   i s   g e n e r a t e d  
           a n d   t h e   c o r r e s p o n d   c a l l   b a c k   i s   e x e c u t e d   H A L _ U S A R T _ T x C p l t C a l l b a c k ( )   /   H A L _ U S A R T _ R x C p l t C a l l b a c k ( )  
           * /  
  
     / *   S t o p   U S A R T   D M A   T x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     i f   ( ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X )   & &   d m a r e q u e s t )  
     {  
         U S A R T _ E n d T x T r a n s f e r ( h u s a r t ) ;  
  
         / *   A b o r t   t h e   U S A R T   D M A   T x   c h a n n e l   * /  
         i f   ( h u s a r t - > h d m a t x   ! =   N U L L )  
         {  
             H A L _ D M A _ A b o r t ( h u s a r t - > h d m a t x ) ;  
         }  
  
         / *   D i s a b l e   t h e   U S A R T   T x   D M A   r e q u e s t   * /  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     }  
  
     / *   S t o p   U S A R T   D M A   R x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     i f   ( ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X )   & &   d m a r e q u e s t )  
     {  
         U S A R T _ E n d R x T r a n s f e r ( h u s a r t ) ;  
  
         / *   A b o r t   t h e   U S A R T   D M A   R x   c h a n n e l   * /  
         i f   ( h u s a r t - > h d m a r x   ! =   N U L L )  
         {  
             H A L _ D M A _ A b o r t ( h u s a r t - > h d m a r x ) ;  
         }  
  
         / *   D i s a b l e   t h e   U S A R T   R x   D M A   r e q u e s t   * /  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   t r a n s f e r   ( b l o c k i n g   m o d e ) .  
     *   @ p a r a m     h u s a r t   U S A R T   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   ( e i t h e r   T x   o r   R x ,  
     *                   a s   d e s c r i b e d   b y   T r a n s f e r T y p e   p a r a m e t e r )   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s   ( d e p e n d i n g   o f   t r a n s f e r   d i r e c t i o n )  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   b l o c k i n g   m o d e   :   w h e n   e x i t i n g   f u n c t i o n ,   A b o r t   i s   c o n s i d e r e d   a s   c o m p l e t e d .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ A b o r t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   D i s a b l e   T X E I E ,   T C I E ,   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   U S A R T   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   U S A R T   D M A   T x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f   ( h u s a r t - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   U S A R T   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h u s a r t - > h d m a t x ) ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   U S A R T   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   U S A R T   D M A   R x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f   ( h u s a r t - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   U S A R T   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h u s a r t - > h d m a r x ) ;  
         }  
     }  
  
     / *   R e s e t   T x   a n d   R x   t r a n s f e r   c o u n t e r s   * /  
     h u s a r t - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h u s a r t - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h u s a r t - > S t a t e   t o   R e a d y   * /  
     h u s a r t - > S t a t e     =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
     / *   R e s e t   H a n d l e   E r r o r C o d e   t o   N o   E r r o r   * /  
     h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   t r a n s f e r   ( I n t e r r u p t   m o d e ) .  
     *   @ p a r a m     h u s a r t   U S A R T   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   ( e i t h e r   T x   o r   R x ,  
     *                   a s   d e s c r i b e d   b y   T r a n s f e r T y p e   p a r a m e t e r )   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s   ( d e p e n d i n g   o f   t r a n s f e r   d i r e c t i o n )  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t _ I T   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *                       -   A t   a b o r t   c o m p l e t i o n ,   c a l l   u s e r   a b o r t   c o m p l e t e   c a l l b a c k  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   I n t e r r u p t   m o d e ,   m e a n i n g   t h a t   a b o r t   p r o c e d u r e   c o u l d   b e  
     *                   c o n s i d e r e d   a s   c o m p l e t e d   o n l y   w h e n   u s e r   a b o r t   c o m p l e t e   c a l l b a c k   i s   e x e c u t e d   ( n o t   w h e n   e x i t i n g   f u n c t i o n ) .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ U S A R T _ A b o r t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     u i n t 3 2 _ t   A b o r t C p l t   =   0 x 0 1 U ;  
  
     / *   D i s a b l e   T X E I E ,   T C I E ,   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   I f   D M A   T x   a n d / o r   D M A   R x   H a n d l e s   a r e   a s s o c i a t e d   t o   U S A R T   H a n d l e ,   D M A   A b o r t   c o m p l e t e   c a l l b a c k s   s h o u l d   b e   i n i t i a l i s e d  
           b e f o r e   a n y   c a l l   t o   D M A   A b o r t   f u n c t i o n s   * /  
     / *   D M A   T x   H a n d l e   i s   v a l i d   * /  
     i f   ( h u s a r t - > h d m a t x   ! =   N U L L )  
     {  
         / *   S e t   D M A   A b o r t   C o m p l e t e   c a l l b a c k   i f   U S A R T   D M A   T x   r e q u e s t   i f   e n a b l e d .  
               O t h e r w i s e ,   s e t   i t   t o   N U L L   * /  
         i f   ( H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
         {  
             h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   U S A R T _ D M A T x A b o r t C a l l b a c k ;  
         }  
         e l s e  
         {  
             h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
         }  
     }  
     / *   D M A   R x   H a n d l e   i s   v a l i d   * /  
     i f   ( h u s a r t - > h d m a r x   ! =   N U L L )  
     {  
         / *   S e t   D M A   A b o r t   C o m p l e t e   c a l l b a c k   i f   U S A R T   D M A   R x   r e q u e s t   i f   e n a b l e d .  
               O t h e r w i s e ,   s e t   i t   t o   N U L L   * /  
         i f   ( H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
         {  
             h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   U S A R T _ D M A R x A b o r t C a l l b a c k ;  
         }  
         e l s e  
         {  
             h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   U S A R T   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         / *   D i s a b l e   D M A   T x   a t   U S A R T   l e v e l   * /  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   U S A R T   D M A   T x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f   ( h u s a r t - > h d m a t x   ! =   N U L L )  
         {  
             / *   U S A R T   T x   D M A   A b o r t   c a l l b a c k   h a s   a l r e a d y   b e e n   i n i t i a l i s e d   :  
                   w i l l   l e a d   t o   c a l l   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
  
             / *   A b o r t   D M A   T X   * /  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h u s a r t - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
             }  
             e l s e  
             {  
                 A b o r t C p l t   =   0 x 0 0 U ;  
             }  
         }  
     }  
  
     / *   D i s a b l e   t h e   U S A R T   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   U S A R T   D M A   R x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f   ( h u s a r t - > h d m a r x   ! =   N U L L )  
         {  
             / *   U S A R T   R x   D M A   A b o r t   c a l l b a c k   h a s   a l r e a d y   b e e n   i n i t i a l i s e d   :  
                   w i l l   l e a d   t o   c a l l   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
  
             / *   A b o r t   D M A   R X   * /  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h u s a r t - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
                 A b o r t C p l t   =   0 x 0 1 U ;  
             }  
             e l s e  
             {  
                 A b o r t C p l t   =   0 x 0 0 U ;  
             }  
         }  
     }  
  
     / *   i f   n o   D M A   a b o r t   c o m p l e t e   c a l l b a c k   e x e c u t i o n   i s   r e q u i r e d   = >   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     i f   ( A b o r t C p l t     = =   0 x 0 1 U )  
     {  
         / *   R e s e t   T x   a n d   R x   t r a n s f e r   c o u n t e r s   * /  
         h u s a r t - > T x X f e r C o u n t   =   0 x 0 0 U ;  
         h u s a r t - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   R e s e t   e r r o r C o d e   * /  
         h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
  
         / *   R e s t o r e   h u s a r t - > S t a t e   t o   R e a d y   * /  
         h u s a r t - > S t a t e     =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
         / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   A b o r t   C o m p l e t e   C a l l b a c k   * /  
         h u s a r t - > A b o r t C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   A b o r t   C o m p l e t e   C a l l b a c k   * /  
         H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   U S A R T   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ U S A R T _ I R Q H a n d l e r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     u i n t 3 2 _ t   i s r f l a g s   =   R E A D _ R E G ( h u s a r t - > I n s t a n c e - > S R ) ;  
     u i n t 3 2 _ t   c r 1 i t s       =   R E A D _ R E G ( h u s a r t - > I n s t a n c e - > C R 1 ) ;  
     u i n t 3 2 _ t   c r 3 i t s       =   R E A D _ R E G ( h u s a r t - > I n s t a n c e - > C R 3 ) ;  
     u i n t 3 2 _ t   e r r o r f l a g s   =   0 x 0 0 U ;  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
  
     / *   I f   n o   e r r o r   o c c u r s   * /  
     e r r o r f l a g s   =   ( i s r f l a g s   &   ( u i n t 3 2 _ t ) ( U S A R T _ S R _ P E   |   U S A R T _ S R _ F E   |   U S A R T _ S R _ O R E   |   U S A R T _ S R _ N E ) ) ;  
     i f   ( e r r o r f l a g s   = =   R E S E T )  
     {  
         / *   U S A R T   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ R X N E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T ) )  
         {  
             i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X )  
             {  
                 U S A R T _ R e c e i v e _ I T ( h u s a r t ) ;  
             }  
             e l s e  
             {  
                 U S A R T _ T r a n s m i t R e c e i v e _ I T ( h u s a r t ) ;  
             }  
             r e t u r n ;  
         }  
     }  
     / *   I f   s o m e   e r r o r s   o c c u r   * /  
     i f   ( ( e r r o r f l a g s   ! =   R E S E T )   & &   ( ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T )   | |   ( ( c r 1 i t s   &   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) )   ! =   R E S E T ) ) )  
     {  
         / *   U S A R T   p a r i t y   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ P E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ P E I E )   ! =   R E S E T ) )  
         {  
             h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ P E ;  
         }  
  
         / *   U S A R T   n o i s e   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ N E )   ! =   R E S E T )   & &   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) )  
         {  
             h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ N E ;  
         }  
  
         / *   U S A R T   f r a m e   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ F E )   ! =   R E S E T )   & &   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) )  
         {  
             h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ F E ;  
         }  
  
         / *   U S A R T   O v e r - R u n   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ O R E )   ! =   R E S E T )   & &   ( ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T )   | |   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) ) )  
         {  
             h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ O R E ;  
         }  
  
         i f   ( h u s a r t - > E r r o r C o d e   ! =   H A L _ U S A R T _ E R R O R _ N O N E )  
         {  
             / *   U S A R T   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ R X N E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T ) )  
             {  
                 i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X )  
                 {  
                     U S A R T _ R e c e i v e _ I T ( h u s a r t ) ;  
                 }  
                 e l s e  
                 {  
                     U S A R T _ T r a n s m i t R e c e i v e _ I T ( h u s a r t ) ;  
                 }  
             }  
             / *   I f   O v e r r u n   e r r o r   o c c u r s ,   o r   i f   a n y   e r r o r   o c c u r s   i n   D M A   m o d e   r e c e p t i o n ,  
             c o n s i d e r   e r r o r   a s   b l o c k i n g   * /  
             d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
             i f   ( ( ( h u s a r t - > E r r o r C o d e   &   H A L _ U S A R T _ E R R O R _ O R E )   ! =   R E S E T )   | |   d m a r e q u e s t )  
             {  
                 / *   S e t   t h e   U S A R T   s t a t e   r e a d y   t o   b e   a b l e   t o   s t a r t   a g a i n   t h e   p r o c e s s ,  
                 D i s a b l e   R x   I n t e r r u p t s ,   a n d   d i s a b l e   R x   D M A   r e q u e s t ,   i f   o n g o i n g   * /  
                 U S A R T _ E n d R x T r a n s f e r ( h u s a r t ) ;  
  
                 / *   D i s a b l e   t h e   U S A R T   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
                 i f   ( H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
                 {  
                     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
                     / *   A b o r t   t h e   U S A R T   D M A   R x   c h a n n e l   * /  
                     i f   ( h u s a r t - > h d m a r x   ! =   N U L L )  
                     {  
                         / *   S e t   t h e   U S A R T   D M A   A b o r t   c a l l b a c k   :  
                         w i l l   l e a d   t o   c a l l   H A L _ U S A R T _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                         h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   U S A R T _ D M A A b o r t O n E r r o r ;  
  
                         i f   ( H A L _ D M A _ A b o r t _ I T ( h u s a r t - > h d m a r x )   ! =   H A L _ O K )  
                         {  
                             / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                             h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h u s a r t - > h d m a r x ) ;  
                         }  
                     }  
                     e l s e  
                     {  
                         / *   C a l l   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                         / *   C a l l   r e g i s t e r e d   E r r o r   C a l l b a c k   * /  
                         h u s a r t - > E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
                         / *   C a l l   l e g a c y   w e a k   E r r o r   C a l l b a c k   * /  
                         H A L _ U S A R T _ E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
                     }  
                 }  
                 e l s e  
                 {  
                     / *   C a l l   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                     / *   C a l l   r e g i s t e r e d   E r r o r   C a l l b a c k   * /  
                     h u s a r t - > E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
                     / *   C a l l   l e g a c y   w e a k   E r r o r   C a l l b a c k   * /  
                     H A L _ U S A R T _ E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
                 }  
             }  
             e l s e  
             {  
                 / *   C a l l   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 / *   C a l l   r e g i s t e r e d   E r r o r   C a l l b a c k   * /  
                 h u s a r t - > E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
                 / *   C a l l   l e g a c y   w e a k   E r r o r   C a l l b a c k   * /  
                 H A L _ U S A R T _ E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
                 h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
             }  
         }  
         r e t u r n ;  
     }  
  
     / *   U S A R T   i n   m o d e   T r a n s m i t t e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ T X E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ T X E I E )   ! =   R E S E T ) )  
     {  
         i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X )  
         {  
             U S A R T _ T r a n s m i t _ I T ( h u s a r t ) ;  
         }  
         e l s e  
         {  
             U S A R T _ T r a n s m i t R e c e i v e _ I T ( h u s a r t ) ;  
         }  
         r e t u r n ;  
     }  
  
     / *   U S A R T   i n   m o d e   T r a n s m i t t e r   ( t r a n s m i s s i o n   e n d )   - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ T C )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ T C I E )   ! =   R E S E T ) )  
     {  
         U S A R T _ E n d T r a n s m i t _ I T ( h u s a r t ) ;  
         r e t u r n ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ T x C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ T x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T x   H a l f   T r a n s f e r   c o m p l e t e d   c a l l b a c k s .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k s .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ R x C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ R x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   H a l f   T r a n s f e r   c o m p l e t e d   c a l l b a c k s .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T x / R x   T r a n s f e r s   c o m p l e t e d   c a l l b a c k   f o r   t h e   n o n - b l o c k i n g   p r o c e s s .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ T x R x C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ T x R x C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     U S A R T   e r r o r   c a l l b a c k s .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ E r r o r C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ U S A R T _ E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     U S A R T   A b o r t   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h u s a r t   U S A R T   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h u s a r t ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *     @ b r i e f       U S A R T   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                     # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   r e t u r n   t h e   S t a t e   o f  
         U S A R T   c o m m u n i c a t i o n  
         p r o c e s s ,   r e t u r n   P e r i p h e r a l   E r r o r s   o c c u r r e d   d u r i n g   c o m m u n i c a t i o n   p r o c e s s  
           ( + )   H A L _ U S A R T _ G e t S t a t e ( )   A P I   c a n   b e   h e l p f u l   t o   c h e c k   i n   r u n - t i m e   t h e   s t a t e  
                   o f   t h e   U S A R T   p e r i p h e r a l .  
           ( + )   H A L _ U S A R T _ G e t E r r o r ( )   c h e c k   i n   r u n - t i m e   e r r o r s   t h a t   c o u l d   b e   o c c u r r e d   d u r i n g  
                   c o m m u n i c a t i o n .  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n s   t h e   U S A R T   s t a t e .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ U S A R T _ S t a t e T y p e D e f   H A L _ U S A R T _ G e t S t a t e ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     r e t u r n   h u s a r t - > S t a t e ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   U S A R T   e r r o r   c o d e  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T .  
     *   @ r e t v a l   U S A R T   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ U S A R T _ G e t E r r o r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     r e t u r n   h u s a r t - > E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   U S A R T _ P r i v a t e _ F u n c t i o n s   U S A R T   P r i v a t e   F u n c t i o n s  
   *   @ {  
   * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   c a l l b a c k s   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     h u s a r t   U S A R T   h a n d l e .  
     *   @ r e t v a l   n o n e  
     * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 v o i d   U S A R T _ I n i t C a l l b a c k s T o D e f a u l t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   I n i t   t h e   U S A R T   C a l l b a c k   s e t t i n g s   * /  
     h u s a r t - > T x H a l f C p l t C a l l b a c k                 =   H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k ;                 / *   L e g a c y   w e a k   T x H a l f C p l t C a l l b a c k                 * /  
     h u s a r t - > T x C p l t C a l l b a c k                         =   H A L _ U S A R T _ T x C p l t C a l l b a c k ;                         / *   L e g a c y   w e a k   T x C p l t C a l l b a c k                         * /  
     h u s a r t - > R x H a l f C p l t C a l l b a c k                 =   H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k ;                 / *   L e g a c y   w e a k   R x H a l f C p l t C a l l b a c k                 * /  
     h u s a r t - > R x C p l t C a l l b a c k                         =   H A L _ U S A R T _ R x C p l t C a l l b a c k ;                         / *   L e g a c y   w e a k   R x C p l t C a l l b a c k                         * /  
     h u s a r t - > T x R x C p l t C a l l b a c k                     =   H A L _ U S A R T _ T x R x C p l t C a l l b a c k ;                     / *   L e g a c y   w e a k   T x R x C p l t C a l l b a c k                     * /  
     h u s a r t - > E r r o r C a l l b a c k                           =   H A L _ U S A R T _ E r r o r C a l l b a c k ;                           / *   L e g a c y   w e a k   E r r o r C a l l b a c k                           * /  
     h u s a r t - > A b o r t C p l t C a l l b a c k                   =   H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ;                   / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k                   * /  
 }  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   t r a n s m i t   p r o c e s s   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     / *   D M A   N o r m a l   m o d e   * /  
     i f   ( ( h d m a - > I n s t a n c e - > C C R   &   D M A _ C C R _ C I R C )   = =   0 U )  
     {  
         h u s a r t - > T x X f e r C o u n t   =   0 U ;  
         i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X )  
         {  
             / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   r e s e t t i n g   t h e   D M A T   b i t  
                   i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
             / *   E n a b l e   t h e   U S A R T   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
             S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
         }  
     }  
     / *   D M A   C i r c u l a r   m o d e   * /  
     e l s e  
     {  
         i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X )  
         {  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   T x   C o m p l e t e   C a l l b a c k   * /  
             h u s a r t - > T x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   T x   C o m p l e t e   C a l l b a c k   * /  
             H A L _ U S A R T _ T x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   t r a n s m i t   p r o c e s s   h a l f   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a   P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A T x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   T x   H a l f   C o m p l e t e   C a l l b a c k   * /  
     h u s a r t - > T x H a l f C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   T x   H a l f   C o m p l e t e   C a l l b a c k   * /  
     H A L _ U S A R T _ T x H a l f C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   r e c e i v e   p r o c e s s   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a   P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     / *   D M A   N o r m a l   m o d e   * /  
     i f   ( ( h d m a - > I n s t a n c e - > C C R   &   D M A _ C C R _ C I R C )   = =   0 U )  
     {  
         h u s a r t - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t h e   T r a n s m i t / r e c e i v e r   r e q u e s t   b y   c l e a r i n g   t h e   D M A T / D M A R   b i t  
                   i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
         C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   T h e   U S A R T   s t a t e   i s   H A L _ U S A R T _ S T A T E _ B U S Y _ R X   * /  
         i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X )  
         {  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   R x   C o m p l e t e   C a l l b a c k   * /  
             h u s a r t - > R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   R x   C o m p l e t e   C a l l b a c k   * /  
             H A L _ U S A R T _ R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         / *   T h e   U S A R T   s t a t e   i s   H A L _ U S A R T _ S T A T E _ B U S Y _ T X _ R X   * /  
         e l s e  
         {  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   T x   R x   C o m p l e t e   C a l l b a c k   * /  
             h u s a r t - > T x R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   T x   R x   C o m p l e t e   C a l l b a c k   * /  
             H A L _ U S A R T _ T x R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
     }  
     / *   D M A   c i r c u l a r   m o d e   * /  
     e l s e  
     {  
         i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X )  
         {  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   R x   C o m p l e t e   C a l l b a c k   * /  
             h u s a r t - > R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   R x   C o m p l e t e   C a l l b a c k   * /  
             H A L _ U S A R T _ R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
         / *   T h e   U S A R T   s t a t e   i s   H A L _ U S A R T _ S T A T E _ B U S Y _ T X _ R X   * /  
         e l s e  
         {  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   T x   R x   C o m p l e t e   C a l l b a c k   * /  
             h u s a r t - > T x R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   T x   R x   C o m p l e t e   C a l l b a c k   * /  
             H A L _ U S A R T _ T x R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
         }  
     }  
 }  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   r e c e i v e   p r o c e s s   h a l f   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a   P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A R x H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   R x   H a l f   C o m p l e t e   C a l l b a c k   * /  
     h u s a r t - > R x H a l f C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   R x   H a l f   C o m p l e t e   C a l l b a c k   * /  
     H A L _ U S A R T _ R x H a l f C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   c o m m u n i c a t i o n   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h d m a   P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     h u s a r t - > R x X f e r C o u n t   =   0 x 0 0 U ;  
     h u s a r t - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   S t o p   U S A R T   D M A   T x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     i f   ( ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X )   & &   d m a r e q u e s t )  
     {  
         U S A R T _ E n d T x T r a n s f e r ( h u s a r t ) ;  
     }  
  
     / *   S t o p   U S A R T   D M A   R x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     i f   ( ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X )   & &   d m a r e q u e s t )  
     {  
         U S A R T _ E n d R x T r a n s f e r ( h u s a r t ) ;  
     }  
  
     h u s a r t - > E r r o r C o d e   | =   H A L _ U S A R T _ E R R O R _ D M A ;  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   E r r o r   C a l l b a c k   * /  
     h u s a r t - > E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   E r r o r   C a l l b a c k   * /  
     H A L _ U S A R T _ E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   U S A R T   C o m m u n i c a t i o n   T i m e o u t .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ p a r a m     F l a g   s p e c i f i e s   t h e   U S A R T   f l a g   t o   c h e c k .  
     *   @ p a r a m     S t a t u s   T h e   n e w   F l a g   s t a t u s   ( S E T   o r   R E S E T ) .  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e .  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ W a i t O n F l a g U n t i l T i m e o u t ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i c k s t a r t ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   W a i t   u n t i l   f l a g   i s   s e t   * /  
     w h i l e   ( ( _ _ H A L _ U S A R T _ G E T _ F L A G ( h u s a r t ,   F l a g )   ?   S E T   :   R E S E T )   = =   S t a t u s )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t ) )  
             {  
                 / *   D i s a b l e   t h e   U S A R T   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
                 C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
                 / *   D i s a b l e   t h e   U S A R T   R X N E   I n t e r r u p t   * /  
                 C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
  
                 / *   D i s a b l e   t h e   U S A R T   P a r i t y   E r r o r   I n t e r r u p t   * /  
                 C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
                 / *   D i s a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
                 C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
                 h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h u s a r t ) ;  
  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n d   o n g o i n g   T x   t r a n s f e r   o n   U S A R T   p e r i p h e r a l   ( f o l l o w i n g   e r r o r   d e t e c t i o n   o r   T r a n s m i t   c o m p l e t i o n ) .  
     *   @ p a r a m     h u s a r t   U S A R T   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ E n d T x T r a n s f e r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   D i s a b l e   T X E I E   a n d   T C I E   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
  
     / *   A t   e n d   o f   T x   p r o c e s s ,   r e s t o r e   h u s a r t - > S t a t e   t o   R e a d y   * /  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     E n d   o n g o i n g   R x   t r a n s f e r   o n   U S A R T   p e r i p h e r a l   ( f o l l o w i n g   e r r o r   d e t e c t i o n   o r   R e c e p t i o n   c o m p l e t i o n ) .  
     *   @ p a r a m     h u s a r t   U S A R T   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ E n d R x T r a n s f e r ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   A t   e n d   o f   R x   p r o c e s s ,   r e s t o r e   h u s a r t - > S t a t e   t o   R e a d y   * /  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   H A L   s e r v i c e s   o n   E r r o r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   A b o r t   p r o c e d u r e   f o l l o w i n g   e r r o r   o c c u r r e n c e ) .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A A b o r t O n E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     h u s a r t - > R x X f e r C o u n t   =   0 x 0 0 U ;  
     h u s a r t - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   E r r o r   C a l l b a c k   * /  
     h u s a r t - > E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   E r r o r   C a l l b a c k   * /  
     H A L _ U S A R T _ E r r o r C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   T x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   T x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ) .  
     *   @ n o t e       W h e n   t h i s   c a l l b a c k   i s   e x e c u t e d ,   U s e r   A b o r t   c o m p l e t e   c a l l   b a c k   i s   c a l l e d   o n l y   i f   n o  
     *                   A b o r t   s t i l l   o n g o i n g   f o r   R x   D M A   H a n d l e .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A T x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
     / *   C h e c k   i f   a n   A b o r t   p r o c e s s   i s   s t i l l   o n g o i n g   * /  
     i f   ( h u s a r t - > h d m a r x   ! =   N U L L )  
     {  
         i f   ( h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   ! =   N U L L )  
         {  
             r e t u r n ;  
         }  
     }  
  
     / *   N o   A b o r t   p r o c e s s   s t i l l   o n g o i n g   :   A l l   D M A   c h a n n e l s   a r e   a b o r t e d ,   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     h u s a r t - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h u s a r t - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   e r r o r C o d e   * /  
     h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h u s a r t - > S t a t e   t o   R e a d y   * /  
     h u s a r t - > S t a t e     =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
     / *   C a l l   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   C o m p l e t e   C a l l b a c k   * /  
     h u s a r t - > A b o r t C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   C o m p l e t e   C a l l b a c k   * /  
     H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   U S A R T   R x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   R x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ) .  
     *   @ n o t e       W h e n   t h i s   c a l l b a c k   i s   e x e c u t e d ,   U s e r   A b o r t   c o m p l e t e   c a l l   b a c k   i s   c a l l e d   o n l y   i f   n o  
     *                   A b o r t   s t i l l   o n g o i n g   f o r   T x   D M A   H a n d l e .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ D M A R x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     U S A R T _ H a n d l e T y p e D e f   * h u s a r t   =   ( U S A R T _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     h u s a r t - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
     / *   C h e c k   i f   a n   A b o r t   p r o c e s s   i s   s t i l l   o n g o i n g   * /  
     i f   ( h u s a r t - > h d m a t x   ! =   N U L L )  
     {  
         i f   ( h u s a r t - > h d m a t x - > X f e r A b o r t C a l l b a c k   ! =   N U L L )  
         {  
             r e t u r n ;  
         }  
     }  
  
     / *   N o   A b o r t   p r o c e s s   s t i l l   o n g o i n g   :   A l l   D M A   c h a n n e l s   a r e   a b o r t e d ,   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     h u s a r t - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h u s a r t - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   e r r o r C o d e   * /  
     h u s a r t - > E r r o r C o d e   =   H A L _ U S A R T _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h u s a r t - > S t a t e   t o   R e a d y   * /  
     h u s a r t - > S t a t e     =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
     / *   C a l l   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   C o m p l e t e   C a l l b a c k   * /  
     h u s a r t - > A b o r t C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   C o m p l e t e   C a l l b a c k   * /  
     H A L _ U S A R T _ A b o r t C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f     S i m p l e x   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     *   @ n o t e       T h e   U S A R T   e r r o r s   a r e   n o t   m a n a g e d   t o   a v o i d   t h e   o v e r r u n   e r r o r .  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ T r a n s m i t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     u i n t 1 6 _ t   * t m p ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X )  
     {  
         i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
         {  
             t m p   =   ( u i n t 1 6 _ t   * )   h u s a r t - > p T x B u f f P t r ;  
             h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 1 6 _ t ) ( * t m p   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
             h u s a r t - > p T x B u f f P t r   + =   2 U ;  
         }  
         e l s e  
         {  
             h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 8 _ t ) ( * h u s a r t - > p T x B u f f P t r + +   &   ( u i n t 8 _ t ) 0 x 0 0 F F ) ;  
         }  
  
         i f   ( - - h u s a r t - > T x X f e r C o u n t   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   U S A R T   T r a n s m i t   d a t a   r e g i s t e r   e m p t y   I n t e r r u p t   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
             / *   E n a b l e   t h e   U S A R T   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
             S E T _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
         }  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r a p s   u p   t r a n s m i s s i o n   i n   n o n   b l o c k i n g   m o d e .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ E n d T r a n s m i t _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     / *   D i s a b l e   t h e   U S A R T   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
  
     / *   D i s a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   T x   C o m p l e t e   C a l l b a c k   * /  
     h u s a r t - > T x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   T x   C o m p l e t e   C a l l b a c k   * /  
     H A L _ U S A R T _ T x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     S i m p l e x   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n - b l o c k i n g   m o d e .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     u i n t 8 _ t     * p d a t a 8 b i t s ;  
     u i n t 1 6 _ t   * p d a t a 1 6 b i t s ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ R X )  
     {  
         i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
         {  
             p d a t a 8 b i t s     =   N U L L ;  
             p d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t   * )   h u s a r t - > p R x B u f f P t r ;  
             * p d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
             h u s a r t - > p R x B u f f P t r   + =   2 U ;  
         }  
         e l s e  
         {  
             p d a t a 8 b i t s   =   ( u i n t 8 _ t   * )   h u s a r t - > p R x B u f f P t r ;  
             p d a t a 1 6 b i t s     =   N U L L ;  
  
             i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   | |   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 8 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) ) )  
             {  
                 * p d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 0 F F ) ;  
             }  
             e l s e  
             {  
                 * p d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 0 7 F ) ;  
             }  
  
             h u s a r t - > p R x B u f f P t r   + =   1 U ;  
         }  
  
         h u s a r t - > R x X f e r C o u n t - - ;  
  
         i f   ( h u s a r t - > R x X f e r C o u n t   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   U S A R T   R X N E   I n t e r r u p t   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
  
             / *   D i s a b l e   t h e   U S A R T   P a r i t y   E r r o r   I n t e r r u p t   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
             / *   D i s a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
             h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   R x   C o m p l e t e   C a l l b a c k   * /  
             h u s a r t - > R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   R x   C o m p l e t e   C a l l b a c k   * /  
             H A L _ U S A R T _ R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
             r e t u r n   H A L _ O K ;  
         }  
         e l s e  
         {  
             / *   S e n d   d u m m y   b y t e   i n   o r d e r   t o   g e n e r a t e   t h e   c l o c k   f o r   t h e   s l a v e   t o   s e n d   t h e   n e x t   d a t a .  
             *   W h a t e v e r   t h e   f r a m e   l e n g t h   ( 7 ,   8   o r   9 - b i t   l o n g ) ,   t h e   s a m e   d u m m y   v a l u e  
             *   c a n   b e   w r i t t e n   f o r   a l l   t h e   c a s e s .   * /  
             h u s a r t - > I n s t a n c e - > D R   =   ( D U M M Y _ D A T A   &   ( u i n t 1 6 _ t ) 0 x 0 F F ) ;  
         }  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     F u l l - D u p l e x   S e n d   r e c e i v e   a n   a m o u n t   o f   d a t a   i n   f u l l - d u p l e x   m o d e   ( n o n - b l o c k i n g ) .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   U S A R T _ T r a n s m i t R e c e i v e _ I T ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     u i n t 8 _ t     * p d a t a 8 b i t s ;  
     u i n t 1 6 _ t   * p d a t a 1 6 b i t s ;  
  
     i f   ( h u s a r t - > S t a t e   = =   H A L _ U S A R T _ S T A T E _ B U S Y _ T X _ R X )  
     {  
         i f   ( h u s a r t - > T x X f e r C o u n t   ! =   0 x 0 0 U )  
         {  
             i f   ( _ _ H A L _ U S A R T _ G E T _ F L A G ( h u s a r t ,   U S A R T _ F L A G _ T X E )   ! =   R E S E T )  
             {  
                 i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
                 {  
                     p d a t a 8 b i t s     =   N U L L ;  
                     p d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t   * )   h u s a r t - > p T x B u f f P t r ;  
                     h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 1 6 _ t ) ( * p d a t a 1 6 b i t s   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                     h u s a r t - > p T x B u f f P t r   + =   2 U ;  
                 }  
                 e l s e  
                 {  
                     h u s a r t - > I n s t a n c e - > D R   =   ( u i n t 8 _ t ) ( * h u s a r t - > p T x B u f f P t r + +   &   ( u i n t 8 _ t ) 0 x 0 0 F F ) ;  
                 }  
  
                 h u s a r t - > T x X f e r C o u n t - - ;  
  
                 / *   C h e c k   t h e   l a t e s t   d a t a   t r a n s m i t t e d   * /  
                 i f   ( h u s a r t - > T x X f e r C o u n t   = =   0 U )  
                 {  
                     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
                 }  
             }  
         }  
  
         i f   ( h u s a r t - > R x X f e r C o u n t   ! =   0 x 0 0 U )  
         {  
             i f   ( _ _ H A L _ U S A R T _ G E T _ F L A G ( h u s a r t ,   U S A R T _ F L A G _ R X N E )   ! =   R E S E T )  
             {  
                 i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) )  
                 {  
                       p d a t a 8 b i t s     =   N U L L ;  
                       p d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t   * )   h u s a r t - > p R x B u f f P t r ;  
                       * p d a t a 1 6 b i t s   =   ( u i n t 1 6 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                       h u s a r t - > p R x B u f f P t r   + =   2 U ;  
                 }  
                 e l s e  
                 {  
                     p d a t a 8 b i t s   =   ( u i n t 8 _ t   * )   h u s a r t - > p R x B u f f P t r ;  
                     p d a t a 1 6 b i t s     =   N U L L ;  
                     i f   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 9 B )   | |   ( ( h u s a r t - > I n i t . W o r d L e n g t h   = =   U S A R T _ W O R D L E N G T H _ 8 B )   & &   ( h u s a r t - > I n i t . P a r i t y   = =   U S A R T _ P A R I T Y _ N O N E ) ) )  
                     {  
                         * p d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 0 F F ) ;  
                     }  
                     e l s e  
                     {  
                         * p d a t a 8 b i t s   =   ( u i n t 8 _ t ) ( h u s a r t - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 0 7 F ) ;  
                     }  
                     h u s a r t - > p R x B u f f P t r   + =   1 U ;  
                 }  
  
                 h u s a r t - > R x X f e r C o u n t - - ;  
             }  
         }  
  
         / *   C h e c k   t h e   l a t e s t   d a t a   r e c e i v e d   * /  
         i f   ( h u s a r t - > R x X f e r C o u n t   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   U S A R T   R X N E   I n t e r r u p t   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
  
             / *   D i s a b l e   t h e   U S A R T   P a r i t y   E r r o r   I n t e r r u p t   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
             / *   D i s a b l e   t h e   U S A R T   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
             C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
             h u s a r t - > S t a t e   =   H A L _ U S A R T _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   T x   R x   C o m p l e t e   C a l l b a c k   * /  
             h u s a r t - > T x R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   T x   R x   C o m p l e t e   C a l l b a c k   * /  
             H A L _ U S A R T _ T x R x C p l t C a l l b a c k ( h u s a r t ) ;  
 # e n d i f   / *   U S E _ H A L _ U S A R T _ R E G I S T E R _ C A L L B A C K S   * /  
  
             r e t u r n   H A L _ O K ;  
         }  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   U S A R T   p e r i p h e r a l .  
     *   @ p a r a m     h u s a r t   P o i n t e r   t o   a   U S A R T _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   U S A R T _ S e t C o n f i g ( U S A R T _ H a n d l e T y p e D e f   * h u s a r t )  
 {  
     u i n t 3 2 _ t   t m p r e g   =   0 x 0 0 U ;  
     u i n t 3 2 _ t   p c l k ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ U S A R T _ I N S T A N C E ( h u s a r t - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ P O L A R I T Y ( h u s a r t - > I n i t . C L K P o l a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ P H A S E ( h u s a r t - > I n i t . C L K P h a s e ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ L A S T B I T ( h u s a r t - > I n i t . C L K L a s t B i t ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ B A U D R A T E ( h u s a r t - > I n i t . B a u d R a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ W O R D _ L E N G T H ( h u s a r t - > I n i t . W o r d L e n g t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ S T O P B I T S ( h u s a r t - > I n i t . S t o p B i t s ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ P A R I T Y ( h u s a r t - > I n i t . P a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ U S A R T _ M O D E ( h u s a r t - > I n i t . M o d e ) ) ;  
  
     / *   T h e   L B C L ,   C P O L   a n d   C P H A   b i t s   h a v e   t o   b e   s e l e c t e d   w h e n   b o t h   t h e   t r a n s m i t t e r   a n d   t h e  
           r e c e i v e r   a r e   d i s a b l e d   ( T E = R E = 0 )   t o   e n s u r e   t h a t   t h e   c l o c k   p u l s e s   f u n c t i o n   c o r r e c t l y .   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T E   |   U S A R T _ C R 1 _ R E ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - * /  
     t m p r e g   =   h u s a r t - > I n s t a n c e - > C R 2 ;  
     / *   C l e a r   C L K E N ,   C P O L ,   C P H A   a n d   L B C L   b i t s   * /  
     t m p r e g   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 2 _ C P H A   |   U S A R T _ C R 2 _ C P O L   |   U S A R T _ C R 2 _ C L K E N   |   U S A R T _ C R 2 _ L B C L   |   U S A R T _ C R 2 _ S T O P ) ) ;  
     / *   C o n f i g u r e   t h e   U S A R T   C l o c k ,   C P O L ,   C P H A   a n d   L a s t B i t   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   S e t   C P O L   b i t   a c c o r d i n g   t o   h u s a r t - > I n i t . C L K P o l a r i t y   v a l u e   * /  
     / *   S e t   C P H A   b i t   a c c o r d i n g   t o   h u s a r t - > I n i t . C L K P h a s e   v a l u e   * /  
     / *   S e t   L B C L   b i t   a c c o r d i n g   t o   h u s a r t - > I n i t . C L K L a s t B i t   v a l u e   * /  
     / *   S e t   S t o p   B i t s :   S e t   S T O P [ 1 3 : 1 2 ]   b i t s   a c c o r d i n g   t o   h u s a r t - > I n i t . S t o p B i t s   v a l u e   * /  
     t m p r e g   | =   ( u i n t 3 2 _ t ) ( U S A R T _ C L O C K _ E N A B L E   |   h u s a r t - > I n i t . C L K P o l a r i t y   |  
                                               h u s a r t - > I n i t . C L K P h a s e   |   h u s a r t - > I n i t . C L K L a s t B i t   |   h u s a r t - > I n i t . S t o p B i t s ) ;  
     / *   W r i t e   t o   U S A R T   C R 2   * /  
     W R I T E _ R E G ( h u s a r t - > I n s t a n c e - > C R 2 ,   ( u i n t 3 2 _ t ) t m p r e g ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 1   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     t m p r e g   =   h u s a r t - > I n s t a n c e - > C R 1 ;  
  
     / *   C l e a r   M ,   P C E ,   P S ,   T E   a n d   R E   b i t s   * /  
     t m p r e g   & =   ( u i n t 3 2 _ t ) ~ ( ( u i n t 3 2 _ t ) ( U S A R T _ C R 1 _ M   |   U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S   |   U S A R T _ C R 1 _ T E   |   U S A R T _ C R 1 _ R E ) ) ;  
  
     / *   C o n f i g u r e   t h e   U S A R T   W o r d   L e n g t h ,   P a r i t y   a n d   m o d e :  
           S e t   t h e   M   b i t s   a c c o r d i n g   t o   h u s a r t - > I n i t . W o r d L e n g t h   v a l u e  
           S e t   P C E   a n d   P S   b i t s   a c c o r d i n g   t o   h u s a r t - > I n i t . P a r i t y   v a l u e  
           S e t   T E   a n d   R E   b i t s   a c c o r d i n g   t o   h u s a r t - > I n i t . M o d e   v a l u e  
       * /  
     t m p r e g   | =   ( u i n t 3 2 _ t ) h u s a r t - > I n i t . W o r d L e n g t h   |   h u s a r t - > I n i t . P a r i t y   |   h u s a r t - > I n i t . M o d e ;  
  
     / *   W r i t e   t o   U S A R T   C R 1   * /  
     W R I T E _ R E G ( h u s a r t - > I n s t a n c e - > C R 1 ,   ( u i n t 3 2 _ t ) t m p r e g ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 3   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C l e a r   C T S E   a n d   R T S E   b i t s   * /  
     C L E A R _ B I T ( h u s a r t - > I n s t a n c e - > C R 3 ,   ( U S A R T _ C R 3 _ R T S E   |   U S A R T _ C R 3 _ C T S E ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   B R R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f ( ( h u s a r t - > I n s t a n c e   = =   U S A R T 1 ) )  
     {  
         p c l k   =   H A L _ R C C _ G e t P C L K 2 F r e q ( ) ;  
         h u s a r t - > I n s t a n c e - > B R R   =   U S A R T _ B R R ( p c l k ,   h u s a r t - > I n i t . B a u d R a t e ) ;  
     }  
     e l s e  
     {  
         p c l k   =   H A L _ R C C _ G e t P C L K 1 F r e q ( ) ;  
         h u s a r t - > I n s t a n c e - > B R R   =   U S A R T _ B R R ( p c l k ,   h u s a r t - > I n i t . B a u d R a t e ) ;  
     }  
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
 # e n d i f   / *   H A L _ U S A R T _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  